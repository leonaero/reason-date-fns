open ReasonDateFnsCurryHelpers;

type date = Js.Date.t;

type locale;

module Locales = {
  [@bs.module "date-fns/locale/af"] external af: locale = "default";
  [@bs.module "date-fns/locale/ar-DZ"] external arDZ: locale = "default";
  [@bs.module "date-fns/locale/ar-SA"] external arSA: locale = "default";
  [@bs.module "date-fns/locale/be"] external be: locale = "default";
  [@bs.module "date-fns/locale/bg"] external bg: locale = "default";
  [@bs.module "date-fns/locale/bn"] external bn: locale = "default";
  [@bs.module "date-fns/locale/ca"] external ca: locale = "default";
  [@bs.module "date-fns/locale/cs"] external cs: locale = "default";
  [@bs.module "date-fns/locale/cy"] external cy: locale = "default";
  [@bs.module "date-fns/locale/de"] external de: locale = "default";
  [@bs.module "date-fns/locale/el"] external el: locale = "default";
  [@bs.module "date-fns/locale/eo"] external eo: locale = "default";
  [@bs.module "date-fns/locale/en"] external en: locale = "default";
  [@bs.module "date-fns/locale/en-US"] external enUS: locale = "default";
  [@bs.module "date-fns/locale/en-GB"] external enGB: locale = "default";
  [@bs.module "date-fns/locale/en-CA"] external enCA: locale = "default";
  [@bs.module "date-fns/locale/es"] external es: locale = "default";
  [@bs.module "date-fns/locale/et"] external et: locale = "default";
  [@bs.module "date-fns/locale/fa-IR"] external faIR: locale = "default";
  [@bs.module "date-fns/locale/fi"] external fi: locale = "default";
  [@bs.module "date-fns/locale/fil"] external fil: locale = "default";
  [@bs.module "date-fns/locale/fr"] external fr: locale = "default";
  [@bs.module "date-fns/locale/gl"] external gl: locale = "default";
  [@bs.module "date-fns/locale/he"] external he: locale = "default";
  [@bs.module "date-fns/locale/hr"] external hr: locale = "default";
  [@bs.module "date-fns/locale/hu"] external hu: locale = "default";
  [@bs.module "date-fns/locale/id"] external id: locale = "default";
  [@bs.module "date-fns/locale/is"] external is: locale = "default";
  [@bs.module "date-fns/locale/it"] external it: locale = "default";
  [@bs.module "date-fns/locale/ja"] external ja: locale = "default";
  [@bs.module "date-fns/locale/ka"] external ka: locale = "default";
  [@bs.module "date-fns/locale/ko"] external ko: locale = "default";
  [@bs.module "date-fns/locale/lt"] external lt: locale = "default";
  [@bs.module "date-fns/locale/lv"] external lv: locale = "default";
  [@bs.module "date-fns/locale/mk"] external mk: locale = "default";
  [@bs.module "date-fns/locale/ms"] external ms: locale = "default";
  [@bs.module "date-fns/locale/nl"] external nl: locale = "default";
  [@bs.module "date-fns/locale/pl"] external pl: locale = "default";
  [@bs.module "date-fns/locale/pt-Br"] external ptBr: locale = "default";
  [@bs.module "date-fns/locale/pt"] external pt: locale = "default";
  [@bs.module "date-fns/locale/ro"] external ro: locale = "default";
  [@bs.module "date-fns/locale/ru"] external ru: locale = "default";
  [@bs.module "date-fns/locale/sk"] external sk: locale = "default";
  [@bs.module "date-fns/locale/sl"] external sl: locale = "default";
  [@bs.module "date-fns/locale/sr"] external sr: locale = "default";
  [@bs.module "date-fns/locale/sv"] external sv: locale = "default";
  [@bs.module "date-fns/locale/th"] external th: locale = "default";
  [@bs.module "date-fns/locale/tr"] external tr: locale = "default";
  [@bs.module "date-fns/locale/ug"] external ug: locale = "default";
  [@bs.module "date-fns/locale/uk"] external uk: locale = "default";
  [@bs.module "date-fns/locale/vi"] external vi: locale = "default";
  [@bs.module "date-fns/locale/zh-CN"] external zhCN: locale = "default";
  [@bs.module "date-fns/locale/zh-TW"] external zhTW: locale = "default";
};

/******************/
/* Common helpers */
/******************/

[@bs.module "date-fns/fp"]
external uncurried_closestIndexTo: (. array(date)) => (. date) => int = "closestIndexTo";

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

