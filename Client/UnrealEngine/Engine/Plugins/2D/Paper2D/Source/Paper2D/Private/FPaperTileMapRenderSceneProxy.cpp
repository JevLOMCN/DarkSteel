// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 9

// FPaperTileMapRenderSceneProxy @ 14ace9970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPaperTileMapRenderSceneProxy * __thiscall
FPaperTileMapRenderSceneProxy::FPaperTileMapRenderSceneProxy
          (FPaperTileMapRenderSceneProxy *this,UPaperTileMapComponent *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  EShaderPlatform EVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  FPaperRenderSceneProxy::FPaperRenderSceneProxy
            ((FPaperRenderSceneProxy *)this,(UPrimitiveComponent *)param_1);
  this->TileMap = (UPaperTileMap *)0x0;
  *(undefined ***)this = &___7FPaperTileMapRenderSceneProxy__6B_;
  if (param_1->bUseSingleLayer == false) {
    iVar4 = -1;
  }
  else {
    iVar4 = param_1->UseSingleLayerIndex;
  }
  this->OnlyLayerIndex = iVar4;
  this->WireDepthBias = 0.0001;
  uVar2 = *(undefined8 *)((longlong)&(param_1->TileMapColor).field0_0x0 + 8);
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&(param_1->TileMapColor).field0_0x0;
  *(undefined8 *)&this->field_0x38 = uVar2;
  this->TileMap = (UPaperTileMap *)(param_1->TileMap).field0_0x0;
  pcVar1 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar3 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  puVar5 = (undefined8 *)(*pcVar1)(param_1,local_res8,EVar3);
  *(undefined8 *)&this->field_0x630 = *puVar5;
  return this;
}

// CreateTileMapProxy @ 14acf5070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPaperTileMapRenderSceneProxy * __cdecl
FPaperTileMapRenderSceneProxy::CreateTileMapProxy
          (UPaperTileMapComponent *param_1,
          TArray<FSpriteRenderSection,TSizedDefaultAllocator<32>_> **param_2,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> **param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  EShaderPlatform EVar3;
  int iVar4;
  FPaperTileMapRenderSceneProxy *this;
  FMaterialRelevance_u_0 *pFVar5;
  undefined1 local_res10 [8];
  
  this = ::operator_new(0x670);
  if (this == (FPaperTileMapRenderSceneProxy *)0x0) {
    this = (FPaperTileMapRenderSceneProxy *)0x0;
  }
  else {
    FPaperRenderSceneProxy::FPaperRenderSceneProxy
              ((FPaperRenderSceneProxy *)this,(UPrimitiveComponent *)param_1);
    this->TileMap = (UPaperTileMap *)0x0;
    *(undefined ***)this = &___7FPaperTileMapRenderSceneProxy__6B_;
    if (param_1->bUseSingleLayer == false) {
      iVar4 = -1;
    }
    else {
      iVar4 = param_1->UseSingleLayerIndex;
    }
    this->OnlyLayerIndex = iVar4;
    this->WireDepthBias = 0.0001;
    uVar2 = *(undefined8 *)((longlong)&(param_1->TileMapColor).field0_0x0 + 8);
    *(undefined8 *)&this->field_0x30 = *(undefined8 *)&(param_1->TileMapColor).field0_0x0;
    *(undefined8 *)&this->field_0x38 = uVar2;
    this->TileMap = (UPaperTileMap *)(param_1->TileMap).field0_0x0;
    pcVar1 = *(code **)(param_1->_padding_ + 0xaa8);
    EVar3 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
    pFVar5 = (FMaterialRelevance_u_0 *)(*pcVar1)(param_1,local_res10,EVar3);
    ((FMaterialRelevance *)&this->field_0x630)->field0_0x0 = *pFVar5;
  }
  *param_3 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)&this->field_0x290;
  *param_2 = (TArray<FSpriteRenderSection,TSizedDefaultAllocator<32>_> *)&this->field_0x280;
  return this;
}

// DrawBoundsForLayer @ 14acf5d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPaperTileMapRenderSceneProxy::DrawBoundsForLayer
          (FPaperTileMapRenderSceneProxy *this,FPrimitiveDrawInterface *param_1,
          FLinearColor *param_2,int param_3)

