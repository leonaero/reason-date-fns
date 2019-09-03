// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE

import * as AddHours from "date-fns/addHours";
import * as Parse from "date-fns/fp/parse";
import * as SetHours from "date-fns/setHours";
import * as SubHours from "date-fns/subHours";
import * as Format from "date-fns/fp/format";
import * as SetDay from "date-fns/fp/setDay";
import * as AddMinutes from "date-fns/addMinutes";
import * as AddSeconds from "date-fns/addSeconds";
import * as AddDays from "date-fns/fp/addDays";
import * as IsAfter from "date-fns/fp/isAfter";
import * as IsEqual from "date-fns/fp/isEqual";
import * as SubDays from "date-fns/fp/subDays";
import * as IsSameHour from "date-fns/isSameHour";
import * as SetMinutes from "date-fns/setMinutes";
import * as SetSeconds from "date-fns/setSeconds";
import * as SubMinutes from "date-fns/subMinutes";
import * as SubSeconds from "date-fns/subSeconds";
import * as IsBefore from "date-fns/fp/isBefore";
import * as ClosestTo from "date-fns/fp/closestTo";
import * as IsSameDay from "date-fns/fp/isSameDay";
import * as IsSameMinute from "date-fns/isSameMinute";
import * as IsSameSecond from "date-fns/isSameSecond";
import * as CompareAsc from "date-fns/fp/compareAsc";
import * as CompareDesc from "date-fns/fp/compareDesc";
import * as LightFormat from "date-fns/fp/lightFormat";
import * as AddMilliseconds from "date-fns/addMilliseconds";
import * as SetDayOfYear from "date-fns/fp/setDayOfYear";
import * as SetMilliseconds from "date-fns/setMilliseconds";
import * as SubMilliseconds from "date-fns/subMilliseconds";
import * as DifferenceInHours from "date-fns/differenceInHours";
import * as ClosestIndexTo from "date-fns/fp/closestIndexTo";
import * as FormatDistance from "date-fns/fp/formatDistance";
import * as FormatRelative from "date-fns/fp/formatRelative";
import * as AddBusinessDays from "date-fns/fp/addBusinessDays";
import * as DifferenceInMinutes from "date-fns/differenceInMinutes";
import * as DifferenceInSeconds from "date-fns/differenceInSeconds";
import * as DifferenceInDays from "date-fns/fp/differenceInDays";
import * as FormatWithOptions from "date-fns/fp/formatWithOptions";
import * as DifferenceInMilliseconds from "date-fns/differenceInMilliseconds";
import * as DifferenceInBusinessDays from "date-fns/fp/differenceInBusinessDays";
import * as DifferenceInCalendarDays from "date-fns/fp/differenceInCalendarDays";
import * as ReasonDateFnsCurryHelpers$ReasonDateFns from "./ReasonDateFnsCurryHelpers.bs.js";

var partial_arg = ClosestIndexTo.default;

function closestIndexTo(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg, param, param$1);
}

var partial_arg$1 = FormatWithOptions.default;

function formatWithOptions(param, param$1, param$2) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry3(partial_arg$1, param, param$1, param$2);
}

var partial_arg$2 = Format.default;

function format(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$2, param, param$1);
}

var partial_arg$3 = ClosestTo.default;

function closestTo(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$3, param, param$1);
}

var partial_arg$4 = CompareAsc.default;

function compareAsc(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$4, param, param$1);
}

var partial_arg$5 = CompareDesc.default;

function compareDesc(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$5, param, param$1);
}

var partial_arg$6 = FormatDistance.default;

function formatDistance(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$6, param, param$1);
}

var partial_arg$7 = FormatRelative.default;

function formatRelative(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$7, param, param$1);
}

var partial_arg$8 = IsAfter.default;

function isAfter(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$8, param, param$1);
}

var partial_arg$9 = IsBefore.default;

function isBefore(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$9, param, param$1);
}

var partial_arg$10 = IsEqual.default;

function isEqual(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$10, param, param$1);
}

var partial_arg$11 = LightFormat.default;

function lightFormat(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$11, param, param$1);
}

var partial_arg$12 = Parse.default;