[@bs.module "date-fns/fp"]
external uncurried_formatWithOptions: (. formatOptions) => (. string) => (. date) => string =
  "formatWithOptions";

let formatWithOptions = curry3(uncurried_formatWithOptions);

[@bs.module "date-fns/fp"] external uncurried_format: (. string) => (. date) => string = "format";
let format = curry2(uncurried_format);

[@bs.module "date-fns/fp"]
external uncurried_closestTo: (. array(date)) => (. date) => date = "closestTo";
let closestTo = curry2(uncurried_closestTo);

[@bs.module "date-fns/fp"]
external uncurried_compareAsc: (. date) => (. date) => int = "compareAsc";
let compareAsc = curry2(uncurried_compareAsc);

[@bs.module "date-fns/fp"]
external uncurried_compareDesc: (. date) => (. date) => int = "compareDesc";
let compareDesc = curry2(uncurried_compareDesc);

[@bs.module "date-fns/fp"]
external uncurried_formatDistance: (. date) => (. date) => string = "formatDistance";
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

[@bs.module "date-fns/fp"]
external uncurried_formatDistanceWithOptions:
  (. formatDistanceOptions) => (. date) => (. date) => string =
  "formatDistanceWithOptions";
let formatDistanceWithOptions = curry3(uncurried_formatDistanceWithOptions);

[@bs.module "date-fns/fp"]
external formatDistanceStrict: (. date) => (. date) => string = "formatDistanceStrict";
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

[@bs.module "date-fns/fp"]
external uncurried_formatDistanceStrictWithOptions:
  (. formatDistanceStrictOptions) => (. date) => (. date) => string =
  "formatDistanceStrictWithOptions";
let formatDistanceStrictWithOptions = curry2(uncurried_formatDistanceStrictWithOptions);

[@bs.module "date-fns/fp"]
external uncurried_formatRelative: (. date) => (. date) => string = "formatRelative";
let formatRelative = curry2(uncurried_formatRelative);

[@bs.module "date-fns/fp"] external uncurried_isAfter: (. date) => (. date) => bool = "isAfter";
let isAfter = curry2(uncurried_isAfter);

[@bs.module "date-fns/fp"] external uncurried_isBefore: (. date) => (. date) => bool = "isBefore";
let isBefore = curry2(uncurried_isBefore);

[@bs.module "date-fns/fp"] external isDate: date => bool = "isDate";

[@bs.module "date-fns/fp"] external isValid: date => bool = "isValid";

[@bs.module "date-fns/fp"] external uncurried_isEqual: (. date) => (. date) => bool = "isEqual";
let isEqual = curry2(uncurried_isEqual);

[@bs.module "date-fns/fp"]
external uncurried_lightFormat: (. string) => (. date) => string = "lightFormat";
let lightFormat = curry2(uncurried_lightFormat);

[@bs.module "date-fns/fp"] external max: array(date) => date = "max";

[@bs.module "date-fns/fp"] external min: array(date) => date = "min";

[@bs.module "date-fns/fp"]
external uncurried_parse: (. date) => (. string) => (. string) => date = "parse";
let parse = curry3(uncurried_parse);

[@bs.module "date-fns/fp"] external parseISO: string => date = "parseISO";

[@bs.module "date-fns/fp"] external toDate: int => date = "toDate";

[@bs.module "date-fns/fp/fromUnixTime"] external fromUnixTime: float => date = "default";

[@bs.module "date-fns/fp/getUnixTime"] external getUnixTime: date => float = "default";

[@bs.module "date-fns/fp/getTime"] external getTime: date => int = "default";

/***************/
/* Day helpers */
/***************/

[@bs.module "date-fns/fp"]
external uncurried_addBusinessDays: (. int) => (. date) => date = "addBusinessDays";
let addBusinessDays = curry2(uncurried_addBusinessDays);

[@bs.module "date-fns/fp"] external uncurried_addDays: (. int) => (. date) => date = "addDays";
let addDays = curry2(uncurried_addDays);

[@bs.module "date-fns/fp"]
external uncurried_differenceInBusinessDays: (. date) => (. date) => int =
  "differenceInBusinessDays";
let differenceInBusinessDays = curry2(uncurried_differenceInBusinessDays);

[@bs.module "date-fns/fp"]
external uncurried_differenceInCalendarDays: (. date) => (. date) => int =
  "differenceInCalendarDays";
let differenceInCalendarDays = curry2(uncurried_differenceInCalendarDays);

[@bs.module "date-fns/fp"]
external uncurried_differenceInDays: (. date) => (. date) => int = "differenceInDays";
let differenceInDays = curry2(uncurried_differenceInDays);

