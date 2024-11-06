

#include <iostream>
#include <Windows.h>
#include <imgui.h>



int main()
{
	//https://www.quora.com/Which-rendering-backend-is-best-for-imgui-in-cpp
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	ImGui::StyleColorsDark();



	std::cout << "Hello World!\n";
}