{
  double dVar1;
  UPaperTileMap *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<double> *pTVar17;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  TVector<double> local_d8 [8];
  
  this_00 = this->TileMap;
  pTVar17 = UPaperTileMap::GetTilePositionInLocalSpace(this_00,local_d8,0.0,0.0,param_3);
  dVar16 = __real_3ff0000000000000;
  dVar2 = *(double *)&this->field_0x110;
  dVar3 = *(double *)&this->field_0x118;
  dVar4 = *(double *)&this->field_0x130;
  dVar5 = *(double *)&this->field_0x138;
  dVar6 = (pTVar17->field0_0x0)._s_0.X;
  dVar7 = (pTVar17->field0_0x0)._s_0.Y;
  dVar1 = (pTVar17->field0_0x0)._s_0.Z;
  dVar8 = *(double *)&this->field_0x120;
  dVar9 = *(double *)&this->field_0x140;
  dVar10 = *(double *)&this->field_0x150;
  dVar11 = *(double *)&this->field_0x158;
  dVar12 = *(double *)&this->field_0x160;
  dVar13 = *(double *)&this->field_0x170;
  dVar14 = *(double *)&this->field_0x178;
  dVar15 = *(double *)&this->field_0x180;
  local_108 = dVar7 * dVar4 + dVar6 * dVar2 + dVar1 * dVar10 + __real_3ff0000000000000 * dVar13;
  local_100 = dVar7 * dVar5 + dVar6 * dVar3 + dVar1 * dVar11 + __real_3ff0000000000000 * dVar14;
  local_f8 = dVar7 * dVar9 + dVar6 * dVar8 + dVar1 * dVar12 + __real_3ff0000000000000 * dVar15;
  pTVar17 = UPaperTileMap::GetTilePositionInLocalSpace
                      (this_00,local_d8,(float)this_00->MapWidth,0.0,param_3);
  dVar6 = (pTVar17->field0_0x0)._s_0.X;
  dVar7 = (pTVar17->field0_0x0)._s_0.Y;
  dVar1 = (pTVar17->field0_0x0)._s_0.Z;
  local_138 = dVar7 * dVar4 + dVar6 * dVar2 + dVar1 * dVar10 + dVar16 * dVar13;
  local_130 = dVar7 * dVar5 + dVar6 * dVar3 + dVar1 * dVar11 + dVar16 * dVar14;
  local_128 = dVar7 * dVar9 + dVar6 * dVar8 + dVar1 * dVar12 + dVar16 * dVar15;
  pTVar17 = UPaperTileMap::GetTilePositionInLocalSpace
                      (this_00,local_d8,0.0,(float)this_00->MapHeight,param_3);
  dVar6 = (pTVar17->field0_0x0)._s_0.X;
  dVar7 = (pTVar17->field0_0x0)._s_0.Y;
  dVar1 = (pTVar17->field0_0x0)._s_0.Z;
  local_f0 = dVar7 * dVar4 + dVar6 * dVar2 + dVar1 * dVar10 + dVar16 * dVar13;
  local_e8 = dVar7 * dVar5 + dVar6 * dVar3 + dVar1 * dVar11 + dVar16 * dVar14;
  local_e0 = dVar7 * dVar9 + dVar6 * dVar8 + dVar1 * dVar12 + dVar16 * dVar15;
  pTVar17 = UPaperTileMap::GetTilePositionInLocalSpace
                      (this_00,local_d8,(float)this_00->MapWidth,(float)this_00->MapHeight,param_3);
  dVar6 = (pTVar17->field0_0x0)._s_0.X;
  dVar7 = (pTVar17->field0_0x0)._s_0.Y;
  dVar1 = (pTVar17->field0_0x0)._s_0.Z;
  local_120 = dVar7 * dVar4 + dVar6 * dVar2 + dVar1 * dVar10 + dVar16 * dVar13;
  local_118 = dVar7 * dVar5 + dVar6 * dVar3 + dVar1 * dVar11 + dVar16 * dVar14;
  local_110 = dVar7 * dVar9 + dVar6 * dVar8 + dVar1 * dVar12 + dVar16 * dVar15;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_108,&local_138,param_2,1,0,this->WireDepthBias,0);
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_138,&local_120,param_2,1,0,this->WireDepthBias,0);
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_120,&local_f0,param_2,1,0,this->WireDepthBias,0);
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_f0,&local_108,param_2,1,0,this->WireDepthBias,0);
  return;
}