[@bs.module "date-fns/fp"] external endOfDay: date => date = "endOfDay";
[@bs.module "date-fns/fp"] external startOfDay: date => date = "startOfDay";
[@bs.module "date-fns/fp"] external getDate: date => int = "getDate";

[@bs.module "date-fns/fp"] external uncurried_setDate: (. int) => (. date) => date = "setDate";
let setDate = curry2(uncurried_setDate);

[@bs.module "date-fns/fp"] external getDayOfYear: date => int = "getDayOfYear";

[@bs.module "date-fns/fp"]
external uncurried_isSameDay: (. date) => (. date) => bool = "isSameDay";
let isSameDay = curry2(uncurried_isSameDay);

[@bs.module "date-fns/fp"]
external uncurried_setDayOfYear: (. int) => (. date) => date = "setDayOfYear";
let setDayOfYear = curry2(uncurried_setDayOfYear);

[@bs.module "date-fns/fp"] external uncurried_subDays: (. int) => (. date) => date = "subDays";
let subDays = curry2(uncurried_subDays);

/***************/
/* Milliseconds helpers */
/***************/

[@bs.module "date-fns/fp"]
external uncurried_addMilliseconds: (. int) => (. date) => date = "addMilliseconds";
let addMilliseconds = curry2(uncurried_addMilliseconds);

[@bs.module "date-fns/fp"]
external uncurried_differenceInMilliseconds: (. date) => (. date) => int =
  "differenceInMilliseconds";
let differenceInMilliseconds = curry2(uncurried_differenceInMilliseconds);

[@bs.module "date-fns/fp"] external getMilliseconds: date => int = "getMilliseconds";

[@bs.module "date-fns/fp"]
external uncurried_setMilliseconds: (. int) => (. date) => date = "setMilliseconds";
let setMilliseconds = curry2(uncurried_setMilliseconds);

[@bs.module "date-fns/fp"]
external uncurried_subMilliseconds: (. int) => (. date) => date = "subMilliseconds";
let subMilliseconds = curry2(uncurried_subMilliseconds);

/***************/
/* Seconds helpers */
/***************/

[@bs.module "date-fns/fp"]
external uncurried_addSeconds: (. float) => (. date) => date = "addSeconds";
let addSeconds = curry2(uncurried_addSeconds);

[@bs.module "date-fns/fp"]
external uncurried_differenceInSeconds: (. date) => (. date) => float = "differenceInSeconds";
let differenceInSeconds = curry2(uncurried_differenceInSeconds);

[@bs.module "date-fns/fp"] external endOfSecond: date => date = "endOfSecond";

[@bs.module "date-fns/fp"] external startOfSecond: date => date = "startOfSecond";

[@bs.module "date-fns/fp"] external getSeconds: date => float = "getSeconds";

[@bs.module "date-fns/fp"]
external uncurried_setSeconds: (. float) => (. date) => date = "setSeconds";
let setSeconds = curry2(uncurried_setSeconds);

[@bs.module "date-fns/fp"]
external uncurried_isSameSecond: (. date) => (. date) => bool = "isSameSecond";
let isSameSecond = curry2(uncurried_isSameSecond);

[@bs.module "date-fns/fp"]
external uncurried_subSeconds: (. float) => (. date) => date = "subSeconds";
let subSeconds = curry2(uncurried_subSeconds);

/***************/
/* Minute helpers */
/***************/

[@bs.module "date-fns/fp"]
external uncurried_addMinutes: (. float) => (. date) => date = "addMinutes";
let addMinutes = curry2(uncurried_addMinutes);

[@bs.module "date-fns/fp"]
external uncurried_differenceInMinutes: (. date) => (. date) => float = "differenceInMinutes";
let differenceInMinutes = curry2(uncurried_differenceInMinutes);

[@bs.module "date-fns/fp"] external endOfMinute: date => date = "endOfMinute";

[@bs.module "date-fns/fp"] external startOfMinute: date => date = "startOfMinute";

[@bs.module "date-fns/fp"] external getMinutes: date => float = "getMinutes";

[@bs.module "date-fns/fp"]
external uncurried_setMinutes: (. float) => (. date) => date = "setMinutes";
let setMinutes = curry2(uncurried_setMinutes);

[@bs.module "date-fns/fp"]
external uncurried_isSameMinute: (. date) => (. date) => bool = "isSameMinute";
let isSameMinute = curry2(uncurried_isSameMinute);

