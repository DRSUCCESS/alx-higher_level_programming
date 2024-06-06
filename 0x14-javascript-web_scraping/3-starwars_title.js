#!/usr/bin/node
const request = require('request');
let url = 'https://swapi-api.alx-tools.com/api/films/' + process.argv[2];

request(url, function (error, response, body) {
  if (error) {
    console.error('Error:', error);
    return;
  }
  if (response.statusCode !== 200) {
    console.error('Error:', 'Failed to load page, status code:', response.statusCode);
    return;
  }
  try {
    const data = JSON.parse(body);
    console.log(data.title);
  } catch (parseError) {
    console.error('Error:', 'Failed to parse JSON');
  }
});

