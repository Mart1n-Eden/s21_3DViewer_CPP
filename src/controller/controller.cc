#include "controller.h"

namespace s21 {

void controller::parse(std::string path_to_file) {
  model_->modelDemolisher();
  model_->parserVertex(path_to_file);
}

std::vector<float> controller::getVertexes() { return model_->getVertex(); }

std::vector<unsigned int> controller::getPolygons() {
  return model_->getSegments();
}

void controller::Move(QVector3D rotate, QVector3D translate, float zoom) {
  afines_->Move(rotate, translate, zoom);
}

QMatrix4x4 controller::Getter() { return afines_->Getter(); }

};  // namespace s21