// DrawHexagonalGridLines @ 14acf61e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPaperTileMapRenderSceneProxy::DrawHexagonalGridLines
          (FPaperTileMapRenderSceneProxy *this,FPrimitiveDrawInterface *param_1,
          FLinearColor *param_2,FLinearColor *param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  UPaperTileMap *pUVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  FLinearColor_u_0 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  
  piVar10 = &local_a8.ArrayMax;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_98 = FLinearColor::White.field0_0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,&local_a8.AllocatorInstance,0,piVar10);
  dVar5 = __real_3ff0000000000000;
  pUVar11 = this->TileMap;
  iVar16 = 0;
  if (0 < pUVar11->MapHeight) {
    do {
      iVar14 = 0;
      if (0 < pUVar11->MapWidth) {
        do {
          uVar6 = local_a8._8_8_;
          iVar7 = local_a8.ArrayMax;
          local_a8._8_8_ = (ulonglong)(uint)local_a8.ArrayMax << 0x20;
          if (((longlong)uVar6 < 0) && (iVar7 != 0)) {
            piVar10 = &local_a8.ArrayMax;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_a8.AllocatorInstance,0,piVar10);
          }
          UPaperTileMap::GetTilePolygon(this->TileMap,iVar14,iVar16,param_8,&local_a8);
          piVar12 = (int *)(longlong)local_a8.ArrayNum;
          if (local_a8.ArrayNum < 6) {
            piVar10 = piVar12;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            piVar12 = (int *)(local_a8._8_8_ & 0xffffffff);
          }
          uVar13 = 0;
          dVar1 = *(double *)(local_a8.AllocatorInstance.Data + 0x88);
          dVar3 = *(double *)(local_a8.AllocatorInstance.Data + 0x78);
          dVar4 = *(double *)(local_a8.AllocatorInstance.Data + 0x80);
          local_70 = dVar4 * *(double *)&this->field_0x130 + dVar3 * *(double *)&this->field_0x110 +
                     dVar1 * *(double *)&this->field_0x150 + dVar5 * *(double *)&this->field_0x170;
          dStack_68 = dVar4 * *(double *)&this->field_0x138 + dVar3 * *(double *)&this->field_0x118
                      + dVar1 * *(double *)&this->field_0x158 +
                      dVar5 * *(double *)&this->field_0x178;
          local_60 = dVar4 * *(double *)&this->field_0x140 + dVar3 * *(double *)&this->field_0x120 +
                     dVar1 * *(double *)&this->field_0x160 + dVar5 * *(double *)&this->field_0x180;
          if (0 < (int)piVar12) {
            lVar15 = 0;
            do {
              uVar9 = 0;
              if ((int)uVar13 < (int)piVar12) {
                uVar9 = ~uVar13 >> 0x1f;
              }
              if (uVar9 == 0) {
                piVar10 = (int *)(longlong)(int)piVar12;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              dVar3 = *(double *)(local_a8.AllocatorInstance.Data + lVar15);
              dVar4 = *(double *)(local_a8.AllocatorInstance.Data + lVar15 + 8);
              dVar1 = *(double *)(local_a8.AllocatorInstance.Data + lVar15 + 0x10);
              local_88 = dVar3 * *(double *)&this->field_0x110 +
                         dVar4 * *(double *)&this->field_0x130 +
                         dVar1 * *(double *)&this->field_0x150 +
                         dVar5 * *(double *)&this->field_0x170;
              dStack_80 = dVar3 * *(double *)&this->field_0x118 +
                          dVar4 * *(double *)&this->field_0x138 +
                          dVar1 * *(double *)&this->field_0x158 +
                          dVar5 * *(double *)&this->field_0x178;
              local_78 = dVar4 * *(double *)&this->field_0x140 +
                         dVar3 * *(double *)&this->field_0x120 +
                         dVar1 * *(double *)&this->field_0x160 +
                         dVar5 * *(double *)&this->field_0x180;
              piVar10 = (int *)((ulonglong)piVar10 & 0xffffffff00000000);
              (**(code **)(param_1->_padding_ + 0x30))
                        (param_1,&local_70,&local_88,&local_98,1,piVar10,this->WireDepthBias,0);
              uVar13 = uVar13 + 1;
              piVar12 = (int *)(local_a8._8_8_ & 0xffffffff);
              lVar15 = lVar15 + 0x18;
              local_60 = local_78;
              local_70 = local_88;
              dStack_68 = dStack_80;
            } while ((int)uVar13 < local_a8.ArrayNum);
          }
          pUVar11 = this->TileMap;
          iVar14 = iVar14 + 1;
        } while (iVar14 < pUVar11->MapWidth);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < pUVar11->MapHeight);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// DrawNormalGridLines @ 14acf6600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPaperTileMapRenderSceneProxy::DrawNormalGridLines
          (FPaperTileMapRenderSceneProxy *this,FPrimitiveDrawInterface *param_1,
          FLinearColor *param_2,FLinearColor *param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  double dVar1;
  UPaperTileMap *this_00;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0 [7];
  
  local_118 = *(undefined8 *)&param_2->field0_0x0;
  uStack_110 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  this_00 = this->TileMap;
  iVar2 = 0;
  if (-1 < this_00->MapHeight) {
    do {
      UPaperTileMap::GetTilePositionInLocalSpace
                (this_00,(TVector<double> *)&local_f0[0]._s_0,0.0,(float)iVar2,param_8);
      UPaperTileMap::GetTilePositionInLocalSpace
                (this_00,(TVector<double> *)&local_108._s_0,(float)this_00->MapWidth,(float)iVar2,
                 param_8);
      if ((param_5 < 1) || ((iVar2 - param_7) % param_5 != 0)) {
        fVar3 = (param_2->field0_0x0)._s_0.R;
        fVar4 = (param_2->field0_0x0)._s_0.G;
        fVar5 = (param_2->field0_0x0)._s_0.B;
        fVar6 = (param_2->field0_0x0)._s_0.A;
      }
      else {
        fVar3 = (param_3->field0_0x0)._s_0.R;
        fVar4 = (param_3->field0_0x0)._s_0.G;
        fVar5 = (param_3->field0_0x0)._s_0.B;
        fVar6 = (param_3->field0_0x0)._s_0.A;
      }
      local_118 = CONCAT44(fVar4,fVar3);
      uStack_110 = CONCAT44(fVar6,fVar5);
      auVar9._8_4_ = SUB84(local_108._s_0.Y,0);
      auVar9._0_8_ = local_108._s_0.Y;
      auVar9._12_4_ = (int)((ulonglong)local_108._8_8_ >> 0x20);
      dVar1 = local_108._s_0.X * *(double *)&this->field_0x118;
      dVar7 = local_108._s_0.Z * *(double *)&this->field_0x150;
      dVar8 = local_108._s_0.Z * *(double *)&this->field_0x158;
      local_108._s_0.Z =
           local_108._s_0.Y * *(double *)&this->field_0x140 +
           local_108._s_0.X * *(double *)&this->field_0x120 +
           local_108._s_0.Z * *(double *)&this->field_0x160 +
           __real_3ff0000000000000 * *(double *)&this->field_0x180;
      local_108._s_0.X =
           local_108._s_0.Y * *(double *)&this->field_0x130 +
           local_108._s_0.X * *(double *)&this->field_0x110 + dVar7 +
           __real_3ff0000000000000 * *(double *)&this->field_0x170;
      local_108._s_0.Y =
           auVar9._8_8_ * *(double *)&this->field_0x138 + dVar1 + dVar8 +
           __real_3ff0000000000000 * *(double *)&this->field_0x178;
      dVar1 = (double)local_f0[0]._0_8_ * *(double *)&this->field_0x118;
      dVar8 = (double)local_f0[0]._0_8_ * *(double *)&this->field_0x120;
      auVar10._8_4_ = (int)local_f0[0]._s_0.Y;
      auVar10._0_8_ = local_f0[0]._s_0.Y;
      auVar10._12_4_ = (int)((ulonglong)local_f0[0]._8_8_ >> 0x20);
      dVar7 = (double)local_f0[0]._8_8_ * *(double *)&this->field_0x140;
      local_f0[0]._0_8_ =
           (double)local_f0[0]._8_8_ * *(double *)&this->field_0x130 +
           (double)local_f0[0]._0_8_ * *(double *)&this->field_0x110 +
           (double)local_f0[0]._16_8_ * *(double *)&this->field_0x150 +
           __real_3ff0000000000000 * *(double *)&this->field_0x170;
      local_f0[0]._8_8_ =
           auVar10._8_8_ * *(double *)&this->field_0x138 + dVar1 +
           (double)local_f0[0]._16_8_ * *(double *)&this->field_0x158 +
           __real_3ff0000000000000 * *(double *)&this->field_0x178;
      local_f0[0]._16_8_ =
           dVar8 + dVar7 + (double)local_f0[0]._16_8_ * *(double *)&this->field_0x160 +
           __real_3ff0000000000000 * *(double *)&this->field_0x180;
      (**(code **)(param_1->_padding_ + 0x30))
                (param_1,local_f0,&local_108,&local_118,1,0,this->WireDepthBias,0);
      this_00 = this->TileMap;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= this_00->MapHeight);
  }
  iVar2 = 0;
  if (-1 < this_00->MapWidth) {
    do {
      UPaperTileMap::GetTilePositionInLocalSpace
                (this_00,(TVector<double> *)&local_108._s_0,(float)iVar2,0.0,param_8);
      UPaperTileMap::GetTilePositionInLocalSpace
                (this_00,(TVector<double> *)&local_f0[0]._s_0,(float)iVar2,(float)this_00->MapHeight
                 ,param_8);
      if ((param_4 < 1) || ((iVar2 - param_6) % param_4 != 0)) {
        fVar3 = (param_2->field0_0x0)._s_0.R;
        fVar4 = (param_2->field0_0x0)._s_0.G;
        fVar5 = (param_2->field0_0x0)._s_0.B;
        fVar6 = (param_2->field0_0x0)._s_0.A;
      }
      else {
        fVar3 = (param_3->field0_0x0)._s_0.R;
        fVar4 = (param_3->field0_0x0)._s_0.G;
        fVar5 = (param_3->field0_0x0)._s_0.B;
        fVar6 = (param_3->field0_0x0)._s_0.A;
      }
      local_118 = CONCAT44(fVar4,fVar3);
      uStack_110 = CONCAT44(fVar6,fVar5);
      auVar11._8_4_ = (int)local_f0[0]._s_0.Y;
      auVar11._0_8_ = local_f0[0]._s_0.Y;
      auVar11._12_4_ = (int)((ulonglong)local_f0[0]._8_8_ >> 0x20);
      dVar1 = (double)local_f0[0]._0_8_ * *(double *)&this->field_0x118;
      dVar7 = (double)local_f0[0]._16_8_ * *(double *)&this->field_0x150;
      dVar8 = (double)local_f0[0]._16_8_ * *(double *)&this->field_0x158;
      local_f0[0]._16_8_ =
           (double)local_f0[0]._8_8_ * *(double *)&this->field_0x140 +
           (double)local_f0[0]._0_8_ * *(double *)&this->field_0x120 +
           (double)local_f0[0]._16_8_ * *(double *)&this->field_0x160 +
           __real_3ff0000000000000 * *(double *)&this->field_0x180;
      local_f0[0]._0_8_ =
           (double)local_f0[0]._8_8_ * *(double *)&this->field_0x130 +
           (double)local_f0[0]._0_8_ * *(double *)&this->field_0x110 + dVar7 +
           __real_3ff0000000000000 * *(double *)&this->field_0x170;
      local_f0[0]._8_8_ =
           auVar11._8_8_ * *(double *)&this->field_0x138 + dVar1 + dVar8 +
           __real_3ff0000000000000 * *(double *)&this->field_0x178;
      auVar12._8_4_ = SUB84(local_108._s_0.Y,0);
      auVar12._0_8_ = local_108._s_0.Y;
      auVar12._12_4_ = (int)((ulonglong)local_108._8_8_ >> 0x20);
      dVar1 = local_108._s_0.X * *(double *)&this->field_0x118;
      dVar8 = local_108._s_0.Y * *(double *)&this->field_0x140;
      dVar7 = local_108._s_0.X * *(double *)&this->field_0x120;
      local_108._s_0.X =
           local_108._s_0.Y * *(double *)&this->field_0x130 +
           local_108._s_0.X * *(double *)&this->field_0x110 +
           local_108._s_0.Z * *(double *)&this->field_0x150 +
           __real_3ff0000000000000 * *(double *)&this->field_0x170;
      local_108._s_0.Y =
           auVar12._8_8_ * *(double *)&this->field_0x138 + dVar1 +
           local_108._s_0.Z * *(double *)&this->field_0x158 +
           __real_3ff0000000000000 * *(double *)&this->field_0x178;
      local_108._s_0.Z =
           dVar8 + dVar7 + local_108._s_0.Z * *(double *)&this->field_0x160 +
           __real_3ff0000000000000 * *(double *)&this->field_0x180;
      (**(code **)(param_1->_padding_ + 0x30))
                (param_1,&local_108,local_f0,&local_118,1,0,this->WireDepthBias,0);
      this_00 = this->TileMap;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= this_00->MapWidth);
  }
  return;
}

// DrawStaggeredGridLines @ 14acf6b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPaperTileMapRenderSceneProxy::DrawStaggeredGridLines
          (FPaperTileMapRenderSceneProxy *this,FPrimitiveDrawInterface *param_1,
          FLinearColor *param_2,FLinearColor *param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  UPaperTileMap *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int *piVar18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  TVector<double> local_f0 [7];
  
  local_1d8 = *(undefined8 *)&param_2->field0_0x0;
  uStack_1d0 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  piVar18 = &local_1e8.ArrayMax;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,&local_1e8.AllocatorInstance,0,piVar18);
  pUVar13 = this->TileMap;
  UPaperTileMap::GetTileToLocalParameters(pUVar13,local_f0,&local_108,&local_120,&local_138);
  dVar4 = __real_3ff0000000000000;
  iVar7 = -((pUVar13->MapHeight + 1) / 2);
  if (iVar7 < pUVar13->MapWidth) {
    do {
      uVar5 = local_1e8._8_8_;
      iVar8 = local_1e8.ArrayMax;
      local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
      iVar11 = 0;
      if (0 < iVar7) {
        iVar11 = iVar7;
      }
      iVar9 = 0;
      if (0 < iVar7 * -2) {
        iVar9 = iVar7 * -2;
      }
      iVar12 = iVar9 + -1;
      iVar3 = iVar11 + -1;
      if (-1 < iVar7) {
        iVar12 = iVar9;
        iVar3 = iVar11;
      }
      if (((longlong)uVar5 < 0) && (iVar8 != 0)) {
        piVar18 = &local_1e8.ArrayMax;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_1e8.AllocatorInstance,0,piVar18);
      }
      UPaperTileMap::GetTilePolygon(this->TileMap,iVar3,iVar12,param_8,&local_1e8);
      piVar10 = (int *)(longlong)local_1e8.ArrayNum;
      if ((local_1e8.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar18 = piVar10, bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = local_1e8._8_8_;
      pUVar13 = this->TileMap;
      local_1b0 = *(double *)local_1e8.AllocatorInstance.Data;
      dStack_1a8 = *(double *)(local_1e8.AllocatorInstance.Data + 8);
      uVar1 = pUVar13->MapHeight;
      local_1a0 = *(double *)(local_1e8.AllocatorInstance.Data + 0x10);
      iVar8 = uVar1 + 1;
      if (iVar8 < 0) {
        iVar8 = uVar1 + 2;
      }
      iVar8 = (iVar8 >> 1) + iVar7;
      iVar9 = iVar8 - pUVar13->MapWidth;
      iVar11 = 0;
      if (0 < iVar9) {
        iVar11 = iVar9;
      }
      iVar8 = iVar8 - iVar11;
      iVar11 = uVar1 + iVar11 * -2 + -1;
      if (iVar8 == pUVar13->MapWidth) {
        iVar11 = iVar11 - (~uVar1 & 1);
      }
      iVar9 = local_1e8.ArrayMax;
      local_1e8._8_8_ = (ulonglong)(uint)local_1e8.ArrayMax << 0x20;
      if (((longlong)uVar5 < 0) && (iVar9 != 0)) {
        piVar18 = &local_1e8.ArrayMax;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_1e8.AllocatorInstance,0,piVar18);
      }
      UPaperTileMap::GetTilePolygon(this->TileMap,iVar8,iVar11,param_8,&local_1e8);
      piVar10 = (int *)(longlong)local_1e8.ArrayNum;
      if ((local_1e8.ArrayNum < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar18 = piVar10, bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1b8 = *(double *)(local_1e8.AllocatorInstance.Data + 0x40);
      local_1c8 = *(double *)(local_1e8.AllocatorInstance.Data + 0x30);
      dStack_1c0 = *(double *)(local_1e8.AllocatorInstance.Data + 0x38);
      if ((param_5 < 1) || ((iVar7 - param_7) % param_5 != 0)) {
        fVar14 = (param_2->field0_0x0)._s_0.R;
        fVar15 = (param_2->field0_0x0)._s_0.G;
        fVar16 = (param_2->field0_0x0)._s_0.B;
        fVar17 = (param_2->field0_0x0)._s_0.A;
      }
      else {
        fVar14 = (param_3->field0_0x0)._s_0.R;
        fVar15 = (param_3->field0_0x0)._s_0.G;
        fVar16 = (param_3->field0_0x0)._s_0.B;
        fVar17 = (param_3->field0_0x0)._s_0.A;
      }
      local_1d8 = CONCAT44(fVar15,fVar14);
      uStack_1d0 = CONCAT44(fVar17,fVar16);
      local_188 = dStack_1c0 * *(double *)&this->field_0x140 +
                  local_1c8 * *(double *)&this->field_0x120 +
                  local_1b8 * *(double *)&this->field_0x160 + dVar4 * *(double *)&this->field_0x180;
      local_198 = dStack_1c0 * *(double *)&this->field_0x130 +
                  local_1c8 * *(double *)&this->field_0x110 +
                  local_1b8 * *(double *)&this->field_0x150 + dVar4 * *(double *)&this->field_0x170;
      local_190 = dStack_1c0 * *(double *)&this->field_0x138 +
                  local_1c8 * *(double *)&this->field_0x118 +
                  local_1b8 * *(double *)&this->field_0x158 + dVar4 * *(double *)&this->field_0x178;
      local_180 = dStack_1a8 * *(double *)&this->field_0x130 +
                  local_1b0 * *(double *)&this->field_0x110 +
                  local_1a0 * *(double *)&this->field_0x150 + dVar4 * *(double *)&this->field_0x170;
      local_178 = dStack_1a8 * *(double *)&this->field_0x138 +
                  local_1b0 * *(double *)&this->field_0x118 +
                  local_1a0 * *(double *)&this->field_0x158 + dVar4 * *(double *)&this->field_0x178;
      local_170 = dStack_1a8 * *(double *)&this->field_0x140 +
                  local_1b0 * *(double *)&this->field_0x120 +
                  local_1a0 * *(double *)&this->field_0x160 + dVar4 * *(double *)&this->field_0x180;
      piVar18 = (int *)((ulonglong)piVar18 & 0xffffffff00000000);
      (**(code **)(param_1->_padding_ + 0x30))
                (param_1,&local_180,&local_198,&local_1d8,1,piVar18,this->WireDepthBias,0);
      pUVar13 = this->TileMap;
      iVar7 = iVar7 + 1;
    } while (iVar7 < pUVar13->MapWidth);
  }
  iVar7 = 0;
  if (0 < (pUVar13->MapHeight + 1) / 2 + 1 + pUVar13->MapWidth) {
    do {
      uVar5 = local_1e8._8_8_;
      iVar8 = pUVar13->MapWidth;
      iVar9 = local_1e8.ArrayMax;
      local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
      iVar11 = iVar8;
      if (iVar7 < iVar8) {
        iVar11 = iVar7;
      }
      iVar8 = (iVar7 - iVar8) * 2;
      iVar12 = 0;
      if (0 < iVar8) {
        iVar12 = iVar8;
      }
      if (((longlong)uVar5 < 0) && (iVar9 != 0)) {
        piVar18 = &local_1e8.ArrayMax;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_1e8.AllocatorInstance,0,piVar18);
      }
      UPaperTileMap::GetTilePolygon(this->TileMap,iVar11,iVar12,param_8,&local_1e8);
      piVar10 = (int *)(longlong)local_1e8.ArrayNum;
      if ((local_1e8.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar18 = piVar10, bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = local_1e8._8_8_;
      local_1c8 = *(double *)local_1e8.AllocatorInstance.Data;
      dStack_1c0 = *(double *)(local_1e8.AllocatorInstance.Data + 8);
      local_1b8 = *(double *)(local_1e8.AllocatorInstance.Data + 0x10);
      uVar1 = this->TileMap->MapHeight;
      iVar11 = (int)(uVar1 + 1) / 2;
      iVar9 = iVar11 - iVar7;
      iVar8 = 0;
      if (0 < iVar9) {
        iVar8 = iVar9;
      }
      iVar9 = uVar1 + iVar8 * -2;
      if (0 < iVar8) {
        iVar9 = iVar9 + (uVar1 & 1);
      }
      iVar12 = local_1e8.ArrayMax;
      local_1e8._8_8_ = (ulonglong)(uint)local_1e8.ArrayMax << 0x20;
      if (((longlong)uVar5 < 0) && (iVar12 != 0)) {
        piVar18 = &local_1e8.ArrayMax;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_1e8.AllocatorInstance,0,piVar18);
      }
      UPaperTileMap::GetTilePolygon(this->TileMap,(iVar8 - iVar11) + iVar7,iVar9,param_8,&local_1e8)
      ;
      piVar10 = (int *)(longlong)local_1e8.ArrayNum;
      if ((local_1e8.ArrayNum < 4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar18 = piVar10, bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1a0 = *(double *)(local_1e8.AllocatorInstance.Data + 0x58);
      local_1b0 = *(double *)(local_1e8.AllocatorInstance.Data + 0x48);
      dStack_1a8 = *(double *)(local_1e8.AllocatorInstance.Data + 0x50);
      if ((param_4 < 1) || ((iVar7 - param_6) % param_4 != 0)) {
        fVar14 = (param_2->field0_0x0)._s_0.R;
        fVar15 = (param_2->field0_0x0)._s_0.G;
        fVar16 = (param_2->field0_0x0)._s_0.B;
        fVar17 = (param_2->field0_0x0)._s_0.A;
      }
      else {
        fVar14 = (param_3->field0_0x0)._s_0.R;
        fVar15 = (param_3->field0_0x0)._s_0.G;
        fVar16 = (param_3->field0_0x0)._s_0.B;
        fVar17 = (param_3->field0_0x0)._s_0.A;
      }
      local_1d8 = CONCAT44(fVar15,fVar14);
      uStack_1d0 = CONCAT44(fVar17,fVar16);
      local_158 = dStack_1a8 * *(double *)&this->field_0x140 +
                  local_1b0 * *(double *)&this->field_0x120 +
                  local_1a0 * *(double *)&this->field_0x160 + dVar4 * *(double *)&this->field_0x180;
      local_168 = dStack_1a8 * *(double *)&this->field_0x130 +
                  local_1b0 * *(double *)&this->field_0x110 +
                  local_1a0 * *(double *)&this->field_0x150 + dVar4 * *(double *)&this->field_0x170;
      local_160 = dStack_1a8 * *(double *)&this->field_0x138 +
                  local_1b0 * *(double *)&this->field_0x118 +
                  local_1a0 * *(double *)&this->field_0x158 + dVar4 * *(double *)&this->field_0x178;
      local_150 = dStack_1c0 * *(double *)&this->field_0x130 +
                  local_1c8 * *(double *)&this->field_0x110 +
                  local_1b8 * *(double *)&this->field_0x150 + dVar4 * *(double *)&this->field_0x170;
      local_148 = dStack_1c0 * *(double *)&this->field_0x138 +
                  local_1c8 * *(double *)&this->field_0x118 +
                  local_1b8 * *(double *)&this->field_0x158 + dVar4 * *(double *)&this->field_0x178;
      local_140 = dStack_1c0 * *(double *)&this->field_0x140 +
                  local_1c8 * *(double *)&this->field_0x120 +
                  local_1b8 * *(double *)&this->field_0x160 + dVar4 * *(double *)&this->field_0x180;
      piVar18 = (int *)((ulonglong)piVar18 & 0xffffffff00000000);
      (**(code **)(param_1->_padding_ + 0x30))
                (param_1,&local_150,&local_168,&local_1d8,1,piVar18,this->WireDepthBias,0);
      pUVar13 = this->TileMap;
      iVar7 = iVar7 + 1;
      iVar8 = pUVar13->MapHeight + 1;
      if (iVar8 < 0) {
        iVar8 = pUVar13->MapHeight + 2;
      }
    } while (iVar7 < (iVar8 >> 1) + pUVar13->MapWidth + 1);
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// FinishConstruction_GameThread @ 14acf7cd0

void __thiscall
FPaperTileMapRenderSceneProxy::FinishConstruction_GameThread(FPaperTileMapRenderSceneProxy *this)

{
  return;
}

// GetDynamicMeshElements @ 14acfa100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperTileMapRenderSceneProxy::GetDynamicMeshElements
          (FPaperTileMapRenderSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  TObjectPtr<UMaterial> TVar4;
  code *pcVar5;
  double dVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_TileMap_GetDynamicMeshElements> FVar21;
  FThreadSafeStaticStat<FStat_STAT_TileMap_EditorWireDrawing> FVar22;
  TObjectPtr<UMaterial>_u_0 *pTVar23;
  FColoredMaterialRenderProxy *pFVar24;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar25;
  FLinearColor *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar26;
  FPaperTileMapRenderSceneProxy *this_03;
  undefined1 auStackY_228 [32];
  uint local_1c4;
  uint local_1c0;
  longlong local_1b8;
  FColor_u_0 local_1ac;
  FColor_u_0 local_1a8;
  FColor_u_0 local_1a4;
  FMeshElementCollector *local_1a0;
  FName local_198;
  FName local_190;
  uint local_188;
  uint uStack_184;
  FNameEntryId local_180;
  uint uStack_17c;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_178;
  FName local_170;
  FPaperTileMapRenderSceneProxy *local_168;
  FName local_160;
  FName local_150;
  FLinearColor_u_0 local_140;
  undefined1 local_130 [8];
  UBodySetup *local_128;
  FPrimitiveDrawInterface *local_120;
  LARGE_INTEGER local_118;
  FSceneViewFamily *local_110;
  FStatMessage local_108;
  FName local_f8;
  FName local_f0;
  FLinearColor_u_0 local_e8;
  FLinearColor local_d8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1a0 = param_4;
  FVar21 = StatPtr_STAT_TileMap_GetDynamicMeshElements;
  local_178 = param_1;
  local_168 = this;
  local_110 = param_2;
  if (StatPtr_STAT_TileMap_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_TileMap_GetDynamicMeshElements>)0x0) {
    pFVar20 = ::FName::FName(&local_f8,"STAT_TileMap_GetDynamicMeshElements");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_TileMap_GetDynamicMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TileMap_GetDynamicMeshElements,
                        *pFVar20,L"Tile Map Proxy","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar10 = false;
  bVar12 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  bVar16 = false;
  bVar8 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1ac.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1ac._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar12 = true;
      bVar16 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_198.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperTileMapRenderSceneProxy.cpp"
                   ,0x10c);
        bVar10 = true;
        bVar12 = true;
        bVar16 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_170 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar16 = true;
      goto LAB_14acfa296;
    }
  }
  bVar12 = bVar8;
  bVar10 = bVar16;
  bVar16 = false;
  local_170 = local_160;
  FVar26 = local_160;
LAB_14acfa296:
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = __real_3e45798ee0000000;
  local_1c0 = 0;
  this_03 = this;
  if (0 < param_1->ArrayNum) {
    local_1c4 = 1;
    local_1b8 = 0;
    do {
      FVar22 = StatPtr_STAT_TileMap_EditorWireDrawing;
      if (StatPtr_STAT_TileMap_EditorWireDrawing ==
          (FThreadSafeStaticStat<FStat_STAT_TileMap_EditorWireDrawing>)0x0) {
        pFVar20 = ::FName::FName(&local_f0,"STAT_TileMap_EditorWireDrawing");
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_TileMap_EditorWireDrawing>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TileMap_EditorWireDrawing,
                            *pFVar20,L"Tile Map Editor Grid","STATGROUP_Paper2D","STATCAT_Advanced",
                            L"Paper2D",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar26 = *(FName *)FVar22;
      bVar8 = false;
      bVar11 = false;
      local_150.ComparisonIndex.Value = 0;
      local_150.Number = 0;
      FVar19 = FVar26.ComparisonIndex.Value;
      uVar18 = FVar26.Number;
      if ((FVar19.Value == 0) && (uVar18 == 0)) {
LAB_14acfa400:
        bVar9 = false;
        FVar26 = local_150;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_1a8.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_1a8._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
          bVar8 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_190.ComparisonIndex.Value = FVar19.Value;
            local_190.Number = uVar18;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_190,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperTileMapRenderSceneProxy.cpp"
                       ,0x110);
            bVar8 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14acfa400;
        local_188 = FVar19.Value;
        uStack_184 = uVar18;
        local_150 = FVar26;
        FThreadStats::AddMessage(FVar26,CycleScopeStart);
        bVar9 = true;
      }
      if ((param_3 & local_1c4) != 0) {
        uVar18 = 0;
        if ((int)local_1c0 < param_1->ArrayNum) {
          uVar18 = ~local_1c0 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)((param_1->AllocatorInstance).Data + local_1b8);
        local_120 = FMeshElementCollector::GetPDI(local_1a0,local_1c0);
        param_1 = local_178;
        if (this->TileMap != (UPaperTileMap *)0x0) {
          if (((((*(uint *)(*(longlong *)(lVar3 + 8) + 0x58) & 0x800) != 0) &&
               (bVar17 = AllowDebugViewmodes(), bVar17)) &&
              (local_128 = (this->TileMap->BodySetup).field0_0x0.DebugPtr,
              local_128 != (UBodySetup *)0x0)) &&
             (dVar6 = UE::Math::TMatrix<double>::Determinant((TMatrix<double> *)&this->field_0x110),
             dVar13 <= (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar15,
                                        SUB84(dVar6,0) & uVar14))) {
            if ((*(uint *)(*(longlong *)(lVar3 + 8) + 0x54) & 0x1000) == 0) {
              pTVar23 = &(GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0;
            }
            else {
              pTVar23 = &(GEngine->ShadedLevelColorationLitMaterial).field0_0x0;
            }
            TVar4.field0_0x0 = (TObjectPtr<UMaterial>_u_0)pTVar23->DebugPtr;
            pFVar24 = ::operator_new(0xe0);
            if (pFVar24 == (FColoredMaterialRenderProxy *)0x0) {
              pFVar24 = (FColoredMaterialRenderProxy *)0x0;
            }
            else {
              FVar19 = FNameEntryId::FromValidEName((EName)local_130);
              local_e8._s_0.R = (float)*(undefined4 *)&this->field_0x30;
              local_e8._s_0.G = (float)*(undefined4 *)&this->field_0x34;
              local_e8._s_0.B = (float)*(undefined4 *)&this->field_0x38;
              local_e8._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
              uStack_17c = 0;
              local_180.Value = *(uint *)CONCAT44(extraout_var,FVar19.Value);
              pFVar25 = (FMaterialRenderProxy *)
                        (**(code **)(*(longlong *)TVar4.field0_0x0 + 0x310))(TVar4.field0_0x0);
              FVar7.Number = uStack_17c;
              FVar7.ComparisonIndex.Value = local_180.Value;
              pFVar24 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                  (pFVar24,pFVar25,(FLinearColor *)&local_e8._s_0,FVar7);
            }
            UE::Math::TTransform<double>::SetFromMatrix
                      (&local_c8,(TMatrix<double> *)&this->field_0x110);
            bVar2 = this->field_0x82;
            if ((((char)bVar2 < '\0') || ((bVar2 & 0x10) != 0)) ||
               (((bVar2 & 3) == 3 || ((bVar2 & 0x60) != 0)))) {
              bVar17 = true;
            }
            else {
              bVar17 = false;
            }
            local_140._s_0.R = FLinearColor::sRGBToLinearTable[0x9d];
            local_140._s_0.B = FLinearColor::sRGBToLinearTable[0xdf];
            local_140._s_0.G = FLinearColor::sRGBToLinearTable[0x95];
            local_140._s_0.A = 1.0;
            this_00 = GetSelectionColor(&local_d8,(FLinearColor *)&local_140._s_0,
                                        (*(uint *)(*(longlong *)(lVar3 + 8) + 0x58) & 0x800) != 0 ||
                                        (this->field_0x79 & 6) != 0,
                                        (bool)((byte)this->field_0x79 >> 4 & 1),true);
            FLinearColor::ToFColorSRGB(this_00);
            FKAggregateGeom::GetAggGeom
                      (&local_128->AggGeom,&local_c8,(FColor)local_1a4._s_0,
                       (FMaterialRenderProxy *)pFVar24,false,false,bVar17,local_1c0,local_1a0);
          }
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,local_120,
                     (FEngineShowFlags *)(*(longlong *)(lVar3 + 8) + 0x48),
                     (TBoxSphereBounds<double,double> *)&this->field_0x190,
                     (this->field_0x79 & 6) != 0);
          param_1 = local_178;
        }
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar9) && (FVar26 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_108.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
          local_108.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_118);
          local_108.StatData.Pad[4] = '\0';
          local_108.StatData.Pad[5] = '\0';
          local_108.StatData.Pad[6] = '\0';
          local_108.StatData.Pad[7] = '\0';
          local_108.StatData.Pad[0] = local_118.s.LowPart._0_1_;
          local_108.StatData.Pad[1] = local_118.s.LowPart._1_1_;
          local_108.StatData.Pad[2] = local_118.s.LowPart._2_1_;
          local_108.StatData.Pad[3] = local_118.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_108);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      local_1b8 = local_1b8 + 8;
      local_1c0 = local_1c0 + 1;
      local_1c4 = local_1c4 << 1 | (uint)((int)local_1c4 < 0);
      this_03 = local_168;
      FVar26 = local_170;
    } while ((int)local_1c0 < param_1->ArrayNum);
  }
  FPaperRenderSceneProxy::GetDynamicMeshElements
            ((FPaperRenderSceneProxy *)this_03,param_1,local_110,param_3,local_1a0);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// GetTypeHash @ 14ad01db0

ulong64 __thiscall FPaperTileMapRenderSceneProxy::GetTypeHash(FPaperTileMapRenderSceneProxy *this)

{
  return 0x1552d12a0;
}

