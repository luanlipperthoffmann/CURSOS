const express = require('express');
const http = require('http');

const app = express();

const server = http.createServer();

server.listen(3000, () = {
    console.log('Servidor rodando na porta 3000');
});