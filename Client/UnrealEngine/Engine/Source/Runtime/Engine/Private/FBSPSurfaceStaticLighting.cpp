// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FBSPSurfaceStaticLighting @ 147fa37f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBSPSurfaceStaticLighting * __thiscall
FBSPSurfaceStaticLighting::FBSPSurfaceStaticLighting
          (FBSPSurfaceStaticLighting *this,FNodeGroup *param_1,UModel *param_2,
          UModelComponent *param_3)

{
  int iVar1;
  int iVar2;
  FStaticLightingMesh *pFVar3;
  UModel *local_res8;
  FGuid local_28;
  
  pFVar3 = (FStaticLightingMesh *)&this->field_0x38;
  if (this == (FBSPSurfaceStaticLighting *)0x0) {
    pFVar3 = (FStaticLightingMesh *)0x0;
  }
  FStaticLightingTextureMapping::FStaticLightingTextureMapping
            ((FStaticLightingTextureMapping *)this,pFVar3,(UObject *)param_2,param_1->SizeX,
             param_1->SizeY,1,true);
  iVar1 = (param_1->Vertices).ArrayNum;
  local_28.A = 0;
  local_28.B = 0;
  iVar2 = (param_1->TriangleVertexIndices).ArrayNum;
  local_28.C = 0;
  local_28.D = 0;
  iVar2 = iVar2 / 3 + (iVar2 >> 0x1f) +
          (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
  FStaticLightingMesh::FStaticLightingMesh
            ((FStaticLightingMesh *)&this->field_0x38,iVar2,iVar2,iVar1,iVar1,0,true,false,
             &param_1->RelevantLights,(UPrimitiveComponent *)param_3,&param_1->BoundingBox,
             &param_2->LightingGuid,&local_28);
  *(undefined ***)this = &_vftable__for__FStaticLightingMapping__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__FStaticLightingMesh__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  *(undefined8 *)&this->ShadowMapData = 0;
  *(undefined8 *)&(this->ShadowMapData).field_0x8 = 0;
  *(undefined8 *)&(this->ShadowMapData).field_0x20 = 0;
  this->NodeGroup = param_1;
  this->bComplete = false;
  *(undefined4 *)&(this->ShadowMapData).field_0x28 = 0;
  *(undefined4 *)&(this->ShadowMapData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShadowMapData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShadowMapData).field_0x34 = 0;
  *(undefined8 *)&(this->ShadowMapData).field_0x40 = 0;
  *(undefined4 *)&(this->ShadowMapData).field_0x48 = 0;
  this->QuantizedData = (FQuantizedLightmapData *)0x0;
  (this->MappedRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->MappedRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UModel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Model).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UModel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->Model).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// GetDescription @ 147fd1da0

FString * __thiscall
FBSPSurfaceStaticLighting::GetDescription
          (FBSPSurfaceStaticLighting *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BSPMapping");
  return __return_storage_ptr__;
}

// GetLightingGuid @ 147fd3530

FGuid * __thiscall FBSPSurfaceStaticLighting::GetLightingGuid(FBSPSurfaceStaticLighting *this)

{
  return (FGuid *)&this->field_0xe8;
}

// GetLightingGuid`adjustor{56}' @ 147fd3540

/* [thunk]:public: virtual struct FGuid const & __ptr64 __cdecl
   FBSPSurfaceStaticLighting::GetLightingGuid`adjustor{56}' (void)const __ptr64 */

FGuid * __thiscall
FBSPSurfaceStaticLighting::GetLightingGuid_adjustor_56__(FBSPSurfaceStaticLighting *this)

{
  FGuid *pFVar1;
  
  pFVar1 = GetLightingGuid((FBSPSurfaceStaticLighting *)&this[-1].ShadowMapData.field_0x48);
  return pFVar1;
}

// GetTriangle @ 147fd9b20

void __thiscall
FBSPSurfaceStaticLighting::GetTriangle
          (FBSPSurfaceStaticLighting *this,int param_1,FStaticLightingVertex *param_2,
          FStaticLightingVertex *param_3,FStaticLightingVertex *param_4)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  uint uVar8;
  
  lVar1 = *(longlong *)&this->field_0xf0;
  uVar8 = param_1 * 3;
  uVar6 = 0;
  if ((int)uVar8 < *(int *)(lVar1 + 0x1a8)) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = *(uint *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)(int)uVar8 * 4);
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x198)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = uVar8 + 1;
  pdVar7 = (double *)((longlong)(int)uVar6 * 0xe0 + *(longlong *)(lVar1 + 400));
  dVar3 = pdVar7[1];
  (param_2->WorldPosition).field0_0x0._s_0.X = *pdVar7;
  (param_2->WorldPosition).field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[3];
  (param_2->WorldPosition).field0_0x0._s_0.Z = pdVar7[2];
  (param_2->WorldTangentX).field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar7[5];
  (param_2->WorldTangentX).field0_0x0._s_0.Y = pdVar7[4];
  (param_2->WorldTangentX).field0_0x0._s_0.Z = dVar3;
  dVar3 = pdVar7[7];
  (param_2->WorldTangentY).field0_0x0._s_0.X = pdVar7[6];
  (param_2->WorldTangentY).field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[9];
  (param_2->WorldTangentY).field0_0x0._s_0.Z = pdVar7[8];
  (param_2->WorldTangentZ).field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar7[0xb];
  (param_2->WorldTangentZ).field0_0x0._s_0.Y = pdVar7[10];
  (param_2->WorldTangentZ).field0_0x0._s_0.Z = dVar3;
  dVar3 = pdVar7[0xd];
  param_2->TextureCoordinates[0].field0_0x0._s_0.X = pdVar7[0xc];
  param_2->TextureCoordinates[0].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0xf];
  param_2->TextureCoordinates[1].field0_0x0._s_0.X = pdVar7[0xe];
  param_2->TextureCoordinates[1].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x11];
  param_2->TextureCoordinates[2].field0_0x0._s_0.X = pdVar7[0x10];
  param_2->TextureCoordinates[2].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x13];
  param_2->TextureCoordinates[3].field0_0x0._s_0.X = pdVar7[0x12];
  param_2->TextureCoordinates[3].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x15];
  param_2->TextureCoordinates[4].field0_0x0._s_0.X = pdVar7[0x14];
  param_2->TextureCoordinates[4].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x17];
  param_2->TextureCoordinates[5].field0_0x0._s_0.X = pdVar7[0x16];
  param_2->TextureCoordinates[5].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x19];
  param_2->TextureCoordinates[6].field0_0x0._s_0.X = pdVar7[0x18];
  param_2->TextureCoordinates[6].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x1b];
  param_2->TextureCoordinates[7].field0_0x0._s_0.X = pdVar7[0x1a];
  param_2->TextureCoordinates[7].field0_0x0._s_0.Y = dVar3;
  lVar1 = *(longlong *)&this->field_0xf0;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x1a8)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = *(uint *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)(int)uVar5 * 4);
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x198)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar8 = uVar8 + 2;
  pdVar7 = (double *)((longlong)(int)uVar6 * 0xe0 + *(longlong *)(lVar1 + 400));
  dVar3 = pdVar7[1];
  (param_3->WorldPosition).field0_0x0._s_0.X = *pdVar7;
  (param_3->WorldPosition).field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[3];
  (param_3->WorldPosition).field0_0x0._s_0.Z = pdVar7[2];
  (param_3->WorldTangentX).field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar7[5];
  (param_3->WorldTangentX).field0_0x0._s_0.Y = pdVar7[4];
  (param_3->WorldTangentX).field0_0x0._s_0.Z = dVar3;
  dVar3 = pdVar7[7];
  (param_3->WorldTangentY).field0_0x0._s_0.X = pdVar7[6];
  (param_3->WorldTangentY).field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[9];
  (param_3->WorldTangentY).field0_0x0._s_0.Z = pdVar7[8];
  (param_3->WorldTangentZ).field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar7[0xb];
  (param_3->WorldTangentZ).field0_0x0._s_0.Y = pdVar7[10];
  (param_3->WorldTangentZ).field0_0x0._s_0.Z = dVar3;
  dVar3 = pdVar7[0xd];
  param_3->TextureCoordinates[0].field0_0x0._s_0.X = pdVar7[0xc];
  param_3->TextureCoordinates[0].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0xf];
  param_3->TextureCoordinates[1].field0_0x0._s_0.X = pdVar7[0xe];
  param_3->TextureCoordinates[1].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x11];
  param_3->TextureCoordinates[2].field0_0x0._s_0.X = pdVar7[0x10];
  param_3->TextureCoordinates[2].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x13];
  param_3->TextureCoordinates[3].field0_0x0._s_0.X = pdVar7[0x12];
  param_3->TextureCoordinates[3].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x15];
  param_3->TextureCoordinates[4].field0_0x0._s_0.X = pdVar7[0x14];
  param_3->TextureCoordinates[4].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x17];
  param_3->TextureCoordinates[5].field0_0x0._s_0.X = pdVar7[0x16];
  param_3->TextureCoordinates[5].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x19];
  param_3->TextureCoordinates[6].field0_0x0._s_0.X = pdVar7[0x18];
  param_3->TextureCoordinates[6].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x1b];
  param_3->TextureCoordinates[7].field0_0x0._s_0.X = pdVar7[0x1a];
  param_3->TextureCoordinates[7].field0_0x0._s_0.Y = dVar3;
  lVar1 = *(longlong *)&this->field_0xf0;
  uVar6 = 0;
  if ((int)uVar8 < *(int *)(lVar1 + 0x1a8)) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar8 = *(uint *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)(int)uVar8 * 4);
  uVar6 = 0;
  if ((int)uVar8 < *(int *)(lVar1 + 0x198)) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pdVar7 = (double *)((longlong)(int)uVar8 * 0xe0 + *(longlong *)(lVar1 + 400));
  dVar3 = pdVar7[1];
  (param_4->WorldPosition).field0_0x0._s_0.X = *pdVar7;
  (param_4->WorldPosition).field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[3];
  (param_4->WorldPosition).field0_0x0._s_0.Z = pdVar7[2];
  (param_4->WorldTangentX).field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar7[5];
  (param_4->WorldTangentX).field0_0x0._s_0.Y = pdVar7[4];
  (param_4->WorldTangentX).field0_0x0._s_0.Z = dVar3;
  dVar3 = pdVar7[7];
  (param_4->WorldTangentY).field0_0x0._s_0.X = pdVar7[6];
  (param_4->WorldTangentY).field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[9];
  (param_4->WorldTangentY).field0_0x0._s_0.Z = pdVar7[8];
  (param_4->WorldTangentZ).field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar7[0xb];
  (param_4->WorldTangentZ).field0_0x0._s_0.Y = pdVar7[10];
  (param_4->WorldTangentZ).field0_0x0._s_0.Z = dVar3;
  dVar3 = pdVar7[0xd];
  param_4->TextureCoordinates[0].field0_0x0._s_0.X = pdVar7[0xc];
  param_4->TextureCoordinates[0].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0xf];
  param_4->TextureCoordinates[1].field0_0x0._s_0.X = pdVar7[0xe];
  param_4->TextureCoordinates[1].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x11];
  param_4->TextureCoordinates[2].field0_0x0._s_0.X = pdVar7[0x10];
  param_4->TextureCoordinates[2].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x13];
  param_4->TextureCoordinates[3].field0_0x0._s_0.X = pdVar7[0x12];
  param_4->TextureCoordinates[3].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x15];
  param_4->TextureCoordinates[4].field0_0x0._s_0.X = pdVar7[0x14];
  param_4->TextureCoordinates[4].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x17];
  param_4->TextureCoordinates[5].field0_0x0._s_0.X = pdVar7[0x16];
  param_4->TextureCoordinates[5].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x19];
  param_4->TextureCoordinates[6].field0_0x0._s_0.X = pdVar7[0x18];
  param_4->TextureCoordinates[6].field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar7[0x1b];
  param_4->TextureCoordinates[7].field0_0x0._s_0.X = pdVar7[0x1a];
  param_4->TextureCoordinates[7].field0_0x0._s_0.Y = dVar3;
  return;
}

