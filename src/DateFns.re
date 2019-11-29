open ReasonDateFnsCurryHelpers;

type date = Js.Date.t;

type locale;

module Locales = {
  [@bs.module] external af: locale = "date-fns/locale/af";
  [@bs.module] external arDZ: locale = "date-fns/locale/ar-DZ";
  [@bs.module] external arSA: locale = "date-fns/locale/ar-SA";
  [@bs.module] external be: locale = "date-fns/locale/be";
  [@bs.module] external bg: locale = "date-fns/locale/bg";
  [@bs.module] external bn: locale = "date-fns/locale/bn";
  [@bs.module] external ca: locale = "date-fns/locale/ca";
  [@bs.module] external cs: locale = "date-fns/locale/cs";
  [@bs.module] external cy: locale = "date-fns/locale/cy";
  [@bs.module] external de: locale = "date-fns/locale/de";
  [@bs.module] external el: locale = "date-fns/locale/el";
  [@bs.module] external eo: locale = "date-fns/locale/eo";
  [@bs.module] external en: locale = "date-fns/locale/en";
  [@bs.module] external enUS: locale = "date-fns/locale/en-US";
  [@bs.module] external enGB: locale = "date-fns/locale/en-GB";
  [@bs.module] external enCA: locale = "date-fns/locale/en-CA";
  [@bs.module] external es: locale = "date-fns/locale/es";
  [@bs.module] external et: locale = "date-fns/locale/et";
  [@bs.module] external faIR: locale = "date-fns/locale/fa-IR";
  [@bs.module] external fi: locale = "date-fns/locale/fi";
  [@bs.module] external fil: locale = "date-fns/locale/fil";
  [@bs.module] external fr: locale = "date-fns/locale/fr";
  [@bs.module] external gl: locale = "date-fns/locale/gl";
  [@bs.module] external he: locale = "date-fns/locale/he";
  [@bs.module] external hr: locale = "date-fns/locale/hr";
  [@bs.module] external hu: locale = "date-fns/locale/hu";
  [@bs.module] external id: locale = "date-fns/locale/id";
  [@bs.module] external is: locale = "date-fns/locale/is";
  [@bs.module] external it: locale = "date-fns/locale/it";
  [@bs.module] external ja: locale = "date-fns/locale/ja";
  [@bs.module] external ka: locale = "date-fns/locale/ka";
  [@bs.module] external ko: locale = "date-fns/locale/ko";
  [@bs.module] external lt: locale = "date-fns/locale/lt";
  [@bs.module] external lv: locale = "date-fns/locale/lv";
  [@bs.module] external mk: locale = "date-fns/locale/mk";
  [@bs.module] external ms: locale = "date-fns/locale/ms";
  [@bs.module] external nl: locale = "date-fns/locale/nl";
  [@bs.module] external pl: locale = "date-fns/locale/pl";
  [@bs.module] external ptBr: locale = "date-fns/locale/pt-Br";
  [@bs.module] external pt: locale = "date-fns/locale/pt";
  [@bs.module] external ro: locale = "date-fns/locale/ro";
  [@bs.module] external ru: locale = "date-fns/locale/ru";
  [@bs.module] external sk: locale = "date-fns/locale/sk";
  [@bs.module] external sl: locale = "date-fns/locale/sl";
  [@bs.module] external sr: locale = "date-fns/locale/sr";
  [@bs.module] external sv: locale = "date-fns/locale/sv";
  [@bs.module] external th: locale = "date-fns/locale/th";
  [@bs.module] external tr: locale = "date-fns/locale/tr";
  [@bs.module] external ug: locale = "date-fns/locale/ug";
  [@bs.module] external uk: locale = "date-fns/locale/uk";
  [@bs.module] external vi: locale = "date-fns/locale/vi";
  [@bs.module] external zhCN: locale = "date-fns/locale/zh-CN";
  [@bs.module] external zhTW: locale = "date-fns/locale/zh-TW";
};

/******************/
/* Common helpers */
/******************/

[@bs.module]
external uncurried_closestIndexTo: (. array(date)) => (. date) => int =
  "date-fns/fp/closestIndexTo";

let closestIndexTo = curry2(uncurried_closestIndexTo);

[@bs.deriving abstract]
type formatOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  weekStartsOn: int,
  [@bs.optional]
  firstWeekContainsDate: int,
};

