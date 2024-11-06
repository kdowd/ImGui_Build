

#include <iostream>
#include <Windows.h>
#include <imgui.h>



int main()
{
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	ImGui::StyleColorsDark();

	std::cout << "Hello World!\n";
}