// GetTriangleIndices @ 147fd9f30

void __thiscall
FBSPSurfaceStaticLighting::GetTriangleIndices
          (FBSPSurfaceStaticLighting *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)&this->field_0xf0;
  uVar6 = param_1 * 3;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x1a8)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = uVar6 + 1;
  *param_2 = *(int *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)(int)uVar6 * 4);
  lVar1 = *(longlong *)&this->field_0xf0;
  uVar4 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x1a8)) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = uVar6 + 2;
  *param_3 = *(int *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)(int)uVar5 * 4);
  lVar1 = *(longlong *)&this->field_0xf0;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x1a8)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *param_4 = *(int *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)(int)uVar6 * 4);
  return;
}

// IntersectLightRay @ 147fe1ba0

FLightRayIntersection * __thiscall
FBSPSurfaceStaticLighting::IntersectLightRay
          (FBSPSurfaceStaticLighting *this,FLightRayIntersection *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,bool param_3)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FLightRayIntersection *pFVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  TVector<double>_u_0 local_248;
  undefined1 local_228 [72];
  double dStack_1e0;
  double local_1d8;
  int local_184;
  FWeakObjectPtr local_170;
  FWeakObjectPtr FStack_168;
  IActorInstanceManagerInterface *local_160;
  undefined8 uStack_158;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  memset(local_228,0,0x100);
  lVar19 = *(longlong *)&this->field_0xf0;
  local_170.ObjectIndex = 0;
  local_170.ObjectSerialNumber = 0;
  FStack_168.ObjectIndex = 0;
  FStack_168.ObjectSerialNumber = 0;
  uStack_158._0_4_ = -1;
  uStack_158._4_1_ = Invalid;
  uStack_158._5_3_ = 0;
  local_184 = -1;
  local_228._4_4_ = 1.0;
  local_160 = (IActorInstanceManagerInterface *)0x0;
  if (0 < *(int *)(lVar19 + 0x1a8)) {
    lVar20 = 8;
    uVar18 = 2;
    do {
      uVar13 = 0;
      if ((int)(uVar18 - 2) < *(int *)(lVar19 + 0x1a8)) {
        uVar13 = ~(uVar18 - 2) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FLightRayIntersection *)(*pcVar5)();
        return pFVar17;
      }
      lVar3 = *(longlong *)&this->field_0xf0;
      uVar13 = *(uint *)(*(longlong *)(lVar19 + 0x1a0) + -8 + lVar20);
      uVar14 = 0;
      if ((int)(uVar18 - 1) < *(int *)(lVar3 + 0x1a8)) {
        uVar14 = ~(uVar18 - 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FLightRayIntersection *)(*pcVar5)();
        return pFVar17;
      }
      lVar19 = *(longlong *)&this->field_0xf0;
      uVar14 = *(uint *)(lVar20 + -4 + *(longlong *)(lVar3 + 0x1a0));
      uVar15 = 0;
      if ((int)uVar18 < *(int *)(lVar19 + 0x1a8)) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FLightRayIntersection *)(*pcVar5)();
        return pFVar17;
      }
      lVar3 = *(longlong *)&this->field_0xf0;
      uVar15 = *(uint *)(lVar20 + *(longlong *)(lVar19 + 0x1a0));
      uVar16 = 0;
      if ((int)uVar13 < *(int *)(lVar3 + 0x198)) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FLightRayIntersection *)(*pcVar5)();
        return pFVar17;
      }
      lVar19 = *(longlong *)&this->field_0xf0;
      lVar3 = *(longlong *)(lVar3 + 400);
      uVar16 = 0;
      if ((int)uVar14 < *(int *)(lVar19 + 0x198)) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FLightRayIntersection *)(*pcVar5)();
        return pFVar17;
      }
      lVar19 = *(longlong *)(lVar19 + 400);
      lVar4 = *(longlong *)&this->field_0xf0;
      uVar16 = 0;
      if ((int)uVar15 < *(int *)(lVar4 + 0x198)) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FLightRayIntersection *)(*pcVar5)();
        return pFVar17;
      }
      dVar8 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
      local_248._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
      local_248._8_4_ = SUB84(dVar8,0);
      local_248._0_8_ = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
      local_248._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      bVar12 = LineCheckWithTriangle
                         ((FHitResult *)local_228,
                          (TVector<double> *)
                          ((longlong)(int)uVar15 * 0xe0 + *(longlong *)(lVar4 + 400)),
                          (TVector<double> *)((longlong)(int)uVar14 * 0xe0 + lVar19),
                          (TVector<double> *)((longlong)(int)uVar13 * 0xe0 + lVar3),param_1,param_2,
                          (TVector<double> *)&local_248._s_0);
      if (bVar12) {
        dVar10 = (param_2->field0_0x0)._s_0.X;
        dVar11 = (param_2->field0_0x0)._s_0.Y;
        dVar7 = (param_1->field0_0x0)._s_0.X;
        dVar9 = (param_1->field0_0x0)._s_0.Y;
        __return_storage_ptr__->bIntersects = 1;
        dVar21 = (double)(float)local_228._4_4_;
        dVar8 = (param_2->field0_0x0)._s_0.Z;
        dVar2 = (param_1->field0_0x0)._s_0.Z;
        dVar7 = (dVar10 - dVar7) * dVar21 + dVar7;
        dVar9 = (dVar11 - dVar9) * dVar21 + dVar9;
        auVar6._8_4_ = SUB84(dVar9,0);
        auVar6._0_8_ = dVar7;
        auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar9 = (param_1->field0_0x0)._s_0.Z;
        dStack_120 = auVar6._8_8_;
        (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.X = dVar7;
        (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.Y = dStack_120;
        (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.Z =
             (dVar8 - dVar2) * dVar21 + dVar9;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.X = dStack_110;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.Y = local_108;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.Z = dStack_100;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.X = local_f8;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.Y = dStack_f0;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.Z = local_e8;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.X =
             (double)local_228._64_8_;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.Y = dStack_1e0;
        (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.Z = local_1d8;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[0].field0_0x0._s_0.X =
             local_c8;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[0].field0_0x0._s_0.Y =
             dStack_c0;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[1].field0_0x0._s_0.X =
             local_b8;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[1].field0_0x0._s_0.Y =
             dStack_b0;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[2].field0_0x0._s_0.X =
             local_a8;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[2].field0_0x0._s_0.Y =
             dStack_a0;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[3].field0_0x0._s_0.X =
             local_98;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[3].field0_0x0._s_0.Y =
             dStack_90;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[4].field0_0x0._s_0.X =
             local_88;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[4].field0_0x0._s_0.Y =
             dStack_80;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[5].field0_0x0._s_0.X =
             local_78;
        (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[5].field0_0x0._s_0.Y =
             dStack_70;
        goto LAB_147fe1fb4;
      }
      lVar19 = *(longlong *)&this->field_0xf0;
      lVar20 = lVar20 + 0xc;
      iVar1 = uVar18 + 1;
      uVar18 = uVar18 + 3;
    } while (iVar1 < *(int *)(lVar19 + 0x1a8));
  }
  memset(&local_128,0,0xe0);
  __return_storage_ptr__->bIntersects = 0;
  (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.X = local_128;
  (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.Y = dStack_120;
  (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.Z = local_118;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.X = dStack_110;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.Y = local_108;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.Z = dStack_100;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.X = local_f8;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.Y = dStack_f0;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.Z = local_e8;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.X = dStack_e0;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.Y = local_d8;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.Z = dStack_d0;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[0].field0_0x0._s_0.X = local_c8;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[0].field0_0x0._s_0.Y = dStack_c0;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[1].field0_0x0._s_0.X = local_b8;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[1].field0_0x0._s_0.Y = dStack_b0;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[2].field0_0x0._s_0.X = local_a8;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[2].field0_0x0._s_0.Y = dStack_a0;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[3].field0_0x0._s_0.X = local_98;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[3].field0_0x0._s_0.Y = dStack_90;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[4].field0_0x0._s_0.X = local_88;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[4].field0_0x0._s_0.Y = dStack_80;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[5].field0_0x0._s_0.X = local_78;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[5].field0_0x0._s_0.Y = dStack_70;
LAB_147fe1fb4:
  *(undefined4 *)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[6].field0_0x0 =
       local_68;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[6].field0_0x0 + 4) =
       uStack_64;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[6].field0_0x0 + 8) =
       uStack_60;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[6].field0_0x0 + 0xc)
       = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[7].field0_0x0 =
       local_58;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[7].field0_0x0 + 4) =
       uStack_54;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[7].field0_0x0 + 8) =
       uStack_50;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->IntersectionVertex).TextureCoordinates[7].field0_0x0 + 0xc)
       = uStack_4c;
  return __return_storage_ptr__;
}

// IsInstancedMesh @ 147fe2df0

bool __thiscall FBSPSurfaceStaticLighting::IsInstancedMesh(FBSPSurfaceStaticLighting *this)

{
  return false;
}

// IsValidMapping @ 147fe35d0

bool __thiscall FBSPSurfaceStaticLighting::IsValidMapping(FBSPSurfaceStaticLighting *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Model).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Model).WeakPtr);
    if (pUVar2[0xf].field_0xa == '\0') {
      return true;
    }
  }
  return false;
}