[@bs.module]
external uncurried_formatWithOptions: (. formatOptions) => (. string) => (. date) => string =
  "date-fns/fp/formatWithOptions";

let formatWithOptions = curry3(uncurried_formatWithOptions);

[@bs.module] external uncurried_format: (. string) => (. date) => string = "date-fns/fp/format";
let format = curry2(uncurried_format);

[@bs.module]
external uncurried_closestTo: (. array(date)) => (. date) => date = "date-fns/fp/closestTo";
let closestTo = curry2(uncurried_closestTo);

[@bs.module] external uncurried_compareAsc: (. date) => (. date) => int = "date-fns/fp/compareAsc";
let compareAsc = curry2(uncurried_compareAsc);

[@bs.module]
external uncurried_compareDesc: (. date) => (. date) => int = "date-fns/fp/compareDesc";
let compareDesc = curry2(uncurried_compareDesc);

[@bs.module]
external uncurried_formatDistance: (. date) => (. date) => string = "date-fns/fp/formatDistance";
let formatDistance = curry2(uncurried_formatDistance);

[@bs.deriving abstract]
type formatDistanceOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  addSuffix: bool,
  [@bs.optional]
  includeSeconds: bool,
};

[@bs.module "date-fns/fp/formatDistanceWithOptions"]
external uncurried_formatDistanceWithOptions:
  (. formatDistanceOptions) => (. date) => (. date) => string =
  "default";
let formatDistanceWithOptions = curry3(uncurried_formatDistanceWithOptions);

[@bs.module]
external formatDistanceStrict: (. date) => (. date) => string = "date-fns/fp/formatDistanceStrict";
let formatDistanceStrict = curry2(formatDistanceStrict);

