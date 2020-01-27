#include "stdafx.h"
#include "TerrainDemo.h"
#include"Environment/Terrain.h"

void TerrainDemo::Initialize()
{
	shader = new Shader(L"08_terrain.fx");
	//terrain = new Terrain(shader,L"Terrain/Red256.png");
	terrain = new Terrain(shader, L"Terrain/Gray256.png");
	
}

void TerrainDemo::Destroy()
{
	SafeDelete(shader);
	SafeDelete(terrain);
}

void TerrainDemo::Update()
{


	terrain->Update();

}


void TerrainDemo::Render()
{
	terrain->Pass(1);
	terrain->Render();

}