function parse(param, param$1, param$2) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry3(partial_arg$12, param, param$1, param$2);
}

var partial_arg$13 = AddBusinessDays.default;

function addBusinessDays(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$13, param, param$1);
}

var partial_arg$14 = AddDays.default;

function addDays(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$14, param, param$1);
}

var partial_arg$15 = DifferenceInBusinessDays.default;

function differenceInBusinessDays(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$15, param, param$1);
}

var partial_arg$16 = DifferenceInCalendarDays.default;

function differenceInCalendarDays(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$16, param, param$1);
}

var partial_arg$17 = DifferenceInDays.default;

function differenceInDays(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$17, param, param$1);
}

var partial_arg$18 = IsSameDay.default;

function isSameDay(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$18, param, param$1);
}

var partial_arg$19 = SetDay.default;

function setDay(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$19, param, param$1);
}

var partial_arg$20 = SetDayOfYear.default;

function setDayOfYear(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$20, param, param$1);
}

var partial_arg$21 = SubDays.default;

function subDays(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$21, param, param$1);
}

var partial_arg$22 = AddMilliseconds.default;

function addMilliseconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$22, param, param$1);
}

var partial_arg$23 = DifferenceInMilliseconds.default;

function differenceInMilliseconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$23, param, param$1);
}

var partial_arg$24 = SetMilliseconds.default;

function setMilliseconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$24, param, param$1);
}

var partial_arg$25 = SubMilliseconds.default;

function subMilliseconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$25, param, param$1);
}

var partial_arg$26 = AddSeconds.default;

function addSeconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$26, param, param$1);
}

var partial_arg$27 = DifferenceInSeconds.default;

function differenceInSeconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$27, param, param$1);
}

var partial_arg$28 = SetSeconds.default;

function setSeconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$28, param, param$1);
}

var partial_arg$29 = IsSameSecond.default;

function isSameSecond(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$29, param, param$1);
}

var partial_arg$30 = SubSeconds.default;

function subSeconds(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$30, param, param$1);
}

var partial_arg$31 = AddMinutes.default;

function addMinutes(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$31, param, param$1);
}

var partial_arg$32 = DifferenceInMinutes.default;

function differenceInMinutes(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$32, param, param$1);
}

var partial_arg$33 = SetMinutes.default;

function setMinutes(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$33, param, param$1);
}

var partial_arg$34 = IsSameMinute.default;

function isSameMinute(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$34, param, param$1);
}

var partial_arg$35 = SubMinutes.default;

function subMinutes(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$35, param, param$1);
}

var partial_arg$36 = AddHours.default;

function addHours(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$36, param, param$1);
}

var partial_arg$37 = DifferenceInHours.default;

function differenceInHours(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$37, param, param$1);
}

var partial_arg$38 = SetHours.default;

function setHours(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$38, param, param$1);
}

var partial_arg$39 = IsSameHour.default;

function isSameHour(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$39, param, param$1);
}

var partial_arg$40 = SubHours.default;

function subHours(param, param$1) {
  return ReasonDateFnsCurryHelpers$ReasonDateFns.curry2(partial_arg$40, param, param$1);
}

export {
  closestIndexTo ,
  formatWithOptions ,
  format ,
  closestTo ,
  compareAsc ,
  compareDesc ,
  formatDistance ,
  formatRelative ,
  isAfter ,
  isBefore ,
  isEqual ,
  lightFormat ,
  parse ,
  addBusinessDays ,
  addDays ,
  differenceInBusinessDays ,
  differenceInCalendarDays ,
  differenceInDays ,
  isSameDay ,
  setDay ,
  setDayOfYear ,
  subDays ,
  addMilliseconds ,
  differenceInMilliseconds ,
  setMilliseconds ,
  subMilliseconds ,
  addSeconds ,
  differenceInSeconds ,
  setSeconds ,
  isSameSecond ,
  subSeconds ,
  addMinutes ,
  differenceInMinutes ,
  setMinutes ,
  isSameMinute ,
  subMinutes ,
  addHours ,
  differenceInHours ,
  setHours ,
  isSameHour ,
  subHours ,
  
}
/* partial_arg Not a pure module */