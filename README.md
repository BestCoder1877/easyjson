# easyjson

## About

This library (which makes nlohmann/json easier to use) is a C++ library for JSON. In addition to the functions in the nlohmann/json library, there is a function to easily save the JSON file. The nlohmann/json library can be found here: https://www.github.com/nlohmann/json

## Install

To install easyjson, you will need to have nlohmann/json installed because this library simply makes nlohmann/json even easier to use. After nlohmann/json is installed, download the zip file from the releases page and place it in your C++ library folder.

## How to Use

In addition to the features already in nlohmann/json, there are two functions:

### `save()`

The `save()` function makes it easier to save the JSON object back to a `.json` file. It has the following syntax:

```
save(yourJsonObject, "fileName.json")
```

For example, if you have a `.json` file called `example.json` and your JSON object is in a variable called `jsonObject`, you would use:

```
save(jsonObject, "example.json")
```

### `start()`

The `start()` function converts the JSON file into a C++ object. The syntax is:

```
start("fileName.json")
```

For example, if your file is called `example.json`, you would use:

```
start("example.json")
```