[@bs.module "date-fns/fp"]
external uncurried_subMinutes: (. float) => (. date) => date = "subMinutes";
let subMinutes = curry2(uncurried_subMinutes);

[@bs.module "date-fns/fp"] external roundToNearestMinutes: date => float = "roundToNearestMinutes";

/***************/
/* Hour helpers */
/***************/

[@bs.module "date-fns/fp"] external uncurried_addHours: (. float) => (. date) => date = "addHours";
let addHours = curry2(uncurried_addHours);

[@bs.module "date-fns/fp"]
external uncurried_differenceInHours: (. date) => (. date) => float = "differenceInHours";
let differenceInHours = curry2(uncurried_differenceInHours);

[@bs.module "date-fns/fp"] external endOfHour: date => date = "endOfHour";

[@bs.module "date-fns/fp"] external startOfHour: date => date = "startOfHour";

[@bs.module "date-fns/fp"] external getHours: date => float = "getHours";

[@bs.module "date-fns/fp"] external uncurried_setHours: (. float) => (. date) => date = "setHours";
let setHours = curry2(uncurried_setHours);

[@bs.module "date-fns/fp"]
external uncurried_isSameHour: (. date) => (. date) => bool = "isSameHour";
let isSameHour = curry2(uncurried_isSameHour);

[@bs.module "date-fns/fp"] external uncurried_subHours: (. float) => (. date) => date = "subHours";
let subHours = curry2(uncurried_subHours);

/***************/
/* Weekday helpers */
/***************/

[@bs.module "date-fns/fp"] external getDay: date => int = "getDay";

[@bs.module "date-fns/fp"] external getISODay: date => int = "getISODay";

[@bs.module "date-fns/fp"] external isMonday: date => bool = "isMonday";

[@bs.module "date-fns/fp"] external isSaturday: date => bool = "isSaturday";

[@bs.module "date-fns/fp"] external isSunday: date => bool = "isSunday";

[@bs.module "date-fns/fp"] external isThursday: date => bool = "isThursday";

[@bs.module "date-fns/fp"] external isTuesday: date => bool = "isTuesday";

[@bs.module "date-fns/fp"] external isWednesday: date => bool = "isWednesday";

[@bs.module "date-fns/fp"] external isWeekend: date => bool = "isWeekend";

[@bs.module "date-fns/fp"] external uncurried_setDay: (. date) => (. date) => date = "setDay";
let setDay = curry2(uncurried_setDay);

[@bs.deriving abstract]
type setDayOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  weekStartsOn: int,
};

[@bs.module "date-fns/fp"]
external uncurried_setDayWithOptions: (. setDayOptions) => (. date) => (. date) => date ="setDayWithOptions"
[@bs.module "date-fns/fp"]
external uncurried_setDayWithOptions: (. setDayOptions) => (. date) => (. date) => date ="setDay"
let setDayWithOptions = curry2(uncurried_setDayWithOptions);

[@bs.module "date-fns/fp"]
external uncurried_setISODay: (. date) => (. date) => date = "setISODay";
let setISODay = curry2(uncurried_setISODay);

/***************/
/* Week helpers */
/***************/

[@bs.module "date-fns/fp"] external uncurried_addWeeks: (. float) => (. date) => date = "addWeeks";
let addWeeks = curry2(uncurried_addWeeks);

[@bs.module "date-fns/fp"]
external uncurried_differenceInWeeks: (. date) => (. date) => float = "differenceInWeeks";
let differenceInWeeks = curry2(uncurried_differenceInWeeks);

[@bs.module "date-fns/fp"] external endOfWeek: date => date = "endOfWeek";

[@bs.module "date-fns/fp"] external startOfWeek: date => date = "startOfWeek";

[@bs.module "date-fns/fp"] external getWeek: date => float = "getWeek";

[@bs.module "date-fns/fp"] external uncurried_setWeek: (. float) => (. date) => date = "setWeek";
let setWeek = curry2(uncurried_setWeek);

[@bs.module "date-fns/fp"]
external uncurried_isSameWeek: (. date) => (. date) => bool = "isSameWeek";
let isSameWeek = curry2(uncurried_isSameWeek);

[@bs.module "date-fns/fp"] external uncurried_subWeeks: (. float) => (. date) => date = "subWeeks";
let subWeeks = curry2(uncurried_subWeeks);

[@bs.module "date-fns/fp"] external getWeeksInMonth: date => int = "getWeeksInMonth";

[@bs.module "date-fns/fp"] external getWeekOfMonth: date => int = "getWeekOfMonth";

