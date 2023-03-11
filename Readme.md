I am working on a 3D rendering engine using core OpenGL. The end goal of this project is to make a rendering engine that can render any 3D model/environment imported into it. I am going to use Nano GUI for the interface. GLFW is used for input handling and creating the window. GLAD for the OpenGL functions. 
I will be updating this repository while learning about OpenGL from learnopengl.com and sharing the progress here through screenshots and videos. 

10-03-2023
Playing around with vertex attributes and shaders to change the positions of the vertices of a rectangle with texture on it. 
I find out the vertex closest to the mouse cursor's position and through a threshold value make that vertex "activated" so it can be dragged using left click. That vertex will have a black shade on it as shown in the gif below. 
![opengl1](https://user-images.githubusercontent.com/31384470/224283525-0b557706-cc7f-4983-a2e5-5eaaf77c9e8d.gif)