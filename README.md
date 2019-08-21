# Reason bindings for date-fns v2

This is a project with reason binding for [date-fns v2](https://date-fns.org/v2.0.0/docs/Getting-Started). This binding are using `FP` module of date-fns. So please refer the [FP documentation](https://date-fns.org/v2.0.0/docs/fp/closestIndexTo). In short all methods are carried, and date value is always last argument.

Simple example:

```re
Js.Date.make()
|> DateFns.addDays(2)
|> DateFns.addDays(-2)
|> DateFns.closestTo([|
     DateFns.parseISO("2019-08-21T13:00:03.058Z"),
     Js.Date.make(),
   |])
|> DateFns.lightFormat("YYYY-MM-DD");
```


## Installation 

Make sure that you need `date-fns` **v2**.

```
yarn add reason-date-fns
```

And add `reason-date-fns` to your `bsconfig.json` 

```json
{
  "bs-dependencies": [
    "reason-date-fns"
  ],
}
```

## Differences from bs-date-fns

There is 2:
1) This project is exporting to `date-fns` v2
2) And using `FP` submodule. So carrying is enabled by default 😎

## License
MIT