/***************/
/* Month helpers */
/***************/

[@bs.module "date-fns/fp"]
external uncurried_addMonths: (. float) => (. date) => date = "addMonths";
let addMonths = curry2(uncurried_addMonths);

[@bs.module "date-fns/fp"]
external uncurried_differenceInMonths: (. date) => (. date) => float = "differenceInMonths";
let differenceInMonths = curry2(uncurried_differenceInMonths);

[@bs.module "date-fns/fp"]
external uncurried_differenceInCalendarMonths: (. date) => (. date) => float =
  "differenceInCalendarMonths";
let differenceInCalendarMonths = curry2(uncurried_differenceInCalendarMonths);

[@bs.module "date-fns/fp"]
external eachWeekendOfMonth: date => array(date) = "eachWeekendOfMonth";

[@bs.module "date-fns/fp"] external getDaysInMonth: date => int = "getDaysInMonth";

[@bs.module "date-fns/fp"] external endOfMonth: date => date = "endOfMonth";

[@bs.module "date-fns/fp"] external startOfMonth: date => date = "startOfMonth";

[@bs.module "date-fns/fp"] external getMonth: date => float = "getMonth";

[@bs.module "date-fns/fp"] external uncurried_setMonth: (. float) => (. date) => date = "setMonth";
let setMonth = curry2(uncurried_setMonth);

[@bs.module "date-fns/fp"]
external uncurried_isSameMonth: (. date) => (. date) => bool = "isSameMonth";
let isSameMonth = curry2(uncurried_isSameMonth);

[@bs.module "date-fns/fp"]
external uncurried_subMonths: (. float) => (. date) => date = "subMonths";
let subMonths = curry2(uncurried_subMonths);

[@bs.module "date-fns/fp"]
external uncurried_isFirstDayOfMonth: (. date) => (. date) => bool = "isFirstDayOfMonth";
let isFirstDayOfMonth = curry2(uncurried_isFirstDayOfMonth);

[@bs.module "date-fns/fp"]
external uncurried_isLastDayOfMonth: (. date) => (. date) => bool = "isLastDayOfMonth";
let isLastDayOfMonth = curry2(uncurried_isLastDayOfMonth);

/***************/
/* Year helpers */
/***************/

[@bs.module "date-fns/fp"] external uncurried_addYears: (. float) => (. date) => date = "addYears";
let addYears = curry2(uncurried_addYears);

[@bs.module "date-fns/fp"]
external uncurried_differenceInYears: (. date) => (. date) => float = "differenceInYears";
let differenceInYears = curry2(uncurried_differenceInYears);

[@bs.module "date-fns/fp"]
external uncurried_differenceInCalendarYears: (. date) => (. date) => float =
  "differenceInCalendarYears";
let differenceInCalendarYears = curry2(uncurried_differenceInCalendarYears);

[@bs.module "date-fns/fp"] external eachWeekendOfYear: date => array(date) = "eachWeekendOfYear";

[@bs.module "date-fns/fp"] external getDaysInYear: date => int = "getDaysInYear";

[@bs.module "date-fns/fp"] external endOfYear: date => date = "endOfYear";

[@bs.module "date-fns/fp"] external startOfYear: date => date = "startOfYear";

[@bs.module "date-fns/fp"] external getYear: date => float = "getYear";

[@bs.module "date-fns/fp"] external uncurried_setYear: (. float) => (. date) => date = "setYear";
let setYear = curry2(uncurried_setYear);

[@bs.module "date-fns/fp"]
external uncurried_isSameYear: (. date) => (. date) => bool = "isSameYear";
let isSameYear = curry2(uncurried_isSameYear);

[@bs.module "date-fns/fp"] external uncurried_subYears: (. float) => (. date) => date = "subYears";
let subYears = curry2(uncurried_subYears);

[@bs.module "date-fns/fp"] external uncurried_lastDayOfYear: date => date = "lastDayOfYear";

[@bs.module "date-fns/fp"] external uncurried_isLeapYear: date => bool = "isLeapYear";

[@bs.deriving abstract]
type values = {
  [@bs.optional]
  year: float,
  [@bs.optional]
  month: float,
  [@bs.optional]
  date: float,
  [@bs.optional]
  hours: float,
  [@bs.optional]
  minutes: float,
  [@bs.optional]
  seconds: float,
  [@bs.optional]
  milliseconds: float,
};

[@bs.module "date-fns/fp"] external uncurried_set: (. values) => (. date) => date = "set";

let set = ReasonDateFnsCurryHelpers.curry2(uncurried_set);
