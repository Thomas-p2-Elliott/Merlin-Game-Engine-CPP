#pragma once
#include "glm.hpp"
#include "matrix_transform.hpp"
#include "light.h"

namespace Merlin {
	class Camera; //Prevents circular reference

	class Graphics {
		private:
			static glm::mat4	projectionMatrix;
			static Camera*		mainCamera;
			static Light*		mainLight;

		public:
			static int			DEFAULT_WINDOW_WIDTH;
			static int			DEFAULT_WINDOW_HEIGHT;
			
			static void SetMainCamera(Camera * camera);
			static Camera * GetMainCamera(){
				return mainCamera;
			}
			static glm::mat4 GetProjectionMatrix(){
				return projectionMatrix;
			}
			static void SetLight(Light * light){
				mainLight = light;
			}
			static Light * GetLight(){
				return mainLight;
			}
	};
}