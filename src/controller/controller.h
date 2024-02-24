#ifndef CPP4_3DVIEWER_V2_0_SRC_CONTROLLER_CONTROLLER_H_
#define CPP4_3DVIEWER_V2_0_SRC_CONTROLLER_CONTROLLER_H_

#include "../model/parser.h"
#include "../model/transform.h"

namespace s21 {

/**
 * @class controller
 * @brief A class representing the controller for managing interactions between
 * the model parser and the transformation handler.
 */
class controller {
 public:
  /// @brief Constructor
  /// @param m Pointer to the ObjParser instance for handling model parsing
  /// @param a Pointer to the Transform instance for handling transformations
  controller(ObjParser *m, Transform *a) : model_(m), afines_(a){};

  /// @brief Function to parse a .obj file
  /// @param path_to_file The path to the .obj file to be parsed
  void parse(std::string path_to_file);

  /// @brief Getter function to retrieve vertex coordinates from the model
  /// @return Vector containing vertex coordinates
  std::vector<float> getVertexes();

  /// @brief Getter function to retrieve polygon information from the model
  /// @return Vector containing polygon indices
  std::vector<unsigned int> getPolygons();

  /// @brief Function to perform transformation on the model
  /// @param rotate A QVector3D representing rotation angles in degrees around
  /// the x, y, and z axes
  /// @param translate A QVector3D representing translation along the x, y, and
  /// z axes
  /// @param zoom A float representing scaling (zoom) factor
  void Move(QVector3D rotate, QVector3D translate, float zoom);

  /// @brief Getter function to retrieve the transformation matrix from the
  /// Transform instance
  /// @return QMatrix4x4 representing the transformation matrix
  QMatrix4x4 Getter();

 private:
  ObjParser *model_;  /**< Pointer to the ObjParser instance for handling model
                         parsing */
  Transform *afines_; /**< Pointer to the Transform instance for handling
                         transformations */
};

}  // namespace s21

#endif  // CPP4_3DVIEWER_V2_0_SRC_CONTROLLER_CONTROLLER_H_
