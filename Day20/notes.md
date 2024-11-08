# Day 20, 11/8/2024

HTTP overview
- Hypertext Transfer Protocol
  - data communication on World Wide Web
  - text based standard
- Request-Response Model

Requests
- Request Line
  - GET /index.html HTTP/1.1\r\n
  - 1       2           3
  - method, path, http version
  - Host: www.ex.com\r\n
- HEAD = get header information

Response
- Status Line
  - HTTP/1.0 200 OK
  - HTTP/1.0 404 Not Found
- Headers
  - key value pairs describing response
- Body
  - Content requested by client
- ex)
  - HTTP/1.1 200 OK\r\n
  - Content-Type: text/html\r\n
  - Content-Size: Content-L:ength: 40\r\n
  - \r\n