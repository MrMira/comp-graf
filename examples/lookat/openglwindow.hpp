#ifndef OPENGLWINDOW_HPP_
#define OPENGLWINDOW_HPP_

#include <imgui.h>
#include <vector>
#include <unordered_map>

#include "abcg.hpp"
#include "camera.hpp"
#include "ground.hpp"

struct Vertex
{
  glm::vec3 position;

  bool operator==(const Vertex& other) const {
    return position == other.position;
  }
};

struct Model
{
  // Objetos do OpenGL.
  GLuint m_VAO;
  GLuint m_VBO;
  GLuint m_EBO;

  // Conjunto de vértices e indices.
  std::vector<Vertex> m_vertices;
  std::vector<GLuint> m_indices;
};

class OpenGLWindow : public abcg::OpenGLWindow {
 protected:
  void handleEvent(SDL_Event& ev) override;
  void initializeGL() override;
  void paintGL() override;
  void paintUI() override;
  void resizeGL(int width, int height) override;
  void terminateGL() override;

 private:
  GLuint m_program{};

  int m_viewportWidth{};
  int m_viewportHeight{};

  Camera m_camera;
  float m_dollySpeed{0.0f};
  float m_truckSpeed{0.0f};
  float m_panSpeed{0.0f};

  Ground m_ground;

  ImFont* m_font{};

  std::vector<Model> m_models;

  void loadModelFromFile(std::string_view path);
  Model selectModel(int pos);
  void update();
};

#endif