[@bs.deriving abstract]
type formatDistanceStrictOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  roundingMethod: [ | `floor | `ceil | `round],
  [@bs.optional]
  unit: [ | `second | `minute | `hour | `day | `month | `year],
  [@bs.optional]
  addSuffix: bool,
};

[@bs.module "date-fns/fp/formatDistanceStrictWithOptions"]
external uncurried_formatDistanceStrictWithOptions:
  (. formatDistanceStrictOptions) => (. date) => (. date) => string =
  "default";
let formatDistanceStrictWithOptions = curry2(uncurried_formatDistanceStrictWithOptions);

[@bs.module]
external uncurried_formatRelative: (. date) => (. date) => string = "date-fns/fp/formatRelative";
let formatRelative = curry2(uncurried_formatRelative);

[@bs.module] external uncurried_isAfter: (. date) => (. date) => bool = "date-fns/fp/isAfter";
let isAfter = curry2(uncurried_isAfter);

[@bs.module] external uncurried_isBefore: (. date) => (. date) => bool = "date-fns/fp/isBefore";
let isBefore = curry2(uncurried_isBefore);

[@bs.module] external isDate: date => bool = "date-fns/fp/isDate";

[@bs.module] external isVaid: date => bool = "date-fns/fp/isValid";

[@bs.module] external uncurried_isEqual: (. date) => (. date) => bool = "date-fns/fp/isEqual";
let isEqual = curry2(uncurried_isEqual);

[@bs.module]
external uncurried_lightFormat: (. string) => (. date) => string = "date-fns/fp/lightFormat";
let lightFormat = curry2(uncurried_lightFormat);

[@bs.module] external max: array(date) => date = "date-fns/fp/max";

[@bs.module] external min: array(date) => date = "date-fns/fp/min";

[@bs.module]
external uncurried_parse: (. date) => (. string) => (. string) => date = "date-fns/fp/parse";
let parse = curry3(uncurried_parse);

[@bs.module] external parseISO: string => date = "date-fns/fp/parseISO";

[@bs.module] external toDate: int => date = "date-fns/fp/toDate";

/***************/
/* Day helpers */
/***************/

[@bs.module]
external uncurried_addBusinessDays: (. int) => (. date) => date = "date-fns/fp/addBusinessDays";
let addBusinessDays = curry2(uncurried_addBusinessDays);

[@bs.module] external uncurried_addDays: (. int) => (. date) => date = "date-fns/fp/addDays";
let addDays = curry2(uncurried_addDays);

[@bs.module]
external uncurried_differenceInBusinessDays: (. date) => (. date) => int =
  "date-fns/fp/differenceInBusinessDays";
let differenceInBusinessDays = curry2(uncurried_differenceInBusinessDays);

[@bs.module]
external uncurried_differenceInCalendarDays: (. date) => (. date) => int =
  "date-fns/fp/differenceInCalendarDays";
let differenceInCalendarDays = curry2(uncurried_differenceInCalendarDays);

[@bs.module]
external uncurried_differenceInDays: (. date) => (. date) => int = "date-fns/fp/differenceInDays";
let differenceInDays = curry2(uncurried_differenceInDays);

[@bs.module] external endOfDay: date => date = "date-fns/fp/endOfDay";
[@bs.module] external startOfDay: date => date = "date-fns/fp/startOfDay";
[@bs.module] external getDate: date => int = "date-fns/fp/getDate";
[@bs.module] external getDayOfYear: date => int = "date-fns/fp/getDayOfYear";

[@bs.module] external uncurried_isSameDay: (. date) => (. date) => bool = "date-fns/fp/isSameDay";
let isSameDay = curry2(uncurried_isSameDay);

[@bs.module]
external uncurried_setDayOfYear: (. int) => (. date) => date = "date-fns/fp/setDayOfYear";
let setDayOfYear = curry2(uncurried_setDayOfYear);

[@bs.module] external uncurried_subDays: (. int) => (. date) => date = "date-fns/fp/subDays";
let subDays = curry2(uncurried_subDays);

/***************/
/* Milliseconds helpers */
/***************/

[@bs.module]
external uncurried_addMilliseconds: (. int) => (. date) => date = "date-fns/fp/addMilliseconds";
let addMilliseconds = curry2(uncurried_addMilliseconds);

[@bs.module]
external uncurried_differenceInMilliseconds: (. date) => (. date) => int =
  "date-fns/fp/differenceInMilliseconds";
let differenceInMilliseconds = curry2(uncurried_differenceInMilliseconds);

[@bs.module] external getMilliseconds: date => int = "date-fns/fp/getMilliseconds";

[@bs.module]
external uncurried_setMilliseconds: (. int) => (. date) => date = "date-fns/fp/setMilliseconds";
let setMilliseconds = curry2(uncurried_setMilliseconds);

[@bs.module]
external uncurried_subMilliseconds: (. int) => (. date) => date = "date-fns/fp/subMilliseconds";
let subMilliseconds = curry2(uncurried_subMilliseconds);

/***************/
/* Seconds helpers */
/***************/

[@bs.module]
external uncurried_addSeconds: (. float) => (. date) => date = "date-fns/fp/addSeconds";
let addSeconds = curry2(uncurried_addSeconds);

[@bs.module]
external uncurried_differenceInSeconds: (. date) => (. date) => float =
  "date-fns/fp/differenceInSeconds";
let differenceInSeconds = curry2(uncurried_differenceInSeconds);

[@bs.module] external endOfSecond: date => date = "date-fns/fp/endOfSecond";

[@bs.module] external startOfSecond: date => date = "date-fns/fp/startOfSecond";

[@bs.module] external getSeconds: date => float = "date-fns/fp/getSeconds";

[@bs.module]
external uncurried_setSeconds: (. float) => (. date) => date = "date-fns/fp/setSeconds";
let setSeconds = curry2(uncurried_setSeconds);

[@bs.module]
external uncurried_isSameSecond: (. date) => (. date) => bool = "date-fns/fp/isSameSecond";
let isSameSecond = curry2(uncurried_isSameSecond);

[@bs.module]
external uncurried_subSeconds: (. float) => (. date) => date = "date-fns/fp/subSeconds";
let subSeconds = curry2(uncurried_subSeconds);

/***************/
/* Minute helpers */
/***************/

[@bs.module]
external uncurried_addMinutes: (. float) => (. date) => date = "date-fns/fp/addMinutes";
let addMinutes = curry2(uncurried_addMinutes);

[@bs.module]
external uncurried_differenceInMinutes: (. date) => (. date) => float =
  "date-fns/fp/differenceInMinutes";
let differenceInMinutes = curry2(uncurried_differenceInMinutes);

[@bs.module] external endOfMinute: date => date = "date-fns/fp/endOfMinute";

[@bs.module] external startOfMinute: date => date = "date-fns/fp/startOfMinute";

[@bs.module] external getMinutes: date => float = "date-fns/fp/getMinutes";

[@bs.module]
external uncurried_setMinutes: (. float) => (. date) => date = "date-fns/fp/setMinutes";
let setMinutes = curry2(uncurried_setMinutes);

[@bs.module]
external uncurried_isSameMinute: (. date) => (. date) => bool = "date-fns/fp/isSameMinute";
let isSameMinute = curry2(uncurried_isSameMinute);

[@bs.module]
external uncurried_subMinutes: (. float) => (. date) => date = "date-fns/fp/subMinutes";
let subMinutes = curry2(uncurried_subMinutes);

[@bs.module] external roundToNearestMinutes: date => float = "date-fns/fp/roundToNearestMinutes";

/***************/
/* Hour helpers */
/***************/

[@bs.module] external uncurried_addHours: (. float) => (. date) => date = "date-fns/fp/addHours";
let addHours = curry2(uncurried_addHours);

[@bs.module]
external uncurried_differenceInHours: (. date) => (. date) => float =
  "date-fns/fp/differenceInHours";
let differenceInHours = curry2(uncurried_differenceInHours);

[@bs.module] external endOfHour: date => date = "date-fns/fp/endOfHour";

[@bs.module] external startOfHour: date => date = "date-fns/fp/startOfHour";

[@bs.module] external getHours: date => float = "date-fns/fp/getHours";

[@bs.module] external uncurried_setHours: (. float) => (. date) => date = "date-fns/fp/setHours";
let setHours = curry2(uncurried_setHours);

[@bs.module]
external uncurried_isSameHour: (. date) => (. date) => bool = "date-fns/fp/isSameHour";
let isSameHour = curry2(uncurried_isSameHour);

[@bs.module] external uncurried_subHours: (. float) => (. date) => date = "date-fns/fp/subHours";
let subHours = curry2(uncurried_subHours);

/***************/
/* Weekday helpers */
/***************/

[@bs.module] external getDay: date => int = "date-fns/fp/getDay";

[@bs.module] external getISODay: date => int = "date-fns/fp/getISODay";

[@bs.module] external isMonday: date => bool = "date-fns/fp/isMonday";

[@bs.module] external isSaturday: date => bool = "date-fns/fp/isSaturday";

[@bs.module] external isSunday: date => bool = "date-fns/fp/isSunday";

[@bs.module] external isThursday: date => bool = "date-fns/fp/isThursday";

[@bs.module] external isTuesday: date => bool = "date-fns/fp/isTuesday";

[@bs.module] external isWednesday: date => bool = "date-fns/fp/isWednesday";

[@bs.module] external isWeekend: date => bool = "date-fns/fp/isWeekend";

[@bs.module] external uncurried_setDay: (. date) => (. date) => date = "date-fns/fp/setDay";
let setDay = curry2(uncurried_setDay);

[@bs.deriving abstract]
type setDayOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  weekStartsOn: int,
};

[@bs.module "date-fns/fp/setDayWithOptions"]
external uncurried_setDayWithOptions: (. setDayOptions) => (. date) => (. date) => date =
  "setDayWithOptions";
let setDayWithOptions = curry2(uncurried_setDayWithOptions);

[@bs.module] external uncurried_setISODay: (. date) => (. date) => date = "date-fns/fp/setISODay";
let setISODay = curry2(uncurried_setISODay);

/***************/
/* Week helpers */
/***************/

[@bs.module] external uncurried_addWeeks: (. float) => (. date) => date = "date-fns/fp/addWeeks";
let addWeeks = curry2(uncurried_addWeeks);

[@bs.module]
external uncurried_differenceInWeeks: (. date) => (. date) => float =
  "date-fns/fp/differenceInWeeks";
let differenceInWeeks = curry2(uncurried_differenceInWeeks);

[@bs.module] external endOfWeek: date => date = "date-fns/fp/endOfWeek";

[@bs.module] external startOfWeek: date => date = "date-fns/fp/startOfWeek";

[@bs.module] external getWeek: date => float = "date-fns/fp/getWeek";

[@bs.module] external uncurried_setWeek: (. float) => (. date) => date = "date-fns/fp/setWeek";
let setWeek = curry2(uncurried_setWeek);

[@bs.module]
external uncurried_isSameWeek: (. date) => (. date) => bool = "date-fns/fp/isSameWeek";
let isSameWeek = curry2(uncurried_isSameWeek);

[@bs.module] external uncurried_subWeeks: (. float) => (. date) => date = "date-fns/fp/subWeeks";
let subWeeks = curry2(uncurried_subWeeks);

[@bs.module] external getWeeksInMonth: date => int = "date-fns/fp/getWeeksInMonth";

[@bs.module] external getWeekOfMonth: date => int = "date-fns/fp/getWeekOfMonth";

/***************/
/* Month helpers */
/***************/

[@bs.module] external uncurried_addMonths: (. float) => (. date) => date = "date-fns/fp/addMonths";
let addMonths = curry2(uncurried_addMonths);

[@bs.module]
external uncurried_differenceInMonths: (. date) => (. date) => float =
  "date-fns/fp/differenceInMonths";
let differenceInMonths = curry2(uncurried_differenceInMonths);

[@bs.module]
external uncurried_differenceInCalendarMonths: (. date) => (. date) => float =
  "date-fns/fp/differenceInCalendarMonths";
let differenceInCalendarMonths = curry2(uncurried_differenceInCalendarMonths);

[@bs.module] external eachWeekendOfMonth: date => array(date) = "date-fns/fp/eachWeekendOfMonth";

[@bs.module] external getDaysInMonth: date => int = "date-fns/fp/getDaysInMonth";

[@bs.module] external endOfMonth: date => date = "date-fns/fp/endOfMonth";

[@bs.module] external startOfMonth: date => date = "date-fns/fp/startOfMonth";

[@bs.module] external getMonth: date => float = "date-fns/fp/getMonth";

[@bs.module] external uncurried_setMonth: (. float) => (. date) => date = "date-fns/fp/setMonth";
let setMonth = curry2(uncurried_setMonth);

[@bs.module]
external uncurried_isSameMonth: (. date) => (. date) => bool = "date-fns/fp/isSameMonth";
let isSameMonth = curry2(uncurried_isSameMonth);

[@bs.module] external uncurried_subMonths: (. float) => (. date) => date = "date-fns/fp/subMonths";
let subMonths = curry2(uncurried_subMonths);

[@bs.module]
external uncurried_isFirstDayOfMonth: (. date) => (. date) => bool =
  "date-fns/fp/isFirstDayOfMonth";
let isFirstDayOfMonth = curry2(uncurried_isFirstDayOfMonth);

[@bs.module]
external uncurried_isLastDayOfMonth: (. date) => (. date) => bool = "date-fns/fp/isLastDayOfMonth";
let isLastDayOfMonth = curry2(uncurried_isLastDayOfMonth);

/***************/
/* Year helpers */
/***************/

[@bs.module] external uncurried_addYears: (. float) => (. date) => date = "date-fns/fp/addYears";
let addYears = curry2(uncurried_addYears);

[@bs.module]
external uncurried_differenceInYears: (. date) => (. date) => float =
  "date-fns/fp/differenceInYears";
let differenceInYears = curry2(uncurried_differenceInYears);

[@bs.module]
external uncurried_differenceInCalendarYears: (. date) => (. date) => float =
  "date-fns/fp/differenceInCalendarYears";
let differenceInCalendarYears = curry2(uncurried_differenceInCalendarYears);

[@bs.module] external eachWeekendOfYear: date => array(date) = "date-fns/fp/eachWeekendOfYear";

[@bs.module] external getDaysInYear: date => int = "date-fns/fp/getDaysInYear";

[@bs.module] external endOfYear: date => date = "date-fns/fp/endOfYear";

[@bs.module] external startOfYear: date => date = "date-fns/fp/startOfYear";

[@bs.module] external getYear: date => float = "date-fns/fp/getYear";

[@bs.module] external uncurried_setYear: (. float) => (. date) => date = "date-fns/fp/setYear";
let setYear = curry2(uncurried_setYear);

[@bs.module]
external uncurried_isSameYear: (. date) => (. date) => bool = "date-fns/fp/isSameYear";
let isSameYear = curry2(uncurried_isSameYear);

[@bs.module] external uncurried_subYears: (. float) => (. date) => date = "date-fns/fp/subYears";
let subYears = curry2(uncurried_subYears);

[@bs.module] external uncurried_lastDayOfYear: date => date = "date-fns/fp/lastDayOfYear";

[@bs.module] external uncurried_isLeapYear: date => bool = "date-fns/fp/isLeapYear";