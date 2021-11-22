Ilha Pokémon
======

Nesse projeto será exibido uma ilha plana onde é possível visualizar modelos 3D low-poly de 4 pokémons.
Esse projeto utilizou como base o projeto da câmera LookAt.

Os modelos 3D foram baixado do seguinte site:
https://www.thingiverse.com/flowalistik/designs

E então foram importados na cena e devidamente posicionados e coloridos um de cada cor diferente.
A leitura dos modelos foi feita através da criação de uma struct chamada Model que abriga o que for necessário
para carregar um modelo. Incluindo os vértices do modelo, índices e objetos do OpenGL.

Posteriormente pensar em formas de melhor abstrair o código do OpenGL.
Tentei fazer o mecanismo de detecção de colisão. E quando a camera passar no pokemon, teria que mostrar
o nome dele na tela. Porém não consegui implementar esse funcionalidade.