// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 2

// GenerateEmbeddedPositions @ 148c29260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ClothingMeshUtils::FVertexParameterMapper::GenerateEmbeddedPositions
          (FVertexParameterMapper *this,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  TVector<float> *pTVar5;
  TVector<float> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TVector4<float> *pTVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_3b8 [32];
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  TVector<float> *local_340;
  TVector<float> *local_338;
  TVector<float> *local_330;
  TVector<float> *local_328;
  int *local_320;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_318;
  longlong local_310;
  TVector<double>_u_0 local_308;
  TVector4<float> local_2e8;
  ClothMeshDesc local_2d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_2d8.Positions.DataPtr = (this->Mesh1Positions).DataPtr;
  local_2d8.Positions.ArrayNum = (this->Mesh1Positions).ArrayNum;
  local_2d8.Positions._12_4_ = *(undefined4 *)&(this->Mesh1Positions).field_0xc;
  local_2d8.Normals.DataPtr = (this->Mesh1Normals).DataPtr;
  local_2d8.Normals.ArrayNum = (this->Mesh1Normals).ArrayNum;
  local_2d8.Normals._12_4_ = *(undefined4 *)&(this->Mesh1Normals).field_0xc;
  local_2d8.Indices.DataPtr = (this->Mesh1Indices).DataPtr;
  local_2d8.Indices.ArrayNum = (this->Mesh1Indices).ArrayNum;
  local_2d8.Indices._12_4_ = *(undefined4 *)&(this->Mesh1Indices).field_0xc;
  local_2d8.Tangents.DataPtr = (TVector<float> *)0x0;
  local_2d8.Tangents.ArrayNum = 0;
  local_2d8.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.AveragedNormals.ArrayNum = 0;
  local_2d8.AveragedNormals.ArrayMax = 0;
  local_2d8.bHasValidBVH = false;
  local_318 = param_1;
  Chaos::
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_2d8.BVH);
  piVar1 = &param_1->ArrayNum;
  iVar16 = (this->Mesh0Positions).ArrayNum;
  local_2d8.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.MaxEdgeLengths.ArrayNum = 0;
  local_2d8.MaxEdgeLengths.ArrayMax = 0;
  local_2d8.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.FilteredTriangles.ArrayNum = 0;
  local_2d8.FilteredTriangles.ArrayMax = 0;
  *piVar1 = 0;
  local_320 = piVar1;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,0x10,iVar16,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  uVar13 = iVar16 * 3;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&param_2->AllocatorInstance,0,piVar1);
  }
  fVar11 = __real_38d1b717;
  local_35c = 0;
  local_310 = (longlong)iVar16;
  if (0 < iVar16) {
    local_358 = 0;
    local_348 = 0;
    local_350 = 0;
    do {
      lVar18 = local_350;
      uVar21 = ~local_35c;
      uVar13 = 0;
      if ((int)local_35c < (this->Mesh0Positions).ArrayNum) {
        uVar13 = uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_340 = (TVector<float> *)
                  ((longlong)&((this->Mesh0Positions).DataPtr)->field0_0x0 + lVar18);
      local_308._s_0.X = (double)(local_340->field0_0x0)._s_0.X;
      local_308._s_0.Y = (double)(local_340->field0_0x0)._s_0.Y;
      local_308._s_0.Z = (double)(local_340->field0_0x0)._s_0.Z;
      uVar14 = GetBestTriangleBaseIndex(&local_2d8,(TVector<double> *)&local_308._s_0,fVar11);
      uVar13 = 0;
      if ((int)uVar14 < (this->Mesh1Indices).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar22 = uVar14 + 1;
      local_368 = (this->Mesh1Indices).DataPtr[(int)uVar14];
      uVar15 = 0;
      uVar13 = uVar15;
      if ((int)uVar22 < (this->Mesh1Indices).ArrayNum) {
        uVar13 = ~uVar22 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = uVar14 + 2;
      local_364 = (this->Mesh1Indices).DataPtr[(int)uVar22];
      uVar13 = uVar15;
      if ((int)uVar14 < (this->Mesh1Indices).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar18 = (longlong)(int)local_368;
      local_360 = (this->Mesh1Indices).DataPtr[(int)uVar14];
      uVar13 = uVar15;
      if ((int)local_368 < (this->Mesh1Positions).ArrayNum) {
        uVar13 = ~local_368 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = (longlong)(int)local_364;
      local_328 = (this->Mesh1Positions).DataPtr + lVar18;
      if ((int)local_364 < (this->Mesh1Positions).ArrayNum) {
        uVar15 = ~local_364 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar18 = (longlong)(int)local_360;
      local_330 = (this->Mesh1Positions).DataPtr + lVar19;
      uVar13 = 0;
      if ((int)local_360 < (this->Mesh1Positions).ArrayNum) {
        uVar13 = ~local_360 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = (longlong)(int)local_368;
      local_338 = (this->Mesh1Positions).DataPtr + lVar18;
      uVar13 = 0;
      if ((int)local_368 < (this->Mesh1Normals).ArrayNum) {
        uVar13 = ~local_368 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar5 = (this->Mesh1Normals).DataPtr;
      lVar18 = (longlong)(int)local_364;
      uVar13 = 0;
      if ((int)local_364 < (this->Mesh1Normals).ArrayNum) {
        uVar13 = ~local_364 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar6 = (this->Mesh1Normals).DataPtr;
      lVar20 = (longlong)(int)local_360;
      uVar13 = 0;
      if ((int)local_360 < (this->Mesh1Normals).ArrayNum) {
        uVar13 = ~local_360 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar17 = GetPointBaryAndDistWithNormals
                          (&local_2e8,local_328,local_330,local_338,pTVar5 + lVar19,pTVar6 + lVar18,
                           (this->Mesh1Normals).DataPtr + lVar20,local_340);
      lVar18 = local_358;
      uVar13 = local_35c;
      fVar2 = (pTVar17->field0_0x0)._s_0.X;
      fVar3 = (pTVar17->field0_0x0)._s_0.W;
      uVar4 = *(undefined8 *)((longlong)&pTVar17->field0_0x0 + 4);
      dVar10 = (double)(float)((ulonglong)uVar4 >> 0x20);
      uVar14 = 0;
      if ((int)local_35c < *local_320) {
        uVar14 = uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = local_348;
      pFVar7 = (local_318->AllocatorInstance).Data;
      *(double *)(pFVar7 + local_348) = (double)fVar2;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = (double)(float)uVar4;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(pFVar7 + local_348 + 8) = auVar9;
      *(double *)(pFVar7 + local_348 + 0x18) = (double)fVar3;
      pFVar7 = (param_2->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_368) &&
          ((FScriptContainerElement *)&local_368 < pFVar7 + (longlong)*piVar1 * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = param_2->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar16 + 1;
      *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_368;
      pFVar7 = (param_2->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_364) &&
          ((FScriptContainerElement *)&local_364 < pFVar7 + (longlong)*piVar1 * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = param_2->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar16 + 1;
      *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_364;
      pFVar7 = (param_2->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_360) &&
          ((FScriptContainerElement *)&local_360 < pFVar7 + (longlong)*piVar1 * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = param_2->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,piVar1);
      }
      local_350 = local_350 + 0xc;
      local_358 = lVar18 + 1;
      param_2->ArrayNum = iVar16 + 1;
      local_348 = lVar19 + 0x20;
      local_35c = uVar13 + 1;
      *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_360;
    } while (local_358 < local_310);
  }
  if (local_2d8.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.FilteredTriangles.AllocatorInstance.Data);
  }
  if (local_2d8.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.MaxEdgeLengths.AllocatorInstance.Data);
  }
  Chaos::
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_2d8.BVH);
  if (local_2d8.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.AveragedNormals.AllocatorInstance.Data);
  }
  return;
}

// Map @ 148c2dac0

void __thiscall
ClothingMeshUtils::FVertexParameterMapper::Map
          (FVertexParameterMapper *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  <lambda_1> local_res20 [8];
  
  Map<float,_ClothingMeshUtils::FVertexParameterMapper::Map_::__l2::<lambda_1>_>
            (this,param_1,param_2,local_res20);
  return;
}

