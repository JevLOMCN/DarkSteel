// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// StaticStruct @ 146dca500

UScriptStruct * __cdecl FRecastNavMeshTileGenerationDebug::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug,
                         (UObject *)pUVar1,L"RecastNavMeshTileGenerationDebug");
  }
  return Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.OuterSingleton;
}

// FRecastNavMeshTileGenerationDebug @ 146dd7ae0

FRecastNavMeshTileGenerationDebug * __thiscall
FRecastNavMeshTileGenerationDebug::FRecastNavMeshTileGenerationDebug
          (FRecastNavMeshTileGenerationDebug *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  *(undefined8 *)&(this->TileCoordinate).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileCoordinate).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->MaxTileCoordinate).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->bEnabled = 0;
  (this->MaxTileCoordinate).field0_0x0._s_0.Z = uVar2;
  *(undefined8 *)&(this->TileCoordinate).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileCoordinate).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->MaxTileCoordinate).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->bGenerateDebugTileOnly = 0;
  this->bCollisionGeometry = 0;
  this->bHeightfieldFromRasterization = 0;
  this->bUseMaxTileCoordinate = 0;
  this->bTileCacheDetailMesh = 0;
  this->bTileCachePolyMesh = 0;
  this->bTileCacheContours = 0;
  this->bSkipContourSimplification = 0;
  this->bTileCacheLayerRegions = 0;
  this->bTileCacheLayerAreas = 0;
  this->bCompactHeightfieldDistances = 0;
  this->bCompactHeightfieldRegions = 0;
  this->bHeightFieldLayers = 0;
  this->bCompactHeightfieldEroded = 0;
  this->bCompactHeightfield = 0;
  this->bHeightfieldBounds = 0;
  this->bHeightfieldPostHeightFiltering = 0;
  this->bHeightfieldPostInclusionBoundsFiltering = 0;
  (this->MaxTileCoordinate).field0_0x0._s_0.Z = uVar2;
  this->LinkGenerationDebugFlags = 0;
  this->HeightFieldRenderMode = Solid;
  this->LinkGenerationSelectedEdge = -1;
  this->LinkGenerationSelectedConfig = -1;
  return this;
}

// IsWithinTileCoordinates @ 146e15cc0

bool __thiscall
FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
          (FRecastNavMeshTileGenerationDebug *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (this->TileCoordinate).field0_0x0._s_0.X;
  if (this->bUseMaxTileCoordinate == 0) {
    if ((param_1 == iVar1) && (param_2 == (this->TileCoordinate).field0_0x0._s_0.Y)) {
      return true;
    }
  }
  else if ((((iVar1 <= param_1) && (param_1 <= (this->MaxTileCoordinate).field0_0x0._s_0.X)) &&
           ((this->TileCoordinate).field0_0x0._s_0.Y <= param_2)) &&
          (param_2 <= (this->MaxTileCoordinate).field0_0x0._s_0.Y)) {
    return true;
  }
  return false;
}

