// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 59

// BuildBVH<float> @ 143dc0ee0

void __thiscall
Chaos::FTriangleMesh::BuildBVH<float>
          (FTriangleMesh *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  TArray<Chaos::TTriangleMeshBvEntry<float>,TSizedDefaultAllocator<32>_> local_48;
  FTriangleMesh *local_38;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTStack_30;
  int local_28;
  undefined4 uStack_24;
  
  uVar1 = (this->MElements).ArrayNum;
  iVar5 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayMax = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((int)uVar1 < 1) {
    local_48.ArrayNum = 0;
  }
  else {
    local_48.ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
    do {
      local_38 = this;
      pTStack_30 = param_1;
      local_28 = iVar5;
      if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_48.ArrayNum == local_48.ArrayMax) {
        local_48.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      lVar4 = (longlong)local_48.ArrayNum;
      local_48.ArrayNum = local_48.ArrayNum + 1;
      iVar5 = iVar5 + 1;
      *(FTriangleMesh **)(local_48.AllocatorInstance.Data + lVar4 * 0x18) = local_38;
      *(TArrayView<Chaos::TVector<float,3>_const_,int> **)
       (local_48.AllocatorInstance.Data + lVar4 * 0x18 + 8) = pTStack_30;
      *(ulonglong *)(local_48.AllocatorInstance.Data + lVar4 * 0x18 + 0x10) =
           CONCAT44(uStack_24,local_28);
    } while (iVar5 < (int)uVar1);
  }
  param_2->bDynamicTree = false;
  param_2->MaxChildrenInLeaf = 0xc;
  param_2->MaxTreeDepth = 0x10;
  param_2->MaxPayloadBounds = 100000.0;
  param_2->MaxNumToProcess = 0;
  param_2->bModifyingTreeMultiThreadingFastCheck = false;
  param_2->bShouldRebuild = true;
  param_2->bBuildOverlapCache = true;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::GenerateTree<TArray<Chaos::TTriangleMeshBvEntry<float>,TSizedDefaultAllocator<32>_>_>
            (param_2,&local_48);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// BuildBVH<double> @ 143dc10c0

void __thiscall
Chaos::FTriangleMesh::BuildBVH<double>
          (FTriangleMesh *this,TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  TArray<Chaos::TTriangleMeshBvEntry<double>,TSizedDefaultAllocator<32>_> local_48;
  FTriangleMesh *local_38;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTStack_30;
  int local_28;
  undefined4 uStack_24;
  
  uVar1 = (this->MElements).ArrayNum;
  iVar5 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayMax = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((int)uVar1 < 1) {
    local_48.ArrayNum = 0;
  }
  else {
    local_48.ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
    do {
      local_38 = this;
      pTStack_30 = param_1;
      local_28 = iVar5;
      if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_48.ArrayNum == local_48.ArrayMax) {
        local_48.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      lVar4 = (longlong)local_48.ArrayNum;
      local_48.ArrayNum = local_48.ArrayNum + 1;
      iVar5 = iVar5 + 1;
      *(FTriangleMesh **)(local_48.AllocatorInstance.Data + lVar4 * 0x18) = local_38;
      *(TArrayView<Chaos::TVector<double,3>_const_,int> **)
       (local_48.AllocatorInstance.Data + lVar4 * 0x18 + 8) = pTStack_30;
      *(ulonglong *)(local_48.AllocatorInstance.Data + lVar4 * 0x18 + 0x10) =
           CONCAT44(uStack_24,local_28);
    } while (iVar5 < (int)uVar1);
  }
  param_2->bDynamicTree = false;
  param_2->MaxPayloadBounds = 100000.0;
  param_2->MaxChildrenInLeaf = 0xc;
  param_2->MaxTreeDepth = 0x10;
  param_2->MaxNumToProcess = 0;
  param_2->bModifyingTreeMultiThreadingFastCheck = false;
  param_2->bShouldRebuild = true;
  param_2->bBuildOverlapCache = true;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::GenerateTree<TArray<Chaos::TTriangleMeshBvEntry<double>,TSizedDefaultAllocator<32>_>_>
            (param_2,&local_48);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// BuildSpatialHash<float> @ 143dc12b0

void __thiscall
Chaos::FTriangleMesh::BuildSpatialHash<float>
          (FTriangleMesh *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          THierarchicalSpatialHash<int,float> *param_2,float param_3)

{
  TTriangleMeshBvData<float> local_18;
  
  local_18.TmData = this;
  local_18.Points = param_1;
  THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>
            (param_2,&local_18,param_3);
  return;
}

// BuildSpatialHash<double> @ 143dc12e0

void __thiscall
Chaos::FTriangleMesh::BuildSpatialHash<double>
          (FTriangleMesh *this,TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          THierarchicalSpatialHash<int,double> *param_2,double param_3)

{
  TTriangleMeshBvData<double> local_18;
  
  local_18.TmData = this;
  local_18.Points = param_1;
  THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>
            (param_2,&local_18,param_3);
  return;
}

// EdgeIntersectionQuery<float> @ 143dcdfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::EdgeIntersectionQuery<float>
          (FTriangleMesh *this,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_1,TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,TVector<float,3> *param_5,
          TFunctionRef<bool___cdecl(int,int)> *param_6,
          TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector<float,3> *pTVar8;
  code *pcVar9;
  double dVar10;
  float fVar11;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a4 [4];
  TFunctionRef<bool___cdecl(int,int)> *local_2a0;
  FScriptContainerElement *local_298;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_280;
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  uint local_268 [2];
  int local_260 [2];
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  TVector<float,3> *local_238;
  longlong local_230;
  TVector<float,3> *local_228;
  longlong local_220;
  uint local_218;
  FScriptContainerElement *local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1fc;
  float local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  FSimpleVisitor local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  TVector<double,3> local_1a8;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined1 local_178 [16];
  longlong lStack_168;
  longlong local_160;
  bool local_148 [8];
  TVector<double,3> local_140;
  undefined4 local_128;
  int iStack_124;
  uint uStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_178._0_8_ = &local_140;
  dVar30 = (double)*(float *)param_4;
  local_2a0 = param_6;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  local_1e0.CollectedResults = &local_278;
  local_160 = 0;
  local_148[0] = false;
  local_148[1] = false;
  local_148[2] = false;
  local_1a8._16_8_ = 0;
  local_180 = 0;
  local_1d8 = (double)*(float *)param_5;
  local_1b8 = (double)*(float *)&param_5->field_0x4;
  local_1c0 = local_1d8;
  if (local_1d8 <= dVar30) {
    local_1c0 = dVar30;
  }
  if (dVar30 <= local_1d8) {
    local_1d8 = dVar30;
  }
  local_1b0 = (double)*(float *)&param_5->field_0x8;
  dVar30 = (double)*(float *)&param_4->field_0x4;
  dVar10 = (double)*(float *)&param_4->field_0x8;
  local_1d0 = local_1b8;
  if (dVar30 <= local_1b8) {
    local_1d0 = dVar30;
  }
  local_1c8 = local_1b0;
  if (dVar10 <= local_1b0) {
    local_1c8 = dVar10;
  }
  if (local_1b8 <= dVar30) {
    local_1b8 = dVar30;
  }
  if (local_1b0 <= dVar10) {
    local_1b0 = dVar10;
  }
  local_190 = ZEXT816(0);
  local_178._8_8_ = 0;
  lStack_168 = 0;
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  local_280 = param_2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
            (param_1,(TVector<double,3> *)local_190,(FQueryFastDataVoid *)local_178,&local_1a8,
             (TAABB<double,3> *)&local_1d8,&local_1e0,(TVector<double,3> *)local_178._0_8_,
             (TVector<double,3> *)(local_178 + 8),local_148);
  if (local_278.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_278._8_8_ & 0xffffffff);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < local_278.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,local_278.ArrayNum,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  uVar20 = (ulonglong)local_278.ArrayNum;
  pFVar22 = local_278.AllocatorInstance.Data + uVar20 * 4;
  FVar23.Data = local_278.AllocatorInstance.Data;
  fVar32 = __real_3f800000;
  fVar34 = __real_322bcc77;
  uVar19 = local_278.ArrayNum;
  local_298 = pFVar22;
  local_218 = local_278.ArrayNum;
  do {
    local_210 = FVar23.Data;
    if (uVar19 != (uint)uVar20) {
      local_2a4[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2a4);
    }
    if (FVar23.Data == pFVar22) {
      iVar18 = param_7->ArrayNum;
      if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      return 0 < iVar18;
    }
    uVar19 = *(uint *)FVar23.Data;
    lVar24 = (longlong)(int)uVar19;
    local_268[0] = uVar19;
    local_260[0] = param_3;
    cVar13 = (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_260,local_268);
    uVar6 = local_208;
    if (cVar13 != '\0') {
      uVar21 = ~uVar19 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar19 < (this->MElements).ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      uVar16 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar24 * 0xc);
      uVar17 = 0;
      if ((int)uVar16 < local_280->ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      local_220 = (longlong)(int)uVar16 * 3;
      local_228 = local_280->DataPtr;
      uVar16 = 0;
      if ((int)uVar19 < (this->MElements).ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      uVar16 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar24 * 0xc + 4);
      uVar17 = 0;
      if ((int)uVar16 < local_280->ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      pTVar12 = local_280;
      local_230 = (longlong)(int)uVar16 * 3;
      local_238 = local_280->DataPtr;
      uVar16 = 0;
      if ((int)uVar19 < (this->MElements).ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      uVar16 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar24 * 0xc + 8);
      uVar21 = 0;
      if ((int)uVar16 < pTVar12->ArrayNum) {
        uVar21 = ~uVar16 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      fVar11 = __real_3f800000;
      fVar28 = __real_322bcc77;
      uVar6 = *(undefined8 *)(&local_228->field_0x0 + local_220 * 4);
      local_200 = *(float *)(&local_228->field_0x8 + local_220 * 4);
      fVar26 = *(float *)&param_5->field_0x8;
      local_1fc = *(undefined8 *)(&local_238->field_0x0 + local_230 * 4);
      local_1f4 = *(float *)(&local_238->field_0x8 + local_230 * 4);
      pTVar8 = pTVar12->DataPtr;
      local_220 = CONCAT44(local_220._4_4_,fVar26);
      uVar7 = *(undefined8 *)(pTVar8 + (int)uVar16);
      fVar2 = *(float *)param_4;
      fVar3 = *(float *)&param_4->field_0x4;
      fVar31 = *(float *)param_5 - fVar2;
      fVar4 = *(float *)&param_4->field_0x8;
      local_1e8 = *(float *)&pTVar8[(int)uVar16].field_0x8;
      fVar27 = fVar26 - fVar4;
      fVar5 = *(float *)&param_5->field_0x4;
      local_228 = (TVector<float,3> *)CONCAT44(local_228._4_4_,fVar5);
      fVar29 = fVar5 - fVar3;
      local_230 = CONCAT44(local_230._4_4_,fVar2);
      fVar25 = fVar31 * fVar31 + fVar29 * fVar29 + fVar27 * fVar27;
      pFVar22 = local_298;
      param_6 = local_2a0;
      local_1f0 = uVar7;
      if (fVar34 <= fVar25) {
        local_208._0_4_ = (float)uVar6;
        local_1f0._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        local_208._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        local_288 = local_1f0._4_4_ - local_208._4_4_;
        local_258 = SQRT(fVar25);
        fVar33 = (float)local_1fc - (float)local_208;
        local_1fc._4_4_ = (float)((ulonglong)local_1fc >> 0x20);
        local_240 = local_1fc._4_4_ - local_208._4_4_;
        local_284 = fVar32 / local_258;
        local_1f0._0_4_ = (float)uVar7;
        local_28c = (float)local_1f0 - (float)local_208;
        fVar25 = local_1f4 - local_200;
        local_248 = local_1e8 - local_200;
        local_238 = (TVector<float,3> *)CONCAT44(local_238._4_4_,fVar25);
        fVar35 = local_240 * local_248 - fVar25 * local_288;
        fVar36 = fVar25 * local_28c - local_248 * fVar33;
        fVar37 = local_288 * fVar33 - local_240 * local_28c;
        local_254 = (float)((uint)(local_284 * fVar31) ^ __xmm_80000000800000008000000080000000);
        local_250 = (float)((uint)(local_284 * fVar29) ^ __xmm_80000000800000008000000080000000);
        fVar27 = (float)((uint)(local_284 * fVar27) ^ __xmm_80000000800000008000000080000000);
        fVar29 = fVar36 * local_250 + fVar35 * local_254 + fVar37 * fVar27;
        fVar34 = fVar28;
        local_290 = fVar27;
        if (__real_322bcc77 <= (float)((uint)fVar29 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          local_24c = fVar3 - local_208._4_4_;
          local_208._0_4_ = fVar2 - (float)local_208;
          local_244 = fVar32 / fVar29;
          fVar28 = fVar4 - local_200;
          fVar29 = (fVar35 * (float)local_208 + fVar36 * local_24c + fVar37 * fVar28) * local_244;
          if ((__real_00000000 <= fVar29) && (fVar29 <= local_258)) {
            local_290 = (float)local_208 * fVar27 - fVar28 * local_254;
            fVar27 = fVar28 * local_250 - local_24c * fVar27;
            fVar28 = local_24c * local_254 - (float)local_208 * local_250;
            fVar31 = (fVar27 * local_28c + local_290 * local_288 + fVar28 * local_248) * local_244;
            fVar32 = fVar11;
            if ((__real_80000000 <= fVar31) &&
               (((fVar31 <= __real_3f800000 &&
                 (fVar28 = (fVar33 * fVar27 + local_240 * local_290 + fVar25 * fVar28) * local_244,
                 fVar28 <= 0.0)) && (fVar31 - fVar28 <= __real_3f800000)))) {
              fStack_11c = fVar29 * local_284;
              local_128 = CONCAT31(local_128._1_3_,3);
              fStack_110 = (float)((uint)fVar28 ^ __xmm_80000000800000008000000080000000);
              local_118 = (__real_3f800000 - fVar31) - fStack_110;
              fVar28 = __real_3f800000 - fStack_11c;
              fStack_10c = *(float *)param_5 * fStack_11c + fVar2 * fVar28;
              fStack_104 = fVar4 * fVar28 + fVar26 * fStack_11c;
              local_108 = fVar3 * fVar28 + fVar5 * fStack_11c;
              fVar26 = fVar35 * fVar35 + fVar36 * fVar36 + fVar37 * fVar37;
              fStack_fc = fVar36;
              local_f8 = fVar37;
              fStack_100 = fVar35;
              if ((fVar26 != __real_3f800000) &&
                 (fStack_fc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                 local_f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                 fStack_100 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                 __real_322bcc77 <= fVar26)) {
                fVar26 = __real_3f800000 / SQRT(fVar26);
                fStack_fc = fVar36 * fVar26;
                local_f8 = fVar37 * fVar26;
                fStack_100 = fVar35 * fVar26;
              }
              pFVar22 = (param_7->AllocatorInstance).Data;
              piVar1 = &param_7->ArrayMax;
              uStack_f4 = 0;
              local_208 = uVar6;
              iStack_124 = param_3;
              uStack_120 = uVar19;
              fStack_114 = fVar31;
              if (((pFVar22 <= (FScriptContainerElement *)&local_128) &&
                  ((FScriptContainerElement *)&local_128 < pFVar22 + (longlong)*piVar1 * 0x38)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar9 = (code *)swi(3);
                uVar15 = (*pcVar9)();
                return (bool)uVar15;
              }
              iVar18 = param_7->ArrayNum;
              if (iVar18 == *piVar1) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x438,&param_7->AllocatorInstance,piVar1);
              }
              param_7->ArrayNum = iVar18 + 1;
              lVar24 = (longlong)iVar18 * 0x38;
              pFVar22 = (param_7->AllocatorInstance).Data;
              *(ulonglong *)(pFVar22 + lVar24) = CONCAT44(iStack_124,local_128);
              *(ulonglong *)(pFVar22 + lVar24 + 8) = CONCAT44(fStack_11c,uStack_120);
              *(ulonglong *)(pFVar22 + lVar24 + 0x10) = CONCAT44(fStack_114,local_118);
              *(ulonglong *)(pFVar22 + lVar24 + 0x10 + 8) = CONCAT44(fStack_10c,fStack_110);
              *(ulonglong *)(pFVar22 + lVar24 + 0x20) = CONCAT44(fStack_104,local_108);
              *(ulonglong *)(pFVar22 + lVar24 + 0x20 + 8) = CONCAT44(fStack_fc,fStack_100);
              *(ulonglong *)(pFVar22 + lVar24 + 0x30) = CONCAT44(uStack_f4,local_f8);
              pFVar22 = local_298;
              param_6 = local_2a0;
              uVar6 = local_208;
            }
          }
        }
      }
    }
    local_208 = uVar6;
    FVar23.Data = local_210 + 4;
    uVar20 = (ulonglong)local_218;
    uVar19 = local_278.ArrayNum;
  } while( true );
}

// EdgeIntersectionQuery<float> @ 143dcea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::EdgeIntersectionQuery<float>
          (FTriangleMesh *this,THierarchicalSpatialHash<int,float> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,TVector<float,3> *param_5,
          TFunctionRef<bool___cdecl(int,int)> *param_6,
          TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  TVector<float,3> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [4];
  float local_204;
  float local_200;
  float local_1fc;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  TVector<float,3> *local_1d8;
  longlong local_1d0;
  int local_1c8;
  TVector<float,3> *local_1c0;
  longlong local_1b8;
  uint local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a8;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  float local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  int local_160 [2];
  TFunctionRef<bool___cdecl(int,int)> *local_158;
  code *local_150;
  int *local_148;
  __m128 local_138;
  undefined1 local_128 [16];
  undefined4 local_118;
  int iStack_114;
  uint uStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_258;
  auVar27._12_4_ = 0;
  auVar27._0_12_ = (undefined1  [12])*param_4;
  auVar22._12_4_ = 0;
  auVar22._0_12_ = (undefined1  [12])*param_4;
  local_158 = param_6;
  local_148 = local_160;
  auVar8._12_4_ = 0;
  auVar8._0_12_ = (undefined1  [12])*param_5;
  local_138 = (__m128)minps(auVar22,auVar8);
  local_150 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FTriangleMesh::EdgeIntersectionQuery<float>'::__l2::<lambda_1>,bool,int>
              ::Call;
  auVar9._12_4_ = 0;
  auVar9._0_12_ = (undefined1  [12])*param_5;
  local_128 = maxps(auVar27,auVar9);
  local_1f8 = param_2;
  local_1c8 = param_3;
  local_160[0] = param_3;
  THierarchicalSpatialHash<int,float>::FindAllIntersections
            (param_1,&local_1a8,(FVectorAABB *)&local_138,
             (TFunctionRef<bool___cdecl(int)> *)&local_150);
  if (local_1a8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1a8.ArrayNum);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < local_1a8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,local_1a8.ArrayNum,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  uVar18 = (ulonglong)local_1a8.ArrayNum;
  local_168 = local_1a8.AllocatorInstance.Data + uVar18 * 4;
  local_1b0 = local_1a8.ArrayNum;
  FVar20.Data = local_1a8.AllocatorInstance.Data;
  fVar23 = __real_3f800000;
  fVar30 = __real_322bcc77;
  do {
    while( true ) {
      pFVar6 = local_168;
      local_170 = FVar20.Data;
      if (local_1a8.ArrayNum != (uint)uVar18) {
        local_208[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_208);
      }
      if (FVar20.Data == pFVar6) {
        iVar17 = param_7->ArrayNum;
        if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.AllocatorInstance.Data);
        }
        return 0 < iVar17;
      }
      uVar4 = *(uint *)FVar20.Data;
      lVar21 = (longlong)(int)uVar4;
      uVar19 = ~uVar4 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      uVar15 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar21 * 0xc);
      uVar16 = 0;
      if ((int)uVar15 < local_1f8->ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      local_1b8 = (longlong)(int)uVar15 * 3;
      local_1c0 = local_1f8->DataPtr;
      uVar15 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      uVar15 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar21 * 0xc + 4);
      uVar16 = 0;
      if ((int)uVar15 < local_1f8->ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      pTVar12 = local_1f8;
      local_1d0 = (longlong)(int)uVar15 * 3;
      local_1d8 = local_1f8->DataPtr;
      uVar15 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar15 = uVar19;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      uVar15 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar21 * 0xc + 8);
      uVar19 = 0;
      if ((int)uVar15 < pTVar12->ArrayNum) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      fVar11 = __real_3f800000;
      fVar10 = __real_322bcc77;
      local_198 = *(undefined8 *)(&local_1c0->field_0x0 + local_1b8 * 4);
      local_190 = *(float *)(&local_1c0->field_0x8 + local_1b8 * 4);
      local_18c = *(undefined8 *)(&local_1d8->field_0x0 + local_1d0 * 4);
      local_184 = *(float *)(&local_1d8->field_0x8 + local_1d0 * 4);
      pTVar5 = pTVar12->DataPtr;
      local_180 = *(undefined8 *)(pTVar5 + (int)uVar15);
      fVar2 = *(float *)param_4;
      fVar28 = *(float *)&param_5->field_0x4 - *(float *)&param_4->field_0x4;
      local_178 = *(float *)&pTVar5[(int)uVar15].field_0x8;
      fVar29 = *(float *)param_5 - fVar2;
      fVar3 = *(float *)&param_5->field_0x8;
      local_1b8 = CONCAT44(local_1b8._4_4_,fVar3);
      fVar26 = fVar3 - *(float *)&param_4->field_0x8;
      local_1c0 = (TVector<float,3> *)CONCAT44(local_1c0._4_4_,fVar2);
      fVar24 = fVar29 * fVar29 + fVar28 * fVar28 + fVar26 * fVar26;
      if (fVar30 <= fVar24) break;
LAB_143dcf37d:
      uVar18 = (ulonglong)local_1b0;
      FVar20.Data = local_170 + 4;
    }
    local_200 = (float)local_180 - (float)local_198;
    fVar31 = (float)local_18c - (float)local_198;
    local_1f0 = SQRT(fVar24);
    local_18c._4_4_ = (float)((ulonglong)local_18c >> 0x20);
    local_198._4_4_ = (float)((ulonglong)local_198 >> 0x20);
    fVar25 = local_18c._4_4_ - local_198._4_4_;
    local_1fc = fVar23 / local_1f0;
    local_1e0 = local_178 - local_190;
    local_1d8 = (TVector<float,3> *)CONCAT44(local_1d8._4_4_,fVar25);
    fVar24 = local_184 - local_190;
    local_180._4_4_ = (float)((ulonglong)local_180 >> 0x20);
    fVar33 = local_180._4_4_ - local_198._4_4_;
    local_1d0 = CONCAT44(local_1d0._4_4_,fVar24);
    fVar34 = local_1e0 * fVar25 - fVar33 * fVar24;
    fVar35 = local_200 * fVar24 - local_1e0 * fVar31;
    fVar36 = fVar33 * fVar31 - local_200 * fVar25;
    local_1e8 = (float)((uint)(local_1fc * fVar28) ^ __xmm_80000000800000008000000080000000);
    fVar26 = (float)((uint)(local_1fc * fVar26) ^ __xmm_80000000800000008000000080000000);
    local_1ec = (float)((uint)(local_1fc * fVar29) ^ __xmm_80000000800000008000000080000000);
    fVar28 = local_1e8 * fVar35 + local_1ec * fVar34 + fVar26 * fVar36;
    fVar30 = __real_322bcc77;
    local_204 = fVar26;
    if ((float)((uint)fVar28 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_322bcc77)
    goto LAB_143dcf37d;
    fVar29 = fVar2 - (float)local_198;
    local_1dc = fVar23 / fVar28;
    fVar28 = *(float *)&param_4->field_0x8 - local_190;
    local_1e4 = *(float *)&param_4->field_0x4 - local_198._4_4_;
    fVar32 = (local_1e4 * fVar35 + fVar29 * fVar34 + fVar28 * fVar36) * local_1dc;
    if ((fVar32 < __real_00000000) || (local_1f0 < fVar32)) goto LAB_143dcf37d;
    local_204 = fVar29 * fVar26 - fVar28 * local_1ec;
    fVar26 = fVar28 * local_1e8 - local_1e4 * fVar26;
    fVar28 = local_1e4 * local_1ec - fVar29 * local_1e8;
    fVar29 = (fVar33 * local_204 + local_200 * fVar26 + local_1e0 * fVar28) * local_1dc;
    fVar23 = __real_3f800000;
    if ((fVar29 < __real_80000000) ||
       (((__real_3f800000 < fVar29 ||
         (fVar24 = (fVar31 * fVar26 + fVar25 * local_204 + fVar24 * fVar28) * local_1dc,
         __real_00000000 < fVar24)) || (__real_3f800000 < fVar29 - fVar24)))) goto LAB_143dcf37d;
    fStack_10c = fVar32 * local_1fc;
    fStack_100 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000);
    fVar23 = __real_3f800000 - fStack_10c;
    local_118 = CONCAT31(local_118._1_3_,3);
    iStack_114 = local_1c8;
    local_108 = (__real_3f800000 - fVar29) - fStack_100;
    fStack_fc = *(float *)param_5 * fStack_10c + fVar2 * fVar23;
    local_f8 = *(float *)&param_5->field_0x4 * fStack_10c + fVar23 * *(float *)&param_4->field_0x4;
    fStack_f4 = fVar3 * fStack_10c + fVar23 * *(float *)&param_4->field_0x8;
    fVar23 = fVar35 * fVar35 + fVar34 * fVar34 + fVar36 * fVar36;
    fStack_f0 = fVar34;
    fStack_ec = fVar35;
    local_e8 = fVar36;
    if ((fVar23 != __real_3f800000) &&
       (fStack_f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
       fStack_ec = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       local_e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar23)
       ) {
      fVar23 = __real_3f800000 / SQRT(fVar23);
      fStack_f0 = fVar23 * fVar34;
      fStack_ec = fVar23 * fVar35;
      local_e8 = fVar23 * fVar36;
    }
    pFVar6 = (param_7->AllocatorInstance).Data;
    piVar1 = &param_7->ArrayMax;
    uStack_e4 = 0;
    uStack_110 = uVar4;
    fStack_104 = fVar29;
    if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar6 + (longlong)*piVar1 * 0x38)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    iVar17 = param_7->ArrayNum;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x438,&param_7->AllocatorInstance,piVar1);
    }
    param_7->ArrayNum = iVar17 + 1;
    lVar21 = (longlong)iVar17 * 0x38;
    pFVar6 = (param_7->AllocatorInstance).Data;
    FVar20.Data = local_170 + 4;
    *(ulonglong *)(pFVar6 + lVar21) = CONCAT44(iStack_114,local_118);
    *(ulonglong *)(pFVar6 + lVar21 + 8) = CONCAT44(fStack_10c,uStack_110);
    *(ulonglong *)(pFVar6 + lVar21 + 0x10) = CONCAT44(fStack_104,local_108);
    *(ulonglong *)(pFVar6 + lVar21 + 0x10 + 8) = CONCAT44(fStack_fc,fStack_100);
    *(ulonglong *)(pFVar6 + lVar21 + 0x20) = CONCAT44(fStack_f4,local_f8);
    *(ulonglong *)(pFVar6 + lVar21 + 0x20 + 8) = CONCAT44(fStack_ec,fStack_f0);
    *(ulonglong *)(pFVar6 + lVar21 + 0x30) = CONCAT44(uStack_e4,local_e8);
    uVar18 = (ulonglong)local_1b0;
    fVar23 = fVar11;
    fVar30 = fVar10;
  } while( true );
}

// EdgeIntersectionQuery<double> @ 143dcf450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::EdgeIntersectionQuery<double>
          (FTriangleMesh *this,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_1,TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,int param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5,
          TFunctionRef<bool___cdecl(int,int)> *param_6,
          TArray<Chaos::TTriangleCollisionPoint<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double,3> *pTVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar15;
  char cVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auStackY_3c8 [32];
  undefined1 local_374 [4];
  TFunctionRef<bool___cdecl(int,int)> *local_370;
  FScriptContainerElement *local_368;
  TArrayView<Chaos::TVector<double,3>_const_,int> *local_360;
  TVector<double,3> *local_358;
  double local_350;
  TVector<double,3> *local_348;
  double local_340;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  uint local_328 [2];
  int local_320 [2];
  uint local_318;
  double local_310;
  FScriptContainerElement *local_308;
  double local_300;
  double dStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  double dStack_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  FSimpleVisitor local_280;
  double local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined1 local_228 [16];
  double local_218;
  double local_208;
  undefined1 local_200 [16];
  TVector<double,3> local_1f0;
  TVector<double,3> local_1d8;
  double local_1c0;
  undefined1 local_1b8 [16];
  longlong lStack_1a8;
  longlong local_1a0;
  bool local_188 [8];
  TVector<double,3> local_180;
  undefined4 local_168;
  int iStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_1b8._0_8_ = &local_180;
  auVar26 = *(undefined1 (*) [16])param_4;
  dVar2 = *(double *)&param_4->field_0x10;
  dVar35 = auVar26._0_8_;
  local_370 = param_6;
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar3 = *(double *)param_5;
  dVar4 = *(double *)&param_5->field_0x10;
  uVar38 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dStack_2e0 = *(double *)&param_5->field_0x8;
  local_300 = dVar3;
  if (dVar35 <= dVar3) {
    local_300 = dVar35;
  }
  local_338.ArrayNum = 0;
  local_338.ArrayMax = 0;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar28 = SUB84(dVar4,0);
  uVar30 = uVar38;
  if (dVar2 <= dVar4) {
    uVar28 = SUB84(dVar2,0);
    uVar30 = uVar29;
  }
  local_280.CollectedResults = &local_338;
  local_2e8._0_4_ = SUB84(dVar3,0);
  local_2e8._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  if (dVar3 <= dVar35) {
    local_2e8._0_4_ = auVar26._0_4_;
    local_2e8._4_4_ = auVar26._4_4_;
  }
  dStack_2f8 = auVar26._8_8_;
  local_1a0 = 0;
  uVar37 = SUB84(dVar4,0);
  if (dVar4 <= dVar2) {
    uVar37 = SUB84(dVar2,0);
    uVar38 = uVar29;
  }
  local_188[0] = false;
  local_188[1] = false;
  dVar2 = dStack_2e0;
  if (dStack_2f8 <= dStack_2e0) {
    dVar2 = dStack_2f8;
  }
  if (dStack_2e0 <= dStack_2f8) {
    dStack_2e0 = dStack_2f8;
  }
  local_188[2] = false;
  local_1f0._16_8_ = 0;
  local_1d8._16_8_ = 0;
  dStack_2f8 = dVar2;
  local_2f0._4_4_ = uVar30;
  local_2f0._0_4_ = uVar28;
  local_1b8._8_8_ = 0;
  lStack_1a8 = 0;
  local_1f0._0_8_ = 0;
  local_1f0._8_8_ = 0;
  local_2d8._4_4_ = uVar38;
  local_2d8._0_4_ = uVar37;
  local_1d8._0_8_ = 0;
  local_1d8._8_8_ = 0;
  local_360 = param_2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
            (param_1,&local_1d8,(FQueryFastDataVoid *)local_1b8,&local_1f0,
             (TAABB<double,3> *)&local_300,&local_280,(TVector<double,3> *)local_1b8._0_8_,
             (TVector<double,3> *)(local_1b8 + 8),local_188);
  if (local_338.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_338._8_8_ & 0xffffffff);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < local_338.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,local_338.ArrayNum,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  dVar2 = __real_3ff0000000000000;
  uVar38 = SUB84(__real_3e45798ee0000000,0);
  uVar28 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  uVar21 = (ulonglong)local_338.ArrayNum;
  pFVar23 = local_338.AllocatorInstance.Data + uVar21 * 4;
  FVar24.Data = local_338.AllocatorInstance.Data;
  uVar20 = local_338.ArrayNum;
  local_368 = pFVar23;
  local_318 = local_338.ArrayNum;
  do {
    local_308 = FVar24.Data;
    if (uVar20 != (uint)uVar21) {
      local_374[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_374);
    }
    if (FVar24.Data == pFVar23) {
      iVar19 = param_7->ArrayNum;
      if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.AllocatorInstance.Data);
      }
      return 0 < iVar19;
    }
    uVar20 = *(uint *)FVar24.Data;
    lVar25 = (longlong)(int)uVar20;
    local_328[0] = uVar20;
    local_320[0] = param_3;
    cVar16 = (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_320,local_328);
    pTVar5 = local_348;
    dVar3 = local_340;
    if (cVar16 != '\0') {
      uVar22 = ~uVar20 >> 0x1f;
      uVar39 = 0;
      if ((int)uVar20 < (this->MElements).ArrayNum) {
        uVar39 = uVar22;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      uVar39 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar25 * 0xc);
      uVar40 = 0;
      if ((int)uVar39 < local_360->ArrayNum) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      local_340 = (double)((longlong)(int)uVar39 * 3);
      local_348 = local_360->DataPtr;
      uVar39 = 0;
      if ((int)uVar20 < (this->MElements).ArrayNum) {
        uVar39 = uVar22;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      uVar39 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar25 * 0xc + 4);
      uVar40 = 0;
      if ((int)uVar39 < local_360->ArrayNum) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      pTVar15 = local_360;
      local_350 = (double)((longlong)(int)uVar39 * 3);
      local_358 = local_360->DataPtr;
      uVar39 = 0;
      if ((int)uVar20 < (this->MElements).ArrayNum) {
        uVar39 = uVar22;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      uVar39 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar25 * 0xc + 8);
      uVar22 = 0;
      if ((int)uVar39 < pTVar15->ArrayNum) {
        uVar22 = ~uVar39 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      local_240 = *(double *)(&local_358->field_0x0 + (longlong)local_350 * 8);
      dStack_238 = *(double *)((longlong)(&local_358->field_0x0 + (longlong)local_350 * 8) + 8);
      local_298 = *(double *)&param_5->field_0x8;
      local_290 = *(double *)&param_5->field_0x10;
      local_248 = *(double *)(&local_348->field_0x10 + (longlong)local_340 * 8);
      local_258 = *(undefined1 (*) [16])(&local_348->field_0x0 + (longlong)local_340 * 8);
      local_230 = *(double *)(&local_358->field_0x10 + (longlong)local_350 * 8);
      pTVar5 = pTVar15->DataPtr;
      local_218 = *(double *)&pTVar5[(int)uVar39].field_0x10;
      dVar4 = *(double *)&param_4->field_0x8;
      dVar35 = *(double *)&param_4->field_0x10;
      dVar36 = local_298 - dVar4;
      local_228 = *(undefined1 (*) [16])(pTVar5 + (int)uVar39);
      local_2a0 = *(double *)param_5;
      dVar12 = local_2a0 - *(double *)param_4;
      dVar31 = local_290 - dVar35;
      auVar26._0_8_ = dVar36 * dVar36;
      auVar26._8_8_ = 0;
      dVar8 = dVar12 * dVar12 + auVar26._0_8_ + dVar31 * dVar31;
      pFVar23 = local_368;
      param_6 = local_370;
      pTVar5 = local_348;
      dVar3 = local_340;
      local_200 = local_258;
      if ((double)CONCAT44(uVar28,uVar38) <= dVar8) {
        dVar3 = local_218 - local_248;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar8;
        auVar26 = sqrtpd(auVar26,auVar7);
        local_278 = auVar26._0_8_;
        pTVar5 = (TVector<double,3> *)(dVar2 / local_278);
        dVar34 = local_258._0_8_;
        dVar9 = local_228._0_8_ - dVar34;
        local_350 = local_240 - dVar34;
        local_2a8 = local_230 - local_248;
        auVar14._4_8_ = dStack_238;
        auVar14._0_4_ = local_258._4_4_;
        auVar27._0_8_ = auVar14._0_8_ << 0x20;
        auVar27._8_4_ = local_258._8_4_;
        auVar27._12_4_ = local_258._12_4_;
        local_2c8 = auVar27._8_8_;
        uStack_2c0 = local_258._8_8_;
        dVar11 = local_228._8_8_ - local_2c8;
        dVar33 = dStack_238 - local_2c8;
        local_268._8_4_ = local_228._8_4_;
        local_268._0_8_ = dVar11;
        local_268._12_4_ = local_228._12_4_;
        dVar10 = dVar33 * dVar3 - local_2a8 * dVar11;
        dVar8 = local_2a8 * dVar9 - dVar3 * local_350;
        uVar39 = SUB84((double)pTVar5 * dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar22 = (uint)((ulonglong)((double)pTVar5 * dVar12) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        local_288 = dVar33 * dVar9;
        uVar40 = SUB84((double)pTVar5 * dVar31,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar41 = (uint)((ulonglong)((double)pTVar5 * dVar31) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        local_2b8 = (double)CONCAT44(uVar41,uVar40);
        dVar12 = dVar11 * local_350 - local_288;
        local_310 = (double)CONCAT44((uint)((ulonglong)((double)pTVar5 * dVar36) >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84((double)pTVar5 * dVar36,0) ^
                                     (uint)__xmm_80000000000000008000000000000000);
        dVar31 = local_310 * dVar8 + (double)CONCAT44(uVar22,uVar39) * dVar10 +
                 (double)CONCAT44(uVar41,uVar40) * dVar12;
        uVar38 = SUB84(__real_3e45798ee0000000,0);
        uVar28 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        if (__real_3e45798ee0000000 <=
            (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          local_2c8 = dVar4 - local_2c8;
          local_2b0 = dVar2 / dVar31;
          local_358 = (TVector<double,3> *)(*(double *)param_4 - dVar34);
          local_2d0 = dVar35 - local_248;
          dVar31 = ((double)local_358 * dVar10 + local_2c8 * dVar8 + local_2d0 * dVar12) * local_2b0
          ;
          if ((__real_0000000000000000 <= dVar31) && (dVar31 <= local_278)) {
            dVar13 = (double)CONCAT44(uVar41,uVar40) * (double)local_358 -
                     (double)CONCAT44(uVar22,uVar39) * local_2d0;
            dVar34 = (double)CONCAT44(uVar22,uVar39) * local_2c8 - local_310 * (double)local_358;
            dVar32 = local_310 * local_2d0 - local_2b8 * local_2c8;
            dVar36 = (dVar9 * dVar32 + dVar13 * dVar11 + dVar34 * dVar3) * local_2b0;
            if ((__real_8000000000000000 <= dVar36) &&
               (((dVar36 <= dVar2 &&
                 (dVar34 = (dVar33 * dVar13 + dVar32 * local_350 + local_2a8 * dVar34) * local_2b0,
                 dVar34 <= 0.0)) && (dVar36 - dVar34 <= dVar2)))) {
              dStack_140 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^
                                            __xmm_80000000000000008000000000000000._4_4_,
                                            SUB84(dVar34,0) ^
                                            (uint)__xmm_80000000000000008000000000000000);
              dVar8 = dVar8 * dVar8 + dVar10 * dVar10 + dVar12 * dVar12;
              if ((dVar8 != dVar2) && (__real_3e45798ee0000000 <= dVar8)) {
                local_208 = dVar2 / SQRT(dVar8);
              }
              local_158 = dVar31 * (double)pTVar5;
              dVar8 = dVar2 - local_158;
              local_168 = CONCAT31(local_168._1_3_,3);
              dStack_150 = (dVar2 - dVar36) - dStack_140;
              local_138 = dVar8 * *(double *)param_4 + local_2a0 * local_158;
              dStack_130 = dVar4 * dVar8 + local_298 * local_158;
              local_128 = dVar35 * dVar8 + local_290 * local_158;
              dVar4 = local_240 - *(double *)(&local_348->field_0x0 + (longlong)local_340 * 8);
              dVar35 = dVar4 * dVar11 - local_288;
              dVar8 = local_2a8 * dVar9 - dVar4 * dVar3;
              dVar4 = dVar8 * dVar8 + dVar10 * dVar10 + dVar35 * dVar35;
              dStack_120 = dVar10;
              dStack_110 = dVar35;
              local_118 = dVar8;
              if ((dVar4 != dVar2) &&
                 (dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                 dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                 local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                 __real_3e45798ee0000000 <= dVar4)) {
                local_1c0 = dVar2 / SQRT(dVar4);
                dStack_120 = dVar10 * local_1c0;
                dStack_110 = dVar35 * local_1c0;
                local_118 = dVar8 * local_1c0;
              }
              pFVar23 = (param_7->AllocatorInstance).Data;
              piVar1 = &param_7->ArrayMax;
              local_108 = 0;
              local_348 = pTVar5;
              local_340 = dVar3;
              iStack_164 = param_3;
              uStack_160 = uVar20;
              local_148 = dVar36;
              if (((pFVar23 <= (FScriptContainerElement *)&local_168) &&
                  ((FScriptContainerElement *)&local_168 < pFVar23 + (longlong)*piVar1 * 0x70)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar6 = (code *)swi(3);
                uVar18 = (*pcVar6)();
                return (bool)uVar18;
              }
              iVar19 = param_7->ArrayNum;
              if (iVar19 == *piVar1) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1070,&param_7->AllocatorInstance,piVar1);
              }
              param_7->ArrayNum = iVar19 + 1;
              lVar25 = (longlong)iVar19 * 0x70;
              pFVar23 = (param_7->AllocatorInstance).Data;
              *(ulonglong *)(pFVar23 + lVar25) = CONCAT44(iStack_164,local_168);
              *(ulonglong *)(pFVar23 + lVar25 + 8) = CONCAT44(uStack_15c,uStack_160);
              *(double *)(pFVar23 + lVar25 + 0x10) = local_158;
              *(double *)(pFVar23 + lVar25 + 0x10 + 8) = dStack_150;
              *(double *)(pFVar23 + lVar25 + 0x20) = local_148;
              *(double *)(pFVar23 + lVar25 + 0x20 + 8) = dStack_140;
              *(double *)(pFVar23 + lVar25 + 0x30) = local_138;
              *(double *)(pFVar23 + lVar25 + 0x30 + 8) = dStack_130;
              *(double *)(pFVar23 + lVar25 + 0x40) = local_128;
              *(double *)(pFVar23 + lVar25 + 0x40 + 8) = dStack_120;
              *(double *)(pFVar23 + lVar25 + 0x50) = local_118;
              *(double *)(pFVar23 + lVar25 + 0x50 + 8) = dStack_110;
              *(undefined8 *)(pFVar23 + lVar25 + 0x60) = local_108;
              *(undefined8 *)(pFVar23 + lVar25 + 0x60 + 8) = uStack_100;
              pFVar23 = local_368;
              param_6 = local_370;
              pTVar5 = local_348;
              dVar3 = local_340;
            }
          }
        }
      }
    }
    local_340 = dVar3;
    local_348 = pTVar5;
    FVar24.Data = local_308 + 4;
    uVar21 = (ulonglong)local_318;
    uVar20 = local_338.ArrayNum;
  } while( true );
}

// EdgeIntersectionQuery<double> @ 143dcffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::EdgeIntersectionQuery<double>
          (FTriangleMesh *this,THierarchicalSpatialHash<int,double> *param_1,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,int param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5,
          TFunctionRef<bool___cdecl(int,int)> *param_6,
          TArray<Chaos::TTriangleCollisionPoint<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  TVector<double,3> *pTVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  uint uVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8 [8];
  TArrayView<Chaos::TVector<double,3>_const_,int> *local_2d0;
  TVector<double,3> *local_2c8;
  double local_2c0;
  TVector<double,3> *local_2b8;
  double local_2b0;
  int local_2a8;
  uint local_2a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a0;
  double local_290;
  FScriptContainerElement *local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  FScriptContainerElement *local_250;
  int local_248 [2];
  TFunctionRef<bool___cdecl(int,int)> *local_240;
  code *local_238;
  int *local_230;
  undefined1 local_228 [16];
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  FVectorAABB local_198;
  undefined4 local_158;
  int iStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = *(ulonglong *)&param_4->field_0x10;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *(ulonglong *)&param_4->field_0x10;
  local_240 = param_6;
  local_230 = local_248;
  local_198.Min.XY.m128d_f64 =
       (double  [2])minpd(*(undefined1 (*) [16])param_4,*(undefined1 (*) [16])param_5);
  local_238 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FTriangleMesh::EdgeIntersectionQuery<double>'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_198.Max.XY.m128d_f64 =
       (double  [2])maxpd(*(undefined1 (*) [16])param_4,*(undefined1 (*) [16])param_5);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = *(ulonglong *)&param_5->field_0x10;
  local_198.Min.ZW.m128d_f64 = (double  [2])minpd(auVar29,auVar24);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulonglong *)&param_5->field_0x10;
  local_198.Max.ZW.m128d_f64 = (double  [2])maxpd(auVar33,auVar6);
  local_2d0 = param_2;
  local_2a8 = param_3;
  local_248[0] = param_3;
  THierarchicalSpatialHash<int,double>::FindAllIntersections
            (param_1,&local_2a0,&local_198,(TFunctionRef<bool___cdecl(int)> *)&local_238);
  if (local_2a0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_2a0.ArrayNum);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < local_2a0.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,local_2a0.ArrayNum,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  dVar13 = __real_3ff0000000000000;
  uVar19 = (ulonglong)local_2a0.ArrayNum;
  uVar37 = SUB84(__real_3e45798ee0000000,0);
  uVar38 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  local_250 = local_2a0.AllocatorInstance.Data + uVar19 * 4;
  local_2a4 = local_2a0.ArrayNum;
  FVar21.Data = local_2a0.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar4 = local_250;
      local_288 = FVar21.Data;
      if (local_2a0.ArrayNum != (uint)uVar19) {
        local_2d8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2d8);
      }
      if (FVar21.Data == pFVar4) {
        iVar18 = param_7->ArrayNum;
        if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.AllocatorInstance.Data);
        }
        return 0 < iVar18;
      }
      uVar3 = *(uint *)FVar21.Data;
      lVar22 = (longlong)(int)uVar3;
      uVar20 = ~uVar3 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar3 < (this->MElements).ArrayNum) {
        uVar34 = uVar20;
      }
      if ((uVar34 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      uVar34 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar22 * 0xc);
      uVar17 = 0;
      if ((int)uVar34 < local_2d0->ArrayNum) {
        uVar17 = ~uVar34 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      local_2b0 = (double)((longlong)(int)uVar34 * 3);
      local_2b8 = local_2d0->DataPtr;
      uVar34 = 0;
      if ((int)uVar3 < (this->MElements).ArrayNum) {
        uVar34 = uVar20;
      }
      if ((uVar34 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      uVar34 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar22 * 0xc + 4);
      uVar17 = 0;
      if ((int)uVar34 < local_2d0->ArrayNum) {
        uVar17 = ~uVar34 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      pTVar14 = local_2d0;
      local_2c0 = (double)((longlong)(int)uVar34 * 3);
      local_2c8 = local_2d0->DataPtr;
      uVar34 = 0;
      if ((int)uVar3 < (this->MElements).ArrayNum) {
        uVar34 = uVar20;
      }
      if ((uVar34 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      uVar34 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar22 * 0xc + 8);
      uVar20 = 0;
      if ((int)uVar34 < pTVar14->ArrayNum) {
        uVar20 = ~uVar34 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      local_210 = *(double *)(&local_2c8->field_0x0 + (longlong)local_2c0 * 8);
      dStack_208 = *(double *)((longlong)(&local_2c8->field_0x0 + (longlong)local_2c0 * 8) + 8);
      local_218 = *(double *)(&local_2b8->field_0x10 + (longlong)local_2b0 * 8);
      local_228 = *(undefined1 (*) [16])(&local_2b8->field_0x0 + (longlong)local_2b0 * 8);
      local_200 = *(double *)(&local_2c8->field_0x10 + (longlong)local_2c0 * 8);
      pTVar26 = pTVar14->DataPtr;
      local_1e8 = *(double *)&pTVar26[(int)uVar34].field_0x10;
      dVar32 = *(double *)&param_5->field_0x10 - *(double *)&param_4->field_0x10;
      pTVar26 = pTVar26 + (int)uVar34;
      local_1f8 = *(double *)pTVar26;
      dStack_1f0 = *(double *)&pTVar26->field_0x8;
      local_260 = *(double *)&param_5->field_0x8;
      dVar2 = *(double *)param_4;
      dVar30 = local_260 - *(double *)&param_4->field_0x8;
      dVar35 = *(double *)param_5 - dVar2;
      auVar23._0_8_ = dVar30 * dVar30;
      auVar23._8_8_ = 0;
      dVar28 = dVar35 * dVar35 + auVar23._0_8_ + dVar32 * dVar32;
      pTVar26 = local_2b8;
      local_1a8 = local_210;
      dStack_1a0 = dStack_208;
      if ((double)CONCAT44(uVar38,uVar37) <= dVar28) break;
LAB_143dd093d:
      local_2b8 = pTVar26;
      uVar19 = (ulonglong)local_2a4;
      FVar21.Data = local_288 + 4;
      local_2b0 = dVar2;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar28;
    auVar24 = sqrtpd(auVar23,auVar7);
    local_268 = local_200 - local_218;
    local_280 = auVar24._0_8_;
    pTVar26 = (TVector<double,3> *)(dVar13 / local_280);
    local_270 = local_210 - local_228._0_8_;
    auVar12._4_8_ = auVar24._8_8_;
    auVar12._0_4_ = local_228._4_4_;
    auVar25._0_8_ = auVar12._0_8_ << 0x20;
    auVar25._8_4_ = local_228._8_4_;
    auVar25._12_4_ = local_228._12_4_;
    local_1c8 = auVar25._8_8_;
    uStack_1c0 = local_228._8_8_;
    local_1b8 = dStack_208 - local_1c8;
    local_278 = local_1e8 - local_218;
    dVar11 = local_1f8 - local_228._0_8_;
    dVar8 = dStack_1f0 - local_1c8;
    dVar9 = local_1b8 * local_278 - local_268 * dVar8;
    dVar28 = local_268 * dVar11 - local_278 * local_270;
    local_258 = local_1b8 * dVar11;
    dVar10 = dVar8 * local_270 - local_258;
    uVar34 = (uint)__xmm_80000000000000008000000000000000;
    uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_2c8 = (TVector<double,3> *)
                CONCAT44((uint)((ulonglong)((double)pTVar26 * dVar35) >> 0x20) ^ uVar20,
                         SUB84((double)pTVar26 * dVar35,0) ^ uVar34);
    local_2c0 = (double)CONCAT44((uint)((ulonglong)((double)pTVar26 * dVar30) >> 0x20) ^ uVar20,
                                 SUB84((double)pTVar26 * dVar30,0) ^ uVar34);
    local_290 = (double)CONCAT44((uint)((ulonglong)((double)pTVar26 * dVar32) >> 0x20) ^ uVar20,
                                 SUB84((double)pTVar26 * dVar32,0) ^ uVar34);
    dVar32 = local_2c0 * dVar28 + (double)local_2c8 * dVar9 + local_290 * dVar10;
    uVar37 = SUB84(__real_3e45798ee0000000,0);
    uVar38 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    dStack_1b0 = dStack_208;
    if ((double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3e45798ee0000000) goto LAB_143dd093d;
    dVar35 = dVar2 - *(double *)(&local_2b8->field_0x0 + (longlong)local_2b0 * 8);
    dVar31 = *(double *)&param_4->field_0x10 - local_218;
    dVar32 = dVar13 / dVar32;
    dVar30 = *(double *)&param_4->field_0x8 - local_1c8;
    dVar36 = (dVar30 * dVar28 + dVar35 * dVar9 + dVar31 * dVar10) * dVar32;
    if ((dVar36 < __real_0000000000000000) || (local_280 < dVar36)) goto LAB_143dd093d;
    dVar27 = local_290 * dVar35 - dVar31 * (double)local_2c8;
    dVar31 = dVar31 * local_2c0 - dVar30 * local_290;
    dVar30 = dVar30 * (double)local_2c8 - local_2c0 * dVar35;
    dVar35 = (dVar27 * dVar8 + dVar11 * dVar31 + dVar30 * local_278) * dVar32;
    if ((dVar35 < __real_8000000000000000) ||
       (((dVar13 < dVar35 ||
         (dVar32 = (dVar31 * local_270 + local_1b8 * dVar27 + local_268 * dVar30) * dVar32,
         __real_0000000000000000 < dVar32)) || (dVar13 < dVar35 - dVar32)))) goto LAB_143dd093d;
    dStack_130 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar20,
                                  SUB84(dVar32,0) ^ uVar34);
    dVar28 = dVar28 * dVar28 + dVar9 * dVar9 + dVar10 * dVar10;
    if ((dVar28 != dVar13) && (__real_3e45798ee0000000 <= dVar28)) {
      local_1d8 = dVar13 / SQRT(dVar28);
    }
    local_148 = dVar36 * (double)pTVar26;
    dVar28 = dVar13 - local_148;
    local_158 = CONCAT31(local_158._1_3_,3);
    iStack_154 = local_2a8;
    dStack_140 = (dVar13 - dVar35) - dStack_130;
    local_128 = *(double *)param_5 * local_148 + dVar2 * dVar28;
    local_118 = *(double *)&param_5->field_0x10 * local_148 +
                dVar28 * *(double *)&param_4->field_0x10;
    dStack_120 = dVar28 * *(double *)&param_4->field_0x8 + local_260 * local_148;
    dVar28 = local_210 - *(double *)(&local_2b8->field_0x0 + (longlong)local_2b0 * 8);
    dVar32 = local_268 * dVar11 - local_278 * dVar28;
    dVar28 = dVar8 * dVar28 - local_258;
    dVar30 = dVar32 * dVar32 + dVar9 * dVar9 + dVar28 * dVar28;
    dStack_110 = dVar9;
    local_108 = dVar32;
    dStack_100 = dVar28;
    if ((dVar30 != dVar13) &&
       (dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar30)) {
      local_1d0 = dVar13 / SQRT(dVar30);
      dStack_110 = dVar9 * local_1d0;
      local_108 = dVar32 * local_1d0;
      dStack_100 = dVar28 * local_1d0;
    }
    pFVar4 = (param_7->AllocatorInstance).Data;
    piVar1 = &param_7->ArrayMax;
    local_f8 = 0;
    local_2b8 = pTVar26;
    local_2b0 = dVar2;
    uStack_150 = uVar3;
    local_138 = dVar35;
    if (((pFVar4 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 < pFVar4 + (longlong)*piVar1 * 0x70)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    iVar18 = param_7->ArrayNum;
    if (iVar18 == *piVar1) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_7->AllocatorInstance,piVar1);
    }
    param_7->ArrayNum = iVar18 + 1;
    lVar22 = (longlong)iVar18 * 0x70;
    pFVar4 = (param_7->AllocatorInstance).Data;
    FVar21.Data = local_288 + 4;
    *(ulonglong *)(pFVar4 + lVar22) = CONCAT44(iStack_154,local_158);
    *(ulonglong *)(pFVar4 + lVar22 + 8) = CONCAT44(uStack_14c,uStack_150);
    *(double *)(pFVar4 + lVar22 + 0x10) = local_148;
    *(double *)(pFVar4 + lVar22 + 0x10 + 8) = dStack_140;
    *(double *)(pFVar4 + lVar22 + 0x20) = local_138;
    *(double *)(pFVar4 + lVar22 + 0x20 + 8) = dStack_130;
    *(double *)(pFVar4 + lVar22 + 0x30) = local_128;
    *(double *)(pFVar4 + lVar22 + 0x30 + 8) = dStack_120;
    *(double *)(pFVar4 + lVar22 + 0x40) = local_118;
    *(double *)(pFVar4 + lVar22 + 0x40 + 8) = dStack_110;
    *(double *)(pFVar4 + lVar22 + 0x50) = local_108;
    *(double *)(pFVar4 + lVar22 + 0x50 + 8) = dStack_100;
    *(undefined8 *)(pFVar4 + lVar22 + 0x60) = local_f8;
    *(undefined8 *)(pFVar4 + lVar22 + 0x60 + 8) = uStack_f0;
    uVar19 = (ulonglong)local_2a4;
  } while( true );
}

// GetFaceNormals<float> @ 143dd9730

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetFaceNormals<float>
          (FTriangleMesh *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,bool param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetFaceNormals<float>(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetFaceNormals<float> @ 143dd9760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FTriangleMesh::GetFaceNormals<float>
          (FTriangleMesh *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  TVector<float,3> *pTVar2;
  TVector<float,3> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 local_a7;
  undefined1 local_a6 [2];
  uint local_a4;
  FScriptContainerElement *local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_8c;
  float local_84;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::FTriangleMesh::GetFaceNormals<float>(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>&___ptr64,TArrayView<Chaos::TVector<float,3>_const_,int>_const&___ptr64,bool)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId403,"FTriangleMesh_GetFaceNormals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
               ,0x193);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::FTriangleMesh::GetFaceNormals<float>(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>&___ptr64,TArrayView<Chaos::TVector<float,3>_const_,int>_const&___ptr64,bool)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId403);
  }
  uVar10 = (this->MElements).ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  if (param_3) {
    local_a4 = (this->MElements).ArrayNum;
    uVar14 = (ulonglong)(int)local_a4;
    pFVar15 = (this->MElements).AllocatorInstance.Data;
    local_a0 = pFVar15 + uVar14 * 0xc;
    while( true ) {
      pFVar4 = local_a0;
      if ((this->MElements).ArrayNum != (int)uVar14) {
        local_a7 = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_a7);
      }
      if (pFVar15 == pFVar4) goto LAB_143dd9f86;
      uVar10 = *(uint *)(pFVar15 + 4);
      uVar11 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = param_2->DataPtr;
      uVar11 = *(uint *)pFVar15;
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = param_2->DataPtr;
      uVar9 = *(uint *)(pFVar15 + 8);
      fVar18 = *(float *)(pTVar2 + (int)uVar10);
      fVar24 = *(float *)&pTVar2[(int)uVar10].field_0x8 - *(float *)&pTVar3[(int)uVar11].field_0x8;
      fVar25 = *(float *)&pTVar2[(int)uVar10].field_0x4 - *(float *)&pTVar3[(int)uVar11].field_0x4;
      fVar20 = *(float *)(pTVar3 + (int)uVar11);
      uVar10 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = param_2->DataPtr;
      uVar10 = *(uint *)pFVar15;
      uVar11 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = param_2->DataPtr;
      fVar19 = *(float *)&pTVar2[(int)uVar9].field_0x8 - *(float *)&pTVar3[(int)uVar10].field_0x8;
      fVar17 = *(float *)&pTVar2[(int)uVar9].field_0x4 - *(float *)&pTVar3[(int)uVar10].field_0x4;
      fVar22 = fVar17 * fVar24 - fVar19 * fVar25;
      fVar24 = fVar19 * (fVar18 - fVar20) -
               (*(float *)(pTVar2 + (int)uVar9) - *(float *)(pTVar3 + (int)uVar10)) * fVar24;
      fVar20 = (*(float *)(pTVar2 + (int)uVar9) - *(float *)(pTVar3 + (int)uVar10)) * fVar25 -
               fVar17 * (fVar18 - fVar20);
      fVar18 = fVar24 * fVar24 + fVar22 * fVar22 + fVar20 * fVar20;
      if (fVar18 < fVar6) break;
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_90 = fVar7 / SQRT(fVar18);
      local_98 = local_90 * fVar22;
      fStack_94 = local_90 * fVar24;
      local_90 = local_90 * fVar20;
      if (((pFVar4 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)*piVar1 * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      pFVar15 = pFVar15 + 0xc;
      param_1->ArrayNum = iVar12 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data;
      *(ulonglong *)(pFVar4 + (longlong)iVar12 * 0xc) = CONCAT44(fStack_94,local_98);
      *(float *)(pFVar4 + (longlong)iVar12 * 0xc + 8) = local_90;
      uVar14 = (ulonglong)local_a4;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2156827753079374240>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                       ,0x1a0,"false");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else if (bChaos_TriangleMesh_ISPC_Enabled == false) {
    iVar12 = (this->MElements).ArrayNum;
    pFVar15 = (this->MElements).AllocatorInstance.Data;
    local_a0 = pFVar15 + (longlong)iVar12 * 0xc;
    while( true ) {
      pFVar4 = local_a0;
      if ((this->MElements).ArrayNum != iVar12) {
        local_a6[0] = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_a6);
      }
      if (pFVar15 == pFVar4) break;
      uVar10 = *(uint *)(pFVar15 + 4);
      uVar11 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = param_2->DataPtr;
      uVar11 = *(uint *)pFVar15;
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = param_2->DataPtr;
      uVar9 = *(uint *)(pFVar15 + 8);
      fVar18 = *(float *)(pTVar2 + (int)uVar10);
      fVar25 = *(float *)&pTVar2[(int)uVar10].field_0x8 - *(float *)&pTVar3[(int)uVar11].field_0x8;
      fVar24 = *(float *)&pTVar2[(int)uVar10].field_0x4 - *(float *)&pTVar3[(int)uVar11].field_0x4;
      fVar20 = *(float *)(pTVar3 + (int)uVar11);
      uVar10 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = param_2->DataPtr;
      uVar10 = *(uint *)pFVar15;
      uVar11 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = param_2->DataPtr;
      fVar17 = *(float *)&pTVar2[(int)uVar9].field_0x8 - *(float *)&pTVar3[(int)uVar10].field_0x8;
      fVar19 = *(float *)&pTVar2[(int)uVar9].field_0x4 - *(float *)&pTVar3[(int)uVar10].field_0x4;
      fVar22 = (fVar18 - fVar20) * fVar17 -
               fVar25 * (*(float *)(pTVar2 + (int)uVar9) - *(float *)(pTVar3 + (int)uVar10));
      fVar25 = fVar25 * fVar19 - fVar24 * fVar17;
      fVar20 = fVar24 * (*(float *)(pTVar2 + (int)uVar9) - *(float *)(pTVar3 + (int)uVar10)) -
               (fVar18 - fVar20) * fVar19;
      fVar18 = fVar22 * fVar22 + fVar25 * fVar25 + fVar20 * fVar20;
      uVar21 = fVar25;
      uVar23 = fVar22;
      local_84 = fVar20;
      if ((fVar18 != fVar7) &&
         (uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
         uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
         local_84 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar6 <= fVar18)) {
        fVar18 = fVar7 / SQRT(fVar18);
        uVar21 = fVar25 * fVar18;
        uVar23 = fVar22 * fVar18;
        local_84 = fVar20 * fVar18;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_8c = CONCAT44(uVar23,uVar21);
      if (((pFVar4 <= (FScriptContainerElement *)&local_8c) &&
          ((FScriptContainerElement *)&local_8c < pFVar4 + (longlong)*piVar1 * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = param_1->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      pFVar15 = pFVar15 + 0xc;
      param_1->ArrayNum = iVar13 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar13 * 0xc) = local_8c;
      *(float *)(pFVar4 + (longlong)iVar13 * 0xc + 8) = local_84;
    }
  }
  else {
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1,(this->MElements).ArrayNum,Default);
    GetFaceNormals((param_1->AllocatorInstance).Data,param_2->DataPtr,
                   (this->MElements).AllocatorInstance.Data,(this->MElements).ArrayNum);
  }
LAB_143dd9f86:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFaceNormals<double> @ 143dd9ff0

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetFaceNormals<double>
          (FTriangleMesh *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,bool param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetFaceNormals<double>(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetFaceNormals<double> @ 143dda020

void __thiscall
Chaos::FTriangleMesh::GetFaceNormals<double>
          (FTriangleMesh *this,TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1
          ,TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double,3> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  TVector<double,3> *local_e0;
  uint local_d8;
  FScriptContainerElement *local_d0;
  undefined8 local_c8;
  float local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::FTriangleMesh::GetFaceNormals<double>(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,bool)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId403,"FTriangleMesh_GetFaceNormals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
               ,0x193);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::FTriangleMesh::GetFaceNormals<double>(TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>&___ptr64,TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,bool)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId403);
  }
  uVar15 = (this->MElements).ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar15,&param_1->AllocatorInstance,0,piVar1);
  }
  fVar11 = __real_3f800000;
  dVar4 = __real_3e45798ee0000000;
  fVar10 = __real_322bcc77;
  dVar3 = __real_3ff0000000000000;
  local_d8 = (this->MElements).ArrayNum;
  uVar18 = (ulonglong)(int)local_d8;
  pFVar19 = (this->MElements).AllocatorInstance.Data;
  local_d0 = pFVar19 + uVar18 * 0xc;
  if (param_3) {
    while( true ) {
      if ((this->MElements).ArrayNum != (int)uVar18) {
        local_e8 = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_e8);
      }
      if (pFVar19 == local_d0) goto LAB_143dda4a8;
      uVar15 = *(uint *)(pFVar19 + 4);
      uVar13 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
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
      local_e0 = param_2->DataPtr;
      uVar13 = *(uint *)pFVar19;
      uVar14 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar5 = param_2->DataPtr;
      uVar14 = *(uint *)(pFVar19 + 8);
      dVar27 = *(double *)&local_e0[(int)uVar15].field_0x10 -
               *(double *)&pTVar5[(int)uVar13].field_0x10;
      dVar9 = *(double *)&local_e0[(int)uVar15].field_0x8 -
              *(double *)&pTVar5[(int)uVar13].field_0x8;
      dVar2 = *(double *)(local_e0 + (int)uVar15);
      dVar24 = *(double *)(pTVar5 + (int)uVar13);
      uVar15 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
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
      local_e0 = param_2->DataPtr;
      uVar15 = *(uint *)pFVar19;
      uVar13 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
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
      pTVar5 = param_2->DataPtr;
      dVar22 = *(double *)&local_e0[(int)uVar14].field_0x10 -
               *(double *)&pTVar5[(int)uVar15].field_0x10;
      dVar25 = *(double *)&local_e0[(int)uVar14].field_0x8 -
               *(double *)&pTVar5[(int)uVar15].field_0x8;
      dVar29 = (dVar2 - dVar24) * dVar22 -
               dVar27 * (*(double *)(local_e0 + (int)uVar14) - *(double *)(pTVar5 + (int)uVar15));
      dVar27 = dVar27 * dVar25 - dVar9 * dVar22;
      dVar2 = dVar9 * (*(double *)(local_e0 + (int)uVar14) - *(double *)(pTVar5 + (int)uVar15)) -
              (dVar2 - dVar24) * dVar25;
      dVar24 = dVar29 * dVar29 + dVar27 * dVar27 + dVar2 * dVar2;
      if (dVar24 < dVar4) break;
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_88 = dVar3 / SQRT(dVar24);
      local_b8 = local_88 * dVar27;
      dStack_b0 = local_88 * dVar29;
      local_a8 = local_88 * dVar2;
      if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
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
      iVar16 = param_1->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,piVar1);
      }
      uVar18 = (ulonglong)local_d8;
      pFVar19 = pFVar19 + 0xc;
      param_1->ArrayNum = iVar16 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar16 * 0x18;
      *(double *)pFVar6 = local_b8;
      *(double *)(pFVar6 + 8) = dStack_b0;
      *(double *)(pFVar7 + (longlong)iVar16 * 0x18 + 0x10) = local_a8;
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2156827753079374240>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                        ,0x1a0,"false");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    while( true ) {
      if ((this->MElements).ArrayNum != (int)uVar18) {
        local_e7[0] = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_e7);
      }
      if (pFVar19 == local_d0) break;
      uVar15 = *(uint *)(pFVar19 + 4);
      uVar13 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
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
      local_e0 = param_2->DataPtr;
      uVar13 = *(uint *)pFVar19;
      uVar14 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar5 = param_2->DataPtr;
      uVar14 = *(uint *)(pFVar19 + 8);
      dVar3 = *(double *)(local_e0 + (int)uVar15);
      dVar4 = *(double *)(pTVar5 + (int)uVar13);
      fVar30 = (float)(*(double *)&local_e0[(int)uVar15].field_0x8 -
                      *(double *)&pTVar5[(int)uVar13].field_0x8);
      uVar17 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      fVar31 = (float)(*(double *)&local_e0[(int)uVar15].field_0x10 -
                      *(double *)&pTVar5[(int)uVar13].field_0x10);
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_e0 = param_2->DataPtr;
      uVar15 = *(uint *)pFVar19;
      uVar13 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
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
      pTVar5 = param_2->DataPtr;
      fVar23 = (float)(*(double *)&local_e0[(int)uVar14].field_0x10 -
                      *(double *)&pTVar5[(int)uVar15].field_0x10);
      uVar26 = fVar23 * (float)(dVar3 - dVar4) -
               (float)(*(double *)(local_e0 + (int)uVar14) - *(double *)(pTVar5 + (int)uVar15)) *
               fVar31;
      fVar21 = (float)(*(double *)&local_e0[(int)uVar14].field_0x8 -
                      *(double *)&pTVar5[(int)uVar15].field_0x8);
      local_c0 = (float)(*(double *)(local_e0 + (int)uVar14) - *(double *)(pTVar5 + (int)uVar15)) *
                 fVar30 - fVar21 * (float)(dVar3 - dVar4);
      uVar28 = fVar21 * fVar31 - fVar23 * fVar30;
      fVar30 = (float)uVar28 * (float)uVar28 + (float)uVar26 * (float)uVar26 + local_c0 * local_c0;
      if (fVar30 == fVar11) {
LAB_143dda7a1:
        local_c8 = CONCAT44(uVar26,(undefined4)local_c8);
      }
      else {
        if (fVar10 <= fVar30) {
          fVar30 = fVar11 / SQRT(fVar30);
          uVar26 = (float)uVar26 * fVar30;
          local_c0 = local_c0 * fVar30;
          uVar28 = (float)uVar28 * fVar30;
          goto LAB_143dda7a1;
        }
        local_c8 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
        uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_a0 = (double)(float)uVar28;
      dStack_98 = (double)(float)uVar26;
      local_90 = (double)local_c0;
      if (((pFVar6 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
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
      iVar16 = param_1->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,piVar1);
      }
      uVar18 = (ulonglong)local_d8;
      pFVar19 = pFVar19 + 0xc;
      param_1->ArrayNum = iVar16 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar16 * 0x18;
      *(double *)pFVar6 = local_a0;
      *(double *)(pFVar6 + 8) = dStack_98;
      *(double *)(pFVar7 + (longlong)iVar16 * 0x18 + 0x10) = local_90;
    }
  }
LAB_143dda4a8:
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetPointNormals<float> @ 143ddadf0

void __thiscall
Chaos::FTriangleMesh::GetPointNormals<float>
          (FTriangleMesh *this,TArrayView<Chaos::TVector<float,3>,int> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,bool param_3)

{
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetPointNormals(this,&local_18,param_2,param_3);
  return;
}

// GetPointNormals<double> @ 143ddae20

void __thiscall
Chaos::FTriangleMesh::GetPointNormals<double>
          (FTriangleMesh *this,TArrayView<Chaos::TVector<double,3>,int> *param_1,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TVector<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  uint local_c4;
  double local_a8;
  
  if (((this->MPointToTriangleMap).ArrayNum == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MPointToTriangleMap.Num() != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                          ,0x1e6,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::FTriangleMesh::GetPointNormals<double>(TArrayView<Chaos::TVector<double,3>,int>,TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,bool)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId487,"FTriangleMesh_GetPointNormals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::FTriangleMesh::GetPointNormals<double>(TArrayView<Chaos::TVector<double,3>,int>,TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,bool)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId487);
  }
  dVar11 = __real_3e45798ee0000000;
  dVar10 = __real_3ff0000000000000;
  iVar16 = this->MNumIndices;
  local_c4 = 0;
  if (0 < iVar16) {
    lVar20 = 0;
    do {
      uVar18 = local_c4;
      if (param_3) {
        iVar1 = this->MStartIdx;
        uVar18 = iVar1 + local_c4;
        if ((((int)uVar18 < iVar1) || (iVar1 + iVar16 <= (int)uVar18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GlobalIdx >= MStartIdx && GlobalIdx < MStartIdx + MNumIndices",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                                ,0x163,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      dVar6 = 0.0;
      dVar8 = 0.0;
      dVar21 = 0.0;
      uVar17 = 0;
      if ((int)local_c4 < (this->MPointToTriangleMap).ArrayNum) {
        uVar17 = ~local_c4 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->MPointToTriangleMap).AllocatorInstance.Data;
      uVar17 = 0;
      iVar16 = *(int *)(pFVar2 + lVar20 + 8);
      local_a8 = 0.0;
      uVar7 = 0.0;
      uVar9 = 0.0;
      if (0 < iVar16) {
        lVar19 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar17 < iVar16) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((-1 < *(int *)(lVar19 + *(longlong *)(pFVar2 + lVar20))) &&
             (*(int *)(lVar19 + *(longlong *)(pFVar2 + lVar20)) < param_2->ArrayNum)) {
            uVar14 = 0;
            if ((int)uVar17 < *(int *)(pFVar2 + lVar20 + 8)) {
              uVar14 = ~uVar17 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar14 = *(uint *)(lVar19 + *(longlong *)(pFVar2 + lVar20));
            uVar15 = 0;
            if ((int)uVar14 < param_2->ArrayNum) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar3 = param_2->DataPtr;
            dVar6 = dVar6 + *(double *)(pTVar3 + (int)uVar14);
            dVar8 = dVar8 + *(double *)&pTVar3[(int)uVar14].field_0x8;
            dVar21 = dVar21 + *(double *)&pTVar3[(int)uVar14].field_0x10;
          }
          iVar16 = *(int *)(pFVar2 + lVar20 + 8);
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 4;
          local_a8 = dVar21;
          uVar7 = dVar6;
          uVar9 = dVar8;
        } while ((int)uVar17 < iVar16);
      }
      dVar21 = (double)uVar9 * (double)uVar9 + (double)uVar7 * (double)uVar7 + local_a8 * local_a8;
      if (dVar21 != dVar10) {
        if (dVar11 <= dVar21) {
          dVar21 = dVar10 / SQRT(dVar21);
          uVar7 = (double)uVar7 * dVar21;
          uVar9 = (double)uVar9 * dVar21;
          local_a8 = local_a8 * dVar21;
        }
        else {
          local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      uVar17 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c4 = local_c4 + 1;
      lVar20 = lVar20 + 0x10;
      pTVar3 = param_1->DataPtr;
      auVar5._8_4_ = (int)uVar9;
      auVar5._0_8_ = uVar7;
      auVar5._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
      *(undefined1 (*) [16])(pTVar3 + (int)uVar18) = auVar5;
      *(double *)&pTVar3[(int)uVar18].field_0x10 = local_a8;
      iVar16 = this->MNumIndices;
    } while ((int)local_c4 < iVar16);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PointProximityQuery<float> @ 143de31c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::PointProximityQuery<float>
          (FTriangleMesh *this,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_1,TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,float param_5,float param_6,
          TFunctionRef<bool___cdecl(int,int)> *param_7,
          TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  TVector<float,3> *pTVar2;
  TVector<float,3> *pTVar3;
  uint uVar4;
  code *pcVar5;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [4];
  int local_264;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_260;
  float local_258;
  float fStack_254;
  float local_250;
  TArray<int,TSizedDefaultAllocator<32>_> local_248;
  uint local_238 [2];
  int local_230 [2];
  float local_228;
  uint local_224;
  TFunctionRef<bool___cdecl(int,int)> *local_220;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  TVector<float,3> local_208;
  FSimpleVisitor local_1f8;
  TVector<float,3> *local_1f0;
  TVector<float,3> *local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  TVector<double,3> local_1b0;
  TVector<double,3> local_198;
  undefined1 local_178 [16];
  longlong lStack_168;
  longlong local_160;
  bool local_148 [8];
  TVector<double,3> local_140;
  undefined4 local_128;
  int iStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  TVector<float,3> local_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  fVar21 = param_5 + param_6;
  local_178._0_8_ = &local_140;
  local_1f0 = param_4;
  local_1f8.CollectedResults = &local_248;
  local_1b8 = (double)fVar21;
  local_160 = 0;
  local_148[0] = false;
  local_148[1] = false;
  local_148[2] = false;
  local_1b0._16_8_ = 0;
  fVar21 = fVar21 * fVar21;
  local_198._16_8_ = 0;
  local_220 = param_7;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_1e0 = (double)*(float *)param_4 - local_1b8;
  local_1d8 = (double)*(float *)&param_4->field_0x4 - local_1b8;
  local_1d0 = (double)*(float *)&param_4->field_0x8 - local_1b8;
  local_1c8 = local_1b8 + (double)*(float *)param_4;
  local_1c0 = local_1b8 + (double)*(float *)&param_4->field_0x4;
  local_1b8 = local_1b8 + (double)*(float *)&param_4->field_0x8;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  local_178._8_8_ = 0;
  lStack_168 = 0;
  local_1b0._0_8_ = 0;
  local_1b0._8_8_ = 0;
  local_264 = param_3;
  local_260 = param_2;
  local_228 = fVar21;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
            (param_1,&local_198,(FQueryFastDataVoid *)local_178,&local_1b0,
             (TAABB<double,3> *)&local_1e0,&local_1f8,(TVector<double,3> *)local_178._0_8_,
             (TVector<double,3> *)(local_178 + 8),local_148);
  uVar15 = local_248._8_8_ & 0xffffffff;
  if (local_248.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  param_8->ArrayNum = 0;
  if (param_8->ArrayMax < local_248.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,local_248.ArrayNum,&param_8->AllocatorInstance,0,&param_8->ArrayMax);
    uVar15 = local_248._8_8_ & 0xffffffff;
  }
  local_224 = (uint)uVar15;
  uVar16 = (ulonglong)(int)local_224;
  pFVar18 = local_248.AllocatorInstance.Data + uVar16 * 4;
  FVar19.Data = local_248.AllocatorInstance.Data;
  local_218 = pFVar18;
  do {
    local_210 = FVar19.Data;
    if ((int)uVar15 != (int)uVar16) {
      local_268[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_268);
    }
    if (FVar19.Data == pFVar18) {
      iVar14 = param_8->ArrayNum;
      if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.AllocatorInstance.Data);
      }
      return 0 < iVar14;
    }
    uVar4 = *(uint *)FVar19.Data;
    lVar20 = (longlong)(int)uVar4;
    local_238[0] = uVar4;
    local_230[0] = param_3;
    cVar9 = (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,local_230,local_238);
    if (cVar9 != '\0') {
      uVar17 = ~uVar4 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar12 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar20 * 0xc);
      uVar13 = 0;
      if ((int)uVar12 < local_260->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      local_1e8 = local_260->DataPtr + (int)uVar12;
      uVar12 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar12 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar20 * 0xc + 4);
      uVar13 = 0;
      if ((int)uVar12 < local_260->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pTVar2 = local_260->DataPtr + (int)uVar12;
      uVar12 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pTVar6 = local_260;
      uVar12 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar20 * 0xc + 8);
      uVar17 = 0;
      if ((int)uVar12 < local_260->ArrayNum) {
        uVar17 = ~uVar12 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pTVar8 = local_1e8;
      pTVar7 = local_1f0;
      pTVar3 = pTVar6->DataPtr + (int)uVar12;
      FindClosestPointAndBaryOnTriangle<float,3>
                ((TVector<float,3> *)&local_258,local_1e8,pTVar2,pTVar3,local_1f0,&local_208);
      param_3 = local_264;
      fVar22 = *(float *)&pTVar7->field_0x4 - fStack_254;
      fVar29 = *(float *)pTVar7 - local_258;
      fVar23 = *(float *)&pTVar7->field_0x8 - local_250;
      fVar22 = fVar29 * fVar29 + fVar22 * fVar22 + fVar23 * fVar23;
      pFVar18 = local_218;
      param_7 = local_220;
      if (fVar22 <= fVar21) {
        fVar21 = *(float *)&pTVar8->field_0x8;
        fVar23 = *(float *)&pTVar8->field_0x4;
        fVar27 = *(float *)&pTVar2->field_0x8 - fVar21;
        fVar29 = *(float *)pTVar8;
        fVar24 = *(float *)&pTVar2->field_0x4 - fVar23;
        fVar25 = *(float *)&pTVar3->field_0x8 - fVar21;
        fVar26 = *(float *)&pTVar3->field_0x4 - fVar23;
        fVar28 = fVar24 * fVar25 - fVar27 * fVar26;
        fVar25 = fVar27 * (*(float *)pTVar3 - fVar29) - (*(float *)pTVar2 - fVar29) * fVar25;
        fVar26 = (*(float *)pTVar2 - fVar29) * fVar26 - fVar24 * (*(float *)pTVar3 - fVar29);
        fVar24 = fVar25 * fVar25 + fVar28 * fVar28 + fVar26 * fVar26;
        local_f8 = fVar26;
        fStack_100 = fVar28;
        fStack_fc = fVar25;
        if ((fVar24 != __real_3f800000) &&
           (local_f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
           fStack_100 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           fStack_fc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           __real_322bcc77 <= fVar24)) {
          fVar24 = __real_3f800000 / SQRT(fVar24);
          local_f8 = fVar24 * fVar26;
          fStack_100 = fVar24 * fVar28;
          fStack_fc = fVar24 * fVar25;
        }
        if ((*(float *)&pTVar7->field_0x4 - fVar23) * fStack_fc +
            (*(float *)pTVar7 - fVar29) * fStack_100 +
            (*(float *)&pTVar7->field_0x8 - fVar21) * local_f8 <= __real_00000000) {
          fStack_100 = (float)((uint)fStack_100 ^ __xmm_80000000800000008000000080000000);
          fStack_fc = (float)((uint)fStack_fc ^ __xmm_80000000800000008000000080000000);
          local_f8 = (float)((uint)local_f8 ^ __xmm_80000000800000008000000080000000);
        }
        piVar1 = &param_8->ArrayMax;
        pFVar18 = (param_8->AllocatorInstance).Data;
        local_118._0_4_ = local_208._0_4_;
        local_118._8_4_ = local_208._8_4_;
        local_118._4_4_ = local_208._4_4_;
        fStack_f4 = SQRT(fVar22);
        local_128 = CONCAT31(local_128._1_3_,1);
        iStack_124 = local_264;
        uStack_11c = 0x3f800000;
        fStack_104 = local_250;
        fStack_10c = local_258;
        fStack_108 = fStack_254;
        uStack_120 = uVar4;
        if (((pFVar18 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar18 + (longlong)*piVar1 * 0x38)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar14 = param_8->ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x438,&param_8->AllocatorInstance,piVar1);
        }
        param_8->ArrayNum = iVar14 + 1;
        lVar20 = (longlong)iVar14 * 0x38;
        pFVar18 = (param_8->AllocatorInstance).Data;
        *(ulonglong *)(pFVar18 + lVar20) = CONCAT44(iStack_124,local_128);
        *(ulonglong *)(pFVar18 + lVar20 + 8) = CONCAT44(uStack_11c,uStack_120);
        *(ulonglong *)(pFVar18 + lVar20 + 0x10) = CONCAT44(local_118._4_4_,local_118._0_4_);
        *(ulonglong *)(pFVar18 + lVar20 + 0x10 + 8) = CONCAT44(fStack_10c,local_118._8_4_);
        *(ulonglong *)(pFVar18 + lVar20 + 0x20) = CONCAT44(fStack_104,fStack_108);
        *(ulonglong *)(pFVar18 + lVar20 + 0x20 + 8) = CONCAT44(fStack_fc,fStack_100);
        *(ulonglong *)(pFVar18 + lVar20 + 0x30) = CONCAT44(fStack_f4,local_f8);
        pFVar18 = local_218;
        param_7 = local_220;
        fVar21 = local_228;
      }
    }
    uVar15 = local_248._8_8_ & 0xffffffff;
    FVar19.Data = local_210 + 4;
    uVar16 = (ulonglong)local_224;
  } while( true );
}

// PointProximityQuery<float> @ 143de3a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::PointProximityQuery<float>
          (FTriangleMesh *this,THierarchicalSpatialHash<int,float> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,float param_5,float param_6,
          TFunctionRef<bool___cdecl(int,int)> *param_7,
          TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  TVector<float,3> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar6;
  FTriangleMesh *pFVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8 [8];
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_1d0;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  int local_1b8;
  float local_1b4;
  uint local_1b0;
  FTriangleMesh *local_1a8;
  TVector<float,3> *local_1a0;
  FScriptContainerElement *local_198;
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  TVector<float,3> local_180;
  TVector<float,3> *local_170;
  TVector<float,3> *local_168;
  FScriptContainerElement *local_160;
  int local_158 [2];
  TFunctionRef<bool___cdecl(int,int)> *local_150;
  code *local_148;
  int *local_140;
  __m128 local_138;
  undefined1 local_128 [16];
  undefined4 local_118;
  int iStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  TVector<float,3> local_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_228;
  fVar21 = param_5 + param_6;
  local_1a0 = param_4;
  fVar25 = fVar21 * fVar21;
  local_150 = param_7;
  local_140 = local_158;
  fVar19 = (float)*(undefined8 *)param_4;
  fVar27 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FTriangleMesh::PointProximityQuery<float>'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_128._4_4_ = fVar21 + fVar27;
  local_128._0_4_ = fVar21 + fVar19;
  local_128._8_4_ = fVar21 + *(float *)&param_4->field_0x8;
  local_128._12_4_ = 0;
  local_138.m128_f32[1] = fVar27 - fVar21;
  local_138.m128_f32[0] = fVar19 - fVar21;
  local_138.m128_f32[2] = *(float *)&param_4->field_0x8 - fVar21;
  local_138.m128_f32[3] = 0.0;
  local_1d0 = param_2;
  local_1b8 = param_3;
  local_1b4 = fVar25;
  local_1a8 = this;
  local_158[0] = param_3;
  THierarchicalSpatialHash<int,float>::FindAllIntersections
            (param_1,&local_190,(FVectorAABB *)&local_138,
             (TFunctionRef<bool___cdecl(int)> *)&local_148);
  iVar14 = local_190.ArrayNum;
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_190._8_8_ & 0xffffffff);
  }
  param_8->ArrayNum = 0;
  if (param_8->ArrayMax < iVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,iVar14,&param_8->AllocatorInstance,0,&param_8->ArrayMax);
  }
  local_1b0 = local_190.ArrayNum;
  uVar15 = (ulonglong)(int)local_1b0;
  local_160 = local_190.AllocatorInstance.Data + uVar15 * 4;
  FVar17.Data = local_190.AllocatorInstance.Data;
  while( true ) {
    pFVar4 = local_160;
    local_198 = FVar17.Data;
    if (local_190.ArrayNum != (int)uVar15) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1d8);
    }
    if (FVar17.Data == pFVar4) {
      iVar14 = param_8->ArrayNum;
      if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
      return 0 < iVar14;
    }
    uVar3 = *(uint *)FVar17.Data;
    lVar18 = (longlong)(int)uVar3;
    uVar16 = ~uVar3 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar3 < (this->MElements).ArrayNum) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    uVar12 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar18 * 0xc);
    uVar13 = 0;
    if ((int)uVar12 < local_1d0->ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pFVar7 = local_1a8;
    local_168 = local_1d0->DataPtr + (int)uVar12;
    uVar12 = 0;
    if ((int)uVar3 < (local_1a8->MElements).ArrayNum) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    uVar12 = *(uint *)((pFVar7->MElements).AllocatorInstance.Data + lVar18 * 0xc + 4);
    uVar13 = 0;
    if ((int)uVar12 < local_1d0->ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    this = local_1a8;
    local_170 = local_1d0->DataPtr + (int)uVar12;
    uVar12 = 0;
    if ((int)uVar3 < (local_1a8->MElements).ArrayNum) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pTVar6 = local_1d0;
    uVar12 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar18 * 0xc + 8);
    uVar16 = 0;
    if ((int)uVar12 < local_1d0->ArrayNum) {
      uVar16 = ~uVar12 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pTVar9 = local_168;
    pTVar8 = local_170;
    pTVar2 = pTVar6->DataPtr + (int)uVar12;
    FindClosestPointAndBaryOnTriangle<float,3>
              ((TVector<float,3> *)&local_1c8,local_168,local_170,pTVar2,local_1a0,&local_180);
    fVar21 = *(float *)&local_1a0->field_0x4 - fStack_1c4;
    fVar27 = *(float *)local_1a0 - local_1c8;
    fVar19 = *(float *)&local_1a0->field_0x8 - local_1c0;
    fVar21 = fVar27 * fVar27 + fVar21 * fVar21 + fVar19 * fVar19;
    if (fVar21 <= fVar25) {
      fVar25 = *(float *)&pTVar9->field_0x8;
      fVar19 = *(float *)&pTVar9->field_0x4;
      fVar24 = *(float *)&pTVar8->field_0x8 - fVar25;
      fVar20 = *(float *)&pTVar8->field_0x4 - fVar19;
      fVar27 = *(float *)pTVar9;
      fVar22 = *(float *)&pTVar2->field_0x8 - fVar25;
      fVar23 = *(float *)&pTVar2->field_0x4 - fVar19;
      fVar26 = fVar20 * fVar22 - fVar24 * fVar23;
      fVar22 = fVar24 * (*(float *)pTVar2 - fVar27) - (*(float *)pTVar8 - fVar27) * fVar22;
      fVar23 = (*(float *)pTVar8 - fVar27) * fVar23 - fVar20 * (*(float *)pTVar2 - fVar27);
      fVar20 = fVar22 * fVar22 + fVar26 * fVar26 + fVar23 * fVar23;
      fStack_ec = fVar22;
      local_e8 = fVar23;
      fStack_f0 = fVar26;
      if ((fVar20 != __real_3f800000) &&
         (fStack_ec = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
         local_e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
         fStack_f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
         __real_322bcc77 <= fVar20)) {
        fVar20 = __real_3f800000 / SQRT(fVar20);
        fStack_ec = fVar20 * fVar22;
        local_e8 = fVar20 * fVar23;
        fStack_f0 = fVar20 * fVar26;
      }
      if ((*(float *)local_1a0 - fVar27) * fStack_f0 +
          (*(float *)&local_1a0->field_0x4 - fVar19) * fStack_ec +
          (*(float *)&local_1a0->field_0x8 - fVar25) * local_e8 <= __real_00000000) {
        fStack_f0 = (float)((uint)fStack_f0 ^ __xmm_80000000800000008000000080000000);
        fStack_ec = (float)((uint)fStack_ec ^ __xmm_80000000800000008000000080000000);
        local_e8 = (float)((uint)local_e8 ^ __xmm_80000000800000008000000080000000);
      }
      pFVar4 = (param_8->AllocatorInstance).Data;
      local_108._0_4_ = local_180._0_4_;
      local_108._8_4_ = local_180._8_4_;
      local_108._4_4_ = local_180._4_4_;
      fStack_e4 = SQRT(fVar21);
      iStack_114 = local_1b8;
      piVar1 = &param_8->ArrayMax;
      local_118 = CONCAT31(local_118._1_3_,1);
      uStack_10c = 0x3f800000;
      fStack_f4 = local_1c0;
      fStack_fc = local_1c8;
      fStack_f8 = fStack_1c4;
      uStack_110 = uVar3;
      if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar4 + (longlong)*piVar1 * 0x38)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar14 = param_8->ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x438,&param_8->AllocatorInstance,piVar1);
      }
      param_8->ArrayNum = iVar14 + 1;
      lVar18 = (longlong)iVar14 * 0x38;
      pFVar4 = (param_8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar4 + lVar18) = CONCAT44(iStack_114,local_118);
      *(ulonglong *)(pFVar4 + lVar18 + 8) = CONCAT44(uStack_10c,uStack_110);
      *(ulonglong *)(pFVar4 + lVar18 + 0x10) = CONCAT44(local_108._4_4_,local_108._0_4_);
      *(ulonglong *)(pFVar4 + lVar18 + 0x10 + 8) = CONCAT44(fStack_fc,local_108._8_4_);
      *(ulonglong *)(pFVar4 + lVar18 + 0x20) = CONCAT44(fStack_f4,fStack_f8);
      *(ulonglong *)(pFVar4 + lVar18 + 0x20 + 8) = CONCAT44(fStack_ec,fStack_f0);
      *(ulonglong *)(pFVar4 + lVar18 + 0x30) = CONCAT44(fStack_e4,local_e8);
      fVar25 = local_1b4;
    }
    FVar17.Data = local_198 + 4;
    uVar15 = (ulonglong)local_1b0;
  }
  pcVar5 = (code *)swi(3);
  uVar11 = (*pcVar5)();
  return (bool)uVar11;
}

// PointProximityQuery<double> @ 143de41b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::PointProximityQuery<double>
          (FTriangleMesh *this,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_1,TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,int param_3,
          TVector<double,3> *param_4,double param_5,double param_6,
          TFunctionRef<bool___cdecl(int,int)> *param_7,
          TArray<Chaos::TTriangleCollisionPoint<double>,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  TVector<double,3> *pTVar2;
  TVector<double,3> *pTVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar11;
  TVector<double,3> *pTVar12;
  TVector<double,3> *pTVar13;
  char cVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [4];
  int local_2c4;
  TArrayView<Chaos::TVector<double,3>_const_,int> *local_2c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  uint local_2a8 [2];
  int local_2a0 [2];
  uint local_298;
  TFunctionRef<bool___cdecl(int,int)> *local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  FSimpleVisitor local_230;
  TVector<double,3> *local_228;
  TVector<double,3> *local_220;
  double local_218;
  double local_210 [2];
  ulonglong local_200;
  double local_1f8;
  TVector<double,3> local_1f0;
  TVector<double,3> local_1d8;
  undefined1 local_1b8 [16];
  longlong lStack_1a8;
  longlong local_1a0;
  bool local_188 [8];
  TVector<double,3> local_180;
  undefined4 local_168;
  int iStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  dStack_240 = param_5 + param_6;
  local_1b8._0_8_ = &local_180;
  local_228 = param_4;
  local_230.CollectedResults = &local_2b8;
  local_1a0 = 0;
  local_260 = *(double *)param_4 - dStack_240;
  local_188[0] = false;
  local_188[1] = false;
  local_188[2] = false;
  local_248 = *(double *)param_4 + dStack_240;
  local_1f0._16_8_ = 0;
  local_1d8._16_8_ = 0;
  local_250 = *(double *)&param_4->field_0x10 - dStack_240;
  dVar8 = dStack_240 * dStack_240;
  local_238 = *(double *)&param_4->field_0x10 + dStack_240;
  dStack_258 = *(double *)&param_4->field_0x8 - dStack_240;
  dStack_240 = *(double *)&param_4->field_0x8 + dStack_240;
  local_290 = param_7;
  local_1b8._8_8_ = 0;
  lStack_1a8 = 0;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_8_ = 0;
  local_1f0._8_8_ = 0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_1d8._0_8_ = 0;
  local_1d8._8_8_ = 0;
  local_2c4 = param_3;
  local_2c0 = param_2;
  local_218 = dVar8;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
            (param_1,&local_1d8,(FQueryFastDataVoid *)local_1b8,&local_1f0,
             (TAABB<double,3> *)&local_260,&local_230,(TVector<double,3> *)local_1b8._0_8_,
             (TVector<double,3> *)(local_1b8 + 8),local_188);
  uVar19 = local_2b8._8_8_ & 0xffffffff;
  if (local_2b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  param_8->ArrayNum = 0;
  if (param_8->ArrayMax < local_2b8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,local_2b8.ArrayNum,&param_8->AllocatorInstance,0,&param_8->ArrayMax);
    uVar19 = local_2b8._8_8_ & 0xffffffff;
  }
  local_298 = (uint)uVar19;
  uVar20 = (ulonglong)(int)local_298;
  pFVar22 = local_2b8.AllocatorInstance.Data + uVar20 * 4;
  FVar23.Data = local_2b8.AllocatorInstance.Data;
  local_288 = pFVar22;
  do {
    local_280 = FVar23.Data;
    if ((int)uVar19 != (int)uVar20) {
      local_2c8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2c8);
    }
    if (FVar23.Data == pFVar22) {
      iVar18 = param_8->ArrayNum;
      if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.AllocatorInstance.Data);
      }
      return 0 < iVar18;
    }
    uVar4 = *(uint *)FVar23.Data;
    lVar24 = (longlong)(int)uVar4;
    local_2a8[0] = uVar4;
    local_2a0[0] = param_3;
    cVar14 = (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,local_2a0,local_2a8);
    if (cVar14 != '\0') {
      uVar21 = ~uVar4 >> 0x1f;
      uVar31 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar31 = uVar21;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      uVar31 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar24 * 0xc);
      uVar17 = 0;
      if ((int)uVar31 < local_2c0->ArrayNum) {
        uVar17 = ~uVar31 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      local_220 = local_2c0->DataPtr + (int)uVar31;
      uVar31 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar31 = uVar21;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      uVar31 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar24 * 0xc + 4);
      uVar17 = 0;
      if ((int)uVar31 < local_2c0->ArrayNum) {
        uVar17 = ~uVar31 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      pTVar2 = local_2c0->DataPtr + (int)uVar31;
      uVar31 = 0;
      if ((int)uVar4 < (this->MElements).ArrayNum) {
        uVar31 = uVar21;
      }
      if ((uVar31 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      pTVar11 = local_2c0;
      uVar31 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar24 * 0xc + 8);
      uVar21 = 0;
      if ((int)uVar31 < local_2c0->ArrayNum) {
        uVar21 = ~uVar31 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      pTVar13 = local_220;
      pTVar12 = local_228;
      pTVar3 = pTVar11->DataPtr + (int)uVar31;
      FindClosestPointAndBaryOnTriangle<double,3>
                ((TVector<double,3> *)&local_278,local_220,pTVar2,pTVar3,local_228,
                 (TVector<double,3> *)local_210);
      param_3 = local_2c4;
      dVar25 = *(double *)&pTVar12->field_0x8 - dStack_270;
      dVar10 = *(double *)pTVar12 - local_278;
      dVar6 = *(double *)&pTVar12->field_0x10 - local_268;
      dVar6 = dVar10 * dVar10 + dVar25 * dVar25 + dVar6 * dVar6;
      pFVar22 = local_288;
      param_7 = local_290;
      if (dVar6 <= dVar8) {
        dVar8 = *(double *)&pTVar13->field_0x10;
        dVar10 = *(double *)&pTVar13->field_0x8;
        dVar30 = *(double *)&pTVar2->field_0x10 - dVar8;
        dVar25 = *(double *)pTVar13;
        dVar7 = *(double *)&pTVar2->field_0x8 - dVar10;
        dVar28 = *(double *)&pTVar3->field_0x10 - dVar8;
        dVar29 = *(double *)&pTVar3->field_0x8 - dVar10;
        dVar9 = dVar7 * dVar28 - dVar30 * dVar29;
        dVar30 = dVar30 * (*(double *)pTVar3 - dVar25) - (*(double *)pTVar2 - dVar25) * dVar28;
        dVar7 = (*(double *)pTVar2 - dVar25) * dVar29 - dVar7 * (*(double *)pTVar3 - dVar25);
        dVar28 = dVar30 * dVar30 + dVar9 * dVar9 + dVar7 * dVar7;
        local_118 = dVar30;
        dStack_120 = dVar9;
        dStack_110 = dVar7;
        if ((dVar28 != __real_3ff0000000000000) &&
           (local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           __real_3e45798ee0000000 <= dVar28)) {
          local_1f8 = __real_3ff0000000000000 / SQRT(dVar28);
          local_118 = dVar30 * local_1f8;
          dStack_120 = dVar9 * local_1f8;
          dStack_110 = dVar7 * local_1f8;
        }
        if ((*(double *)pTVar12 - dVar25) * dStack_120 +
            (*(double *)&pTVar12->field_0x8 - dVar10) * local_118 +
            (*(double *)&pTVar12->field_0x10 - dVar8) * dStack_110 <= __real_0000000000000000) {
          uVar31 = (uint)__xmm_80000000000000008000000000000000;
          uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          dStack_120 = (double)CONCAT44((uint)((ulonglong)dStack_120 >> 0x20) ^ uVar21,
                                        SUB84(dStack_120,0) ^ uVar31);
          local_118 = (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) ^ uVar21,
                                       SUB84(local_118,0) ^ uVar31);
          dStack_110 = (double)CONCAT44((uint)((ulonglong)dStack_110 >> 0x20) ^ uVar21,
                                        SUB84(dStack_110,0) ^ uVar31);
        }
        pFVar22 = (param_8->AllocatorInstance).Data;
        piVar1 = &param_8->ArrayMax;
        local_158 = __real_3ff0000000000000;
        local_168 = CONCAT31(local_168._1_3_,1);
        iStack_164 = local_2c4;
        local_138 = local_278;
        dStack_130 = dStack_270;
        local_128 = local_268;
        dStack_150 = local_210[0];
        uStack_148 = local_210[1];
        auVar26._8_8_ = 0;
        auVar26._0_8_ = local_200;
        uStack_140 = local_200;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar6;
        auVar27 = sqrtpd(auVar26,auVar27);
        local_108 = auVar27._0_8_;
        uStack_160 = uVar4;
        if (((pFVar22 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 < pFVar22 + (longlong)*piVar1 * 0x70)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
        iVar18 = param_8->ArrayNum;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,&param_8->AllocatorInstance,piVar1);
        }
        param_8->ArrayNum = iVar18 + 1;
        lVar24 = (longlong)iVar18 * 0x70;
        pFVar22 = (param_8->AllocatorInstance).Data;
        *(ulonglong *)(pFVar22 + lVar24) = CONCAT44(iStack_164,local_168);
        *(ulonglong *)(pFVar22 + lVar24 + 8) = CONCAT44(uStack_15c,uStack_160);
        *(double *)(pFVar22 + lVar24 + 0x10) = local_158;
        *(double *)(pFVar22 + lVar24 + 0x10 + 8) = dStack_150;
        *(undefined8 *)(pFVar22 + lVar24 + 0x20) = uStack_148;
        *(ulonglong *)(pFVar22 + lVar24 + 0x20 + 8) = uStack_140;
        *(double *)(pFVar22 + lVar24 + 0x30) = local_138;
        *(double *)(pFVar22 + lVar24 + 0x30 + 8) = dStack_130;
        *(double *)(pFVar22 + lVar24 + 0x40) = local_128;
        *(double *)(pFVar22 + lVar24 + 0x40 + 8) = dStack_120;
        *(double *)(pFVar22 + lVar24 + 0x50) = local_118;
        *(double *)(pFVar22 + lVar24 + 0x50 + 8) = dStack_110;
        *(undefined8 *)(pFVar22 + lVar24 + 0x60) = local_108;
        *(undefined8 *)(pFVar22 + lVar24 + 0x60 + 8) = uStack_100;
        pFVar22 = local_288;
        param_7 = local_290;
        dVar8 = local_218;
      }
    }
    uVar19 = local_2b8._8_8_ & 0xffffffff;
    FVar23.Data = local_280 + 4;
    uVar20 = (ulonglong)local_298;
  } while( true );
}

// PointProximityQuery<double> @ 143de4a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::PointProximityQuery<double>
          (FTriangleMesh *this,THierarchicalSpatialHash<int,double> *param_1,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,int param_3,
          TVector<double,3> *param_4,double param_5,double param_6,
          TFunctionRef<bool___cdecl(int,int)> *param_7,
          TArray<Chaos::TTriangleCollisionPoint<double>,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  TVector<double,3> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar12;
  FTriangleMesh *pFVar13;
  TVector<double,3> *pTVar14;
  TVector<double,3> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  uint uVar29;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258 [8];
  TArrayView<Chaos::TVector<double,3>_const_,int> *local_250;
  int local_248;
  uint local_244;
  FTriangleMesh *local_240;
  TVector<double,3> *local_238;
  FScriptContainerElement *local_230;
  TArray<int,TSizedDefaultAllocator<32>_> local_228;
  double local_218;
  double dStack_210;
  double local_208;
  TVector<double,3> *local_200;
  TVector<double,3> *local_1f8;
  double local_1f0;
  FScriptContainerElement *local_1e8;
  int local_1e0 [2];
  TFunctionRef<bool___cdecl(int,int)> *local_1d8;
  code *local_1d0;
  int *local_1c8;
  double local_1c0 [2];
  ulonglong local_1b0;
  double local_1a8;
  FVectorAABB local_198;
  undefined4 local_158;
  int iStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  dVar6 = param_5 + param_6;
  local_238 = param_4;
  dVar10 = dVar6 * dVar6;
  local_1d8 = param_7;
  local_1c8 = local_1e0;
  local_198.Min.XY.m128d_f64[0] = *(double *)param_4 - dVar6;
  local_198.Min.XY.m128d_f64[1] = *(double *)&param_4->field_0x8 - dVar6;
  local_1d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FTriangleMesh::PointProximityQuery<double>'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_198.Min.ZW.m128d_f64[0] = *(double *)&param_4->field_0x10 - dVar6;
  dVar8 = dVar6 + *(double *)&param_4->field_0x8;
  local_198.Max.ZW.m128d_f64[0] = dVar6 + *(double *)&param_4->field_0x10;
  local_198.Max.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
  local_198.Max.XY.m128d_f64[0] = dVar6 + *(double *)param_4;
  local_198.Max.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_198.Max.ZW.m128d_f64[1] = 0.0;
  local_198.Min.ZW.m128d_f64[1] = 0.0;
  local_250 = param_2;
  local_248 = param_3;
  local_240 = this;
  local_1f0 = dVar10;
  local_1e0[0] = param_3;
  THierarchicalSpatialHash<int,double>::FindAllIntersections
            (param_1,&local_228,&local_198,(TFunctionRef<bool___cdecl(int)> *)&local_1d0);
  iVar19 = local_228.ArrayNum;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_228._8_8_ & 0xffffffff);
  }
  param_8->ArrayNum = 0;
  if (param_8->ArrayMax < iVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,iVar19,&param_8->AllocatorInstance,0,&param_8->ArrayMax);
  }
  local_244 = local_228.ArrayNum;
  uVar20 = (ulonglong)(int)local_244;
  local_1e8 = local_228.AllocatorInstance.Data + uVar20 * 4;
  FVar22.Data = local_228.AllocatorInstance.Data;
  while( true ) {
    pFVar4 = local_1e8;
    local_230 = FVar22.Data;
    if (local_228.ArrayNum != (int)uVar20) {
      local_258[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_258);
    }
    if (FVar22.Data == pFVar4) {
      iVar19 = param_8->ArrayNum;
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      return 0 < iVar19;
    }
    uVar3 = *(uint *)FVar22.Data;
    lVar23 = (longlong)(int)uVar3;
    uVar21 = ~uVar3 >> 0x1f;
    uVar29 = 0;
    if ((int)uVar3 < (this->MElements).ArrayNum) {
      uVar29 = uVar21;
    }
    if ((uVar29 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    uVar29 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar23 * 0xc);
    uVar18 = 0;
    if ((int)uVar29 < local_250->ArrayNum) {
      uVar18 = ~uVar29 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    pFVar13 = local_240;
    local_1f8 = local_250->DataPtr + (int)uVar29;
    uVar29 = 0;
    if ((int)uVar3 < (local_240->MElements).ArrayNum) {
      uVar29 = uVar21;
    }
    if ((uVar29 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) break;
    uVar29 = *(uint *)((pFVar13->MElements).AllocatorInstance.Data + lVar23 * 0xc + 4);
    uVar18 = 0;
    if ((int)uVar29 < local_250->ArrayNum) {
      uVar18 = ~uVar29 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    this = local_240;
    local_200 = local_250->DataPtr + (int)uVar29;
    uVar29 = 0;
    if ((int)uVar3 < (local_240->MElements).ArrayNum) {
      uVar29 = uVar21;
    }
    if ((uVar29 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    pTVar12 = local_250;
    uVar29 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar23 * 0xc + 8);
    uVar21 = 0;
    if ((int)uVar29 < local_250->ArrayNum) {
      uVar21 = ~uVar29 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    pTVar15 = local_1f8;
    pTVar14 = local_200;
    pTVar2 = pTVar12->DataPtr + (int)uVar29;
    FindClosestPointAndBaryOnTriangle<double,3>
              ((TVector<double,3> *)&local_218,local_1f8,local_200,pTVar2,local_238,
               (TVector<double,3> *)local_1c0);
    dVar24 = *(double *)&local_238->field_0x8 - dStack_210;
    dVar8 = *(double *)local_238 - local_218;
    dVar6 = *(double *)&local_238->field_0x10 - local_208;
    dVar6 = dVar8 * dVar8 + dVar24 * dVar24 + dVar6 * dVar6;
    if (dVar6 <= dVar10) {
      dVar8 = *(double *)&pTVar15->field_0x10;
      dVar10 = *(double *)&pTVar15->field_0x8;
      dVar28 = *(double *)&pTVar14->field_0x10 - dVar8;
      dVar24 = *(double *)pTVar15;
      dVar7 = *(double *)&pTVar14->field_0x8 - dVar10;
      dVar9 = *(double *)&pTVar2->field_0x10 - dVar8;
      dVar27 = *(double *)&pTVar2->field_0x8 - dVar10;
      dVar11 = dVar7 * dVar9 - dVar28 * dVar27;
      dVar28 = dVar28 * (*(double *)pTVar2 - dVar24) - (*(double *)pTVar14 - dVar24) * dVar9;
      dVar9 = (*(double *)pTVar14 - dVar24) * dVar27 - dVar7 * (*(double *)pTVar2 - dVar24);
      dVar7 = dVar28 * dVar28 + dVar11 * dVar11 + dVar9 * dVar9;
      local_108 = dVar28;
      dStack_110 = dVar11;
      dStack_100 = dVar9;
      if ((dVar7 != __real_3ff0000000000000) &&
         (local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar7)) {
        local_1a8 = __real_3ff0000000000000 / SQRT(dVar7);
        local_108 = dVar28 * local_1a8;
        dStack_110 = dVar11 * local_1a8;
        dStack_100 = dVar9 * local_1a8;
      }
      if ((*(double *)&local_238->field_0x8 - dVar10) * local_108 +
          (*(double *)local_238 - dVar24) * dStack_110 +
          (*(double *)&local_238->field_0x10 - dVar8) * dStack_100 <= __real_0000000000000000) {
        uVar29 = (uint)__xmm_80000000000000008000000000000000;
        uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dStack_110 = (double)CONCAT44((uint)((ulonglong)dStack_110 >> 0x20) ^ uVar21,
                                      SUB84(dStack_110,0) ^ uVar29);
        local_108 = (double)CONCAT44((uint)((ulonglong)local_108 >> 0x20) ^ uVar21,
                                     SUB84(local_108,0) ^ uVar29);
        dStack_100 = (double)CONCAT44((uint)((ulonglong)dStack_100 >> 0x20) ^ uVar21,
                                      SUB84(dStack_100,0) ^ uVar29);
      }
      pFVar4 = (param_8->AllocatorInstance).Data;
      local_148 = __real_3ff0000000000000;
      iStack_154 = local_248;
      piVar1 = &param_8->ArrayMax;
      local_158 = CONCAT31(local_158._1_3_,1);
      local_128 = local_218;
      dStack_120 = dStack_210;
      local_118 = local_208;
      dStack_140 = local_1c0[0];
      uStack_138 = local_1c0[1];
      auVar25._8_8_ = 0;
      auVar25._0_8_ = local_1b0;
      uStack_130 = local_1b0;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar6;
      auVar26 = sqrtpd(auVar25,auVar26);
      local_f8 = auVar26._0_8_;
      uStack_150 = uVar3;
      if (((pFVar4 <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 < pFVar4 + (longlong)*piVar1 * 0x70)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      iVar19 = param_8->ArrayNum;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_8->AllocatorInstance,piVar1);
      }
      param_8->ArrayNum = iVar19 + 1;
      lVar23 = (longlong)iVar19 * 0x70;
      pFVar4 = (param_8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar4 + lVar23) = CONCAT44(iStack_154,local_158);
      *(ulonglong *)(pFVar4 + lVar23 + 8) = CONCAT44(uStack_14c,uStack_150);
      *(double *)(pFVar4 + lVar23 + 0x10) = local_148;
      *(double *)(pFVar4 + lVar23 + 0x10 + 8) = dStack_140;
      *(undefined8 *)(pFVar4 + lVar23 + 0x20) = uStack_138;
      *(ulonglong *)(pFVar4 + lVar23 + 0x20 + 8) = uStack_130;
      *(double *)(pFVar4 + lVar23 + 0x30) = local_128;
      *(double *)(pFVar4 + lVar23 + 0x30 + 8) = dStack_120;
      *(double *)(pFVar4 + lVar23 + 0x40) = local_118;
      *(double *)(pFVar4 + lVar23 + 0x40 + 8) = dStack_110;
      *(double *)(pFVar4 + lVar23 + 0x50) = local_108;
      *(double *)(pFVar4 + lVar23 + 0x50 + 8) = dStack_100;
      *(undefined8 *)(pFVar4 + lVar23 + 0x60) = local_f8;
      *(undefined8 *)(pFVar4 + lVar23 + 0x60 + 8) = uStack_f0;
      dVar10 = local_1f0;
    }
    FVar22.Data = local_230 + 4;
    uVar20 = (ulonglong)local_244;
  }
  pcVar5 = (code *)swi(3);
  uVar17 = (*pcVar5)();
  return (bool)uVar17;
}

// SmoothProject<float> @ 143df3e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::SmoothProject<float>
          (FTriangleMesh *this,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_1,TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_3,
          TVector<double,3> *param_4,int *param_5,TVector<double,3> *param_6,int param_7)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double dVar3;
  TVector<double,3> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  FTriangleMesh *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar23;
  ForAnyElementType FVar24;
  int iVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  double dVar32;
  undefined1 auStackY_2f8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  TArrayView<Chaos::TVector<double,3>_const_,int> *local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_280;
  int local_270;
  FTriangleMesh *local_268;
  int local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  TArray<bool,TSizedDefaultAllocator<32>_> local_240;
  TVector<double,3> *local_230;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_228;
  undefined4 local_220;
  int local_21c;
  int local_218 [2];
  FSimpleVisitor local_210;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *local_208;
  int *local_200;
  TVector<double,3> *local_1f8;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  TVector<double,3> local_198;
  TVector<double,3> local_180;
  undefined1 local_168 [16];
  longlong lStack_158;
  longlong local_150;
  undefined2 local_138;
  undefined1 local_136;
  TVector<double,3> local_130;
  undefined1 local_118 [32];
  ForElementType<unsigned_int> local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  FScriptContainerElement local_e0 [8];
  ForAnyElementType local_d8;
  uint local_d0;
  ulonglong local_c8;
  
  dVar11 = __real_47efffffe0000000;
  dVar10 = __real_3fe0000000000000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  iVar30 = 0;
  local_200 = param_5;
  local_1f8 = param_6;
  local_230 = param_4;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (ForElementType<unsigned_int>)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = -1;
  local_e4 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_298 = param_2;
  local_268 = this;
  local_228 = param_1;
  local_208 = param_3;
LAB_143df3fa1:
  pFVar12 = local_268;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  do {
    local_168._0_8_ = &local_130;
    local_210.CollectedResults = &local_290;
    local_150 = 0;
    local_138 = 0;
    local_136 = 0;
    local_198._16_8_ = 0;
    local_180._16_8_ = 0;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    local_1a0 = (double)iVar30 * dVar10;
    local_1c8 = *(double *)param_4 - local_1a0;
    local_1c0 = *(double *)&param_4->field_0x8 - local_1a0;
    local_1b0 = *(double *)param_4 + local_1a0;
    local_1a8 = *(double *)&param_4->field_0x8 + local_1a0;
    local_1b8 = *(double *)&param_4->field_0x10 - local_1a0;
    local_1a0 = *(double *)&param_4->field_0x10 + local_1a0;
    local_180._0_8_ = 0;
    local_180._8_8_ = 0;
    local_168._8_8_ = 0;
    lStack_158 = 0;
    local_198._0_8_ = 0;
    local_198._8_8_ = 0;
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
    ::
    QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
              (local_228,&local_180,(FQueryFastDataVoid *)local_168,&local_198,
               (TAABB<double,3> *)&local_1c8,&local_210,(TVector<double,3> *)local_168._0_8_,
               (TVector<double,3> *)(local_168 + 8),(bool *)&local_138);
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    iVar25 = local_290.ArrayNum;
    local_2a8.AllocatorInstance.Data = local_290.AllocatorInstance.Data;
    uVar21 = local_290.ArrayNum - 1;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = local_290.ArrayNum;
    local_2a8.ArrayMax = local_290.ArrayMax;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    if (-1 < (int)uVar21) {
      lVar22 = (longlong)(int)uVar21;
      lVar28 = lVar22 * 4;
      do {
        uVar15 = 0;
        if ((int)uVar21 < iVar25) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          iVar25 = local_2a8.ArrayNum;
        }
        if (local_118._8_4_ != local_e4) {
          FVar24.Data = local_e0;
          if (local_d8.Data != (FScriptContainerElement *)0x0) {
            FVar24.Data = local_d8.Data;
          }
          for (iVar16 = *(int *)(FVar24.Data +
                                (ulonglong)
                                (local_d0 - 1 & *(uint *)(local_2a8.AllocatorInstance.Data + lVar28)
                                ) * 4); iVar16 != -1;
              iVar16 = *(int *)(local_118._0_8_ + (longlong)iVar16 * 0xc + 4)) {
            if (*(uint *)(local_118._0_8_ + (longlong)iVar16 * 0xc) ==
                *(uint *)(local_2a8.AllocatorInstance.Data + lVar28)) {
              uVar15 = 0;
              if ((int)uVar21 < iVar25) {
                uVar15 = ~uVar21 >> 0x1f;
              }
              if (uVar15 == 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar5 = (code *)swi(3);
                  uVar14 = (*pcVar5)();
                  return (bool)uVar14;
                }
                iVar25 = local_2a8.ArrayNum;
              }
              iVar16 = (iVar25 - uVar21) + -1;
              if (iVar16 != 0) {
                memmove(local_2a8.AllocatorInstance.Data + lVar22 * 4,
                        local_2a8.AllocatorInstance.Data + lVar22 * 4 + 4,(longlong)iVar16 << 2);
                iVar25 = local_2a8.ArrayNum;
              }
              local_2a8.ArrayNum = iVar25 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_2a8.AllocatorInstance,iVar25 + -1,&local_2a8.ArrayMax);
              iVar25 = local_2a8.ArrayNum;
              break;
            }
          }
        }
        lVar22 = lVar22 + -1;
        lVar28 = lVar28 + -4;
        uVar21 = uVar21 - 1;
        param_4 = local_230;
      } while (-1 < (int)uVar21);
    }
    pTVar23 = local_298;
    iVar30 = iVar30 + 1;
    local_270 = iVar30;
    if (iVar25 != 0) break;
    if (param_7 <= iVar30) {
      bVar13 = false;
      goto LAB_143df4930;
    }
  } while( true );
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  Chaos::SmoothProject<float>
            (&local_240,local_298,&pFVar12->MElements,local_208,param_4,&local_2a8,&local_280,false)
  ;
  uVar21 = 0;
  lVar28 = 0;
  if (0 < local_240.ArrayNum) {
    lVar22 = 0;
    dVar8 = dVar11;
    do {
      uVar31 = ~uVar21 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar21 < local_240.ArrayNum) {
        uVar15 = uVar31;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      if (local_240.AllocatorInstance.Data[lVar28] != (FScriptContainerElement)0x0) {
        dVar6 = 0.0;
        dVar32 = 0.0;
        dVar7 = 0.0;
        lVar29 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar21 < local_2a8.ArrayNum) {
            uVar15 = uVar31;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          uVar15 = *(uint *)(local_2a8.AllocatorInstance.Data + lVar28 * 4);
          uVar17 = 0;
          if ((int)uVar15 < (local_268->MElements).ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          uVar15 = *(uint *)((local_268->MElements).AllocatorInstance.Data +
                            (lVar29 + (longlong)(int)uVar15 * 3) * 4);
          uVar17 = 0;
          if ((int)uVar15 < pTVar23->ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          pTVar4 = pTVar23->DataPtr;
          uVar17 = 0;
          if ((int)uVar21 < local_280.ArrayNum) {
            uVar17 = uVar31;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          param_4 = local_230;
          pTVar23 = local_298;
          lVar2 = lVar29 * 8;
          lVar29 = lVar29 + 1;
          dVar3 = *(double *)(local_280.AllocatorInstance.Data + lVar2 + lVar22);
          dVar6 = dVar6 + dVar3 * *(double *)(pTVar4 + (int)uVar15);
          dVar32 = dVar32 + dVar3 * *(double *)&pTVar4[(int)uVar15].field_0x8;
          dVar7 = dVar7 + dVar3 * *(double *)&pTVar4[(int)uVar15].field_0x10;
        } while (lVar29 < 3);
        dVar32 = *(double *)&local_230->field_0x8 - dVar32;
        dVar7 = *(double *)&local_230->field_0x10 - dVar7;
        dVar32 = (*(double *)local_230 - dVar6) * (*(double *)local_230 - dVar6) + dVar32 * dVar32 +
                 dVar7 * dVar7;
        if (dVar32 < dVar8) {
          uVar15 = 0;
          if ((int)uVar21 < local_2a8.ArrayNum) {
            uVar15 = uVar31;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          *local_200 = *(int *)(local_2a8.AllocatorInstance.Data + lVar28 * 4);
          uVar15 = 0;
          if ((int)uVar21 < local_280.ArrayNum) {
            uVar15 = uVar31;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          uVar9 = *(undefined8 *)(local_280.AllocatorInstance.Data + lVar22 + 8);
          *(undefined8 *)local_1f8 = *(undefined8 *)(local_280.AllocatorInstance.Data + lVar22);
          *(undefined8 *)&local_1f8->field_0x8 = uVar9;
          *(undefined8 *)&local_1f8->field_0x10 =
               *(undefined8 *)(local_280.AllocatorInstance.Data + lVar22 + 0x10);
          dVar8 = dVar32;
        }
      }
      uVar21 = uVar21 + 1;
      lVar28 = lVar28 + 1;
      lVar22 = lVar22 + 0x18;
    } while ((int)uVar21 < local_240.ArrayNum);
    iVar30 = local_270;
    if (dVar8 < dVar11) {
      bVar13 = true;
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.AllocatorInstance.Data);
      }
LAB_143df4930:
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      goto LAB_143df4943;
    }
  }
  FVar24.Data = local_2a8.AllocatorInstance.Data;
  iVar25 = local_2a8.ArrayNum;
  lVar28 = (longlong)local_2a8.ArrayNum;
  if ((local_2a8.ArrayNum < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  uVar21 = (iVar25 - local_e4) + local_118._8_4_;
  if (uVar21 <= (uint)(local_118._8_4_ - local_e4)) goto LAB_143df48a2;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_118,uVar21);
  if (uVar21 < 4) {
    uVar21 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_220 = (undefined4)lVar22;
    uVar21 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_d0 != 0) && ((int)uVar21 <= (int)local_d0)) goto LAB_143df48a2;
  local_d0 = uVar21;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,4);
  }
  if (uVar21 != 0) {
    uVar15 = uVar21;
    if (uVar21 < 2) {
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_143df46ed;
      }
    }
    else {
LAB_143df46ed:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,uVar15,4);
    }
    if (0 < (int)uVar21) {
      uVar26 = (ulonglong)uVar21;
      uVar20 = 0;
      do {
        FVar19.Data = local_e0;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_d8.Data;
        }
        uVar18 = uVar20 & (longlong)(int)uVar21 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar19.Data + uVar18 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_d0 != 0) {
    pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
    uStack_25c = 1;
    local_260 = 0;
    iStack_24c = 0;
    iStack_248 = 0;
    if (local_f0 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
      if (local_f8 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_f8;
      }
      uVar21 = *(uint *)FVar27;
      iStack_248 = 0;
      local_260 = 0;
      while (uVar21 == 0) {
        iStack_248 = iStack_248 + 0x20;
        lVar22 = (longlong)local_260;
        local_260 = local_260 + 1;
        if ((int)(local_f0 + -1 + (local_f0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_260)
        goto LAB_143df47fd;
        uVar21 = ((uint *)((longlong)FVar27 + 4))[lVar22];
      }
      uStack_25c = -uVar21 & uVar21;
      uVar20 = (ulonglong)uStack_25c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_21c = (int)lVar22;
      iStack_24c = iStack_248 + -1 + local_21c;
      if (local_f0 < iStack_24c) {
LAB_143df47fd:
        iStack_24c = local_f0;
      }
    }
    local_250 = 0xffffffff;
    local_1f0 = (longlong *)local_118;
    local_1e8._padding_ = CONCAT44(uStack_25c,local_260);
    local_1e8.CurrentBitIndex = iStack_24c;
    local_1e8.UnvisitedBitMask = 0xffffffff;
    local_1e8._28_4_ = uStack_244;
    local_1e8.BaseBitIndex = iStack_248;
    local_1e8.Array = pTStack_258;
    iVar25 = iStack_24c;
    if (iStack_24c < local_f0) {
      do {
        lVar22 = *local_1f0;
        lVar29 = (longlong)iVar25;
        uVar21 = local_d0 - 1 & *(uint *)(lVar22 + lVar29 * 0xc);
        *(uint *)(lVar22 + 8 + lVar29 * 0xc) = uVar21;
        FVar19.Data = local_e0;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_d8.Data;
        }
        uVar20 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar22 + 4 + lVar29 * 0xc) = *(undefined4 *)(FVar19.Data + uVar20 * 4);
        *(int *)(FVar19.Data + uVar20 * 4) = iVar25;
        local_1e8.UnvisitedBitMask = local_1e8.UnvisitedBitMask & ~local_1e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
        iVar25 = local_1e8.CurrentBitIndex;
      } while (local_1e8.CurrentBitIndex < (local_1e8.Array)->NumBits);
    }
  }
LAB_143df48a2:
  pFVar1 = FVar24.Data + lVar28 * 4;
  for (; FVar24.Data != pFVar1; FVar24.Data = FVar24.Data + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118,local_218,
               (bool *)FVar24.Data);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (param_7 <= iVar30) {
    bVar13 = false;
LAB_143df4943:
    local_d0 = 0;
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_118);
    return bVar13;
  }
  goto LAB_143df3fa1;
}

// SmoothProject<double> @ 143df5c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::SmoothProject<double>
          (FTriangleMesh *this,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_1,TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_3,
          TVector<double,3> *param_4,int *param_5,TVector<double,3> *param_6,int param_7)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double dVar3;
  TVector<double,3> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  FTriangleMesh *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar23;
  ForAnyElementType FVar24;
  int iVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  double dVar32;
  undefined1 auStackY_2f8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  TArrayView<Chaos::TVector<double,3>_const_,int> *local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_280;
  int local_270;
  FTriangleMesh *local_268;
  int local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  TArray<bool,TSizedDefaultAllocator<32>_> local_240;
  TVector<double,3> *local_230;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_228;
  undefined4 local_220;
  int local_21c;
  int local_218 [2];
  FSimpleVisitor local_210;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *local_208;
  int *local_200;
  TVector<double,3> *local_1f8;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  TVector<double,3> local_198;
  TVector<double,3> local_180;
  undefined1 local_168 [16];
  longlong lStack_158;
  longlong local_150;
  undefined2 local_138;
  undefined1 local_136;
  TVector<double,3> local_130;
  undefined1 local_118 [32];
  ForElementType<unsigned_int> local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  FScriptContainerElement local_e0 [8];
  ForAnyElementType local_d8;
  uint local_d0;
  ulonglong local_c8;
  
  dVar11 = __real_47efffffe0000000;
  dVar10 = __real_3fe0000000000000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  iVar30 = 0;
  local_200 = param_5;
  local_1f8 = param_6;
  local_230 = param_4;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (ForElementType<unsigned_int>)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = -1;
  local_e4 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_298 = param_2;
  local_268 = this;
  local_228 = param_1;
  local_208 = param_3;
LAB_143df5d41:
  pFVar12 = local_268;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  do {
    local_168._0_8_ = &local_130;
    local_210.CollectedResults = &local_290;
    local_150 = 0;
    local_138 = 0;
    local_136 = 0;
    local_198._16_8_ = 0;
    local_180._16_8_ = 0;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    local_1a0 = (double)iVar30 * dVar10;
    local_1c8 = *(double *)param_4 - local_1a0;
    local_1c0 = *(double *)&param_4->field_0x8 - local_1a0;
    local_1b0 = *(double *)param_4 + local_1a0;
    local_1a8 = *(double *)&param_4->field_0x8 + local_1a0;
    local_1b8 = *(double *)&param_4->field_0x10 - local_1a0;
    local_1a0 = *(double *)&param_4->field_0x10 + local_1a0;
    local_180._0_8_ = 0;
    local_180._8_8_ = 0;
    local_168._8_8_ = 0;
    lStack_158 = 0;
    local_198._0_8_ = 0;
    local_198._8_8_ = 0;
    TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
    ::
    QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
              (local_228,&local_180,(FQueryFastDataVoid *)local_168,&local_198,
               (TAABB<double,3> *)&local_1c8,&local_210,(TVector<double,3> *)local_168._0_8_,
               (TVector<double,3> *)(local_168 + 8),(bool *)&local_138);
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    iVar25 = local_290.ArrayNum;
    local_2a8.AllocatorInstance.Data = local_290.AllocatorInstance.Data;
    uVar21 = local_290.ArrayNum - 1;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = local_290.ArrayNum;
    local_2a8.ArrayMax = local_290.ArrayMax;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    if (-1 < (int)uVar21) {
      lVar22 = (longlong)(int)uVar21;
      lVar28 = lVar22 * 4;
      do {
        uVar15 = 0;
        if ((int)uVar21 < iVar25) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          iVar25 = local_2a8.ArrayNum;
        }
        if (local_118._8_4_ != local_e4) {
          FVar24.Data = local_e0;
          if (local_d8.Data != (FScriptContainerElement *)0x0) {
            FVar24.Data = local_d8.Data;
          }
          for (iVar16 = *(int *)(FVar24.Data +
                                (ulonglong)
                                (local_d0 - 1 & *(uint *)(local_2a8.AllocatorInstance.Data + lVar28)
                                ) * 4); iVar16 != -1;
              iVar16 = *(int *)(local_118._0_8_ + (longlong)iVar16 * 0xc + 4)) {
            if (*(uint *)(local_118._0_8_ + (longlong)iVar16 * 0xc) ==
                *(uint *)(local_2a8.AllocatorInstance.Data + lVar28)) {
              uVar15 = 0;
              if ((int)uVar21 < iVar25) {
                uVar15 = ~uVar21 >> 0x1f;
              }
              if (uVar15 == 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar5 = (code *)swi(3);
                  uVar14 = (*pcVar5)();
                  return (bool)uVar14;
                }
                iVar25 = local_2a8.ArrayNum;
              }
              iVar16 = (iVar25 - uVar21) + -1;
              if (iVar16 != 0) {
                memmove(local_2a8.AllocatorInstance.Data + lVar22 * 4,
                        local_2a8.AllocatorInstance.Data + lVar22 * 4 + 4,(longlong)iVar16 << 2);
                iVar25 = local_2a8.ArrayNum;
              }
              local_2a8.ArrayNum = iVar25 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_2a8.AllocatorInstance,iVar25 + -1,&local_2a8.ArrayMax);
              iVar25 = local_2a8.ArrayNum;
              break;
            }
          }
        }
        lVar22 = lVar22 + -1;
        lVar28 = lVar28 + -4;
        uVar21 = uVar21 - 1;
        param_4 = local_230;
      } while (-1 < (int)uVar21);
    }
    pTVar23 = local_298;
    iVar30 = iVar30 + 1;
    local_270 = iVar30;
    if (iVar25 != 0) break;
    if (param_7 <= iVar30) {
      bVar13 = false;
      goto LAB_143df66d0;
    }
  } while( true );
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  Chaos::SmoothProject<double>
            (&local_240,local_298,&pFVar12->MElements,local_208,param_4,&local_2a8,&local_280,false)
  ;
  uVar21 = 0;
  lVar28 = 0;
  if (0 < local_240.ArrayNum) {
    lVar22 = 0;
    dVar8 = dVar11;
    do {
      uVar31 = ~uVar21 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar21 < local_240.ArrayNum) {
        uVar15 = uVar31;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      if (local_240.AllocatorInstance.Data[lVar28] != (FScriptContainerElement)0x0) {
        dVar6 = 0.0;
        dVar32 = 0.0;
        dVar7 = 0.0;
        lVar29 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar21 < local_2a8.ArrayNum) {
            uVar15 = uVar31;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          uVar15 = *(uint *)(local_2a8.AllocatorInstance.Data + lVar28 * 4);
          uVar17 = 0;
          if ((int)uVar15 < (local_268->MElements).ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          uVar15 = *(uint *)((local_268->MElements).AllocatorInstance.Data +
                            (lVar29 + (longlong)(int)uVar15 * 3) * 4);
          uVar17 = 0;
          if ((int)uVar15 < pTVar23->ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          pTVar4 = pTVar23->DataPtr;
          uVar17 = 0;
          if ((int)uVar21 < local_280.ArrayNum) {
            uVar17 = uVar31;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          param_4 = local_230;
          pTVar23 = local_298;
          lVar2 = lVar29 * 8;
          lVar29 = lVar29 + 1;
          dVar3 = *(double *)(local_280.AllocatorInstance.Data + lVar2 + lVar22);
          dVar6 = dVar6 + dVar3 * *(double *)(pTVar4 + (int)uVar15);
          dVar32 = dVar32 + dVar3 * *(double *)&pTVar4[(int)uVar15].field_0x8;
          dVar7 = dVar7 + dVar3 * *(double *)&pTVar4[(int)uVar15].field_0x10;
        } while (lVar29 < 3);
        dVar32 = *(double *)&local_230->field_0x8 - dVar32;
        dVar7 = *(double *)&local_230->field_0x10 - dVar7;
        dVar32 = (*(double *)local_230 - dVar6) * (*(double *)local_230 - dVar6) + dVar32 * dVar32 +
                 dVar7 * dVar7;
        if (dVar32 < dVar8) {
          uVar15 = 0;
          if ((int)uVar21 < local_2a8.ArrayNum) {
            uVar15 = uVar31;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          *local_200 = *(int *)(local_2a8.AllocatorInstance.Data + lVar28 * 4);
          uVar15 = 0;
          if ((int)uVar21 < local_280.ArrayNum) {
            uVar15 = uVar31;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          uVar9 = *(undefined8 *)(local_280.AllocatorInstance.Data + lVar22 + 8);
          *(undefined8 *)local_1f8 = *(undefined8 *)(local_280.AllocatorInstance.Data + lVar22);
          *(undefined8 *)&local_1f8->field_0x8 = uVar9;
          *(undefined8 *)&local_1f8->field_0x10 =
               *(undefined8 *)(local_280.AllocatorInstance.Data + lVar22 + 0x10);
          dVar8 = dVar32;
        }
      }
      uVar21 = uVar21 + 1;
      lVar28 = lVar28 + 1;
      lVar22 = lVar22 + 0x18;
    } while ((int)uVar21 < local_240.ArrayNum);
    iVar30 = local_270;
    if (dVar8 < dVar11) {
      bVar13 = true;
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.AllocatorInstance.Data);
      }
LAB_143df66d0:
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      goto LAB_143df66e3;
    }
  }
  FVar24.Data = local_2a8.AllocatorInstance.Data;
  iVar25 = local_2a8.ArrayNum;
  lVar28 = (longlong)local_2a8.ArrayNum;
  if ((local_2a8.ArrayNum < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  uVar21 = (iVar25 - local_e4) + local_118._8_4_;
  if (uVar21 <= (uint)(local_118._8_4_ - local_e4)) goto LAB_143df6642;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_118,uVar21);
  if (uVar21 < 4) {
    uVar21 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_220 = (undefined4)lVar22;
    uVar21 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_d0 != 0) && ((int)uVar21 <= (int)local_d0)) goto LAB_143df6642;
  local_d0 = uVar21;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,4);
  }
  if (uVar21 != 0) {
    uVar15 = uVar21;
    if (uVar21 < 2) {
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_143df648d;
      }
    }
    else {
LAB_143df648d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,uVar15,4);
    }
    if (0 < (int)uVar21) {
      uVar26 = (ulonglong)uVar21;
      uVar20 = 0;
      do {
        FVar19.Data = local_e0;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_d8.Data;
        }
        uVar18 = uVar20 & (longlong)(int)uVar21 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar19.Data + uVar18 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_d0 != 0) {
    pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
    uStack_25c = 1;
    local_260 = 0;
    iStack_24c = 0;
    iStack_248 = 0;
    if (local_f0 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
      if (local_f8 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_f8;
      }
      uVar21 = *(uint *)FVar27;
      iStack_248 = 0;
      local_260 = 0;
      while (uVar21 == 0) {
        iStack_248 = iStack_248 + 0x20;
        lVar22 = (longlong)local_260;
        local_260 = local_260 + 1;
        if ((int)(local_f0 + -1 + (local_f0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_260)
        goto LAB_143df659d;
        uVar21 = ((uint *)((longlong)FVar27 + 4))[lVar22];
      }
      uStack_25c = -uVar21 & uVar21;
      uVar20 = (ulonglong)uStack_25c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_21c = (int)lVar22;
      iStack_24c = iStack_248 + -1 + local_21c;
      if (local_f0 < iStack_24c) {
LAB_143df659d:
        iStack_24c = local_f0;
      }
    }
    local_250 = 0xffffffff;
    local_1f0 = (longlong *)local_118;
    local_1e8._padding_ = CONCAT44(uStack_25c,local_260);
    local_1e8.CurrentBitIndex = iStack_24c;
    local_1e8.UnvisitedBitMask = 0xffffffff;
    local_1e8._28_4_ = uStack_244;
    local_1e8.BaseBitIndex = iStack_248;
    local_1e8.Array = pTStack_258;
    iVar25 = iStack_24c;
    if (iStack_24c < local_f0) {
      do {
        lVar22 = *local_1f0;
        lVar29 = (longlong)iVar25;
        uVar21 = local_d0 - 1 & *(uint *)(lVar22 + lVar29 * 0xc);
        *(uint *)(lVar22 + 8 + lVar29 * 0xc) = uVar21;
        FVar19.Data = local_e0;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_d8.Data;
        }
        uVar20 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar22 + 4 + lVar29 * 0xc) = *(undefined4 *)(FVar19.Data + uVar20 * 4);
        *(int *)(FVar19.Data + uVar20 * 4) = iVar25;
        local_1e8.UnvisitedBitMask = local_1e8.UnvisitedBitMask & ~local_1e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
        iVar25 = local_1e8.CurrentBitIndex;
      } while (local_1e8.CurrentBitIndex < (local_1e8.Array)->NumBits);
    }
  }
LAB_143df6642:
  pFVar1 = FVar24.Data + lVar28 * 4;
  for (; FVar24.Data != pFVar1; FVar24.Data = FVar24.Data + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118,local_218,
               (bool *)FVar24.Data);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (param_7 <= iVar30) {
    bVar13 = false;
LAB_143df66e3:
    local_d0 = 0;
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_118);
    return bVar13;
  }
  goto LAB_143df5d41;
}

// FTriangleMesh @ 143dfcd80

FTriangleMesh * __thiscall
Chaos::FTriangleMesh::FTriangleMesh(FTriangleMesh *this,FTriangleMesh *param_1)

{
  (this->MElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MElements).AllocatorInstance.Data = (param_1->MElements).AllocatorInstance.Data;
  (param_1->MElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MElements).ArrayNum = (param_1->MElements).ArrayNum;
  (this->MElements).ArrayMax = (param_1->MElements).ArrayMax;
  (param_1->MElements).ArrayNum = 0;
  (param_1->MElements).ArrayMax = 0;
  (this->MPointToTriangleMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPointToTriangleMap).AllocatorInstance.Data =
       (param_1->MPointToTriangleMap).AllocatorInstance.Data;
  (param_1->MPointToTriangleMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPointToTriangleMap).ArrayNum = (param_1->MPointToTriangleMap).ArrayNum;
  (this->MPointToTriangleMap).ArrayMax = (param_1->MPointToTriangleMap).ArrayMax;
  (param_1->MPointToTriangleMap).ArrayNum = 0;
  (param_1->MPointToTriangleMap).ArrayMax = 0;
  *(undefined8 *)&this->MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x20 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x34 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 0;
  (this->MSegmentMesh).MElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MSegmentMesh).MElements.ArrayNum = 0;
  (this->MSegmentMesh).MElements.ArrayMax = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x8 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x20 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x28 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x34 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x40 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x48 = 0;
  (this->MFaceToEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MFaceToEdges).ArrayNum = 0;
  (this->MFaceToEdges).ArrayMax = 0;
  (this->MEdgeToFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MEdgeToFaces).ArrayNum = 0;
  (this->MEdgeToFaces).ArrayMax = 0;
  this->MStartIdx = param_1->MStartIdx;
  this->MNumIndices = param_1->MNumIndices;
  return this;
}

// FTriangleMesh @ 143dfcec0

FTriangleMesh * __thiscall
Chaos::FTriangleMesh::FTriangleMesh
          (FTriangleMesh *this,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTriangleMesh *pFVar4;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_18;
  
  (this->MElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MElements).ArrayNum = 0;
  (this->MElements).ArrayMax = 0;
  (this->MPointToTriangleMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPointToTriangleMap).ArrayNum = 0;
  (this->MPointToTriangleMap).ArrayMax = 0;
  *(undefined8 *)&this->MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x20 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x34 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 0;
  (this->MSegmentMesh).MElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MSegmentMesh).MElements.ArrayNum = 0;
  (this->MSegmentMesh).MElements.ArrayMax = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x8 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x20 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x28 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x34 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x40 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x48 = 0;
  (this->MFaceToEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MFaceToEdges).ArrayNum = 0;
  (this->MFaceToEdges).ArrayMax = 0;
  (this->MEdgeToFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MEdgeToFaces).ArrayNum = 0;
  (this->MEdgeToFaces).ArrayMax = 0;
  local_18.DataPtr = (TVector<int,3> *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTriangleMesh *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  Init(this,&local_18,param_2,param_3,param_4);
  return this;
}

// FTriangleMesh @ 143dfd030

FTriangleMesh * __thiscall Chaos::FTriangleMesh::FTriangleMesh(FTriangleMesh *this)

{
  (this->MElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MElements).ArrayNum = 0;
  (this->MElements).ArrayMax = 0;
  (this->MPointToTriangleMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPointToTriangleMap).ArrayNum = 0;
  (this->MPointToTriangleMap).ArrayMax = 0;
  *(undefined8 *)&this->MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x20 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x34 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 0;
  (this->MSegmentMesh).MElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MSegmentMesh).MElements.ArrayNum = 0;
  (this->MSegmentMesh).MElements.ArrayMax = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x34 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToEdgeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x8 = 0;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x20 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x28 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x34 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x40 = 0;
  *(undefined4 *)&(this->MSegmentMesh).MPointToNeighborsMap.field_0x48 = 0;
  (this->MFaceToEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MFaceToEdges).ArrayNum = 0;
  (this->MFaceToEdges).ArrayMax = 0;
  (this->MEdgeToFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MEdgeToFaces).ArrayNum = 0;
  (this->MEdgeToFaces).ArrayMax = 0;
  this->MStartIdx = 0;
  this->MNumIndices = 0;
  return this;
}

// ~FTriangleMesh @ 143dfe6d0

void __thiscall Chaos::FTriangleMesh::~FTriangleMesh(FTriangleMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->MEdgeToFaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MFaceToEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSegmentMesh::~FSegmentMesh(&this->MSegmentMesh);
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MPointToNeighborsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MPointToNeighborsMap);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->MPointToTriangleMap).AllocatorInstance.Data,(this->MPointToTriangleMap).ArrayNum
            );
  pFVar1 = (this->MPointToTriangleMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 143e01010

long64 __thiscall
`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double,3> *param_2,double param_3,long64 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  
  plVar1 = *(longlong **)this;
  uVar9 = param_1 - *(int *)((longlong)this + 8);
  uVar5 = 0;
  if ((int)uVar9 < (int)plVar1[1]) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0 = extraout_XMM0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
  }
  lVar2 = *plVar1;
  dVar13 = __real_3ff0000000000000 / param_3;
  lVar7 = (longlong)(int)uVar9;
  lVar8 = param_4 / 2;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (*(double *)(lVar2 + 8 + lVar7 * 0x18) - *(double *)&param_2->field_0x8) * dVar13;
  auVar10 = roundpd(in_XMM0,auVar10,1);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (*(double *)(lVar2 + lVar7 * 0x18) - *(double *)param_2) * dVar13;
  auVar11 = roundpd(auVar10,auVar11,1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ =
       (*(double *)(lVar2 + 0x10 + lVar7 * 0x18) - *(double *)&param_2->field_0x10) * dVar13;
  auVar12 = roundpd(auVar11,auVar12,1);
  return (longlong)auVar12._0_8_ +
         ((longlong)auVar10._0_8_ + lVar8 + ((longlong)auVar11._0_8_ + lVar8) * param_4) * param_4 +
         lVar8;
}

// BuildSpatialHash @ 143e13f30

void __thiscall
Chaos::FTriangleMesh::BuildSpatialHash
          (FTriangleMesh *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          THierarchicalSpatialHash<int,float> *param_2,FPBDFlatWeightMap *param_3,int param_4,
          float param_5)

{
  undefined4 uStack_2c;
  FTriangleMeshBvDataWithThickness local_28;
  
  local_28._28_4_ = uStack_2c;
  local_28.ThicknessMapIndexOffset = param_4;
  local_28.TmData = this;
  local_28.Points = param_1;
  local_28.PointThicknesses = param_3;
  THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>
            (param_2,&local_28,param_5);
  return;
}

// FindCoincidentVertexRemappings @ 143e21b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
Chaos::FTriangleMesh::FindCoincidentVertexRemappings
          (FTriangleMesh *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ForAnyElementType FVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  bool bVar15;
  uint uVar16;
  TVector<double,3> *pTVar17;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar18;
  TVector<double,3> *pTVar19;
  byte bVar20;
  longlong *plVar21;
  ForElementType<FSetElementId> FVar22;
  ForElementType<FSetElementId> FVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  uint uVar29;
  uint *puVar30;
  ForElementType<unsigned_int> FVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  ForElementType<unsigned_int> FVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStackY_348 [32];
  undefined1 local_318;
  undefined1 local_317 [3];
  int local_314;
  ForAnyElementType local_310;
  int local_308 [2];
  undefined1 local_300 [4];
  int local_2fc;
  int local_2f8;
  uint local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  uint local_2e4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_2e0;
  longlong *local_2d8;
  int iStack_2d0;
  uint uStack_2cc;
  ForElementType<unsigned_int> local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2a8;
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  TPairInitializer<int_const_&,int_const_&> local_238;
  int local_228;
  int local_224;
  longlong local_220;
  longlong *local_218;
  longlong *local_210;
  TPairInitializer<int_const_&,int_const_&> local_208;
  longlong *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  int *local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  undefined4 local_15c;
  undefined4 local_13c;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar25 = param_1->ArrayNum;
  lVar34 = (longlong)iVar25;
  if (1 < iVar25) {
    local_2e0 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )__return_storage_ptr__;
    local_2a8 = param_1;
    pTVar17 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
                        (param_2,*(int *)(param_1->AllocatorInstance).Data);
    if ((param_1->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                (*pcVar5)();
      return pTVar18;
    }
    pTVar19 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
                        (param_2,*(int *)(param_1->AllocatorInstance).Data);
    local_298 = *(double *)pTVar19;
    dStack_290 = *(double *)&pTVar19->field_0x8;
    local_288 = *(double *)&pTVar19->field_0x10;
    local_280 = *(double *)pTVar17;
    dStack_278 = *(double *)&pTVar17->field_0x8;
    local_270 = *(double *)&pTVar17->field_0x10;
    uVar24 = 1;
    local_2a0 = lVar34;
    if (1 < lVar34) {
      lVar28 = 1;
      do {
        uVar32 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar32 = ~uVar24 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        uVar32 = *(uint *)((param_1->AllocatorInstance).Data + lVar28 * 4);
        uVar29 = 0;
        if ((int)uVar32 < param_2->ArrayNum) {
          uVar29 = ~uVar32 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        pTVar17 = param_2->DataPtr;
        uVar24 = uVar24 + 1;
        uVar41 = SUB84(dStack_290,0);
        uVar42 = (undefined4)((ulonglong)dStack_290 >> 0x20);
        lVar28 = lVar28 + 1;
        if (*(double *)(pTVar17 + (int)uVar32) <= local_298) {
          local_298 = *(double *)(pTVar17 + (int)uVar32);
        }
        dVar3 = *(double *)&pTVar17[(int)uVar32].field_0x8;
        if (dVar3 <= dStack_290) {
          uVar41 = SUB84(dVar3,0);
          uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dStack_290 = (double)CONCAT44(uVar42,uVar41);
        uVar41 = SUB84(local_280,0);
        uVar42 = (undefined4)((ulonglong)local_280 >> 0x20);
        if (*(double *)&pTVar17[(int)uVar32].field_0x10 <= local_288) {
          local_288 = *(double *)&pTVar17[(int)uVar32].field_0x10;
        }
        dVar3 = *(double *)(pTVar17 + (int)uVar32);
        if (local_280 <= dVar3) {
          uVar41 = SUB84(dVar3,0);
          uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        local_280 = (double)CONCAT44(uVar42,uVar41);
        uVar41 = SUB84(local_270,0);
        uVar42 = (undefined4)((ulonglong)local_270 >> 0x20);
        if (dStack_278 <= *(double *)&pTVar17[(int)uVar32].field_0x8) {
          dStack_278 = *(double *)&pTVar17[(int)uVar32].field_0x8;
        }
        dVar3 = *(double *)&pTVar17[(int)uVar32].field_0x10;
        if (local_270 <= dVar3) {
          uVar41 = SUB84(dVar3,0);
          uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        local_270 = (double)CONCAT44(uVar42,uVar41);
      } while (lVar28 < lVar34);
    }
    dVar11 = __real_3fe0000000000000;
    local_310.Data = (FScriptContainerElement *)0x0;
    lVar28 = 0x18;
    local_308[0] = 0;
    local_308[1] = 0;
    dVar43 = (local_270 - local_288) * __real_3fe0000000000000 + local_288;
    dVar36 = (dStack_278 - dStack_290) * __real_3fe0000000000000 + dStack_290;
    dVar3 = (local_280 - local_298) * __real_3fe0000000000000 + local_298;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar25,&local_310,local_308,local_308 + 1);
    if ((param_1->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                (*pcVar5)();
      return pTVar18;
    }
    pTVar17 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
                        (param_2,*(int *)(param_1->AllocatorInstance).Data);
    dVar4 = *(double *)&pTVar17->field_0x10;
    dVar45 = *(double *)&pTVar17->field_0x8;
    auVar37._0_8_ = *(double *)pTVar17;
    if ((local_308[0] < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                (*pcVar5)();
      return pTVar18;
    }
    *(double *)local_310.Data = auVar37._0_8_ - dVar3;
    *(double *)(local_310.Data + 8) = dVar45 - dVar36;
    *(double *)(local_310.Data + 0x10) = dVar4 - dVar43;
    if ((local_308[0] < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                (*pcVar5)();
      return pTVar18;
    }
    FVar12.Data = local_310.Data;
    if ((local_308[0] < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                (*pcVar5)();
      return pTVar18;
    }
    local_268 = *(double *)local_310.Data;
    dStack_260 = *(double *)(local_310.Data + 8);
    local_258 = *(double *)(local_310.Data + 0x10);
    local_250 = *(double *)FVar12.Data;
    dStack_248 = *(double *)(FVar12.Data + 8);
    local_240 = *(double *)(FVar12.Data + 0x10);
    uVar24 = 1;
    if (lVar34 < 2) {
      uVar41 = SUB84(local_240,0);
      uVar42 = (undefined4)((ulonglong)local_240 >> 0x20);
      uVar51 = SUB84(local_250,0);
      uVar52 = (undefined4)((ulonglong)local_250 >> 0x20);
      uVar49 = SUB84(local_268,0);
      uVar50 = (undefined4)((ulonglong)local_268 >> 0x20);
    }
    else {
      lVar33 = 1;
      do {
        uVar29 = ~uVar24 >> 0x1f;
        uVar32 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar32 = uVar29;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        uVar32 = *(uint *)((param_1->AllocatorInstance).Data + lVar33 * 4);
        uVar16 = 0;
        if ((int)uVar32 < param_2->ArrayNum) {
          uVar16 = ~uVar32 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        pTVar17 = param_2->DataPtr;
        dVar4 = *(double *)&pTVar17[(int)uVar32].field_0x10;
        dVar45 = *(double *)&pTVar17[(int)uVar32].field_0x8;
        auVar37._0_8_ = *(double *)(pTVar17 + (int)uVar32);
        uVar32 = 0;
        if ((int)uVar24 < local_308[0]) {
          uVar32 = uVar29;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        *(double *)(local_310.Data + lVar28) = auVar37._0_8_ - dVar3;
        *(double *)(local_310.Data + lVar28 + 8) = dVar45 - dVar36;
        *(double *)(local_310.Data + lVar28 + 0x10) = dVar4 - dVar43;
        uVar32 = 0;
        if ((int)uVar24 < local_308[0]) {
          uVar32 = uVar29;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        uVar24 = uVar24 + 1;
        uVar49 = SUB84(local_268,0);
        uVar50 = (undefined4)((ulonglong)local_268 >> 0x20);
        lVar33 = lVar33 + 1;
        uVar51 = SUB84(local_250,0);
        uVar52 = (undefined4)((ulonglong)local_250 >> 0x20);
        uVar41 = SUB84(local_240,0);
        uVar42 = (undefined4)((ulonglong)local_240 >> 0x20);
        dVar4 = *(double *)(local_310.Data + lVar28);
        if (dVar4 <= local_268) {
          uVar49 = SUB84(dVar4,0);
          uVar50 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        if (*(double *)(local_310.Data + lVar28 + 8) <= dStack_260) {
          dStack_260 = *(double *)(local_310.Data + lVar28 + 8);
        }
        if (*(double *)(local_310.Data + lVar28 + 0x10) <= local_258) {
          local_258 = *(double *)(local_310.Data + lVar28 + 0x10);
        }
        dVar4 = *(double *)(local_310.Data + lVar28);
        if (local_250 <= dVar4) {
          uVar51 = SUB84(dVar4,0);
          uVar52 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        if (dStack_248 <= *(double *)(local_310.Data + lVar28 + 8)) {
          dStack_248 = *(double *)(local_310.Data + lVar28 + 8);
        }
        dVar4 = *(double *)(local_310.Data + lVar28 + 0x10);
        if (local_240 <= dVar4) {
          uVar41 = SUB84(dVar4,0);
          uVar42 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        lVar28 = lVar28 + 0x18;
        local_268 = (double)CONCAT44(uVar50,uVar49);
        local_250 = (double)CONCAT44(uVar52,uVar51);
        local_240 = (double)CONCAT44(uVar42,uVar41);
        __return_storage_ptr__ =
             (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_2e0
        ;
        param_1 = local_2a8;
      } while (lVar33 < lVar34);
    }
    dVar3 = dStack_248 - dStack_260;
    dVar36 = (double)CONCAT44(uVar52,uVar51) - (double)CONCAT44(uVar50,uVar49);
    dVar43 = (double)CONCAT44(uVar42,uVar41) - local_258;
    if (((dVar36 <= dVar3) || (dVar36 <= dVar43)) && (dVar36 = dVar3, dVar3 <= dVar43)) {
      dVar36 = dVar43;
    }
    if (__real_3f1a36e2e0000000 <= dVar36) {
      dVar47 = dStack_260 - __real_3f50624de0000000;
      dVar48 = local_258 - __real_3f50624de0000000;
      dVar43 = (double)CONCAT44(uVar50,uVar49) - __real_3f50624de0000000;
      dVar45 = dStack_248 + __real_3f50624de0000000;
      dVar3 = (double)CONCAT44(uVar42,uVar41) + __real_3f50624de0000000;
      auVar37._0_8_ = dVar45 - dVar47;
      dVar4 = ((double)CONCAT44(uVar52,uVar51) + __real_3f50624de0000000) - dVar43;
      dVar36 = dVar3 - dVar48;
      if (((dVar4 <= auVar37._0_8_) || (dVar10 = dVar4, dVar4 <= dVar36)) &&
         (dVar10 = dVar36, dVar36 <= auVar37._0_8_)) {
        dVar10 = auVar37._0_8_;
      }
      local_10c = 0x80;
      local_138._0_8_ = 0;
      local_138._8_8_ = 0;
      local_118 = (uint *)0x0;
      local_110 = 0;
      local_104 = 0;
      local_f8 = (ForElementType<FSetElementId>)0x0;
      local_f0 = 0;
      local_108 = 0xffffffff;
      TSet<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)local_138,iVar25);
      dVar36 = __real_3ff0000000000000;
      auVar37._0_8_ = dVar10 * __real_4059000009600004;
      lVar34 = (longlong)auVar37._0_8_;
      if ((lVar34 != -0x8000000000000000) && ((double)lVar34 != auVar37._0_8_)) {
        auVar37._8_8_ = auVar37._0_8_;
        uVar24 = movmskpd(0,auVar37);
        auVar37._0_8_ = (double)(longlong)(lVar34 - (ulonglong)(uVar24 & 1));
      }
      local_208.Value = (int *)(longlong)auVar37._0_8_;
      local_314 = 0;
      auVar37._0_8_ = (double)(longlong)local_208.Value;
      dVar10 = dVar10 / auVar37._0_8_;
      do {
        iVar25 = local_314;
        TSet<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)local_138);
        pTVar13 = local_2a8;
        uVar24 = 0;
        lVar34 = 0;
        auVar38._0_8_ = (double)iVar25 * dVar10 * dVar11;
        auVar38._8_8_ = 0;
        dVar9 = ((dVar3 - dVar48) * dVar11 + dVar48) - auVar38._0_8_;
        dVar8 = ((dVar45 - dVar47) * dVar11 + dVar47) - auVar38._0_8_;
        dVar7 = (dVar4 * dVar11 + dVar43) - auVar38._0_8_;
        if (0 < local_2a0) {
          lVar28 = 0;
          do {
            uVar32 = 0;
            if ((int)uVar24 < pTVar13->ArrayNum) {
              uVar32 = ~uVar24 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               auVar38 = extraout_XMM0, bVar15)) {
              pcVar5 = (code *)swi(3);
              pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)(*pcVar5)();
              return pTVar18;
            }
            local_2e4 = *(uint *)((pTVar13->AllocatorInstance).Data + lVar34 * 4);
            if ((iVar25 != 0) &&
               (*(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__)->Elements).field_0x8 !=
                *(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__)->Elements).field_0x34)) {
              FVar23 = (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)__return_storage_ptr__)->Hash).SecondaryData;
              FVar22 = (ForElementType<FSetElementId>)
                       &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)__return_storage_ptr__)->Hash;
              if (FVar23 != (ForElementType<FSetElementId>)0x0) {
                FVar22 = FVar23;
              }
              iVar26 = *(int *)((longlong)FVar22 +
                               (ulonglong)
                               (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                  *)__return_storage_ptr__)->HashSize - 1U & local_2e4) * 4);
              if (iVar26 != -1) {
                do {
                  if (*(uint *)(*(longlong *)
                                 &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                    *)__return_storage_ptr__)->Elements + (longlong)iVar26 * 0x10)
                      == local_2e4) goto LAB_143e22663;
                  iVar26 = *(int *)(*(longlong *)
                                     &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                        *)__return_storage_ptr__)->Elements + 8 +
                                   (longlong)iVar26 * 0x10);
                } while (iVar26 != -1);
              }
            }
            uVar32 = 0;
            if ((int)uVar24 < local_308[0]) {
              uVar32 = ~uVar24 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               auVar38 = extraout_XMM0_00, bVar15)) {
              pcVar5 = (code *)swi(3);
              pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)(*pcVar5)();
              return pTVar18;
            }
            dVar44 = dVar36 / dVar10;
            dVar46 = auVar37._0_8_ * dVar11;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = (*(double *)(local_310.Data + lVar28 + 0x10) - dVar9) * dVar44 + dVar46;
            auVar38 = roundpd(auVar38,auVar39,1);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = (*(double *)(local_310.Data + lVar28 + 8) - dVar8) * dVar44 + dVar46;
            auVar39 = roundpd(auVar38,auVar40,1);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (*(double *)(local_310.Data + lVar28) - dVar7) * dVar44 + dVar46;
            auVar40 = roundpd(auVar39,auVar6,1);
            local_220 = (longlong)local_208.Value *
                        ((longlong)auVar40._0_8_ * (longlong)local_208.Value +
                        (longlong)auVar39._0_8_) + (longlong)auVar38._0_8_;
            uVar32 = (int)((ulonglong)local_220 >> 0x20) * 0x17 + (int)local_220;
            if (local_138._8_4_ != local_104) {
              FVar23 = (ForElementType<FSetElementId>)local_100;
              if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                FVar23 = local_f8;
              }
              iVar26 = *(int *)((longlong)FVar23 + (ulonglong)(local_f0 - 1U & uVar32) * 4);
              while (iVar26 != -1) {
                plVar21 = (longlong *)((longlong)iVar26 * 0x60 + local_138._0_8_);
                if (*plVar21 == local_220) {
                  if (plVar21 != (longlong *)0x0) goto LAB_143e2264e;
                  break;
                }
                iVar26 = (int)plVar21[0xb];
              }
            }
            local_218 = &local_220;
            TSet<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                      ((TSet<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)local_138,(uint)&local_2e8,
                       (TKeyInitializer<__int64_const_&> *)(ulonglong)uVar32,(bool *)&local_218);
            plVar21 = (longlong *)((longlong)local_2e8 * 0x60 + local_138._0_8_);
LAB_143e2264e:
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar21 + 1),
                       (int *)((longlong)&local_238.Key + 4),(bool *)&local_2e4);
            auVar38 = extraout_XMM0_01;
LAB_143e22663:
            uVar24 = uVar24 + 1;
            lVar34 = lVar34 + 1;
            lVar28 = lVar28 + 0x18;
          } while (lVar34 < local_2a0);
        }
        uVar24 = local_110;
        iStack_2d0 = 0;
        local_2b8 = 0;
        uStack_2cc = 1;
        uStack_2bc = 0;
        if (local_110 != 0) {
          puVar30 = (uint *)(local_138 + 0x10);
          if (local_118 != (uint *)0x0) {
            puVar30 = local_118;
          }
          uVar32 = *puVar30;
          while (uVar32 == 0) {
            lVar34 = (longlong)iStack_2d0;
            local_2b8 = local_2b8 + 0x20;
            iStack_2d0 = iStack_2d0 + 1;
            uStack_2bc = local_110;
            if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2d0)
            goto LAB_143e22700;
            uVar32 = puVar30[lVar34 + 1];
          }
          uStack_2cc = -uVar32 & uVar32;
          uVar2 = (ulonglong)uStack_2cc * 2 + 1;
          lVar34 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_238.Value._0_4_ = (int)lVar34;
          uStack_2bc = (int)local_238.Value + -1 + local_2b8;
          if ((int)local_110 < (int)uStack_2bc) {
            uStack_2bc = local_110;
          }
        }
LAB_143e22700:
        local_2d8 = (longlong *)local_138;
        uStack_2b4 = local_15c;
        local_2c8 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
        iStack_2b0 = local_138._8_4_ - local_104;
        uVar32 = local_110 & 0xffffffe0;
        TStack_1c0._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
        uStack_2c0 = 0xffffffff;
        TStack_1c0.CurrentBitIndex = uStack_2bc;
        TStack_1c0.UnvisitedBitMask = 0xffffffff;
        iVar25 = (int)local_110 >> 5;
        TStack_1c0._28_4_ = local_15c;
        TStack_1c0.BaseBitIndex = local_2b8;
        uStack_1a0 = CONCAT44(uStack_2ac,iStack_2b0);
        bVar20 = (byte)local_110;
        local_2f4 = local_110;
        local_1c8 = local_2d8;
        TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c8;
        if (((int)local_110 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (*pcVar5)();
          return pTVar18;
        }
        if (uVar24 != local_110) {
          puVar30 = (uint *)(local_138 + 0x10);
          if (local_118 != (uint *)0x0) {
            puVar30 = local_118;
          }
          uVar24 = -1 << (bVar20 & 0x1f) & puVar30[iVar25];
          while (uVar24 == 0) {
            lVar34 = (longlong)iVar25;
            uVar32 = uVar32 + 0x20;
            iVar25 = iVar25 + 1;
            if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) {
              local_2f4 = local_110;
              uVar24 = local_110;
              goto LAB_143e22840;
            }
            uVar24 = puVar30[lVar34 + 1];
          }
          uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
          lVar34 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_238.Value._4_4_ = (int)lVar34;
          local_2f4 = (uVar32 - 1) + local_238.Value._4_4_;
          uVar24 = local_2f4;
          if ((int)local_110 < (int)local_2f4) {
            uVar24 = local_110;
            local_2f4 = local_110;
          }
        }
LAB_143e22840:
        while( true ) {
          plVar21 = local_1c8;
          if ((int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34) != (int)uStack_1a0) {
            local_318 = 0;
            `TSparseArray<TSparseSetElement<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_318);
          }
          __return_storage_ptr__ =
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_2e0;
          if (((TStack_1c0.CurrentBitIndex == uVar24) &&
              (TStack_1c0.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_138 + 0x10))) &&
             (plVar21 == (longlong *)local_138)) break;
          lVar34 = *plVar21;
          lVar28 = (longlong)TStack_1c0.CurrentBitIndex * 0x60;
          local_210 = (longlong *)(lVar34 + 8 + lVar28);
          iVar25 = *(int *)(lVar28 + 0x10 + lVar34) - *(int *)(lVar28 + 0x3c + lVar34);
          if (1 < iVar25) {
            local_2f8 = -1;
            local_2c8 = (ForElementType<unsigned_int>)(lVar34 + 0x18 + lVar28);
            iStack_2d0 = 0;
            local_2b8 = 0;
            uStack_2cc = 1;
            uVar24 = *(int *)((longlong)local_2c8 + 0x18);
            uStack_2bc = 0;
            if (uVar24 != 0) {
              FVar35 = local_2c8;
              if (*(ForElementType<unsigned_int> *)((longlong)local_2c8 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar35 = *(ForElementType<unsigned_int> *)((longlong)local_2c8 + 0x10);
              }
              uVar32 = *(uint *)FVar35;
              while (uVar32 == 0) {
                lVar33 = (longlong)iStack_2d0;
                local_2b8 = local_2b8 + 0x20;
                iStack_2d0 = iStack_2d0 + 1;
                uStack_2bc = uVar24;
                if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2d0)
                goto LAB_143e22940;
                uVar32 = ((uint *)((longlong)FVar35 + 4))[lVar33];
              }
              uStack_2cc = -uVar32 & uVar32;
              uVar2 = (ulonglong)uStack_2cc * 2 + 1;
              lVar33 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              local_228 = (int)lVar33;
              uStack_2bc = local_228 + -1 + local_2b8;
              if ((int)uVar24 < (int)uStack_2bc) {
                uStack_2bc = uVar24;
              }
            }
LAB_143e22940:
            FVar35 = (ForElementType<unsigned_int>)(lVar34 + 0x18 + lVar28);
            uVar32 = *(uint *)(lVar28 + 0x30 + lVar34);
            TStack_1f0._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
            uStack_2c0 = 0xffffffff;
            TStack_1f0.CurrentBitIndex = uStack_2bc;
            TStack_1f0.UnvisitedBitMask = 0xffffffff;
            uVar29 = uVar32 & 0xffffffe0;
            uStack_2b4 = local_13c;
            TStack_1f0._28_4_ = local_13c;
            TStack_1f0.BaseBitIndex = local_2b8;
            uStack_1d0 = CONCAT44(uStack_2ac,iVar25);
            iVar26 = (int)uVar32 >> 5;
            local_2d8 = local_210;
            iStack_2b0 = iVar25;
            local_1f8 = local_210;
            TStack_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c8;
            if ((((int)uVar32 < 0) || ((int)uVar24 < (int)uVar32)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar15)) {
              pcVar5 = (code *)swi(3);
              pTVar18 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)(*pcVar5)();
              return pTVar18;
            }
            plVar21 = local_210;
            uVar24 = *(int *)((longlong)FVar35 + 0x18);
            if (uVar32 != uVar24) {
              FVar31 = FVar35;
              if (*(ForElementType<unsigned_int> *)((longlong)FVar35 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar31 = *(ForElementType<unsigned_int> *)((longlong)FVar35 + 0x10);
              }
              uVar32 = -1 << ((byte)uVar32 & 0x1f) &
                       *(uint *)((longlong)FVar31 + (longlong)iVar26 * 4);
              while (uVar32 == 0) {
                lVar34 = (longlong)iVar26;
                uVar29 = uVar29 + 0x20;
                iVar26 = iVar26 + 1;
                uVar32 = uVar24;
                if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
                goto LAB_143e22a51;
                uVar32 = ((uint *)((longlong)FVar31 + 4))[lVar34];
              }
              uVar2 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
              lVar34 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              local_224 = (int)lVar34;
              uVar32 = local_224 + -1 + uVar29;
              if ((int)uVar24 < (int)uVar32) {
                uVar32 = uVar24;
              }
            }
LAB_143e22a51:
            while( true ) {
              plVar14 = local_1f8;
              if ((int)local_1f8[1] - *(int *)((longlong)local_1f8 + 0x34) != (int)uStack_1d0) {
                local_317[0] = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_317);
              }
              if (((TStack_1f0.CurrentBitIndex == uVar32) &&
                  ((ForElementType<unsigned_int>)TStack_1f0.Array == FVar35)) &&
                 (uVar24 = local_2f4, plVar14 == plVar21)) break;
              local_2f0 = *(int *)(*plVar14 + (longlong)TStack_1f0.CurrentBitIndex * 0xc);
              iVar25 = local_2f0;
              if (local_2f8 != -1) {
                local_188 = &local_2f0;
                local_180 = &local_2f8;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          (local_2e0,&local_208,(bool *)&local_188);
                iVar25 = local_2f8;
              }
              local_2f8 = iVar25;
              TStack_1f0.UnvisitedBitMask =
                   TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
            }
          }
          TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
        }
        local_314 = local_314 + 1;
      } while (local_314 < 2);
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
    }
    else {
      pFVar27 = (param_1->AllocatorInstance).Data;
      iVar25 = param_1->ArrayNum;
      local_2fc = -1;
      pFVar1 = pFVar27 + (longlong)iVar25 * 4;
      while( true ) {
        if (param_1->ArrayNum != iVar25) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_300);
        }
        if (pFVar27 == pFVar1) break;
        local_2ec = *(int *)pFVar27;
        if (local_2fc == -1) {
          pFVar27 = pFVar27 + 4;
          local_2fc = local_2ec;
        }
        else {
          local_198 = &local_2ec;
          local_190 = &local_2fc;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,&local_238,(bool *)&local_198);
          pFVar27 = pFVar27 + 4;
        }
      }
    }
    if (local_310.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetBoundaryPoints @ 143e23d70

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
Chaos::FTriangleMesh::GetBoundaryPoints
          (FTriangleMesh *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FSegmentMesh *pFVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  byte bVar14;
  undefined1 *puVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint *puVar26;
  uint local_res10;
  longlong local_118;
  uint local_108;
  uint uStack_104;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_c8;
  FScriptContainerElement *local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  FSparseArrayAllocationInfo local_68;
  FSparseArrayAllocationInfo local_58;
  
  pFVar10 = GetSegmentMesh(this);
  GetSegmentMesh(this);
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  iVar22 = (this->MEdgeToFaces).ArrayNum;
  local_res10 = 0;
  if (0 < iVar22) {
    local_118 = 0;
    do {
      uVar23 = 0;
      if ((int)local_res10 < iVar22) {
        uVar23 = ~local_res10 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar5)();
        return pTVar11;
      }
      pFVar1 = (this->MEdgeToFaces).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + local_118 * 8) == -1) || (*(int *)(pFVar1 + local_118 * 8 + 4) == -1))
      {
        uVar23 = 0;
        if ((int)local_res10 < (pFVar10->MElements).ArrayNum) {
          uVar23 = ~local_res10 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar5)();
          return pTVar11;
        }
        iVar22 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        local_c0 = (pFVar10->MElements).AllocatorInstance.Data + local_118 * 8;
        uVar23 = *(uint *)local_c0;
        if (iVar22 == 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                             (int *)&(__return_storage_ptr__->Elements).field_0x8,
                             (int *)&(__return_storage_ptr__->Elements).field_0xc);
          iVar22 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puVar20 = &(__return_storage_ptr__->Elements).field_0x10;
          iVar9 = (int)((iVar22 >> 0x1f & 0x1fU) + iVar22) >> 5;
          if ((iVar22 == 0) || (iVar9 != (int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5)) {
            iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
            if (iVar7 < iVar22 + 1) {
              uVar17 = iVar7 + 0x1fU >> 5;
              uVar21 = iVar22 + 0x20U >> 5;
              if (uVar21 < 5) {
                iVar7 = 4;
              }
              else {
                uVar24 = (ulonglong)uVar21;
                if (uVar17 < 5) {
                  uVar17 = 0;
                }
                if (uVar17 == 0) {
                  uVar12 = 4;
                  if (4 < uVar24) {
                    uVar12 = uVar24;
                  }
                }
                else {
                  uVar12 = ((ulonglong)uVar21 * 3 >> 3) + 0x10 + uVar24;
                }
                uVar13 = FMemory::QuantizeSize(uVar12 * 4,0);
                iVar7 = (int)(uVar13 >> 2);
                if (iVar7 < (int)uVar21) {
                  iVar7 = 0x7fffffff;
                }
              }
              *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar7 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)puVar20,
                         *(int *)&(__return_storage_ptr__->Elements).field_0x28);
            }
            puVar4 = &(__return_storage_ptr__->Elements).field_0x28;
            *(int *)puVar4 = *(int *)puVar4 + 1;
            iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            uVar21 = iVar7 >> 0x1f & 0x1f;
            uVar17 = iVar7 + uVar21;
            iVar7 = (uVar17 & 0x1f) - uVar21;
            if (iVar7 != 0) {
              puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar15 = puVar20;
              if (puVar4 != (undefined1 *)0x0) {
                puVar15 = puVar4;
              }
              *(uint *)(puVar15 + (longlong)((int)uVar17 >> 5) * 4) =
                   *(uint *)(puVar15 + (longlong)((int)uVar17 >> 5) * 4) &
                   0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
            }
          }
          else {
            *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar22 + 1;
          }
          puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
          if (puVar4 != (undefined1 *)0x0) {
            puVar20 = puVar4;
          }
          *(uint *)(puVar20 + (longlong)iVar9 * 4) =
               *(uint *)(puVar20 + (longlong)iVar9 * 4) & ~(1 << ((byte)iVar22 & 0x1f));
        }
        else {
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
          iVar22 = iVar22 + -1;
          lVar2 = *(longlong *)&__return_storage_ptr__->Elements;
          iVar9 = *(int *)(lVar2 + 4 + (longlong)iVar8 * 0xc);
          *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar9;
          *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar22;
          if (iVar22 != 0) {
            *(undefined4 *)(lVar2 + (longlong)iVar9 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_68,iVar8);
        if (local_68.Pointer == (uint *)0x0) {
          puVar18 = (uint *)0x0;
        }
        else {
          *(uint *)local_68.Pointer = uVar23;
          *(uint *)((longlong)local_68.Pointer + 4) = 0xffffffff;
          puVar18 = local_68.Pointer;
        }
        puVar19 = (uint *)0x0;
        iVar22 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        uVar23 = *puVar18;
        if ((iVar22 - iVar8 != 1) && (iVar22 != iVar8)) {
          FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar3;
          }
          iVar22 = *(int *)((longlong)FVar16 +
                           (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar23) * 4);
          if (iVar22 != -1) {
            do {
              if (*(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar22 * 0xc)
                  == uVar23) {
                if (iVar22 != -1) {
                  *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar22 * 0xc)
                       = uVar23;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)__return_storage_ptr__,local_68.Index,1);
                  goto LAB_143e2432d;
                }
                break;
              }
              iVar22 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 4 +
                               (longlong)iVar22 * 0xc);
            } while (iVar22 != -1);
          }
        }
        uVar21 = 1;
        uVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                 *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar17) {
          uVar24 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uVar21 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((int)uVar17 < 1) || ((int)uVar21 <= __return_storage_ptr__->HashSize)) {
          uVar23 = __return_storage_ptr__->HashSize - 1U & uVar23;
          puVar18[2] = uVar23;
          FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar3;
          }
          uVar24 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar23;
          puVar18[1] = *(uint *)((longlong)FVar16 + uVar24 * 4);
          *(int *)((longlong)FVar16 + uVar24 * 4) = local_68.Index;
        }
        else {
          __return_storage_ptr__->HashSize = uVar21;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar21 != 0) {
            uVar23 = uVar21;
            if (uVar21 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar23 = 0;
                goto LAB_143e2415b;
              }
            }
            else {
LAB_143e2415b:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar23
                         ,4);
            }
            if (0 < (int)uVar21) {
              uVar24 = (ulonglong)uVar21;
              puVar18 = puVar19;
              do {
                FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar16 = FVar3;
                }
                uVar12 = (ulonglong)puVar18 & (longlong)(int)uVar21 - 1U;
                puVar18 = (uint *)((longlong)puVar18 + 1);
                *(undefined4 *)((longlong)FVar16 + uVar12 * 4) = 0xffffffff;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
          }
          if (__return_storage_ptr__->HashSize != 0) {
            uVar23 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
            local_b0.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 &(__return_storage_ptr__->Elements).field_0x10;
            uStack_104 = 1;
            local_108 = 0;
            uStack_f4 = 0;
            uStack_f0 = 0;
            puVar18 = puVar19;
            if (uVar23 != 0) {
              puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar26 = (uint *)local_b0.Array;
              if (puVar18 != (uint *)0x0) {
                puVar26 = puVar18;
              }
              uVar17 = *puVar26;
              puVar18 = puVar19;
              puVar25 = puVar19;
              while (uVar17 == 0) {
                uStack_f0 = (int)puVar25 + 0x20;
                puVar25 = (uint *)(ulonglong)uStack_f0;
                iVar22 = (int)puVar18;
                local_108 = iVar22 + 1;
                puVar18 = (uint *)(ulonglong)local_108;
                if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_108)
                goto LAB_143e24262;
                uVar17 = puVar26[(longlong)iVar22 + 1];
              }
              uStack_104 = -uVar17 & uVar17;
              uVar24 = (ulonglong)uStack_104 * 2 + 1;
              lVar2 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                }
              }
              uStack_f4 = (uStack_f0 - 1) + (int)lVar2;
              puVar18 = (uint *)(ulonglong)uStack_f4;
              if ((int)uVar23 < (int)uStack_f4) {
LAB_143e24262:
                puVar18 = (uint *)(ulonglong)uVar23;
                uStack_f4 = uVar23;
              }
            }
            local_b0._padding_ = CONCAT44(uStack_104,local_108);
            local_b0.CurrentBitIndex = uStack_f4;
            local_b0.UnvisitedBitMask = 0xffffffff;
            local_b0._28_4_ = uStack_ec;
            local_b0.BaseBitIndex = uStack_f0;
            local_b8 = __return_storage_ptr__;
            if ((int)puVar18 < (int)uVar23) {
              do {
                iVar22 = (int)puVar18;
                uVar23 = __return_storage_ptr__->HashSize - 1U &
                         *(uint *)(*(longlong *)&local_b8->Elements + (longlong)iVar22 * 0xc);
                lVar2 = *(longlong *)&local_b8->Elements + (longlong)iVar22 * 0xc;
                *(uint *)(lVar2 + 8) = uVar23;
                FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar16 = FVar3;
                }
                uVar24 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar23;
                *(undefined4 *)(lVar2 + 4) = *(undefined4 *)((longlong)FVar16 + uVar24 * 4);
                *(int *)((longlong)FVar16 + uVar24 * 4) = iVar22;
                local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
                puVar18 = (uint *)(ulonglong)(uint)local_b0.CurrentBitIndex;
              } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
            }
          }
        }
LAB_143e2432d:
        iVar22 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        uVar23 = *(uint *)(local_c0 + 4);
        if (iVar22 == 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                             (int *)&(__return_storage_ptr__->Elements).field_0x8,
                             (int *)&(__return_storage_ptr__->Elements).field_0xc);
          iVar22 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puVar20 = &(__return_storage_ptr__->Elements).field_0x10;
          if ((iVar22 == 0) ||
             ((int)(iVar22 + (iVar22 >> 0x1f & 0x1fU)) >> 5 !=
              (int)((iVar22 + -1 >> 0x1f & 0x1fU) + iVar22 + -1) >> 5)) {
            iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
            if (iVar9 < iVar22 + 1) {
              uVar17 = iVar9 + 0x1fU >> 5;
              uVar21 = iVar22 + 0x20U >> 5;
              if (uVar21 < 5) {
                iVar9 = 4;
              }
              else {
                uVar24 = (ulonglong)uVar21;
                if (uVar17 < 5) {
                  uVar17 = 0;
                }
                if (uVar17 == 0) {
                  uVar12 = 4;
                  if (4 < uVar24) {
                    uVar12 = uVar24;
                  }
                }
                else {
                  uVar12 = ((ulonglong)uVar21 * 3 >> 3) + 0x10 + uVar24;
                }
                uVar13 = FMemory::QuantizeSize(uVar12 * 4,0);
                iVar9 = (int)(uVar13 >> 2);
                if (iVar9 < (int)uVar21) {
                  iVar9 = 0x7fffffff;
                }
              }
              *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar9 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)puVar20,
                         *(int *)&(__return_storage_ptr__->Elements).field_0x28);
            }
            iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28 + 1;
            *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar9;
            uVar21 = iVar9 >> 0x1f & 0x1f;
            uVar17 = iVar9 + uVar21;
            iVar9 = (uVar17 & 0x1f) - uVar21;
            if (iVar9 != 0) {
              puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar15 = puVar20;
              if (puVar4 != (undefined1 *)0x0) {
                puVar15 = puVar4;
              }
              *(uint *)(puVar15 + (longlong)((int)uVar17 >> 5) * 4) =
                   *(uint *)(puVar15 + (longlong)((int)uVar17 >> 5) * 4) &
                   0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
            }
          }
          else {
            *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar22 + 1;
          }
          puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
          if (puVar4 != (undefined1 *)0x0) {
            puVar20 = puVar4;
          }
          bVar14 = (byte)iVar22 & 0x1f;
          if (iVar22 < 0) {
            iVar22 = iVar22 + 0x1f;
            bVar14 = bVar14 - 0x20;
          }
          *(uint *)(puVar20 + (longlong)(iVar22 >> 5) * 4) =
               *(uint *)(puVar20 + (longlong)(iVar22 >> 5) * 4) & ~(1 << (bVar14 & 0x1f));
        }
        else {
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
          iVar22 = iVar22 + -1;
          lVar2 = *(longlong *)&__return_storage_ptr__->Elements;
          iVar9 = *(int *)(lVar2 + 4 + (longlong)iVar8 * 0xc);
          *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar9;
          *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar22;
          if (iVar22 != 0) {
            *(undefined4 *)(lVar2 + (longlong)iVar9 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_58,iVar8);
        puVar18 = puVar19;
        if (local_58.Pointer != (uint *)0x0) {
          *(uint *)local_58.Pointer = uVar23;
          *(uint *)((longlong)local_58.Pointer + 4) = 0xffffffff;
          puVar18 = local_58.Pointer;
        }
        iVar22 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        uVar23 = *puVar18;
        if ((iVar22 - iVar8 != 1) && (iVar22 != iVar8)) {
          FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar3;
          }
          iVar22 = *(int *)((longlong)FVar16 +
                           (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar23) * 4);
          if (iVar22 != -1) {
            do {
              if (*(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar22 * 0xc)
                  == uVar23) {
                if (iVar22 != -1) {
                  *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar22 * 0xc)
                       = uVar23;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)__return_storage_ptr__,local_58.Index,1);
                  goto LAB_143e24752;
                }
                break;
              }
              iVar22 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 4 +
                               (longlong)iVar22 * 0xc);
            } while (iVar22 != -1);
          }
        }
        uVar21 = 1;
        uVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                 *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar17) {
          uVar24 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          local_c8 = (undefined4)lVar2;
          uVar21 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((int)uVar17 < 1) || ((int)uVar21 <= __return_storage_ptr__->HashSize)) {
          uVar23 = __return_storage_ptr__->HashSize - 1U & uVar23;
          puVar18[2] = uVar23;
          FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar3;
          }
          uVar24 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar23;
          puVar18[1] = *(uint *)((longlong)FVar16 + uVar24 * 4);
          *(int *)((longlong)FVar16 + uVar24 * 4) = local_58.Index;
        }
        else {
          __return_storage_ptr__->HashSize = uVar21;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar21 != 0) {
            uVar23 = uVar21;
            if (uVar21 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar23 = 0;
                goto LAB_143e245db;
              }
            }
            else {
LAB_143e245db:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar23
                         ,4);
            }
            if (0 < (int)uVar21) {
              uVar24 = (ulonglong)uVar21;
              do {
                FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar16 = FVar3;
                }
                uVar12 = (ulonglong)puVar19 & (longlong)(int)uVar21 - 1U;
                puVar19 = (uint *)((longlong)puVar19 + 1);
                *(undefined4 *)((longlong)FVar16 + uVar12 * 4) = 0xffffffff;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
          }
          if (__return_storage_ptr__->HashSize != 0) {
            local_e8.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 &(__return_storage_ptr__->Elements).field_0x10;
            local_e8._padding_._0_4_ = 0;
            local_e8._padding_._4_4_ = 1;
            local_e8.UnvisitedBitMask = 0xffffffff;
            local_e8.CurrentBitIndex = 0;
            local_e8.BaseBitIndex = 0;
            if (*(int *)&(__return_storage_ptr__->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
            }
            local_88._padding_ = CONCAT44(local_e8._padding_._4_4_,(undefined4)local_e8._padding_);
            local_88.Array = local_e8.Array;
            local_88.UnvisitedBitMask = local_e8.UnvisitedBitMask;
            local_88.CurrentBitIndex = local_e8.CurrentBitIndex;
            local_88.BaseBitIndex = local_e8.BaseBitIndex;
            local_88._28_4_ = local_e8._28_4_;
            local_90 = __return_storage_ptr__;
            if (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits) {
              do {
                uVar23 = __return_storage_ptr__->HashSize - 1U &
                         *(uint *)(*(longlong *)&local_90->Elements +
                                  (longlong)local_88.CurrentBitIndex * 0xc);
                lVar2 = *(longlong *)&local_90->Elements + (longlong)local_88.CurrentBitIndex * 0xc;
                *(uint *)(lVar2 + 8) = uVar23;
                FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar16 = FVar3;
                }
                uVar24 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar23;
                *(undefined4 *)(lVar2 + 4) = *(undefined4 *)((longlong)FVar16 + uVar24 * 4);
                *(int *)((longlong)FVar16 + uVar24 * 4) = local_88.CurrentBitIndex;
                local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
              } while (local_88.CurrentBitIndex < (local_88.Array)->NumBits);
            }
          }
        }
      }
LAB_143e24752:
      local_res10 = local_res10 + 1;
      local_118 = local_118 + 1;
      iVar22 = (this->MEdgeToFaces).ArrayNum;
    } while ((int)local_res10 < iVar22);
  }
  return __return_storage_ptr__;
}

// GetConvexHullFromParticles @ 143e26d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTriangleMesh * __cdecl
Chaos::FTriangleMesh::GetConvexHullFromParticles
          (FTriangleMesh *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FTriangleMesh *pFVar19;
  TVector<double,3> *pTVar20;
  TVector<double,3> *pTVar21;
  TVector<double,3> *pTVar22;
  ulong64 uVar23;
  ForAnyElementType FVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ForElementType<FSetElementId> FVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  longlong lVar34;
  longlong lVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined8 uVar47;
  double dVar48;
  undefined8 uVar49;
  double dVar50;
  double dVar51;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar52 [16];
  undefined1 auStackY_2e8 [32];
  uint local_298 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_290;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  TArray<int,TSizedDefaultAllocator<32>_> local_270;
  TArray<int,TSizedDefaultAllocator<32>_> local_260;
  ForAnyElementType local_250;
  undefined8 local_248;
  TVector<double,3> *local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  FTriangleMesh *local_218;
  int local_210;
  int local_20c;
  int local_208;
  undefined4 local_204;
  FSparseArrayAllocationInfo local_200;
  double local_1f0;
  double local_1e8;
  undefined1 local_1d8 [32];
  ForElementType<unsigned_int> local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  ForElementType<FSetElementId> local_198;
  int local_190;
  undefined1 local_188 [40];
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  TPlane<double,3> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar31 = 0;
  local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.ArrayNum = 0;
  local_290.ArrayMax = 0;
  iVar15 = param_1->ArrayNum;
  local_218 = __return_storage_ptr__;
  if (iVar15 < 3) {
    FTriangleMesh(__return_storage_ptr__,&local_290,0,-1,true);
    if (local_290.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_290.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  uVar30 = 1;
  lVar34 = 1;
  local_274 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  uVar27 = uVar31;
  uVar32 = uVar31;
  do {
    uVar37 = ~uVar30 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar30 < iVar15) {
      uVar12 = uVar37;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    local_240 = param_1->DataPtr;
    uVar12 = 0;
    if ((int)uVar31 < param_1->ArrayNum) {
      uVar12 = ~uVar31 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    uVar12 = uVar30;
    lVar35 = lVar34;
    if (*(double *)(local_240 + lVar34) <= *(double *)(param_1->DataPtr + local_238)) {
      uVar12 = uVar31;
      lVar35 = local_238;
    }
    local_238 = lVar35;
    uVar31 = 0;
    if ((int)uVar30 < param_1->ArrayNum) {
      uVar31 = uVar37;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    local_240 = param_1->DataPtr;
    uVar31 = 0;
    if ((int)uVar27 < param_1->ArrayNum) {
      uVar31 = ~uVar27 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    uVar13 = uVar30;
    lVar35 = lVar34;
    if (*(double *)(param_1->DataPtr + local_230) <= *(double *)(local_240 + lVar34)) {
      uVar13 = uVar27;
      lVar35 = local_230;
    }
    local_230 = lVar35;
    uVar31 = 0;
    if ((int)uVar30 < param_1->ArrayNum) {
      uVar31 = uVar37;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    local_240 = param_1->DataPtr;
    uVar31 = 0;
    if ((int)local_274 < param_1->ArrayNum) {
      uVar31 = ~local_274 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    uVar31 = uVar30;
    lVar35 = lVar34;
    if (*(double *)&local_240[lVar34].field_0x8 <= *(double *)&param_1->DataPtr[local_228].field_0x8
       ) {
      uVar31 = local_274;
      lVar35 = local_228;
    }
    local_228 = lVar35;
    uVar27 = 0;
    if ((int)uVar30 < param_1->ArrayNum) {
      uVar27 = uVar37;
    }
    local_274 = uVar31;
    if ((uVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    pTVar20 = param_1->DataPtr;
    uVar31 = 0;
    if ((int)uVar32 < param_1->ArrayNum) {
      uVar31 = ~uVar32 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FTriangleMesh *)(*pcVar1)();
      return pFVar19;
    }
    pFVar19 = local_218;
    uVar37 = local_274;
    iVar15 = param_1->ArrayNum;
    uVar14 = uVar30;
    lVar35 = lVar34;
    if (*(double *)&param_1->DataPtr[local_220].field_0x8 <= *(double *)&pTVar20[lVar34].field_0x8)
    {
      uVar14 = uVar32;
      lVar35 = local_220;
    }
    local_220 = lVar35;
    uVar30 = uVar30 + 1;
    lVar34 = lVar34 + 1;
    uVar31 = uVar12;
    uVar27 = uVar13;
    uVar32 = uVar14;
  } while ((int)uVar30 < iVar15);
  if (((uVar12 == uVar13) && (uVar14 == local_274)) && (uVar13 == uVar14)) {
    FTriangleMesh(local_218,&local_290,0,-1,true);
    goto LAB_143e28358;
  }
  pTVar20 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,local_274);
  pTVar21 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,uVar14);
  dVar39 = *(double *)&pTVar20->field_0x8 - *(double *)&pTVar21->field_0x8;
  dVar44 = *(double *)&pTVar20->field_0x10 - *(double *)&pTVar21->field_0x10;
  auVar41._8_8_ = 0;
  auVar41._0_8_ =
       (*(double *)pTVar20 - *(double *)pTVar21) * (*(double *)pTVar20 - *(double *)pTVar21) +
       dVar39 * dVar39 + dVar44 * dVar44;
  auVar52 = sqrtpd(unaff_XMM6,auVar41);
  pTVar20 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,uVar12);
  pTVar21 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,uVar13);
  dVar39 = *(double *)&pTVar20->field_0x8 - *(double *)&pTVar21->field_0x8;
  dVar44 = *(double *)&pTVar20->field_0x10 - *(double *)&pTVar21->field_0x10;
  auVar40._0_8_ = dVar39 * dVar39;
  auVar40._8_8_ = 0;
  auVar43._8_8_ = 0;
  auVar43._0_8_ =
       (*(double *)pTVar20 - *(double *)pTVar21) * (*(double *)pTVar20 - *(double *)pTVar21) +
       auVar40._0_8_ + dVar44 * dVar44;
  auVar41 = sqrtpd(auVar40,auVar43);
  local_280 = uVar13;
  if (auVar41._0_8_ <= auVar52._0_8_) {
    local_280 = uVar14;
    uVar12 = uVar37;
  }
  uVar31 = 0;
  if ((int)uVar12 < param_1->ArrayNum) {
    uVar31 = ~uVar12 >> 0x1f;
  }
  local_278 = uVar12;
  if ((uVar31 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar1 = (code *)swi(3);
    pFVar19 = (FTriangleMesh *)(*pcVar1)();
    return pFVar19;
  }
  lVar34 = (longlong)(int)local_280;
  pTVar20 = param_1->DataPtr;
  uVar31 = 0;
  if ((int)local_280 < param_1->ArrayNum) {
    uVar31 = ~local_280 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar1 = (code *)swi(3);
    pFVar19 = (FTriangleMesh *)(*pcVar1)();
    return pFVar19;
  }
  iVar15 = param_1->ArrayNum;
  pTVar21 = param_1->DataPtr;
  uVar31 = 0;
  local_27c = 0xffffffff;
  dVar39 = 0.0;
  if (0 < iVar15) {
    lVar35 = 0;
    dVar44 = __real_3ff0000000000000;
    do {
      if ((uVar31 != local_278) && (uVar31 != local_280)) {
        uVar27 = 0;
        if ((int)uVar31 < iVar15) {
          uVar27 = ~uVar31 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar1 = (code *)swi(3);
          pFVar19 = (FTriangleMesh *)(*pcVar1)();
          return pFVar19;
        }
        pTVar22 = param_1->DataPtr;
        dVar50 = *(double *)(&pTVar22->field_0x8 + lVar35) - *(double *)&pTVar21[lVar34].field_0x8;
        dVar2 = *(double *)&pTVar21[lVar34].field_0x8 - *(double *)&pTVar20[(int)uVar12].field_0x8;
        dVar45 = *(double *)(&pTVar22->field_0x8 + lVar35) -
                 *(double *)&pTVar20[(int)uVar12].field_0x8;
        dVar6 = *(double *)(&pTVar22->field_0x0 + lVar35) - *(double *)(pTVar20 + (int)uVar12);
        dVar51 = *(double *)(&pTVar22->field_0x10 + lVar35) -
                 *(double *)&pTVar20[(int)uVar12].field_0x10;
        dVar44 = *(double *)(&pTVar22->field_0x0 + lVar35) - *(double *)(pTVar21 + lVar34);
        dVar4 = *(double *)(pTVar21 + lVar34) - *(double *)(pTVar20 + (int)uVar12);
        dVar46 = *(double *)(&pTVar22->field_0x10 + lVar35) - *(double *)&pTVar21[lVar34].field_0x10
        ;
        dVar5 = *(double *)&pTVar21[lVar34].field_0x10 - *(double *)&pTVar20[(int)uVar12].field_0x10
        ;
        auVar42._0_8_ = dVar6 * dVar46;
        auVar42._8_8_ = 0;
        dVar48 = dVar51 * dVar44 - auVar42._0_8_;
        dVar6 = dVar6 * dVar50 - dVar45 * dVar44;
        dVar44 = dVar45 * dVar46 - dVar51 * dVar50;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar4 * dVar4 + dVar2 * dVar2 + dVar5 * dVar5;
        auVar41 = sqrtpd(auVar42,auVar3);
        auVar52._8_8_ = 0;
        auVar52._0_8_ = dVar44 * dVar44 + dVar48 * dVar48 + dVar6 * dVar6;
        auVar43 = sqrtpd(auVar41,auVar52);
        dVar51 = (__real_3ff0000000000000 / auVar41._0_8_) * auVar43._0_8_;
        dVar44 = __real_3ff0000000000000;
        if (dVar39 < dVar51) {
          dVar39 = dVar51;
          local_27c = uVar31;
        }
      }
      iVar15 = param_1->ArrayNum;
      uVar31 = uVar31 + 1;
      lVar35 = lVar35 + 0x18;
    } while ((int)uVar31 < iVar15);
    if (local_27c != 0xffffffff) {
      pTVar22 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,local_27c);
      dVar48 = *(double *)&pTVar22->field_0x8 - *(double *)&pTVar21[lVar34].field_0x8;
      dVar51 = *(double *)pTVar22 - *(double *)(pTVar21 + lVar34);
      dVar39 = *(double *)&pTVar22->field_0x10 - *(double *)&pTVar21[lVar34].field_0x10;
      dVar45 = dVar51 * dVar51 + dVar48 * dVar48 + dVar39 * dVar39;
      uVar49 = dVar48;
      uVar7 = dVar51;
      uVar8 = dVar39;
      if ((dVar45 != dVar44) &&
         (uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar45)) {
        local_1f0 = dVar44 / SQRT(dVar45);
        uVar49 = dVar48 * local_1f0;
        uVar7 = dVar51 * local_1f0;
        uVar8 = dVar39 * local_1f0;
      }
      dVar48 = *(double *)&pTVar22->field_0x8 - *(double *)&pTVar20[(int)uVar12].field_0x8;
      dVar39 = *(double *)pTVar22 - *(double *)(pTVar20 + (int)uVar12);
      dVar51 = *(double *)&pTVar22->field_0x10 - *(double *)&pTVar20[(int)uVar12].field_0x10;
      dVar45 = dVar39 * dVar39 + dVar48 * dVar48 + dVar51 * dVar51;
      uVar47 = dVar48;
      uVar9 = dVar39;
      uVar10 = dVar51;
      if ((dVar45 != dVar44) &&
         (uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar45)) {
        local_1e8 = dVar44 / SQRT(dVar45);
        uVar47 = dVar48 * local_1e8;
        uVar9 = dVar39 * local_1e8;
        uVar10 = dVar51 * local_1e8;
      }
      dVar51 = (double)uVar47 * (double)uVar8 - (double)uVar10 * (double)uVar49;
      dVar44 = (double)uVar10 * (double)uVar7 - (double)uVar9 * (double)uVar8;
      dVar39 = (double)uVar9 * (double)uVar49 - (double)uVar47 * (double)uVar7;
      FImplicitObject::FImplicitObject((FImplicitObject *)local_188,0,'\x02');
      local_188._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
      local_188._32_8_ = *(undefined8 *)pTVar22;
      dStack_160 = *(double *)&pTVar22->field_0x8;
      local_158 = *(double *)&pTVar22->field_0x10;
      local_150 = dVar51;
      local_148 = dVar44;
      local_140 = dVar39;
      FImplicitObject::FImplicitObject((FImplicitObject *)&local_138,0,'\x02');
      puVar33 = (uint *)0x0;
      local_138._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
      local_138.MPlaneConcrete.MX._0_8_ = *(undefined8 *)pTVar22;
      local_138.MPlaneConcrete.MX._8_8_ = *(undefined8 *)&pTVar22->field_0x8;
      local_138.MPlaneConcrete.MX._16_8_ = *(undefined8 *)&pTVar22->field_0x10;
      uVar31 = (uint)__xmm_80000000000000008000000000000000;
      local_138.MPlaneConcrete.MNormal._0_4_ = SUB84(dVar51,0) ^ uVar31;
      uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_138.MPlaneConcrete.MNormal._4_4_ = (uint)((ulonglong)dVar51 >> 0x20) ^ uVar27;
      local_138.MPlaneConcrete.MNormal._12_4_ = (uint)((ulonglong)dVar44 >> 0x20) ^ uVar27;
      local_138.MPlaneConcrete.MNormal._8_4_ = SUB84(dVar44,0) ^ uVar31;
      local_138.MPlaneConcrete.MNormal._20_4_ = (uint)((ulonglong)dVar39 >> 0x20) ^ uVar27;
      local_138.MPlaneConcrete.MNormal._16_4_ = SUB84(dVar39,0) ^ uVar31;
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0;
      local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ArrayNum = 0;
      local_270.ArrayMax = 0;
      local_250.Data = (FScriptContainerElement *)0x0;
      local_248 = 0;
      local_1d8._0_8_ = (FScriptContainerElement *)0x0;
      local_1d8._8_8_ = 0;
      local_1b8 = (ForElementType<unsigned_int>)0x0;
      local_1b0 = 0;
      local_1ac = 0x80;
      local_1a8 = -1;
      local_1a4 = 0;
      local_198 = (ForElementType<FSetElementId>)0x0;
      local_190 = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8,&local_210,
                 (bool *)&local_27c);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8,&local_20c,
                 (bool *)&local_278);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8,&local_208,
                 (bool *)&local_280);
      iVar15 = param_1->ArrayNum;
      local_298[0] = 0;
      uVar31 = 0;
      puVar36 = puVar33;
      if (0 < iVar15) {
        do {
          uVar27 = (uint)puVar36;
          if (((uVar27 != local_278) && (uVar27 != local_280)) && (uVar27 != local_27c)) {
            uVar32 = 0;
            if ((int)uVar27 < iVar15) {
              uVar32 = ~uVar27 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar1 = (code *)swi(3);
              pFVar19 = (FTriangleMesh *)(*pcVar1)();
              return pFVar19;
            }
            pTVar20 = param_1->DataPtr;
            if ((*(double *)&pTVar20[(int)uVar27].field_0x8 - dStack_160) * local_148 +
                (*(double *)(pTVar20 + (int)uVar27) - (double)local_188._32_8_) * local_150 +
                (*(double *)&pTVar20[(int)uVar27].field_0x10 - local_158) * local_140 <= 0.0) {
              lVar34 = (longlong)(int)local_298[0];
              uVar27 = uVar31;
              if ((int)local_298[0] < param_1->ArrayNum) {
                uVar27 = ~local_298[0] >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar1 = (code *)swi(3);
                pFVar19 = (FTriangleMesh *)(*pcVar1)();
                return pFVar19;
              }
              pTVar20 = param_1->DataPtr;
              if (0.0 <= (*(double *)&pTVar20[lVar34].field_0x8 - dStack_160) * local_148 +
                         (*(double *)(pTVar20 + lVar34) - (double)local_188._32_8_) * local_150 +
                         (*(double *)&pTVar20[lVar34].field_0x10 - local_158) * local_140) {
                iVar15 = 1;
                if (local_1a4 == 0) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0xc,4,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                                      (int *)(local_1d8 + 0xc));
                  iVar18 = local_1b0;
                  if (local_1b0 == 0) {
                    iVar38 = 0;
LAB_143e27a9b:
                    if (local_1ac < local_1b0 + 1) {
                      uVar27 = local_1ac + 0x1fU >> 5;
                      uVar32 = local_1b0 + 0x20U >> 5;
                      if (uVar32 < 5) {
                        local_1ac = 4;
                      }
                      else {
                        uVar26 = (ulonglong)uVar32;
                        if (uVar27 < 5) {
                          uVar27 = uVar31;
                        }
                        if (uVar27 == 0) {
                          uVar28 = 4;
                          if (4 < uVar26) {
                            uVar28 = uVar26;
                          }
                        }
                        else {
                          uVar28 = ((ulonglong)uVar32 * 3 >> 3) + 0x10 + uVar26;
                        }
                        uVar23 = FMemory::QuantizeSize(uVar28 * 4,0);
                        local_1ac = (int)(uVar23 >> 2);
                        if (local_1ac < (int)uVar32) {
                          local_1ac = 0x7fffffff;
                        }
                      }
                      local_1ac = local_1ac << 5;
                      TBitArray<FDefaultBitArrayAllocator>::Realloc
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),
                                 local_1b0);
                    }
                    local_1b0 = local_1b0 + 1;
                    uVar32 = local_1b0 >> 0x1f & 0x1f;
                    uVar27 = local_1b0 + uVar32;
                    iVar17 = (uVar27 & 0x1f) - uVar32;
                    if (iVar17 != 0) {
                      FVar25 = (ForElementType<unsigned_int>)((longlong)local_1d8 + 0x10);
                      if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
                        FVar25 = local_1b8;
                      }
                      puVar36 = (uint *)((longlong)FVar25 + (longlong)((int)uVar27 >> 5) * 4);
                      *puVar36 = *puVar36 & 0xffffffffU >> (0x20U - (char)iVar17 & 0x1f);
                    }
                  }
                  else {
                    iVar38 = (int)(local_1b0 + (local_1b0 >> 0x1f & 0x1fU)) >> 5;
                    if (iVar38 != (int)((local_1b0 + -1 >> 0x1f & 0x1fU) + local_1b0 + -1) >> 5)
                    goto LAB_143e27a9b;
                    local_1b0 = local_1b0 + 1;
                  }
                  FVar25 = (ForElementType<unsigned_int>)((longlong)local_1d8 + 0x10);
                  if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
                    FVar25 = local_1b8;
                  }
                  puVar36 = (uint *)((longlong)FVar25 + (longlong)iVar38 * 4);
                  *puVar36 = *puVar36 & ~(1 << ((byte)iVar18 & 0x1f));
                  iVar18 = local_1a8;
                }
                else {
                  local_1a4 = local_1a4 + -1;
                  iVar18 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0xc + 4);
                  iVar16 = local_1a8;
                  if (local_1a4 != 0) {
                    *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc) = 0xffffffff;
                  }
                }
                local_1a8 = iVar18;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_1d8,&local_200,iVar16);
                puVar36 = puVar33;
                if (local_200.Pointer != (uint *)0x0) {
                  *(uint *)local_200.Pointer = local_298[0];
                  *(uint *)((longlong)local_200.Pointer + 4) = 0xffffffff;
                  puVar36 = local_200.Pointer;
                }
                uVar27 = *puVar36;
                if ((local_1d8._8_4_ - local_1a4 != 1) && (local_1d8._8_4_ != local_1a4)) {
                  FVar29 = (ForElementType<FSetElementId>)local_1a0;
                  if (local_198 != (ForElementType<FSetElementId>)0x0) {
                    FVar29 = local_198;
                  }
                  for (iVar18 = *(int *)((longlong)FVar29 + (ulonglong)(local_190 - 1U & uVar27) * 4
                                        ); iVar18 != -1;
                      iVar18 = *(int *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc + 4)) {
                    if (*(uint *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc) == uVar27) {
                      if (iVar18 != -1) {
                        *(uint *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc) = uVar27;
                        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_1d8,local_200.Index,1);
                        goto LAB_143e27ceb;
                      }
                      break;
                    }
                  }
                }
                uVar32 = local_1d8._8_4_ - local_1a4;
                if (3 < uVar32) {
                  uVar26 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
                  lVar34 = 0x3f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                    }
                  }
                  local_204 = (undefined4)lVar34;
                  iVar15 = 1 << ((byte)lVar34 & 0x1f);
                }
                if (((int)uVar32 < 1) || (iVar15 <= local_190)) {
                  uVar27 = local_190 - 1U & uVar27;
                  puVar36[2] = uVar27;
                  FVar29 = (ForElementType<FSetElementId>)local_1a0;
                  if (local_198 != (ForElementType<FSetElementId>)0x0) {
                    FVar29 = local_198;
                  }
                  uVar26 = (longlong)local_190 - 1U & (longlong)(int)uVar27;
                  puVar36[1] = *(uint *)((longlong)FVar29 + uVar26 * 4);
                  *(int *)((longlong)FVar29 + uVar26 * 4) = local_200.Index;
                }
                else {
                  local_190 = iVar15;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8);
                }
LAB_143e27ceb:
                if (((local_250.Data <= (FScriptContainerElement *)local_298) &&
                    ((FScriptContainerElement *)local_298 <
                     local_250.Data + (longlong)local_248._4_4_ * 4)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar1 = (code *)swi(3);
                  pFVar19 = (FTriangleMesh *)(*pcVar1)();
                  return pFVar19;
                }
                iVar15 = (int)local_248;
                if ((int)local_248 == local_248._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_250,(int *)((longlong)&local_248 + 4));
                }
                local_248 = CONCAT44(local_248._4_4_,iVar15 + 1);
                FVar24.Data = local_250.Data;
              }
              else {
                if (((local_270.AllocatorInstance.Data <= (FScriptContainerElement *)local_298) &&
                    ((FScriptContainerElement *)local_298 <
                     local_270.AllocatorInstance.Data + (longlong)local_270.ArrayMax * 4)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar1 = (code *)swi(3);
                  pFVar19 = (FTriangleMesh *)(*pcVar1)();
                  return pFVar19;
                }
                iVar15 = local_270.ArrayNum;
                if (local_270.ArrayNum == local_270.ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_270.AllocatorInstance,&local_270.ArrayMax);
                }
                local_270.ArrayNum = iVar15 + 1;
                FVar24.Data = local_270.AllocatorInstance.Data;
              }
            }
            else {
              if (((local_260.AllocatorInstance.Data <= (FScriptContainerElement *)local_298) &&
                  ((FScriptContainerElement *)local_298 <
                   local_260.AllocatorInstance.Data + (longlong)local_260.ArrayMax * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar1 = (code *)swi(3);
                pFVar19 = (FTriangleMesh *)(*pcVar1)();
                return pFVar19;
              }
              iVar15 = local_260.ArrayNum;
              if (local_260.ArrayNum == local_260.ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_260.AllocatorInstance,&local_260.ArrayMax);
              }
              local_260.ArrayNum = iVar15 + 1;
              FVar24.Data = local_260.AllocatorInstance.Data;
            }
            *(uint *)(FVar24.Data + (longlong)iVar15 * 4) = local_298[0];
          }
          iVar15 = param_1->ArrayNum;
          local_298[0] = local_298[0] + 1;
          puVar36 = (uint *)(ulonglong)local_298[0];
        } while ((int)local_298[0] < iVar15);
      }
      lVar34 = (longlong)(int)local_248;
      if (local_260.ArrayNum == 0) {
        if ((int)local_248 != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,(int)local_248,&local_270.AllocatorInstance,&local_270.ArrayNum,
                              &local_270.ArrayMax);
          FVar24.Data = local_270.AllocatorInstance.Data;
LAB_143e27e24:
          memcpy(FVar24.Data + (longlong)iVar15 * 4,local_250.Data,lVar34 << 2);
        }
LAB_143e27e38:
        AddTrianglesToHull<double>
                  (param_1,local_27c,local_278,local_280,(TPlane<double,3> *)local_188,&local_260,
                   &local_290);
        AddTrianglesToHull<double>
                  (param_1,local_27c,local_278,local_280,&local_138,&local_270,&local_290);
      }
      else {
        if (local_270.ArrayNum == 0) {
          if ((int)local_248 != 0) {
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,(int)local_248,&local_260.AllocatorInstance,&local_260.ArrayNum,
                                &local_260.ArrayMax);
            FVar24.Data = local_260.AllocatorInstance.Data;
            goto LAB_143e27e24;
          }
          goto LAB_143e27e38;
        }
        if ((int)local_248 != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,(int)local_248,&local_270.AllocatorInstance,&local_270.ArrayNum,
                              &local_270.ArrayMax);
          memcpy(local_270.AllocatorInstance.Data + (longlong)iVar15 * 4,local_250.Data,lVar34 << 2)
          ;
          iVar15 = (int)local_248;
          if ((int)local_248 != 0) {
            iVar18 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,(int)local_248,&local_260.AllocatorInstance,&local_260.ArrayNum,
                                &local_260.ArrayMax);
            memcpy(local_260.AllocatorInstance.Data + (longlong)iVar18 * 4,local_250.Data,
                   (longlong)iVar15 << 2);
          }
        }
        AddTrianglesToHull<double>
                  (param_1,local_27c,local_278,local_280,(TPlane<double,3> *)local_188,&local_260,
                   &local_290);
        AddTrianglesToHull<double>
                  (param_1,local_27c,local_278,local_280,&local_138,&local_270,&local_290);
        puVar36 = puVar33;
        iVar15 = local_290.ArrayNum;
        if (0 < local_290.ArrayNum) {
          do {
            uVar32 = (uint)puVar33;
            uVar30 = ~uVar32 >> 0x1f;
            uVar27 = uVar31;
            if ((int)uVar32 < iVar15) {
              uVar27 = uVar30;
            }
            if (uVar27 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar1 = (code *)swi(3);
                pFVar19 = (FTriangleMesh *)(*pcVar1)();
                return pFVar19;
              }
              iVar15 = local_290.ArrayNum;
            }
            if (local_1d8._8_4_ != local_1a4) {
              FVar29 = (ForElementType<FSetElementId>)local_1a0;
              if (local_198 != (ForElementType<FSetElementId>)0x0) {
                FVar29 = local_198;
              }
              for (iVar18 = *(int *)((longlong)FVar29 +
                                    (ulonglong)
                                    (local_190 - 1U &
                                    *(uint *)((longlong)puVar36 + local_290.AllocatorInstance.Data))
                                    * 4); iVar18 != -1;
                  iVar18 = *(int *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc + 4)) {
                if (*(uint *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc) ==
                    *(uint *)((longlong)puVar36 + local_290.AllocatorInstance.Data)) {
                  uVar27 = uVar31;
                  if ((int)uVar32 < iVar15) {
                    uVar27 = uVar30;
                  }
                  if (uVar27 == 0) {
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar11) {
                      pcVar1 = (code *)swi(3);
                      pFVar19 = (FTriangleMesh *)(*pcVar1)();
                      return pFVar19;
                    }
                    iVar15 = local_290.ArrayNum;
                  }
                  if (local_1d8._8_4_ != local_1a4) {
                    FVar29 = (ForElementType<FSetElementId>)local_1a0;
                    if (local_198 != (ForElementType<FSetElementId>)0x0) {
                      FVar29 = local_198;
                    }
                    iVar18 = *(int *)((longlong)FVar29 +
                                     (ulonglong)
                                     (local_190 - 1U &
                                     *(uint *)((longlong)(puVar36 + 1) +
                                              local_290.AllocatorInstance.Data)) * 4);
                    goto joined_r0x000143e280e9;
                  }
                  break;
                }
              }
            }
LAB_143e2826c:
            puVar33 = (uint *)(ulonglong)(uVar32 + 1);
            puVar36 = puVar36 + 3;
          } while ((int)(uVar32 + 1) < iVar15);
        }
      }
      local_190 = 0;
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1d8);
      if (local_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data);
      }
      if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.AllocatorInstance.Data);
      }
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
      local_138._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)&local_138);
      local_188._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)local_188);
    }
  }
  pFVar19 = local_218;
  FTriangleMesh(local_218,&local_290,0,-1,true);
LAB_143e28358:
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  return pFVar19;
joined_r0x000143e280e9:
  if (iVar18 == -1) goto LAB_143e2826c;
  if (*(uint *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc) ==
      *(uint *)((longlong)(puVar36 + 1) + local_290.AllocatorInstance.Data)) {
    uVar27 = uVar31;
    if ((int)uVar32 < iVar15) {
      uVar27 = uVar30;
    }
    if (uVar27 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar1 = (code *)swi(3);
        pFVar19 = (FTriangleMesh *)(*pcVar1)();
        return pFVar19;
      }
      iVar15 = local_290.ArrayNum;
    }
    if (local_1d8._8_4_ != local_1a4) {
      FVar29 = (ForElementType<FSetElementId>)local_1a0;
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FVar29 = local_198;
      }
      iVar18 = *(int *)((longlong)FVar29 +
                       (ulonglong)
                       (local_190 - 1U &
                       *(uint *)((longlong)(puVar36 + 2) + local_290.AllocatorInstance.Data)) * 4);
      goto joined_r0x000143e28189;
    }
    goto LAB_143e2826c;
  }
  iVar18 = *(int *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc + 4);
  goto joined_r0x000143e280e9;
joined_r0x000143e28189:
  if (iVar18 == -1) goto LAB_143e2826c;
  if (*(uint *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc) ==
      *(uint *)((longlong)(puVar36 + 2) + local_290.AllocatorInstance.Data)) {
    uVar27 = uVar31;
    if ((int)uVar32 < iVar15) {
      uVar27 = uVar30;
    }
    if (uVar27 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar1 = (code *)swi(3);
        pFVar19 = (FTriangleMesh *)(*pcVar1)();
        return pFVar19;
      }
      iVar15 = local_290.ArrayNum;
    }
    iVar18 = (iVar15 - uVar32) + -1;
    if (1 < iVar18) {
      iVar18 = 1;
    }
    if (iVar18 != 0) {
      memmove(local_290.AllocatorInstance.Data + (longlong)(int)uVar32 * 0xc,
              local_290.AllocatorInstance.Data + (longlong)(iVar15 - iVar18) * 0xc,
              (longlong)iVar18 * 0xc);
      iVar15 = local_290.ArrayNum;
    }
    local_290.ArrayNum = iVar15 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&local_290.AllocatorInstance,iVar15 + -1,&local_290.ArrayMax);
    uVar32 = uVar32 - 1;
    puVar36 = puVar36 + -3;
    iVar15 = local_290.ArrayNum;
    goto LAB_143e2826c;
  }
  iVar18 = *(int *)(local_1d8._0_8_ + (longlong)iVar18 * 0xc + 4);
  goto joined_r0x000143e28189;
}

// GetCurvatureOnEdges @ 143e283c0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetCurvatureOnEdges
          (FTriangleMesh *this,TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  
  iVar6 = param_1->ArrayNum;
  if ((iVar6 != (this->MElements).ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumNormals == MElements.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                          ,0x428,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
    return pTVar16;
  }
  GetSegmentMesh(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar18 = (this->MEdgeToFaces).ArrayNum;
  if ((int)uVar18 < 1) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
  }
  else {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar18,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 8,0,
           (longlong)(int)uVar18 << 3);
  }
  uVar18 = 0;
  if (0 < (this->MEdgeToFaces).ArrayNum) {
    lVar17 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar18 < (this->MEdgeToFaces).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar16;
      }
      pFVar7 = (this->MEdgeToFaces).AllocatorInstance.Data;
      uVar15 = *(uint *)(pFVar7 + lVar17 * 8);
      lVar19 = (longlong)(int)uVar15;
      if ((((-1 < (int)uVar15) && (-1 < *(int *)(pFVar7 + lVar17 * 8 + 4))) && ((int)uVar15 < iVar6)
          ) && (*(int *)(pFVar7 + lVar17 * 8 + 4) < iVar6)) {
        uVar14 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar16;
        }
        uVar15 = *(uint *)(pFVar7 + lVar17 * 8 + 4);
        lVar20 = (longlong)(int)uVar15;
        pFVar7 = (param_1->AllocatorInstance).Data;
        uVar14 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar16;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        dVar21 = *(double *)(pFVar7 + lVar19 * 0x18);
        dVar1 = *(double *)(pFVar8 + lVar20 * 0x18);
        dVar2 = *(double *)(pFVar7 + lVar19 * 0x18 + 0x10);
        dVar3 = *(double *)(pFVar8 + lVar20 * 0x18 + 0x10);
        dVar4 = *(double *)(pFVar7 + lVar19 * 0x18 + 8);
        dVar5 = *(double *)(pFVar8 + lVar20 * 0x18 + 8);
        dVar11 = dVar2 * dVar1 - dVar21 * dVar3;
        dVar10 = dVar4 * dVar3 - dVar2 * dVar5;
        auVar22._0_8_ = dVar4 * dVar1;
        auVar22._8_8_ = 0;
        dVar24 = dVar21 * dVar5 - auVar22._0_8_;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar10 * dVar10 + dVar11 * dVar11 + dVar24 * dVar24;
        auVar23 = sqrtpd(auVar22,auVar23);
        dVar21 = FGenericPlatformMath::Atan2
                           (auVar23._0_8_,dVar21 * dVar1 + dVar4 * dVar5 + dVar2 * dVar3);
        uVar15 = 0;
        if ((int)uVar18 < __return_storage_ptr__->ArrayNum) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
          return pTVar16;
        }
        *(double *)((__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 8) = dVar21;
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 1;
    } while ((int)uVar18 < (this->MEdgeToFaces).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetCurvatureOnEdges @ 143e28760

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetCurvatureOnEdges
          (FTriangleMesh *this,TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1)

{
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetFaceNormals<double>(this,&local_18,param_1,false);
  GetCurvatureOnEdges(this,__return_storage_ptr__,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurvatureOnPoints @ 143e287c0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetCurvatureOnPoints
          (FTriangleMesh *this,TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FSegmentMesh *pFVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_78;
  ForAnyElementType local_70;
  int local_68;
  int aiStack_64 [11];
  ulonglong uVar13;
  
  pFVar8 = GetSegmentMesh(this);
  if ((param_1->ArrayNum != (pFVar8->MElements).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EdgeCurvatures.Num() == Segments.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                         ,0x446,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  iVar4 = this->MNumIndices;
  uVar14 = 0;
  if (iVar4 < 1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_78 = __real_ffefffffffffffff;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    aiStack_64[0] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,&local_70,0,aiStack_64);
    uVar13 = uVar14;
    do {
      if (((local_70.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_70.Data + (longlong)aiStack_64[0] * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      if (local_68 == aiStack_64[0]) {
        local_68 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_70,aiStack_64);
      }
      iVar1 = local_68 + 1;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      *(undefined8 *)(local_70.Data + (longlong)local_68 * 8) = local_78;
      local_68 = iVar1;
    } while ((int)uVar10 < iVar4);
    uVar13 = uVar14;
    if (0 < (pFVar8->MElements).ArrayNum) {
      do {
        uVar15 = (uint)uVar14;
        uVar10 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        dVar2 = *(double *)((param_1->AllocatorInstance).Data + uVar13);
        uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
        uVar12 = 0;
        uVar10 = uVar12;
        if ((int)uVar15 < (pFVar8->MElements).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        pFVar5 = (pFVar8->MElements).AllocatorInstance.Data;
        uVar10 = *(int *)(pFVar5 + uVar13) - this->MStartIdx;
        if ((((int)uVar10 < 0) || (this->MNumIndices <= (int)uVar10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LocalIdx >= 0 && LocalIdx < MNumIndices",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                               ,0x15c,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar11 = uVar12;
        if ((int)uVar10 < local_68) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar11 = *(int *)(pFVar5 + uVar13) - this->MStartIdx;
        dVar3 = *(double *)(local_70.Data + (longlong)(int)uVar10 * 8);
        uVar16 = SUB84(dVar3,0);
        uVar17 = (int)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= dVar2) {
          uVar16 = SUB84(dVar2,0);
          uVar17 = uVar18;
        }
        if ((((int)uVar11 < 0) || (this->MNumIndices <= (int)uVar11)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LocalIdx >= 0 && LocalIdx < MNumIndices",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                               ,0x15c,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar10 = uVar12;
        if ((int)uVar11 < local_68) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        *(ulonglong *)(local_70.Data + (longlong)(int)uVar11 * 8) = CONCAT44(uVar17,uVar16);
        uVar10 = *(int *)(pFVar5 + uVar13 + 4) - this->MStartIdx;
        if ((((int)uVar10 < 0) || (this->MNumIndices <= (int)uVar10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LocalIdx >= 0 && LocalIdx < MNumIndices",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                               ,0x15c,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        if ((int)uVar10 < local_68) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar12 = *(int *)(pFVar5 + uVar13 + 4) - this->MStartIdx;
        dVar3 = *(double *)(local_70.Data + (longlong)(int)uVar10 * 8);
        uVar16 = SUB84(dVar3,0);
        uVar17 = (int)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= dVar2) {
          uVar16 = SUB84(dVar2,0);
          uVar17 = uVar18;
        }
        if ((((int)uVar12 < 0) || (this->MNumIndices <= (int)uVar12)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LocalIdx >= 0 && LocalIdx < MNumIndices",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                               ,0x15c,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar10 = 0;
        if ((int)uVar12 < local_68) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar14 = (ulonglong)(uVar15 + 1);
        *(ulonglong *)(local_70.Data + (longlong)(int)uVar12 * 8) = CONCAT44(uVar17,uVar16);
        uVar13 = uVar13 + 8;
      } while ((int)(uVar15 + 1) < (pFVar8->MElements).ArrayNum);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_70.Data;
    __return_storage_ptr__->ArrayNum = local_68;
    __return_storage_ptr__->ArrayMax = aiStack_64[0];
  }
  return __return_storage_ptr__;
}

// GetCurvatureOnPoints @ 143e28cb0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetCurvatureOnPoints
          (FTriangleMesh *this,TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1)

{
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_28;
  TArray<double,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetFaceNormals<double>(this,&local_28,param_1,false);
  GetCurvatureOnEdges(this,&local_18,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  GetCurvatureOnPoints(this,__return_storage_ptr__,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEdgeToFaces @ 143e29170

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetEdgeToFaces(FTriangleMesh *this)

{
  GetSegmentMesh(this);
  return &this->MEdgeToFaces;
}

// GetFaceToEdges @ 143e29220

TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetFaceToEdges(FTriangleMesh *this)

{
  GetSegmentMesh(this);
  return &this->MFaceToEdges;
}

// GetPointNormals @ 143e2ae30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetPointNormals
          (FTriangleMesh *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_58;
  TVector<double,3> *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<Chaos::TVector<double,3>_const_,int> local_38;
  TArrayView<Chaos::TVector<double,3>,int> local_28;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  GetFaceNormals<double>(this,&local_58,param_1,param_2);
  if (local_58.ArrayNum != 0) {
    if (param_3) {
      iVar4 = this->MStartIdx + this->MNumIndices;
    }
    else {
      iVar4 = this->MNumIndices;
    }
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (__return_storage_ptr__,iVar4,Default);
    local_38.ArrayNum = local_58.ArrayNum;
    local_38.DataPtr = (TVector<double,3> *)local_58.AllocatorInstance.Data;
    if (local_58.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    local_48 = (TVector<double,3> *)(__return_storage_ptr__->AllocatorInstance).Data;
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    iStack_40 = iVar4;
    GetPointToTriangleMap(this,&local_18);
    local_28._12_4_ = uStack_3c;
    local_28.ArrayNum = iStack_40;
    local_28.DataPtr = local_48;
    GetPointNormals<double>(this,&local_28,&local_38,param_3);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPointNormals @ 143e2af70

void __thiscall
Chaos::FTriangleMesh::GetPointNormals
          (FTriangleMesh *this,TArrayView<Chaos::TVector<double,3>,int> *param_1,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_2,bool param_3)

{
  TArrayView<Chaos::TVector<double,3>,int> local_18;
  
  GetPointToTriangleMap
            (this,(TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)&local_18);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetPointNormals<double>(this,&local_18,param_2,param_3);
  return;
}

// GetPointNormals @ 143e2afe0

void __thiscall
Chaos::FTriangleMesh::GetPointNormals
          (FTriangleMesh *this,TArrayView<Chaos::TVector<float,3>,int> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TVector<float,3> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  uint local_a8;
  ulonglong uVar14;
  
  if (((this->MPointToTriangleMap).ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MPointToTriangleMap.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                         ,0x1fb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  iVar10 = this->MNumIndices;
  if (bChaos_TriangleMesh_ISPC_Enabled == false) {
    uVar12 = 0;
    local_a8 = 0;
    uVar14 = uVar12;
    uVar18 = uVar12;
    if (0 < iVar10) {
      do {
        uVar16 = (uint)uVar14;
        uVar15 = uVar16;
        if (param_3) {
          iVar1 = this->MStartIdx;
          uVar15 = iVar1 + uVar16;
          if ((((int)uVar15 < iVar1) || (iVar1 + iVar10 <= (int)uVar15)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("GlobalIdx >= MStartIdx && GlobalIdx < MStartIdx + MNumIndices",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                                 ,0x163,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        fVar20 = 0.0;
        fVar22 = 0.0;
        fVar24 = 0.0;
        uVar8 = 0;
        if ((int)uVar16 < (this->MPointToTriangleMap).ArrayNum) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->MPointToTriangleMap).AllocatorInstance.Data;
        iVar10 = *(int *)(pFVar2 + uVar18 + 8);
        uVar8 = 0;
        uVar14 = uVar12;
        uVar17 = uVar12;
        if (0 < iVar10) {
          do {
            uVar13 = (uint)uVar14;
            uVar16 = uVar8;
            if ((int)uVar13 < iVar10) {
              uVar16 = ~uVar13 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((-1 < *(int *)(uVar17 + *(longlong *)(pFVar2 + uVar18))) &&
               (*(int *)(uVar17 + *(longlong *)(pFVar2 + uVar18)) < param_2->ArrayNum)) {
              uVar16 = uVar8;
              if ((int)uVar13 < *(int *)(pFVar2 + uVar18 + 8)) {
                uVar16 = ~uVar13 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar16 = *(uint *)(uVar17 + *(longlong *)(pFVar2 + uVar18));
              uVar9 = uVar8;
              if ((int)uVar16 < param_2->ArrayNum) {
                uVar9 = ~uVar16 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar3 = param_2->DataPtr;
              fVar20 = fVar20 + *(float *)(pTVar3 + (int)uVar16);
              fVar22 = fVar22 + *(float *)&pTVar3[(int)uVar16].field_0x4;
              fVar24 = fVar24 + *(float *)&pTVar3[(int)uVar16].field_0x8;
            }
            iVar10 = *(int *)(pFVar2 + uVar18 + 8);
            uVar14 = (ulonglong)(uVar13 + 1);
            uVar17 = uVar17 + 4;
            uVar16 = local_a8;
          } while ((int)(uVar13 + 1) < iVar10);
        }
        fVar19 = fVar22 * fVar22 + fVar20 * fVar20 + fVar24 * fVar24;
        uVar21 = fVar20;
        uVar23 = fVar22;
        uVar25 = fVar24;
        if ((fVar19 != fVar6) &&
           (uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
           uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
           uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar5 <= fVar19)) {
          fVar19 = __real_3f800000 / SQRT(fVar19);
          uVar21 = fVar19 * fVar20;
          uVar23 = fVar19 * fVar22;
          uVar25 = fVar19 * fVar24;
        }
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar3 = param_1->DataPtr;
        local_a8 = uVar16 + 1;
        *(ulonglong *)(pTVar3 + (int)uVar15) = CONCAT44(uVar23,uVar21);
        *(undefined4 *)&pTVar3[(int)uVar15].field_0x8 = uVar25;
        iVar10 = this->MNumIndices;
        uVar14 = (ulonglong)local_a8;
        uVar18 = uVar18 + 0x10;
      } while ((int)local_a8 < iVar10);
    }
  }
  else {
    iVar1 = param_2->ArrayNum;
    if (param_3) {
      iVar11 = this->MStartIdx;
      if ((iVar10 + iVar11 <= iVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("GlobalIdx >= MStartIdx && GlobalIdx < MStartIdx + MNumIndices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                             ,0x163,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      iVar11 = 0;
    }
    ::GetPointNormals(param_1->DataPtr,param_2->DataPtr,
                      (this->MPointToTriangleMap).AllocatorInstance.Data,iVar11,iVar1,iVar10);
  }
  return;
}

// GetPointToNeighborsMap @ 143e2b4d0

TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
* __thiscall Chaos::FTriangleMesh::GetPointToNeighborsMap(FTriangleMesh *this)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *pTVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_02;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [2];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [2];
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *local_50;
  
  pTVar7 = &this->MPointToNeighborsMap;
  if (*(int *)&(this->MPointToNeighborsMap).field_0x8 ==
      *(int *)&(this->MPointToNeighborsMap).field_0x34) {
    local_50 = pTVar7;
    TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)pTVar7,this->MNumIndices);
    iVar5 = (this->MElements).ArrayNum;
    uVar11 = 0;
    if (0 < iVar5) {
      local_80 = 0;
      do {
        lVar2 = local_80;
        pTVar7 = &this->MPointToNeighborsMap;
        uVar10 = ~uVar11 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar11 < iVar5) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)(*pcVar3)();
          return pTVar7;
        }
        local_res8[0] = *(uint *)((this->MElements).AllocatorInstance.Data + lVar2);
        this_00 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<int>
                            ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                              *)pTVar7,local_res8[0],(int *)local_res8);
        uVar6 = 0;
        if ((int)uVar11 < (this->MElements).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)(*pcVar3)();
          return pTVar7;
        }
        local_res10[0] = *(uint *)((this->MElements).AllocatorInstance.Data + lVar2 + 4);
        this_01 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<int>
                            ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                              *)pTVar7,local_res10[0],(int *)local_res10);
        uVar6 = 0;
        if ((int)uVar11 < (this->MElements).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)(*pcVar3)();
          return pTVar7;
        }
        local_res18[0] = *(uint *)((this->MElements).AllocatorInstance.Data + lVar2 + 8);
        this_02 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<int>
                            ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                              *)pTVar7,local_res18[0],(int *)local_res18);
        uVar8 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
        uVar6 = uVar8 + 2;
        if (uVar8 < uVar6) {
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,uVar6);
          if (uVar6 < 4) {
            iVar5 = 1;
          }
          else {
            uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            local_78 = (undefined4)lVar2;
            iVar5 = 1 << ((byte)lVar2 & 0x1f);
          }
          if ((this_00->HashSize == 0) || (this_00->HashSize < iVar5)) {
            this_00->HashSize = iVar5;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
          }
        }
        uVar8 = *(int *)&(this_01->Elements).field_0x8 - *(int *)&(this_01->Elements).field_0x34;
        uVar6 = uVar8 + 2;
        if (uVar8 < uVar6) {
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,uVar6);
          if (uVar6 < 4) {
            iVar5 = 1;
          }
          else {
            uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            local_74 = (undefined4)lVar2;
            iVar5 = 1 << ((byte)lVar2 & 0x1f);
          }
          if ((this_01->HashSize == 0) || (this_01->HashSize < iVar5)) {
            this_01->HashSize = iVar5;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_01);
          }
        }
        uVar6 = *(int *)&(this_02->Elements).field_0x8 - *(int *)&(this_02->Elements).field_0x34;
        uVar8 = uVar6 + 2;
        if (uVar6 < uVar8) {
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,uVar8);
          if (uVar8 < 4) {
            iVar5 = 1;
          }
          else {
            uVar1 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            local_70 = (undefined4)lVar2;
            iVar5 = 1 << ((byte)lVar2 & 0x1f);
          }
          if ((this_02->HashSize == 0) || (this_02->HashSize < iVar5)) {
            this_02->HashSize = iVar5;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_02);
          }
        }
        uVar6 = 0;
        if ((int)uVar11 < (this->MElements).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)(*pcVar3)();
          return pTVar7;
        }
        pFVar9 = (this->MElements).AllocatorInstance.Data + local_80;
        local_res20[0] = *(undefined4 *)(pFVar9 + 4);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this_00,&local_6c,(bool *)local_res20);
        local_98 = *(undefined4 *)(pFVar9 + 8);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this_00,&local_68,(bool *)&local_98);
        local_94 = *(undefined4 *)pFVar9;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this_01,&local_64,(bool *)&local_94);
        local_90 = *(undefined4 *)(pFVar9 + 8);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this_01,&local_60,(bool *)&local_90);
        local_8c = *(undefined4 *)pFVar9;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this_02,&local_5c,(bool *)&local_8c);
        local_88[0] = *(undefined4 *)(pFVar9 + 4);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this_02,local_58,(bool *)local_88);
        uVar11 = uVar11 + 1;
        iVar5 = (this->MElements).ArrayNum;
        local_80 = local_80 + 0xc;
        pTVar7 = local_50;
      } while ((int)uVar11 < iVar5);
    }
  }
  return pTVar7;
}

// GetPointToTriangleMap @ 143e2b8d0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
Chaos::FTriangleMesh::GetPointToTriangleMap
          (FTriangleMesh *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint local_18 [4];
  
  if ((this->MPointToTriangleMap).ArrayNum == 0) {
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->MPointToTriangleMap,this->MNumIndices);
    iVar4 = (this->MElements).ArrayNum;
    local_18[0] = 0;
    if (0 < iVar4) {
      do {
        uVar3 = local_18[0];
        uVar7 = 0;
        if ((int)local_18[0] < iVar4) {
          uVar7 = ~local_18[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        uVar7 = *(int *)((this->MElements).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xc) -
                this->MStartIdx;
        uVar3 = 0;
        if ((int)uVar7 < (this->MPointToTriangleMap).ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        pFVar8 = (this->MPointToTriangleMap).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        if (((*(uint **)&pFVar8->field_0x0 <= local_18) &&
            (local_18 < *(uint **)&pFVar8->field_0x0 + *(int *)(pFVar8 + 0xc))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        iVar4 = *(int *)&pFVar8[8].field_0x0;
        if (iVar4 == *(int *)(pFVar8 + 0xc)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
        }
        *(int *)&pFVar8[8].field_0x0 = iVar4 + 1;
        *(uint *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4) = local_18[0];
        lVar9 = (longlong)(int)local_18[0];
        uVar3 = 0;
        if ((int)local_18[0] < (this->MElements).ArrayNum) {
          uVar3 = ~local_18[0] >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        uVar7 = *(int *)((this->MElements).AllocatorInstance.Data + lVar9 * 0xc + 4) -
                this->MStartIdx;
        uVar3 = 0;
        if ((int)uVar7 < (this->MPointToTriangleMap).ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        pFVar8 = (this->MPointToTriangleMap).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        if (((*(uint **)&pFVar8->field_0x0 <= local_18) &&
            (local_18 < *(uint **)&pFVar8->field_0x0 + *(int *)(pFVar8 + 0xc))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        iVar4 = *(int *)&pFVar8[8].field_0x0;
        if (iVar4 == *(int *)(pFVar8 + 0xc)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
        }
        *(int *)&pFVar8[8].field_0x0 = iVar4 + 1;
        *(uint *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4) = local_18[0];
        lVar9 = (longlong)(int)local_18[0];
        uVar3 = 0;
        if ((int)local_18[0] < (this->MElements).ArrayNum) {
          uVar3 = ~local_18[0] >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        uVar7 = *(int *)((this->MElements).AllocatorInstance.Data + lVar9 * 0xc + 8) -
                this->MStartIdx;
        uVar3 = 0;
        if ((int)uVar7 < (this->MPointToTriangleMap).ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        pFVar8 = (this->MPointToTriangleMap).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        if (((*(uint **)&pFVar8->field_0x0 <= local_18) &&
            (local_18 < *(uint **)&pFVar8->field_0x0 + *(int *)(pFVar8 + 0xc))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
          return pTVar5;
        }
        iVar4 = *(int *)&pFVar8[8].field_0x0;
        if (iVar4 == *(int *)(pFVar8 + 0xc)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
        }
        *(int *)&pFVar8[8].field_0x0 = iVar4 + 1;
        *(uint *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar4 * 4) = local_18[0];
        iVar4 = (this->MElements).ArrayNum;
        local_18[0] = local_18[0] + 1;
      } while ((int)local_18[0] < iVar4);
    }
  }
  iVar4 = this->MStartIdx;
  pFVar8 = (this->MPointToTriangleMap).AllocatorInstance.Data;
  iVar6 = this->MNumIndices + iVar4;
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr =
       (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + (longlong)iVar4 * -0x10);
  if ((iVar6 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetSegmentMesh @ 143e2be40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSegmentMesh * __thiscall Chaos::FTriangleMesh::GetSegmentMesh(FTriangleMesh *this)

{
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  FSegmentMesh *pFVar8;
  undefined8 uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  FScriptContainerElement *pFVar22;
  FTriangleMesh *pFVar23;
  longlong lVar24;
  undefined1 auStackY_1a8 [32];
  uint local_158;
  undefined1 local_154 [4];
  undefined1 local_150 [16];
  uint local_140;
  uint uStack_13c;
  uint local_138;
  int *local_130;
  longlong local_128;
  longlong local_120;
  FScriptContainerElement *local_118;
  uint local_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  FTriangleMesh *local_e8;
  undefined4 local_e0;
  int local_dc;
  TPairInitializer<Chaos::TVector<int,2>_const_&,int_const_&> local_d8;
  longlong local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  uint *local_98;
  uint *local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar8 = &this->MSegmentMesh;
  if ((this->MSegmentMesh).MElements.ArrayNum != 0) {
    return pFVar8;
  }
  uVar12 = 0;
  local_150._0_8_ = (FScriptContainerElement *)0x0;
  local_150._8_4_ = 0;
  local_150._12_4_ = 0;
  uVar14 = (this->MElements).ArrayNum * 3;
  local_e8 = this;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar14,(ForAnyElementType *)local_150,0,(int *)(local_150 + 0xc));
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  uVar14 = (this->MElements).ArrayNum * 3;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar14 == 0) goto LAB_143e2c13d;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_e0 = (undefined4)lVar24;
    uVar14 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar14 <= (int)local_40)) goto LAB_143e2c13d;
  local_40 = uVar14;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar14 != 0) {
    uVar5 = uVar14;
    if (uVar14 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_143e2bf86;
      }
    }
    else {
LAB_143e2bf86:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar5,4);
    }
    if (0 < (int)uVar14) {
      uVar20 = (ulonglong)uVar14;
      uVar19 = uVar12;
      do {
        FVar11.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_48.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar19;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_110 = 0;
    uStack_10c = 1;
    uStack_fc = 0;
    uStack_f8 = 0;
    if (local_60 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_68;
      }
      uVar14 = *(uint *)FVar21;
      uVar19 = uVar12;
      while (uVar14 == 0) {
        uStack_f8 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_f8;
        iVar10 = (int)uVar12;
        local_110 = iVar10 + 1;
        uVar12 = (ulonglong)local_110;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_110)
        goto LAB_143e2c07f;
        uVar14 = ((uint *)((longlong)FVar21 + 4))[iVar10];
      }
      uStack_10c = -uVar14 & uVar14;
      uVar12 = (ulonglong)uStack_10c * 2 + 1;
      lVar24 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_dc = (int)lVar24;
      uStack_fc = local_dc + -1 + uStack_f8;
      uVar12 = (ulonglong)uStack_fc;
      if ((int)local_60 < (int)uStack_fc) {
LAB_143e2c07f:
        uVar12 = (ulonglong)local_60;
        uStack_fc = local_60;
      }
    }
    local_100 = 0xffffffff;
    local_c0 = (longlong *)local_88;
    local_b8._padding_ = CONCAT44(uStack_10c,local_110);
    local_b8.CurrentBitIndex = uStack_fc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_f4;
    local_b8.BaseBitIndex = uStack_f8;
    local_b8.Array = pTStack_108;
    if ((int)uVar12 < (int)local_60) {
      do {
        iVar10 = (int)uVar12;
        uVar12 = *(ulonglong *)(*local_c0 + (longlong)iVar10 * 0x14);
        lVar24 = *local_c0 + (longlong)iVar10 * 0x14;
        uVar14 = ((uint)uVar12 * 0x40 +
                  ((uint)(uVar12 >> 2) & 0x3fffffff) + (int)(uVar12 >> 0x20) + -0x61c88647 ^
                 (uint)uVar12) & local_40 - 1;
        *(uint *)(lVar24 + 0x10) = uVar14;
        FVar11.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_48.Data;
        }
        uVar12 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar24 + 0xc) = *(undefined4 *)(FVar11.Data + uVar12 * 4);
        *(int *)(FVar11.Data + uVar12 * 4) = iVar10;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar12 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_143e2c13d:
  pTVar1 = &this->MEdgeToFaces;
  piVar2 = &(this->MEdgeToFaces).ArrayNum;
  *piVar2 = 0;
  if ((this->MEdgeToFaces).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar1->AllocatorInstance,0,&(this->MEdgeToFaces).ArrayMax);
  }
  piVar13 = &(this->MEdgeToFaces).ArrayMax;
  uVar14 = (this->MElements).ArrayNum * 3;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar13 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar14,&pTVar1->AllocatorInstance,*piVar2,piVar13);
  }
  local_d8.Value = (int *)&this->MFaceToEdges;
  local_130 = &(this->MFaceToEdges).ArrayNum;
  piVar13 = &(this->MFaceToEdges).ArrayMax;
  *local_130 = 0;
  if ((this->MFaceToEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_d8.Value,0,piVar13);
  }
  uVar14 = (this->MElements).ArrayNum;
  iVar10 = *local_130;
  if (iVar10 < (int)uVar14) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar14 - iVar10,&(this->MFaceToEdges).AllocatorInstance,local_130,piVar13);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar10) {
      uVar5 = iVar10 - uVar14;
      if (((int)(uVar14 | uVar5) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSegmentMesh *)(*pcVar3)();
        return pFVar8;
      }
      if (uVar5 != 0) {
        pFVar22 = (this->MFaceToEdges).AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc;
        iVar10 = (*local_130 - uVar5) - uVar14;
        if (iVar10 != 0) {
          memmove(pFVar22,pFVar22 + (longlong)(int)uVar5 * 0xc,(longlong)iVar10 * 0xc);
        }
        *local_130 = *local_130 - uVar5;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&(this->MFaceToEdges).AllocatorInstance,*local_130,piVar13);
      }
    }
  }
  iVar10 = (this->MElements).ArrayNum;
  local_138 = 0;
  if (0 < iVar10) {
    local_f0 = 0;
    local_128 = 0;
    pFVar23 = this;
    do {
      lVar24 = local_f0;
      uVar14 = local_138;
      uVar15 = ~local_138;
      uVar5 = 0;
      if ((int)local_138 < iVar10) {
        uVar5 = uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSegmentMesh *)(*pcVar3)();
        return pFVar8;
      }
      piVar13 = local_d8.Value;
      local_118 = (pFVar23->MElements).AllocatorInstance.Data + lVar24;
      uVar5 = 0;
      if ((int)uVar14 < *(int *)((longlong)local_d8.Value + 8)) {
        uVar5 = uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSegmentMesh *)(*pcVar3)();
        return pFVar8;
      }
      pFVar22 = ((ForAnyElementType *)piVar13)->Data + lVar24;
      local_120 = 0;
      iVar10 = 1;
      local_c8 = (longlong)local_118 - (longlong)pFVar22;
      local_130 = (int *)CONCAT44(local_130._4_4_,1);
      do {
        lVar24 = local_120;
        local_140 = *(uint *)(pFVar22 + local_c8);
        uVar5 = *(uint *)(local_118 +
                         (longlong)
                         (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                                   (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3) * 4);
        uStack_13c = uVar5;
        if ((int)uVar5 <= (int)local_140) {
          uStack_13c = local_140;
          local_140 = uVar5;
        }
        uVar9 = CONCAT44(uStack_13c,local_140);
        if (local_88._8_4_ != local_54) {
          FVar11.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar11.Data = local_48.Data;
          }
          iVar10 = *(int *)(FVar11.Data +
                           (ulonglong)
                           (local_40 - 1 &
                           ((local_140 >> 2) + 0x9e3779b9 + uStack_13c + local_140 * 0x40 ^
                           local_140)) * 4);
          while (iVar10 != -1) {
            pFVar16 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar10 * 0x14);
            if (((uint)*(undefined8 *)(local_88._0_8_ + (longlong)iVar10 * 0x14) == local_140) &&
               ((uint)((ulonglong)*(undefined8 *)(local_88._0_8_ + (longlong)iVar10 * 0x14) >> 0x20)
                == uStack_13c)) {
              if (iVar10 != -1) {
                pFVar18 = pFVar16 + 8;
                if (pFVar16 == (FScriptContainerElement *)0x0) {
                  pFVar18 = (FScriptContainerElement *)0x0;
                }
                if (pFVar18 != (FScriptContainerElement *)0x0) {
                  local_158 = *(uint *)pFVar18;
                  goto LAB_143e2c595;
                }
              }
              break;
            }
            iVar10 = *(int *)(pFVar16 + 0xc);
          }
        }
        if (((ulonglong)local_150._0_8_ <= (FScriptContainerElement *)&local_140) &&
           ((FScriptContainerElement *)&local_140 <
            (FScriptContainerElement *)(local_150._0_8_ + (longlong)(int)local_150._12_4_ * 8))) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FSegmentMesh *)(*pcVar3)();
            return pFVar8;
          }
          uVar9 = CONCAT44(uStack_13c,local_140);
        }
        uVar5 = local_150._8_4_;
        if (local_150._8_4_ == local_150._12_4_) {
          uVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)local_150,(int *)(local_150 + 0xc));
          uVar9 = CONCAT44(uStack_13c,local_140);
        }
        local_150._8_4_ = uVar5 + 1;
        *(undefined8 *)(local_150._0_8_ + (longlong)(int)uVar5 * 8) = uVar9;
        local_98 = &local_140;
        local_90 = &local_158;
        local_158 = uVar5;
        TSet<TTuple<Chaos::TVector<int,2>,int>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<Chaos::TVector<int,2>_const_&,int_const_&>_>
                  ((TSet<TTuple<Chaos::TVector<int,2>,int>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,int,0>,FDefaultSetAllocator>
                    *)local_88,&local_d8,(bool *)&local_98);
LAB_143e2c595:
        *(uint *)pFVar22 = local_158;
        iVar10 = (local_e8->MEdgeToFaces).ArrayNum;
        uVar12 = (ulonglong)iVar10;
        if (iVar10 <= (int)local_158) {
          uVar14 = local_158 + 1;
          if (iVar10 < (int)uVar14) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar14 - iVar10,&pTVar1->AllocatorInstance,piVar2,
                       &(this->MEdgeToFaces).ArrayMax);
          }
          else {
            if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
            if ((int)uVar14 < iVar10) {
              uVar5 = iVar10 - uVar14;
              if (((int)(uVar5 | uVar14) < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar8 = (FSegmentMesh *)(*pcVar3)();
                return pFVar8;
              }
              lVar24 = local_120;
              if (uVar5 != 0) {
                pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 8;
                iVar6 = (*piVar2 - uVar5) - uVar14;
                if (iVar6 != 0) {
                  memmove(pFVar16,pFVar16 + (longlong)(int)uVar5 * 8,(longlong)iVar6 << 3);
                }
                *piVar2 = *piVar2 - uVar5;
                lVar24 = local_120;
              }
            }
          }
          uVar14 = local_138;
          if (iVar10 < (int)(local_158 + 1)) {
            lVar17 = uVar12 * 8;
            do {
              uVar5 = (uint)uVar12;
              uVar14 = 0;
              if ((int)uVar5 < *piVar2) {
                uVar14 = ~uVar5 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar8 = (FSegmentMesh *)(*pcVar3)();
                return pFVar8;
              }
              uVar12 = (ulonglong)(uVar5 + 1);
              *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar17) = 0xffffffffffffffff;
              lVar17 = lVar17 + 8;
              uVar14 = local_138;
            } while ((int)(uVar5 + 1) < (int)(local_158 + 1));
          }
        }
        uVar5 = local_158;
        uVar15 = 0;
        if ((int)local_158 < *piVar2) {
          uVar15 = ~local_158 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FSegmentMesh *)(*pcVar3)();
          return pFVar8;
        }
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        lVar17 = (longlong)(int)uVar5;
        if (*(int *)(pFVar16 + lVar17 * 8) < 0) {
          *(uint *)(pFVar16 + lVar17 * 8) = uVar14;
        }
        else if (*(int *)(pFVar16 + lVar17 * 8 + 4) < 0) {
          *(uint *)(pFVar16 + lVar17 * 8 + 4) = uVar14;
        }
        local_120 = lVar24 + 1;
        iVar10 = (int)local_130 + 1;
        pFVar22 = pFVar22 + 4;
        local_130 = (int *)CONCAT44(local_130._4_4_,iVar10);
      } while (local_120 < 3);
      local_138 = uVar14 + 1;
      local_128 = local_128 + 1;
      local_f0 = local_f0 + 0xc;
      iVar10 = (local_e8->MElements).ArrayNum;
      pFVar23 = local_e8;
    } while ((int)local_138 < iVar10);
    pFVar8 = &local_e8->MSegmentMesh;
    this = local_e8;
  }
  FSegmentMesh::_ClearAuxStructures(pFVar8);
  if (pFVar8 != (FSegmentMesh *)local_150) {
    pFVar22 = (pFVar8->MElements).AllocatorInstance.Data;
    if (pFVar22 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar22);
    }
    (pFVar8->MElements).AllocatorInstance.Data = (FScriptContainerElement *)local_150._0_8_;
    (pFVar8->MElements).ArrayNum = local_150._8_4_;
    (pFVar8->MElements).ArrayMax = local_150._12_4_;
    local_150._8_4_ = 0;
    local_150._12_4_ = 0;
    local_150._0_8_ = (FScriptContainerElement *)0x0;
  }
  pFVar16 = (pFVar8->MElements).AllocatorInstance.Data;
  iVar10 = (pFVar8->MElements).ArrayNum;
  pFVar22 = pFVar16 + (longlong)iVar10 * 8;
  while( true ) {
    if ((pFVar8->MElements).ArrayNum != iVar10) {
      local_154[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_154);
    }
    if (pFVar16 == pFVar22) break;
    if ((*(int *)pFVar16 == *(int *)(pFVar16 + 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("edge[0] != edge[1]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                           ,0x2d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSegmentMesh *)(*pcVar3)();
      return pFVar8;
    }
    pFVar16 = pFVar16 + 8;
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_150._0_8_);
  }
  return &this->MSegmentMesh;
}

// GetUniqueAdjacentElements @ 143e2cfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetUniqueAdjacentElements
          (FTriangleMesh *this,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar8;
  byte bVar9;
  uint *puVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  ForElementType<FSetElementId> FVar19;
  undefined4 *puVar20;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined1 local_177 [3];
  uint local_174;
  uint local_170;
  uint local_16c;
  uint uStack_168;
  uint local_164;
  uint uStack_160;
  uint local_15c;
  uint uStack_158;
  int local_154;
  int local_150;
  int local_14c;
  uint local_148;
  TTuple<int,bool> local_144;
  TTuple<int,bool> local_13c;
  TTuple<int,bool> local_134;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  uint *local_e0;
  uint *local_d8;
  uint *local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar12 = (this->MElements).AllocatorInstance.Data;
  iVar11 = (this->MElements).ArrayNum;
  local_88._0_8_ = 0;
  uVar17 = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  pFVar3 = pFVar12 + (longlong)iVar11 * 0xc;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  while( true ) {
    if ((this->MElements).ArrayNum != iVar11) {
      local_178 = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_178);
    }
    uVar15 = local_60;
    if (pFVar12 == pFVar3) break;
    uVar15 = *(uint *)(pFVar12 + 4);
    uStack_168 = *(uint *)pFVar12;
    local_16c = uVar15;
    if ((int)uStack_168 <= (int)uVar15) {
      local_16c = uStack_168;
      uStack_168 = uVar15;
    }
    uVar15 = (local_16c >> 2) + 0x9e3779b9 + uStack_168 + local_16c * 0x40 ^ local_16c;
    if (local_88._8_4_ != local_54) {
      FVar19 = (ForElementType<FSetElementId>)local_50;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = local_48;
      }
      iVar2 = *(int *)((longlong)FVar19 + (ulonglong)(local_40 - 1U & uVar15) * 4);
      while (iVar2 != -1) {
        puVar18 = (undefined8 *)((longlong)iVar2 * 0x20 + local_88._0_8_);
        if (((uint)*puVar18 == local_16c) && ((uint)((ulonglong)*puVar18 >> 0x20) == uStack_168)) {
          if ((iVar2 != -1) && (puVar18 != (undefined8 *)0x0)) goto LAB_143e2d158;
          break;
        }
        iVar2 = *(int *)(puVar18 + 3);
      }
    }
    local_e0 = &local_16c;
    local_1a8 = (undefined4 *)0x0;
    TSet<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
              ((TSet<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_88,(uint)&local_154,
               (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar15,(bool *)&local_e0);
    puVar18 = (undefined8 *)((longlong)local_154 * 0x20 + local_88._0_8_);
LAB_143e2d158:
    local_144._0_4_ = *(undefined4 *)(pFVar12 + 8);
    local_144._4_1_ = *(int *)(pFVar12 + 4) < *(int *)pFVar12;
    TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TTuple<int,bool>_>
              ((TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_> *)(puVar18 + 1),&local_144);
    uVar15 = *(uint *)(pFVar12 + 8);
    uStack_160 = *(uint *)(pFVar12 + 4);
    local_164 = uVar15;
    if ((int)uStack_160 <= (int)uVar15) {
      local_164 = uStack_160;
      uStack_160 = uVar15;
    }
    uVar15 = (local_164 >> 2) + 0x9e3779b9 + uStack_160 + local_164 * 0x40 ^ local_164;
    if (local_88._8_4_ != local_54) {
      FVar19 = (ForElementType<FSetElementId>)local_50;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = local_48;
      }
      iVar2 = *(int *)((longlong)FVar19 + (ulonglong)(local_40 - 1U & uVar15) * 4);
      while (iVar2 != -1) {
        puVar18 = (undefined8 *)((longlong)iVar2 * 0x20 + local_88._0_8_);
        if (((uint)*puVar18 == local_164) && ((uint)((ulonglong)*puVar18 >> 0x20) == uStack_160)) {
          if ((iVar2 != -1) && (puVar18 != (undefined8 *)0x0)) goto LAB_143e2d258;
          break;
        }
        iVar2 = *(int *)(puVar18 + 3);
      }
    }
    local_d8 = &local_164;
    local_1a8 = (undefined4 *)0x0;
    TSet<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
              ((TSet<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_88,(uint)&local_150,
               (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar15,(bool *)&local_d8);
    puVar18 = (undefined8 *)((longlong)local_150 * 0x20 + local_88._0_8_);
LAB_143e2d258:
    local_13c._0_4_ = *(undefined4 *)pFVar12;
    local_13c._4_1_ = *(int *)(pFVar12 + 8) < *(int *)(pFVar12 + 4);
    TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TTuple<int,bool>_>
              ((TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_> *)(puVar18 + 1),&local_13c);
    uVar15 = *(uint *)pFVar12;
    uStack_158 = *(uint *)(pFVar12 + 8);
    local_15c = uVar15;
    if ((int)uStack_158 <= (int)uVar15) {
      local_15c = uStack_158;
      uStack_158 = uVar15;
    }
    uVar15 = (local_15c >> 2) + 0x9e3779b9 + uStack_158 + local_15c * 0x40 ^ local_15c;
    if (local_88._8_4_ != local_54) {
      FVar19 = (ForElementType<FSetElementId>)local_50;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = local_48;
      }
      iVar2 = *(int *)((longlong)FVar19 + (ulonglong)(local_40 - 1U & uVar15) * 4);
      while (iVar2 != -1) {
        puVar18 = (undefined8 *)((longlong)iVar2 * 0x20 + local_88._0_8_);
        if (((uint)*puVar18 == local_15c) && ((uint)((ulonglong)*puVar18 >> 0x20) == uStack_158)) {
          if ((iVar2 != -1) && (puVar18 != (undefined8 *)0x0)) goto LAB_143e2d358;
          break;
        }
        iVar2 = *(int *)(puVar18 + 3);
      }
    }
    local_d0 = &local_15c;
    local_1a8 = (undefined4 *)0x0;
    TSet<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
              ((TSet<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_88,(uint)&local_14c,
               (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar15,(bool *)&local_d0);
    puVar18 = (undefined8 *)((longlong)local_14c * 0x20 + local_88._0_8_);
LAB_143e2d358:
    local_134._0_4_ = *(undefined4 *)(pFVar12 + 4);
    local_134._4_1_ = *(int *)pFVar12 < *(int *)(pFVar12 + 8);
    TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TTuple<int,bool>_>
              ((TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_> *)(puVar18 + 1),&local_134);
    pFVar12 = pFVar12 + 0xc;
  }
  uStack_10c = 1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStack_fc = local_f8;
  if (local_60 != 0) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar14 = *puVar10;
    local_f8 = 0;
    uVar17 = 0;
    while (uVar14 == 0) {
      lVar7 = (longlong)(int)uVar17;
      local_f8 = local_f8 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_fc = local_60;
      if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < (int)uVar17)
      goto LAB_143e2d410;
      uVar14 = puVar10[lVar7 + 1];
    }
    uStack_10c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_10c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_e8 = (int)lVar7;
    uStack_fc = (local_f8 - 1) + local_e8;
    if ((int)local_60 < (int)uStack_fc) {
      uStack_fc = local_60;
    }
  }
LAB_143e2d410:
  local_118 = (longlong *)local_88;
  local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar14 = local_60 & 0xffffffe0;
  iStack_f0 = local_88._8_4_ - local_54;
  uStack_100 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_fc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_10c,uVar17);
  iVar11 = (int)local_60 >> 5;
  TStack_c0._28_4_ = uStack_fc;
  TStack_c0.BaseBitIndex = local_f8;
  uStack_a0 = CONCAT44(uStack_ec,iStack_f0);
  bVar9 = (byte)local_60;
  local_170 = local_60;
  uStack_110 = uVar17;
  uStack_f4 = uStack_fc;
  local_c8 = local_118;
  TStack_c0.Array = local_108;
  if (((int)local_60 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  if (uVar15 != local_60) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar17 = -1 << (bVar9 & 0x1f) & puVar10[iVar11];
    while (uVar17 == 0) {
      lVar7 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar11) {
        local_170 = local_60;
        uVar15 = local_60;
        goto LAB_143e2d520;
      }
      uVar17 = puVar10[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_e4 = (int)lVar7;
    local_170 = (uVar14 - 1) + local_e4;
    uVar15 = local_170;
    if ((int)local_60 < (int)local_170) {
      uVar15 = local_60;
      local_170 = local_60;
    }
  }
LAB_143e2d520:
  do {
    plVar5 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_177[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_177);
    }
    if (((TStack_c0.CurrentBitIndex == uVar15) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<TTuple<int,bool>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return __return_storage_ptr__;
    }
    puVar16 = (undefined4 *)((longlong)TStack_c0.CurrentBitIndex * 0x20 + *plVar5);
    local_174 = 0;
    iVar11 = puVar16[4];
    if (0 < iVar11) {
      local_120 = 8;
      do {
        uVar17 = local_174 + 1;
        if ((int)uVar17 < iVar11) {
          puVar20 = (undefined4 *)(longlong)(int)local_174;
          local_148 = ~local_174 >> 0x1f;
          lVar7 = local_120;
          do {
            uVar15 = 0;
            if ((int)uVar17 < iVar11) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            local_128 = lVar7;
            if (uVar15 == 0) {
              local_1a0 = (FScriptContainerElement *)(longlong)iVar11;
              local_1a8 = (undefined4 *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar8 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar8;
              }
            }
            piVar13 = (int *)(lVar7 + *(longlong *)(puVar16 + 2));
            uVar15 = 0;
            if ((int)local_174 < (int)puVar16[4]) {
              uVar15 = local_148;
            }
            if ((uVar15 == 0) &&
               (local_1a8 = puVar20,
               local_1a0 = (FScriptContainerElement *)(longlong)(int)puVar16[4],
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar8;
            }
            lVar7 = *(longlong *)(puVar16 + 2);
            if (*(char *)(lVar7 + 4 + (longlong)puVar20 * 8) == '\0') {
              if ((char)piVar13[1] == '\0') {
LAB_143e2d7c1:
                local_98 = *puVar16;
                uStack_94 = puVar16[1];
                if (*piVar13 <= *(int *)(lVar7 + (longlong)puVar20 * 8)) goto LAB_143e2d6b0;
                iStack_90 = *(int *)(lVar7 + (longlong)puVar20 * 8);
                iStack_8c = *piVar13;
              }
              else {
                local_98 = *puVar16;
                uStack_94 = puVar16[1];
                iStack_90 = *(int *)(lVar7 + (longlong)puVar20 * 8);
                iStack_8c = *piVar13;
              }
            }
            else {
              if ((char)piVar13[1] != '\0') goto LAB_143e2d7c1;
              local_98 = *puVar16;
              uStack_94 = puVar16[1];
LAB_143e2d6b0:
              iStack_90 = *piVar13;
              iStack_8c = *(int *)(lVar7 + (longlong)puVar20 * 8);
            }
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
               ((FScriptContainerElement *)&local_98 <
                pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
              local_190 = (longlong)__return_storage_ptr__->ArrayNum;
              local_188 = 0x10;
              local_1a8 = &local_98;
              local_1a0 = pFVar3;
              local_198 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar8 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar8;
              }
            }
            iVar11 = __return_storage_ptr__->ArrayNum;
            if (iVar11 == __return_storage_ptr__->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar11 + 1;
            lVar7 = local_128 + 8;
            uVar17 = uVar17 + 1;
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
            *(ulonglong *)pFVar3 = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(pFVar3 + 8) = CONCAT44(iStack_8c,iStack_90);
            iVar11 = puVar16[4];
            local_128 = lVar7;
          } while ((int)uVar17 < iVar11);
        }
        local_174 = local_174 + 1;
        local_120 = local_120 + 8;
        uVar15 = local_170;
      } while ((int)local_174 < iVar11);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// GetUniqueAdjacentPoints @ 143e2d850

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetUniqueAdjacentPoints
          (FTriangleMesh *this,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  GetUniqueAdjacentElements(this,&local_28);
  iVar5 = local_28.ArrayNum;
  if (-1 < iVar5) {
    __return_storage_ptr__->ArrayNum = 0;
    if (*piVar1 < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar5 = local_28.ArrayNum;
    pFVar7 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    pFVar8 = local_28.AllocatorInstance.Data + 8;
    while( true ) {
      if (local_28.ArrayNum != iVar5) {
        `TCheckedPointerIterator<Chaos::TVector<int,4>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar8 + -8 == pFVar7) break;
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8;
      uVar3 = *(undefined4 *)(pFVar8 + 4);
      uVar4 = *(undefined4 *)pFVar8;
      pFVar8 = pFVar8 + 0x10;
      *(undefined4 *)pFVar2 = uVar4;
      *(undefined4 *)(pFVar2 + 4) = uVar3;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(local_28._8_8_ & 0xffffffff);
}

// GetVertexImportanceOrdering @ 143e2d960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143e2e626) */
/* WARNING: Removing unreachable block (ram,0x000143e2e63b) */
/* WARNING: Removing unreachable block (ram,0x000143e2e63e) */
/* WARNING: Removing unreachable block (ram,0x000143e2e642) */
/* WARNING: Removing unreachable block (ram,0x000143e2e674) */
/* WARNING: Removing unreachable block (ram,0x000143e2e675) */
/* WARNING: Removing unreachable block (ram,0x000143e2e689) */
/* WARNING: Removing unreachable block (ram,0x000143e2e695) */
/* WARNING: Removing unreachable block (ram,0x000143e2e6a6) */
/* WARNING: Removing unreachable block (ram,0x000143e2e6f0) */
/* WARNING: Removing unreachable block (ram,0x000143e2e6f1) */
/* WARNING: Removing unreachable block (ram,0x000143e2e6fe) */
/* WARNING: Removing unreachable block (ram,0x000143e2e70b) */
/* WARNING: Removing unreachable block (ram,0x000143e2e71e) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetVertexImportanceOrdering
          (FTriangleMesh *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ForAnyElementType FVar9;
  ForAnyElementType *pFVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  size_t sVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  TVector<double,3> *pTVar18;
  TVector<double,3> *pTVar19;
  long64 lVar20;
  byte bVar21;
  undefined1 *puVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  ForElementType<FSetElementId> FVar29;
  ForElementType<unsigned_int> FVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStackY_5e8 [32];
  FIdentityFunctor local_597;
  FIdentityFunctor local_594 [4];
  uint local_590;
  uint local_58c;
  uint local_588;
  undefined8 local_580;
  ForAnyElementType local_578;
  undefined8 local_570;
  undefined1 local_568 [4];
  uint local_564;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_560;
  ulonglong local_550;
  TArray<int,TSizedDefaultAllocator<32>_> *local_548;
  int local_540;
  int local_53c;
  int local_538;
  ulonglong local_530;
  ForAnyElementType local_528;
  int local_520 [2];
  ForAnyElementType local_518;
  int local_510 [2];
  ForAnyElementType *local_508;
  uint local_500;
  undefined4 local_4fc;
  TArray<double,TSizedDefaultAllocator<32>_> *local_4f8;
  int local_4f0 [2];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  TArray<double,TSizedDefaultAllocator<32>_> *local_4d0;
  int iStack_4c8;
  undefined4 uStack_4c4;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_490;
  uint uStack_488;
  undefined4 uStack_484;
  longlong *local_480;
  int iStack_478;
  uint uStack_474;
  TBitArray<FDefaultBitArrayAllocator> *local_470;
  undefined4 uStack_468;
  uint uStack_464;
  int local_460;
  undefined4 uStack_45c;
  int iStack_458;
  undefined4 uStack_454;
  double local_450;
  double dStack_448;
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  double local_420;
  double dStack_418;
  double local_410;
  long64 local_408;
  int local_400;
  undefined4 local_3fc;
  long64 *local_3f8;
  long64 local_3f0;
  long64 local_3e8;
  undefined1 local_3e0 [8];
  long64 local_3d8;
  long64 local_3d0;
  int local_3c8;
  int local_3c4;
  undefined8 local_3c0;
  long64 local_3b8;
  longlong local_3b0;
  long64 local_3a8;
  longlong *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 uStack_378;
  longlong *local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_368;
  undefined8 uStack_348;
  DescendingPredicate<double> local_338;
  double local_328;
  double dStack_320;
  double local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  AscendingPredicate<unsigned_char> local_268;
  DescendingPredicate<double> local_258 [2];
  undefined4 local_22c;
  undefined4 local_20c;
  longlong local_208;
  undefined8 local_200;
  TBitArray<FDefaultBitArrayAllocator> local_1f8;
  undefined4 local_1d8;
  int local_1d4;
  undefined1 local_1d0 [8];
  undefined1 *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [40];
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> local_168;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  lVar28 = 0;
  uVar23 = 0;
  if (param_4) {
    uVar26 = this->MNumIndices;
    uVar25 = this->MStartIdx;
  }
  else {
    uVar26 = param_1->ArrayNum;
    uVar25 = uVar23;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (uVar26 != 0) {
    local_590 = uVar25;
    local_58c = uVar26;
    local_548 = __return_storage_ptr__;
    local_4f8 = param_2;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (__return_storage_ptr__,uVar26,Default);
    sVar16 = (size_t)(int)uVar26;
    local_580 = sVar16;
    if (0 < (int)uVar26) {
      do {
        uVar26 = 0;
        if ((int)uVar23 < __return_storage_ptr__->ArrayNum) {
          uVar26 = ~uVar23 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        iVar13 = uVar25 + uVar23;
        uVar23 = uVar23 + 1;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + lVar28 * 4) = iVar13;
        lVar28 = lVar28 + 1;
        uVar26 = local_58c;
      } while (lVar28 < (longlong)sVar16);
    }
    if (uVar26 != 1) {
      pTVar18 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,uVar25);
      pTVar19 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,uVar25);
      local_4b0 = *(undefined8 *)&pTVar19->field_0x10;
      local_498 = *(double *)&pTVar18->field_0x10;
      uVar41 = (undefined4)local_4b0;
      uVar43 = (undefined4)((ulonglong)local_4b0 >> 0x20);
      local_4c0 = *(undefined8 *)pTVar19;
      uStack_4b8 = *(undefined8 *)&pTVar19->field_0x8;
      uVar47 = (undefined4)uStack_4b8;
      uVar48 = (undefined4)((ulonglong)uStack_4b8 >> 0x20);
      uVar49 = (undefined4)local_4c0;
      uVar50 = (undefined4)((ulonglong)local_4c0 >> 0x20);
      local_4a8 = *(double *)pTVar18;
      dStack_4a0 = *(double *)&pTVar18->field_0x8;
      if (1 < (int)uVar26) {
        uVar23 = uVar25 + 1;
        lVar28 = (longlong)(int)uVar23 * 0x18;
        uVar31 = (ulonglong)(uVar26 - 1);
        do {
          uVar26 = 0;
          if ((int)uVar23 < param_1->ArrayNum) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          pTVar18 = param_1->DataPtr;
          uVar23 = uVar23 + 1;
          uVar40 = SUB84(dStack_4a0,0);
          uVar42 = (undefined4)((ulonglong)dStack_4a0 >> 0x20);
          if (local_4a8 <= *(double *)(&pTVar18->field_0x0 + lVar28)) {
            local_4a8 = *(double *)(&pTVar18->field_0x0 + lVar28);
          }
          dVar45 = *(double *)(&pTVar18->field_0x0 + lVar28);
          if (dVar45 <= (double)CONCAT44(uVar50,uVar49)) {
            uVar49 = SUB84(dVar45,0);
            uVar50 = (undefined4)((ulonglong)dVar45 >> 0x20);
          }
          dVar45 = *(double *)(&pTVar18->field_0x8 + lVar28);
          if (dVar45 <= (double)CONCAT44(uVar48,uVar47)) {
            uVar47 = SUB84(dVar45,0);
            uVar48 = (undefined4)((ulonglong)dVar45 >> 0x20);
          }
          dVar45 = *(double *)(&pTVar18->field_0x10 + lVar28);
          if (dVar45 <= (double)CONCAT44(uVar43,uVar41)) {
            uVar41 = SUB84(dVar45,0);
            uVar43 = (undefined4)((ulonglong)dVar45 >> 0x20);
          }
          dVar45 = *(double *)(&pTVar18->field_0x8 + lVar28);
          if (dStack_4a0 <= dVar45) {
            uVar40 = SUB84(dVar45,0);
            uVar42 = (undefined4)((ulonglong)dVar45 >> 0x20);
          }
          if (local_498 <= *(double *)(&pTVar18->field_0x10 + lVar28)) {
            local_498 = *(double *)(&pTVar18->field_0x10 + lVar28);
          }
          lVar28 = lVar28 + 0x18;
          local_4c0 = CONCAT44(uVar50,uVar49);
          uStack_4b8 = CONCAT44(uVar48,uVar47);
          local_4b0 = CONCAT44(uVar43,uVar41);
          dStack_4a0 = (double)CONCAT44(uVar42,uVar40);
          uVar31 = uVar31 - 1;
          uVar26 = local_58c;
          uVar25 = local_590;
        } while (uVar31 != 0);
      }
      dVar8 = __real_3fe0000000000000;
      lVar28 = 0x18;
      local_528.Data = (FScriptContainerElement *)0x0;
      local_520[0] = 0;
      local_520[1] = 0;
      dVar5 = (local_4a8 - (double)CONCAT44(uVar50,uVar49)) * __real_3fe0000000000000 +
              (double)CONCAT44(uVar50,uVar49);
      dVar6 = (dStack_4a0 - (double)CONCAT44(uVar48,uVar47)) * __real_3fe0000000000000 +
              (double)CONCAT44(uVar48,uVar47);
      dVar7 = (local_498 - (double)CONCAT44(uVar43,uVar41)) * __real_3fe0000000000000 +
              (double)CONCAT44(uVar43,uVar41);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar26,&local_528,local_520,local_520 + 1);
      pTVar18 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[](param_1,uVar25);
      dVar45 = *(double *)&pTVar18->field_0x10;
      auVar36._0_8_ = *(double *)&pTVar18->field_0x8;
      dVar46 = *(double *)pTVar18;
      if ((local_520[0] < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      *(double *)local_528.Data = dVar46 - dVar5;
      *(double *)(local_528.Data + 8) = auVar36._0_8_ - dVar6;
      *(double *)(local_528.Data + 0x10) = dVar45 - dVar7;
      if ((local_520[0] < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      FVar9.Data = local_528.Data;
      if ((local_520[0] < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      dVar46 = *(double *)local_528.Data;
      dVar44 = *(double *)(local_528.Data + 8);
      dVar45 = *(double *)(local_528.Data + 0x10);
      local_420 = *(double *)FVar9.Data;
      dStack_418 = *(double *)(FVar9.Data + 8);
      auVar36._0_8_ = *(double *)(FVar9.Data + 0x10);
      uVar23 = 1;
      if ((longlong)(int)uVar26 < 2) {
        uVar41 = SUB84(dStack_418,0);
        uVar43 = (undefined4)((ulonglong)dStack_418 >> 0x20);
        uVar47 = SUB84(local_420,0);
        uVar48 = (undefined4)((ulonglong)local_420 >> 0x20);
        local_500 = uVar25;
      }
      else {
        lVar32 = (longlong)(int)uVar26 + -1;
        local_438 = dVar46;
        dStack_430 = dVar44;
        local_428 = dVar45;
        local_410 = auVar36._0_8_;
        do {
          uVar25 = uVar25 + uVar23;
          uVar26 = 0;
          if ((int)uVar25 < param_1->ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          pTVar18 = param_1->DataPtr;
          dVar45 = *(double *)&pTVar18[(int)uVar25].field_0x10;
          auVar36._0_8_ = *(double *)&pTVar18[(int)uVar25].field_0x8;
          dVar46 = *(double *)(pTVar18 + (int)uVar25);
          uVar26 = 0;
          if ((int)uVar23 < local_520[0]) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          *(double *)(local_528.Data + lVar28) = dVar46 - dVar5;
          *(double *)(local_528.Data + lVar28 + 8) = auVar36._0_8_ - dVar6;
          *(double *)(local_528.Data + lVar28 + 0x10) = dVar45 - dVar7;
          uVar26 = 0;
          if ((int)uVar23 < local_520[0]) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          uVar23 = uVar23 + 1;
          auVar36._0_8_ = *(double *)(local_528.Data + lVar28 + 0x10);
          dVar46 = *(double *)(local_528.Data + lVar28 + 8);
          uVar41 = SUB84(dVar46,0);
          uVar43 = (undefined4)((ulonglong)dVar46 >> 0x20);
          dVar1 = *(double *)(local_528.Data + lVar28);
          uVar47 = SUB84(dVar1,0);
          uVar48 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar44 = dVar46;
          if (dStack_430 <= dVar46) {
            dVar44 = dStack_430;
          }
          dVar45 = auVar36._0_8_;
          if (local_428 <= auVar36._0_8_) {
            dVar45 = local_428;
          }
          if (dVar46 <= dStack_418) {
            uVar41 = SUB84(dStack_418,0);
            uVar43 = (undefined4)((ulonglong)dStack_418 >> 0x20);
          }
          if (auVar36._0_8_ <= local_410) {
            auVar36._0_8_ = local_410;
          }
          lVar28 = lVar28 + 0x18;
          dStack_418 = (double)CONCAT44(uVar43,uVar41);
          dVar46 = dVar1;
          if (local_438 <= dVar1) {
            dVar46 = local_438;
          }
          if (dVar1 <= local_420) {
            uVar47 = SUB84(local_420,0);
            uVar48 = (undefined4)((ulonglong)local_420 >> 0x20);
          }
          local_420 = (double)CONCAT44(uVar48,uVar47);
          lVar32 = lVar32 + -1;
          uVar26 = local_58c;
          local_500 = local_590;
          uVar25 = local_590;
          local_438 = dVar46;
          dStack_430 = dVar44;
          local_428 = dVar45;
          local_410 = auVar36._0_8_;
        } while (lVar32 != 0);
      }
      local_508 = &local_528;
      dVar5 = (double)CONCAT44(uVar43,uVar41) + __real_3f50624de0000000;
      dStack_4e0 = dVar44 - __real_3f50624de0000000;
      local_4d8 = dVar45 - __real_3f50624de0000000;
      local_518.Data = (FScriptContainerElement *)0x0;
      local_510[0] = 0;
      local_510[1] = 0;
      dVar1 = ((double)CONCAT44(uVar48,uVar47) + __real_3f50624de0000000) -
              (dVar46 - __real_3f50624de0000000);
      dVar6 = (auVar36._0_8_ + __real_3f50624de0000000) - local_4d8;
      dVar7 = dVar5 - dStack_4e0;
      dStack_4e0 = (dVar5 - dStack_4e0) * dVar8 + dStack_4e0;
      local_4d8 = ((auVar36._0_8_ + __real_3f50624de0000000) - local_4d8) * dVar8 + local_4d8;
      local_4e8 = dVar1 * dVar8 + (dVar46 - __real_3f50624de0000000);
      local_438 = dVar46;
      dStack_430 = dVar44;
      local_428 = dVar45;
      local_410 = auVar36._0_8_;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar26,&local_518,local_510,local_510 + 1);
      uVar23 = 0;
      if (0 < (int)uVar26) {
        lVar28 = 0;
        lVar32 = 0;
        do {
          uVar25 = 0;
          if ((int)uVar23 < local_520[0]) {
            uVar25 = ~uVar23 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          auVar36._0_8_ = *(double *)(local_528.Data + lVar32 + 0x10) - local_4d8;
          dVar46 = *(double *)(local_528.Data + lVar32 + 8) - dStack_4e0;
          dVar45 = *(double *)(local_528.Data + lVar32) - local_4e8;
          uVar25 = 0;
          if ((int)uVar23 < local_510[0]) {
            uVar25 = ~uVar23 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          uVar23 = uVar23 + 1;
          lVar32 = lVar32 + 0x18;
          *(double *)(local_518.Data + lVar28 * 8) =
               dVar45 * dVar45 + dVar46 * dVar46 + auVar36._0_8_ * auVar36._0_8_;
          lVar28 = lVar28 + 1;
          __return_storage_ptr__ = local_548;
        } while (lVar28 < (int)uVar26);
      }
      if (((dVar1 <= dVar7) || (dVar1 <= dVar6)) && (dVar1 = dVar6, dVar6 <= dVar7)) {
        dVar1 = dVar7;
      }
      if (__real_3eb0c6f7a0b5ed8d < dVar1) {
        local_18c = 0x80;
        local_1b8._0_8_ = (FScriptContainerElement *)0x0;
        local_1b8._8_8_ = 0;
        local_1b8._32_8_ = (ForElementType<unsigned_int>)0x0;
        local_190 = 0;
        local_188 = -1;
        local_184 = 0;
        local_178 = (ForElementType<FSetElementId>)0x0;
        local_170 = 0;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
        }
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_1b8,uVar26);
        if (uVar26 < 4) {
          iVar13 = 1;
        }
        else {
          uVar31 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
          lVar28 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_3fc = (undefined4)lVar28;
          iVar13 = 1 << ((byte)lVar28 & 0x1f);
        }
        if ((local_170 == 0) || (local_170 < iVar13)) {
          local_170 = iVar13;
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1b8);
        }
        if ((param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
           (param_3->ArrayMax < 0x40)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0x40,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
        }
        dVar45 = __real_3ff0000000000000;
        local_588 = 0;
        auVar36._0_8_ = dVar1 * __real_4059000000000000;
        local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_560.ArrayNum = 0;
        local_560.ArrayMax = 0;
        lVar28 = (longlong)auVar36._0_8_;
        if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != auVar36._0_8_)) {
          auVar36._8_8_ = auVar36._0_8_;
          uVar23 = movmskpd(0,auVar36);
          auVar36._0_8_ = (double)(longlong)(lVar28 - (ulonglong)(uVar23 & 1));
        }
        uVar31 = (ulonglong)auVar36._0_8_;
        local_540 = 0;
        auVar36._0_8_ = (double)(longlong)uVar31;
        do {
          iVar13 = local_540;
          local_550 = uVar31;
          if (local_1b8._8_4_ != local_184) {
            TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements
                      ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1b8);
            bVar11 = (longlong)local_1b8._8_8_ < 0;
            local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
            if (bVar11) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
            }
            local_188 = -1;
            local_184 = 0;
            local_190 = 0;
          }
          local_560.ArrayNum = 0;
          if ((local_560.ArrayMax < 0) && (local_560.ArrayMax != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,&local_560.AllocatorInstance,0,&local_560.ArrayMax);
          }
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,uVar26,&local_560.AllocatorInstance,&local_560.ArrayNum,
                              &local_560.ArrayMax);
          memset(local_560.AllocatorInstance.Data + iVar14,0,(longlong)(int)uVar26);
          pTVar17 = local_548;
          local_538 = uVar26 - local_588;
          uVar23 = 0;
          local_564 = local_588;
          auVar37._0_8_ = (double)iVar13 * (dVar1 / auVar36._0_8_) * dVar8;
          auVar37._8_8_ = 0;
          dVar46 = local_4d8 - auVar37._0_8_;
          dVar5 = dStack_4e0 - auVar37._0_8_;
          dVar6 = local_4e8 - auVar37._0_8_;
          sVar16 = (longlong)(int)uVar26;
          if (0 < local_538) {
            lVar28 = 0;
            local_530 = (longlong)uVar31 / 2;
            dVar7 = dVar45 / (dVar1 / auVar36._0_8_);
            do {
              uVar26 = 0;
              if ((int)uVar23 < pTVar17->ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , auVar37 = extraout_XMM0, bVar11)) {
                pcVar3 = (code *)swi(3);
                pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar17;
              }
              pFVar10 = local_508;
              local_53c = *(int *)((pTVar17->AllocatorInstance).Data + lVar28);
              uVar25 = local_53c - local_500;
              uVar26 = 0;
              if ((int)uVar25 < *(int *)&local_508[1].Data) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , auVar37 = extraout_XMM0_00, bVar11)) {
                pcVar3 = (code *)swi(3);
                pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar17;
              }
              uVar31 = local_550;
              pFVar24 = pFVar10->Data;
              lVar32 = (longlong)(int)uVar25;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = (*(double *)(pFVar24 + lVar32 * 0x18) - dVar6) * dVar7;
              auVar37 = roundpd(auVar37,auVar38,1);
              auVar39._8_8_ = 0;
              auVar39._0_8_ = (*(double *)(pFVar24 + lVar32 * 0x18 + 8) - dVar5) * dVar7;
              auVar38 = roundpd(auVar37,auVar39,1);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (*(double *)(pFVar24 + lVar32 * 0x18 + 0x10) - dVar46) * dVar7;
              auVar39 = roundpd(auVar38,auVar4,1);
              local_3b0 = (longlong)auVar39._0_8_ +
                          (((longlong)auVar37._0_8_ + local_530) * local_550 + local_530 +
                          (longlong)auVar38._0_8_) * local_550 + local_530;
              TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::
              Emplace<__int64_const_&>
                        ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1b8,
                         (long64 *)local_3e0,(bool *)&local_3b0);
              uVar23 = uVar23 + 1;
              lVar28 = lVar28 + 4;
              auVar37 = extraout_XMM0_01;
            } while ((int)uVar23 < local_538);
            sVar16 = local_580;
            uVar26 = local_58c;
            if ((int)local_564 < (int)local_588) {
              local_490 = &local_560;
              uStack_488 = local_590;
              uStack_484 = uStack_4c4;
              local_268._12_4_ = uStack_4c4;
              local_268.Offset = local_590;
              local_268.CompValues = local_490;
              AlgoImpl::
              IntroSortInternal<int,int,FIdentityFunctor,Chaos::AscendingPredicate<unsigned_char>_>
                        ((int *)(local_548->AllocatorInstance).Data,local_538,local_597,&local_268);
              sVar16 = local_580;
              uVar26 = local_58c;
            }
          }
          uVar31 = uVar31 + 2;
          local_540 = local_540 + 1;
        } while (local_540 < 2);
        local_550 = uVar31;
        if (((int)uVar26 <= (int)local_588) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumCoincident < NumPoints",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                                ,0x520,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        uVar23 = 0;
        local_530 = local_530 & 0xffffffff00000000;
        local_540 = local_58c - local_588;
        local_538 = 2;
        uVar31 = (ulonglong)local_58c;
        uVar26 = local_58c;
        uVar25 = 0;
        if (0 < local_540) {
LAB_143e2e820:
          uVar23 = uVar25;
          iVar13 = local_538;
          uVar26 = (uint)uVar31;
          if (local_538 < 0x401) {
            auVar36._0_8_ = (double)local_538;
            local_208 = 0;
            uVar26 = local_538 * 4 + 2;
            local_200 = 0;
            local_1f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_1f8.NumBits = 0;
            local_1f8.MaxBits = 0x80;
            local_1d8 = 0xffffffff;
            local_1d4 = 0;
            local_1c8 = (undefined1 *)0x0;
            local_1c0 = 0;
            local_118.Elements._0_8_ = 0;
            local_118.Elements._8_8_ = 0;
            local_118.Elements._32_8_ = 0;
            local_118.Elements._40_4_ = 0;
            local_118.Elements._44_4_ = 0x80;
            local_118.Elements._48_4_ = 0xffffffff;
            local_118.Elements._52_4_ = 0;
            local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_118.HashSize = 0;
            local_168.Elements._0_8_ = 0;
            local_168.Elements._8_8_ = 0;
            local_168.Elements._32_8_ = 0;
            local_168.Elements._40_4_ = 0;
            local_168.Elements._44_4_ = 0x80;
            local_168.Elements._48_4_ = 0xffffffff;
            local_168.Elements._52_4_ = 0;
            local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_168.HashSize = 0;
            local_560.ArrayNum = 0;
            dVar45 = dVar1 / (double)(local_538 * 4);
            local_440 = dVar45 * dVar8;
            local_450 = local_4e8 - local_440;
            dStack_448 = dStack_4e0 - local_440;
            local_440 = local_4d8 - local_440;
            local_564 = uVar26;
            if ((local_560.ArrayMax < 0) && (local_560.ArrayMax != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0,&local_560.AllocatorInstance,0,&local_560.ArrayMax);
            }
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,(uint)uVar31,&local_560.AllocatorInstance,&local_560.ArrayNum,
                                &local_560.ArrayMax);
            memset(local_560.AllocatorInstance.Data + iVar14,0,sVar16);
            pTVar17 = local_548;
            uVar25 = 0;
            iVar14 = iVar13;
            if (0 < (int)uVar23) {
              lVar28 = 0;
              do {
                uVar23 = 0;
                if ((int)uVar25 < pTVar17->ArrayNum) {
                  uVar23 = ~uVar25 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar3 = (code *)swi(3);
                  pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar17;
                }
                iVar14 = *(int *)((pTVar17->AllocatorInstance).Data + lVar28);
                local_288 = local_4e8;
                dStack_280 = dStack_4e0;
                local_278 = local_4d8;
                local_3a8 = `Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::
                            operator()(&local_508,iVar14,(TVector<double,3> *)&local_288,
                                       dVar1 / auVar36._0_8_,(longlong)iVar13);
                TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::
                Emplace<__int64_const_&>(&local_118,(long64 *)(local_3e0 + 4),(bool *)&local_3a8);
                local_328 = local_450;
                dStack_320 = dStack_448;
                local_318 = local_440;
                local_3d0 = `Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::
                            operator()(&local_508,iVar14,(TVector<double,3> *)&local_328,dVar45,
                                       (longlong)(int)uVar26);
                TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                          (&local_168,&local_3d8,(bool *)&local_3d0);
                uVar25 = uVar25 + 1;
                lVar28 = lVar28 + 4;
                iVar14 = local_538;
                uVar23 = (uint)local_530;
              } while ((int)uVar25 < (int)(uint)local_530);
            }
            pTVar17 = local_548;
            bVar11 = true;
            if ((int)uVar23 < local_540) {
              sVar16 = (size_t)(int)uVar23;
              uVar31 = sVar16 * 4;
LAB_143e2eb40:
              uVar26 = 0;
              if ((int)uVar23 < pTVar17->ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              local_580 = sVar16;
              local_550 = uVar31;
              if ((uVar26 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar3 = (code *)swi(3);
                pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar17;
              }
              iVar13 = *(int *)((pTVar17->AllocatorInstance).Data + uVar31);
              local_308 = local_4e8;
              dStack_300 = dStack_4e0;
              local_2f8 = local_4d8;
              local_408 = `Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::
                          operator()(&local_508,iVar13,(TVector<double,3> *)&local_308,
                                     dVar1 / auVar36._0_8_,(longlong)iVar14);
              if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
                FVar29 = (ForElementType<FSetElementId>)&local_118.Hash;
                if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar29 = local_118.Hash.SecondaryData;
                }
                for (iVar15 = *(int *)((longlong)FVar29 +
                                      ((local_408 >> 0x20) * 0x17 + local_408 &
                                      (ulonglong)(local_118.HashSize - 1)) * 4); iVar15 != -1;
                    iVar15 = *(int *)(local_118.Elements._0_8_ + 8 + (longlong)iVar15 * 0x10)) {
                  if (*(longlong *)(local_118.Elements._0_8_ + (longlong)iVar15 * 0x10) == local_408
                     ) {
                    if (iVar15 != -1) goto LAB_143e2ed5c;
                    break;
                  }
                }
              }
              local_2e8 = local_450;
              dStack_2e0 = dStack_448;
              local_2d8 = local_440;
              lVar20 = `Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::
                       operator()(&local_508,iVar13,(TVector<double,3> *)&local_2e8,dVar45,
                                  (longlong)(int)local_564);
              if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
                FVar29 = (ForElementType<FSetElementId>)&local_168.Hash;
                if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar29 = local_168.Hash.SecondaryData;
                }
                for (iVar13 = *(int *)((longlong)FVar29 +
                                      ((lVar20 >> 0x20) * 0x17 + lVar20 &
                                      (ulonglong)(local_168.HashSize - 1)) * 4); iVar13 != -1;
                    iVar13 = *(int *)(local_168.Elements._0_8_ + 8 + (longlong)iVar13 * 0x10)) {
                  if (*(longlong *)(local_168.Elements._0_8_ + (longlong)iVar13 * 0x10) == lVar20)
                  goto LAB_143e2ed5c;
                }
              }
              uVar26 = (int)((ulonglong)local_408 >> 0x20) * 0x17 + (int)local_408;
              if ((int)local_200 != local_1d4) {
                puVar22 = local_1d0;
                if (local_1c8 != (undefined1 *)0x0) {
                  puVar22 = local_1c8;
                }
                iVar13 = *(int *)(puVar22 + (ulonglong)(local_1c0 - 1U & uVar26) * 4);
                while (iVar13 != -1) {
                  plVar27 = (longlong *)((longlong)iVar13 * 0x30 + local_208);
                  if (*plVar27 == local_408) {
                    if (plVar27 != (longlong *)0x0) goto LAB_143e2edac;
                    break;
                  }
                  iVar13 = (int)plVar27[5];
                }
              }
              local_3f8 = &local_408;
              TSet<TTuple<__int64,`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::FBestPtData>,TDefaultMapHashableKeyFuncs<__int64,`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::FBestPtData,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                        (&local_208,(uint)local_4f0,
                         (TKeyInitializer<__int64_const_&> *)(ulonglong)uVar26,(bool *)&local_3f8);
              plVar27 = (longlong *)((longlong)local_4f0[0] * 0x30 + local_208);
LAB_143e2edac:
              uVar26 = 0;
              if ((int)uVar23 < pTVar17->ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar3 = (code *)swi(3);
                pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar17;
              }
              uVar26 = *(int *)((pTVar17->AllocatorInstance).Data + uVar31) - local_590;
              uVar25 = ~uVar26 >> 0x1f;
              if ((int)plVar27[1] == -1) {
                *(uint *)(plVar27 + 1) = uVar23;
                uVar34 = 0;
                if ((int)uVar26 < local_510[0]) {
                  uVar34 = uVar25;
                }
                if ((uVar34 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar17;
                }
                plVar27[2] = *(longlong *)(local_518.Data + (longlong)(int)uVar26 * 8);
                *(uint *)(plVar27 + 3) = uVar23;
                uVar34 = 0;
                if ((int)uVar26 < local_4f8->ArrayNum) {
                  uVar34 = uVar25;
                }
                if ((uVar34 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar17;
                }
                bVar21 = 1;
                plVar27[4] = *(longlong *)
                              ((local_4f8->AllocatorInstance).Data + (longlong)(int)uVar26 * 8);
              }
              else {
                uVar34 = 0;
                if ((int)uVar26 < local_510[0]) {
                  uVar34 = uVar25;
                }
                if (uVar34 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                    return pTVar17;
                  }
                }
                if ((double)plVar27[2] < *(double *)(local_518.Data + (longlong)(int)uVar26 * 8)) {
                  uVar34 = 0;
                  if ((int)uVar26 < local_510[0]) {
                    uVar34 = uVar25;
                  }
                  if ((uVar34 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar3 = (code *)swi(3);
                    pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                    return pTVar17;
                  }
                  plVar27[2] = *(longlong *)(local_518.Data + (longlong)(int)uVar26 * 8);
                  *(uint *)(plVar27 + 1) = uVar23;
                }
                uVar34 = 0;
                if ((int)uVar26 < local_4f8->ArrayNum) {
                  uVar34 = uVar25;
                }
                if ((uVar34 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar17;
                }
                dVar46 = *(double *)
                          ((local_4f8->AllocatorInstance).Data + (longlong)(int)uVar26 * 8);
                if ((double)plVar27[4] <= dVar46 && dVar46 != (double)plVar27[4]) {
                  plVar27[4] = (longlong)dVar46;
                  *(uint *)(plVar27 + 3) = uVar23;
                }
                bVar21 = 0;
              }
              bVar11 = (bool)(bVar11 & bVar21);
              uVar31 = local_550;
              sVar16 = local_580;
              goto LAB_143e2efe8;
            }
            goto LAB_143e2fd3b;
          }
        }
LAB_143e2fdb3:
        __return_storage_ptr__ = local_548;
        if ((int)uVar23 < (int)uVar26) {
          iVar13 = (uVar26 - uVar23) - local_588;
          local_4d0 = local_4f8;
          uStack_4c4 = local_338._12_4_;
          iStack_4c8 = 0;
          uVar26 = 0;
          if ((int)uVar23 < local_548->ArrayNum) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          pFVar24 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          local_338._12_4_ = uStack_4c4;
          local_338.Offset = iStack_4c8;
          local_338.CompValues = local_4d0;
          AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,Chaos::DescendingPredicate<double>_>
                    ((int *)(pFVar24 + (longlong)(int)uVar23 * 4),iVar13,local_594[0],&local_338);
        }
        if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_560.AllocatorInstance.Data);
        }
        local_170 = 0;
        if (local_178 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_178);
        }
        TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1b8);
      }
      else if ((param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (0 < (int)uVar26)) {
        if ((__return_storage_ptr__->ArrayNum < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        pFVar24 = (__return_storage_ptr__->AllocatorInstance).Data + 4;
        if ((pFVar24 == (FScriptContainerElement *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar26 - 1,&param_3->AllocatorInstance,&param_3->ArrayNum,
                            &param_3->ArrayMax);
        memcpy((param_3->AllocatorInstance).Data + (longlong)iVar13 * 4,pFVar24,
               (longlong)(int)(uVar26 - 1) << 2);
      }
      if (local_518.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data);
      }
      if (local_528.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data);
      }
    }
  }
  return __return_storage_ptr__;
LAB_143e2ed5c:
  bVar11 = false;
LAB_143e2efe8:
  iVar13 = local_1f8.NumBits;
  sVar16 = sVar16 + 1;
  uVar31 = uVar31 + 4;
  uVar23 = uVar23 + 1;
  if (local_540 <= (int)uVar23) goto code_r0x000143e2f009;
  goto LAB_143e2eb40;
code_r0x000143e2f009:
  if (bVar11) {
    uVar23 = (uint)local_530;
    local_580 = sVar16;
    local_550 = uVar31;
LAB_143e2fd3b:
    local_168.HashSize = 0;
    if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_168.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_168.Elements);
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
    local_1c0 = 0;
    if (local_1c8 != (undefined1 *)0x0) {
      FMemory::Free(local_1c8);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<__int64,_Chaos::FTriangleMesh::GetVertexImportanceOrdering_::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_208);
    uVar26 = local_58c;
    goto LAB_143e2fdb3;
  }
  iStack_478 = 0;
  local_550 = uVar31 & 0xffffffff00000000;
  uStack_474 = 1;
  local_578.Data = (FScriptContainerElement *)0x0;
  local_570 = 0;
  uStack_464 = 0;
  local_460 = iStack_478;
  if (local_1f8.NumBits != 0) {
    FVar30 = (ForElementType<unsigned_int>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_1f8.AllocatorInstance.SecondaryData;
    }
    uVar23 = *(uint *)FVar30;
    while (uVar23 == 0) {
      lVar28 = (longlong)iStack_478;
      local_460 = local_460 + 0x20;
      iStack_478 = iStack_478 + 1;
      uStack_464 = local_1f8.NumBits;
      if ((int)((local_1f8.NumBits - 1U) + ((int)(local_1f8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_478) goto LAB_143e2f0a5;
      uVar23 = *(uint *)((longlong)FVar30 + (lVar28 + 1) * 4);
    }
    uStack_474 = -uVar23 & uVar23;
    uVar31 = (ulonglong)uStack_474 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uStack_464 = local_460 + -1 + (int)lVar28;
    local_3c8 = (int)lVar28;
    if (local_1f8.NumBits < (int)uStack_464) {
      uStack_464 = local_1f8.NumBits;
    }
  }
LAB_143e2f0a5:
  local_480 = &local_208;
  uStack_45c = local_22c;
  uVar23 = local_1f8.NumBits & 0xffffffe0;
  local_470 = &local_1f8;
  iStack_458 = (int)local_200 - local_1d4;
  uStack_468 = 0xffffffff;
  local_3a0 = &local_208;
  TStack_398._padding_ = CONCAT44(uStack_474,iStack_478);
  iVar14 = local_1f8.NumBits >> 5;
  bVar21 = (byte)local_1f8.NumBits;
  local_580._4_4_ = (undefined4)(sVar16 >> 0x20);
  local_580._0_4_ = local_1f8.NumBits;
  TStack_398.BaseBitIndex = local_460;
  TStack_398._28_4_ = local_22c;
  uStack_378 = CONCAT44(uStack_454,(int)local_200 - local_1d4);
  TStack_398.Array = &local_1f8;
  TStack_398.UnvisitedBitMask = 0xffffffff;
  TStack_398.CurrentBitIndex = uStack_464;
  if ((local_1f8.NumBits < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar17;
  }
  if (iVar13 != local_1f8.NumBits) {
    FVar30 = (ForElementType<unsigned_int>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_1f8.AllocatorInstance.SecondaryData;
    }
    uVar26 = -1 << (bVar21 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar14 * 4);
    while (uVar26 == 0) {
      lVar28 = (longlong)iVar14;
      uVar23 = uVar23 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)((local_1f8.NumBits - 1U) + ((int)(local_1f8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar14) {
        local_580._0_4_ = local_1f8.NumBits;
        goto LAB_143e2f1ee;
      }
      uVar26 = *(uint *)((longlong)FVar30 + (lVar28 + 1) * 4);
    }
    uVar31 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_3c4 = (int)lVar28;
    local_580._0_4_ = (int)lVar28 + -1 + uVar23;
    if (local_1f8.NumBits < (int)(uint)local_580) {
      local_580._0_4_ = local_1f8.NumBits;
    }
  }
LAB_143e2f1ee:
  uVar23 = (uint)local_580;
  iVar13 = (int)local_550;
  while( true ) {
    plVar27 = local_3a0;
    if ((int)local_3a0[1] - *(int *)((longlong)local_3a0 + 0x34) != (int)uStack_378) {
      local_568[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_568);
    }
    iVar14 = local_1f8.NumBits;
    pTVar17 = local_548;
    lVar28 = (longlong)TStack_398.CurrentBitIndex;
    if (((TStack_398.CurrentBitIndex == uVar23) && (TStack_398.Array == &local_1f8)) &&
       (plVar27 == &local_208)) break;
    lVar32 = *plVar27;
    uVar26 = *(uint *)(lVar28 * 0x30 + 8 + lVar32);
    uVar25 = 0;
    if ((int)uVar26 < local_548->ArrayNum) {
      uVar25 = ~uVar26 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar17;
    }
    iVar14 = *(int *)((pTVar17->AllocatorInstance).Data + (longlong)(int)uVar26 * 4);
    uVar25 = iVar14 - local_590;
    uVar26 = 0;
    if ((int)uVar25 < local_560.ArrayNum) {
      uVar26 = ~uVar25 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar17;
    }
    FVar9.Data = local_560.AllocatorInstance.Data;
    if (local_560.AllocatorInstance.Data[(int)uVar25] == (FScriptContainerElement)0x0) {
      local_2c8 = local_450;
      dStack_2c0 = dStack_448;
      local_2b8 = local_440;
      local_3f0 = `Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::operator()
                            (&local_508,iVar14,(TVector<double,3> *)&local_2c8,dVar45,
                             (longlong)(int)local_564);
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
                (&local_168,&local_3c0,(bool *)&local_3f0);
      FVar9.Data[(int)uVar25] = (FScriptContainerElement)0x1;
      iVar13 = iVar13 + 1;
      pFVar24 = (FScriptContainerElement *)(lVar32 + 8 + lVar28 * 0x30);
      if (((local_578.Data <= pFVar24) && (pFVar24 < local_578.Data + (longlong)local_570._4_4_ * 4)
          ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      iVar14 = (int)local_570;
      if ((int)local_570 == local_570._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_578,(int *)((longlong)&local_570 + 4));
      }
      local_570 = CONCAT44(local_570._4_4_,iVar14 + 1);
      *(undefined4 *)(local_578.Data + (longlong)iVar14 * 4) = *(undefined4 *)pFVar24;
    }
    TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
  }
  iStack_478 = 0;
  local_460 = 0;
  local_550 = CONCAT44(local_550._4_4_,iVar13);
  uStack_474 = 1;
  uStack_464 = 0;
  if (local_1f8.NumBits != 0) {
    FVar30 = (ForElementType<unsigned_int>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_1f8.AllocatorInstance.SecondaryData;
    }
    uVar23 = *(uint *)FVar30;
    while (uVar23 == 0) {
      lVar28 = (longlong)iStack_478;
      local_460 = local_460 + 0x20;
      iStack_478 = iStack_478 + 1;
      uStack_464 = local_1f8.NumBits;
      if ((int)((local_1f8.NumBits - 1U) + ((int)(local_1f8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_478) goto LAB_143e2f4e3;
      uVar23 = *(uint *)((longlong)FVar30 + (lVar28 + 1) * 4);
    }
    uStack_474 = -uVar23 & uVar23;
    uVar31 = (ulonglong)uStack_474 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uStack_464 = local_460 + -1 + (int)lVar28;
    local_400 = (int)lVar28;
    if (local_1f8.NumBits < (int)uStack_464) {
      uStack_464 = local_1f8.NumBits;
    }
  }
LAB_143e2f4e3:
  local_480 = &local_208;
  uStack_45c = local_20c;
  uVar23 = local_1f8.NumBits & 0xffffffe0;
  local_470 = &local_1f8;
  iStack_458 = (int)local_200 - local_1d4;
  uStack_468 = 0xffffffff;
  local_370 = &local_208;
  TStack_368._padding_ = CONCAT44(uStack_474,iStack_478);
  iVar13 = local_1f8.NumBits >> 5;
  bVar21 = (byte)local_1f8.NumBits;
  local_580 = CONCAT44(local_580._4_4_,local_1f8.NumBits);
  TStack_368.BaseBitIndex = local_460;
  TStack_368._28_4_ = local_20c;
  uStack_348 = CONCAT44(uStack_454,(int)local_200 - local_1d4);
  TStack_368.Array = &local_1f8;
  TStack_368.UnvisitedBitMask = 0xffffffff;
  TStack_368.CurrentBitIndex = uStack_464;
  if ((local_1f8.NumBits < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar17;
  }
  if (iVar14 != local_1f8.NumBits) {
    FVar30 = (ForElementType<unsigned_int>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_1f8.AllocatorInstance.SecondaryData;
    }
    uVar26 = -1 << (bVar21 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar13 * 4);
    while (uVar26 == 0) {
      lVar28 = (longlong)iVar13;
      uVar23 = uVar23 + 0x20;
      iVar13 = iVar13 + 1;
      if ((int)((local_1f8.NumBits - 1U) + ((int)(local_1f8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar13) {
        local_580 = CONCAT44(local_580._4_4_,local_1f8.NumBits);
        goto LAB_143e2f62c;
      }
      uVar26 = *(uint *)((longlong)FVar30 + (lVar28 + 1) * 4);
    }
    uVar31 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_3c0._4_4_ = (int)lVar28;
    uVar23 = (uVar23 - 1) + local_3c0._4_4_;
    if (local_1f8.NumBits < (int)uVar23) {
      uVar23 = local_1f8.NumBits;
    }
    local_580 = CONCAT44(local_580._4_4_,uVar23);
  }
LAB_143e2f62c:
  iVar13 = (uint)local_580;
  iVar14 = (int)local_550;
  while( true ) {
    plVar27 = local_370;
    if ((int)local_370[1] - *(int *)((longlong)local_370 + 0x34) != (int)uStack_348) {
      local_594[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_594);
    }
    pTVar17 = local_548;
    if (((TStack_368.CurrentBitIndex == iVar13) && (TStack_368.Array == &local_1f8)) &&
       (plVar27 == &local_208)) break;
    lVar28 = *plVar27;
    lVar32 = (longlong)TStack_368.CurrentBitIndex * 0x30;
    uVar23 = *(uint *)(lVar32 + 0x18 + lVar28);
    uVar26 = 0;
    if ((int)uVar23 < local_548->ArrayNum) {
      uVar26 = ~uVar23 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar17;
    }
    iVar15 = *(int *)((pTVar17->AllocatorInstance).Data + (longlong)(int)uVar23 * 4);
    uVar26 = iVar15 - local_590;
    uVar23 = 0;
    if ((int)uVar26 < local_560.ArrayNum) {
      uVar23 = ~uVar26 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar17;
    }
    FVar9.Data = local_560.AllocatorInstance.Data;
    if (local_560.AllocatorInstance.Data[(int)uVar26] == (FScriptContainerElement)0x0) {
      local_2a8 = local_450;
      dStack_2a0 = dStack_448;
      local_298 = local_440;
      local_3e8 = `Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::<lambda_1>::operator()
                            (&local_508,iVar15,(TVector<double,3> *)&local_2a8,dVar45,
                             (longlong)(int)local_564);
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
                (&local_168,&local_3b8,(bool *)&local_3e8);
      FVar9.Data[(int)uVar26] = (FScriptContainerElement)0x1;
      pFVar24 = (FScriptContainerElement *)(lVar28 + 0x18 + lVar32);
      iVar14 = iVar14 + 1;
      if (((local_578.Data <= (FScriptContainerElement *)(lVar28 + 0x18 + lVar32)) &&
          (pFVar24 < local_578.Data + (longlong)local_570._4_4_ * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      iVar15 = (int)local_570;
      if ((int)local_570 == local_570._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_578,(int *)((longlong)&local_570 + 4));
      }
      local_570 = CONCAT44(local_570._4_4_,iVar15 + 1);
      *(undefined4 *)(local_578.Data + (longlong)iVar15 * 4) = *(undefined4 *)pFVar24;
    }
    TStack_368.UnvisitedBitMask = TStack_368.UnvisitedBitMask & ~TStack_368._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_368);
  }
  uVar23 = 0;
  lVar28 = 0;
  local_550 = CONCAT44(local_550._4_4_,iVar14);
  uVar31 = (ulonglong)iVar14;
  if (0 < iVar14) {
    local_580 = 0;
    lVar32 = (longlong)(int)(uint)local_530 * 4;
    uVar33 = uVar31;
    uVar26 = (uint)local_530;
    do {
      pTVar17 = local_548;
      local_564 = ~uVar26 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar26 < local_548->ArrayNum) {
        uVar25 = local_564;
      }
      if ((uVar25 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      uVar34 = *(int *)((pTVar17->AllocatorInstance).Data + lVar32) - local_590;
      uVar25 = 0;
      if ((int)uVar34 < local_560.ArrayNum) {
        uVar25 = ~uVar34 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar17;
      }
      if ((local_560.AllocatorInstance.Data[(int)uVar34] == (FScriptContainerElement)0x0) &&
         ((int)uVar23 < (int)local_570)) {
        iVar13 = (int)uVar33 + (uint)local_530;
        do {
          uVar25 = uVar23;
          lVar35 = lVar28;
          uVar23 = 0;
          if ((int)uVar25 < (int)local_570) {
            uVar23 = ~uVar25 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          if (iVar13 <= *(int *)(local_578.Data + lVar35 * 4)) {
            uVar23 = 0;
            if ((int)uVar25 < (int)local_570) {
              uVar23 = ~uVar25 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar17;
            }
            pTVar17 = local_548;
            uVar23 = 0;
            if ((int)*(uint *)(local_578.Data + lVar35 * 4) < local_548->ArrayNum) {
              uVar23 = ~*(uint *)(local_578.Data + lVar35 * 4) >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar17;
            }
            uVar23 = 0;
            if ((int)uVar25 < (int)local_570) {
              uVar23 = ~uVar25 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar17;
            }
            uVar23 = *(uint *)(local_578.Data + lVar35 * 4);
            uVar34 = 0;
            if ((int)uVar23 < pTVar17->ArrayNum) {
              uVar34 = ~uVar23 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar17;
            }
            pFVar24 = (pTVar17->AllocatorInstance).Data;
            uVar34 = 0;
            if ((int)uVar26 < local_548->ArrayNum) {
              uVar34 = local_564;
            }
            if ((uVar34 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar17;
            }
            pFVar2 = (local_548->AllocatorInstance).Data;
            uVar41 = *(undefined4 *)(pFVar2 + (local_580 + (longlong)(int)(uint)local_530) * 4);
            *(undefined4 *)(pFVar2 + (local_580 + (longlong)(int)(uint)local_530) * 4) =
                 *(undefined4 *)(pFVar24 + (longlong)(int)uVar23 * 4);
            *(undefined4 *)(pFVar24 + (longlong)(int)uVar23 * 4) = uVar41;
            break;
          }
          lVar28 = lVar35 + 1;
          uVar23 = uVar25 + 1;
        } while ((int)(uVar25 + 1) < (int)local_570);
        uVar23 = uVar25 + 1;
        lVar28 = lVar35 + 1;
        uVar33 = local_550 & 0xffffffff;
      }
      iVar14 = (int)uVar33;
      uVar26 = uVar26 + 1;
      local_580 = local_580 + 1;
      lVar32 = lVar32 + 4;
    } while ((longlong)local_580 < (longlong)uVar31);
  }
  pTVar17 = local_548;
  uVar23 = (uint)local_530;
  lVar28 = (longlong)(int)(uint)local_530;
  local_4d0 = local_4f8;
  iStack_4c8 = 0;
  uStack_4c4 = local_4fc;
  uVar26 = 0;
  if ((int)(uint)local_530 < local_548->ArrayNum) {
    uVar26 = ~(uint)local_530 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar17;
  }
  pFVar24 = (pTVar17->AllocatorInstance).Data;
  if ((iVar14 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar17;
  }
  local_258[0]._12_4_ = uStack_4c4;
  local_258[0].Offset = iStack_4c8;
  local_258[0].CompValues = local_4d0;
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,Chaos::DescendingPredicate<double>_>
            ((int *)(pFVar24 + lVar28 * 4),iVar14,(FIdentityFunctor)0x0,local_258);
  uVar23 = uVar23 + iVar14;
  local_530 = CONCAT44(local_530._4_4_,uVar23);
  if (local_578.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data);
  }
  local_168.HashSize = 0;
  if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168.Elements);
  local_118.HashSize = 0;
  if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.Elements);
  local_1c0 = 0;
  if (local_1c8 != (undefined1 *)0x0) {
    FMemory::Free(local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,`Chaos::FTriangleMesh::GetVertexImportanceOrdering'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,_Chaos::FTriangleMesh::GetVertexImportanceOrdering_::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_208);
  sVar16 = (size_t)(int)local_58c;
  local_538 = local_538 * 2;
  uVar31 = sVar16;
  uVar26 = local_58c;
  uVar25 = uVar23;
  if (local_540 <= (int)uVar23) goto LAB_143e2fdb3;
  goto LAB_143e2e820;
}

// GetVertexImportanceOrdering @ 143e2ff60

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTriangleMesh::GetVertexImportanceOrdering
          (FTriangleMesh *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_38;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  TArray<double,TSizedDefaultAllocator<32>_> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetFaceNormals<double>(this,&local_38,param_1,false);
  GetCurvatureOnEdges(this,&local_28,&local_38);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  GetCurvatureOnPoints(this,&local_18,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  GetVertexImportanceOrdering(this,__return_storage_ptr__,param_1,&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVertexRange @ 143e30030

TVector<int,2> __thiscall Chaos::FTriangleMesh::GetVertexRange(FTriangleMesh *this)

{
  int iVar1;
  int iVar2;
  TVector<int,2>_u_0 in_RDX;
  
  iVar1 = this->MStartIdx;
  iVar2 = this->MNumIndices;
  *(int *)in_RDX = iVar1;
  *(int *)((longlong)in_RDX + 4) = iVar2 + -1 + iVar1;
  return (TVector<int,2>)in_RDX;
}

// GetVertexSet @ 143e30060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FTriangleMesh::GetVertexSet
          (FTriangleMesh *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool *pbVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  bool local_34 [4];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_1);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve(param_1,this->MNumIndices);
  iVar2 = (this->MElements).ArrayNum;
  pFVar4 = (this->MElements).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->MElements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    if (pFVar4 == pFVar1) break;
    local_40 = *(undefined4 *)pFVar4;
    local_3c = *(undefined4 *)(pFVar4 + 4);
    local_38 = *(undefined4 *)(pFVar4 + 8);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
              (param_1,(*(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34) + 3);
    pbVar3 = (bool *)&local_40;
    do {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_1,&local_44,pbVar3);
      pbVar3 = pbVar3 + 4;
    } while (pbVar3 != local_34);
    pFVar4 = pFVar4 + 0xc;
  }
  return;
}

// GetVertexSetAsArray @ 143e30140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FTriangleMesh::GetVertexSetAsArray
          (FTriangleMesh *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_b8 [32];
  int local_68;
  undefined1 local_64 [4];
  ForElementType<unsigned_int> local_60;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_44 = 0x80;
  local_48 = this->MNumIndices;
  uVar12 = this->MNumIndices + 0x1f;
  uVar10 = uVar12 >> 5;
  if (uVar12 >> 5 != 0) {
    if (4 < uVar10) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_60,0,uVar10,4);
      local_44 = uVar10 << 5;
    }
    FVar9 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_60.SecondaryData;
    }
    memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
    uVar12 = local_48 & 0x8000001f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
    }
    if (uVar12 != 0) {
      FVar9 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_60.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar9 +
                       (longlong)((int)(local_48 + ((int)local_48 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar12 & 0x1f);
    }
  }
  uVar12 = this->MNumIndices;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  iVar4 = (this->MElements).ArrayNum;
  pFVar13 = (this->MElements).AllocatorInstance.Data;
  pFVar3 = pFVar13 + (longlong)iVar4 * 0xc;
  while( true ) {
    if ((this->MElements).ArrayNum != iVar4) {
      local_64[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_64);
    }
    if (pFVar13 == pFVar3) {
      if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.SecondaryData);
      }
      return;
    }
    local_68 = *(int *)pFVar13;
    iVar11 = local_68 - this->MStartIdx;
    if (((iVar11 < 0) || ((int)local_48 <= iVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_60.SecondaryData;
    }
    iVar8 = iVar11;
    if (iVar11 < 0) {
      iVar8 = iVar11 + 0x1f;
    }
    puVar2 = (uint *)((longlong)FVar9 + (longlong)(iVar8 >> 5) * 4);
    uVar12 = *puVar2;
    uVar10 = 1 << ((byte)iVar11 & 0x1f);
    if ((uVar10 & uVar12) == 0) {
      *puVar2 = uVar12 | uVar10;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_68;
    }
    local_68 = *(int *)(pFVar13 + 4);
    iVar11 = local_68 - this->MStartIdx;
    if (((iVar11 < 0) || ((int)local_48 <= iVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) break;
    FVar9 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_60.SecondaryData;
    }
    iVar8 = iVar11;
    if (iVar11 < 0) {
      iVar8 = iVar11 + 0x1f;
    }
    puVar2 = (uint *)((longlong)FVar9 + (longlong)(iVar8 >> 5) * 4);
    uVar12 = *puVar2;
    uVar10 = 1 << ((byte)iVar11 & 0x1f);
    if ((uVar10 & uVar12) == 0) {
      *puVar2 = uVar12 | uVar10;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_68;
    }
    local_68 = *(int *)(pFVar13 + 8);
    iVar11 = local_68 - this->MStartIdx;
    if (((iVar11 < 0) || ((int)local_48 <= iVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_60.SecondaryData;
    }
    iVar8 = iVar11;
    if (iVar11 < 0) {
      iVar8 = iVar11 + 0x1f;
    }
    puVar2 = (uint *)((longlong)FVar9 + (longlong)(iVar8 >> 5) * 4);
    uVar12 = *puVar2;
    uVar10 = 1 << ((byte)iVar11 & 0x1f);
    if ((uVar10 & uVar12) == 0) {
      *puVar2 = uVar12 | uVar10;
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_68;
    }
    pFVar13 = pFVar13 + 0xc;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// GetVertices @ 143e30630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
Chaos::FTriangleMesh::GetVertices
          (FTriangleMesh *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  ForElementType<FSetElementId> FVar1;
  undefined1 *puVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint *puVar16;
  undefined1 *this_00;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FSparseArrayAllocationInfo local_b8;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FTriangleMesh *local_58;
  uint local_50 [3];
  uint local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar17 = this->MNumIndices;
  local_58 = this;
  TStack_d8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_d8.Array._4_4_,TStack_d8.Array._0_4_)
  ;
  if (uVar17 == 0) goto LAB_143e308ba;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar15 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) &&
     (TStack_d8.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_d8.Array._4_4_,TStack_d8.Array._0_4_),
     (int)uVar17 <= __return_storage_ptr__->HashSize)) goto LAB_143e308ba;
  __return_storage_ptr__->HashSize = uVar17;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar17 != 0) {
    uVar5 = uVar17;
    if (uVar17 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar5 = 0;
        goto LAB_143e30723;
      }
    }
    else {
LAB_143e30723:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar5,4);
    }
    uVar15 = 0;
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar1;
        }
        uVar8 = (longlong)(int)uVar17 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)FVar13 + uVar8 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  TStack_d8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_d8.Array._4_4_,TStack_d8.Array._0_4_)
  ;
  if (__return_storage_ptr__->HashSize != 0) {
    iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    local_b8.Pointer = &(__return_storage_ptr__->Elements).field_0x10;
    local_b8._4_4_ = 1;
    local_b8.Index = 0;
    iStack_a4 = 0;
    iStack_a0 = 0;
    if (iVar11 != 0) {
      puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = local_b8.Pointer;
      }
      uVar17 = *puVar21;
      while (uVar17 == 0) {
        iStack_a0 = iStack_a0 + 0x20;
        lVar9 = (longlong)local_b8.Index;
        local_b8.Index = local_b8.Index + 1;
        if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < local_b8.Index)
        goto LAB_143e30829;
        uVar17 = puVar21[lVar9 + 1];
      }
      local_b8._4_4_ = -uVar17 & uVar17;
      uVar15 = (ulonglong)(uint)local_b8._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_a4 = (int)lVar9 + -1 + iStack_a0;
      if (iVar11 < iStack_a4) {
LAB_143e30829:
        iStack_a4 = iVar11;
      }
    }
    local_a8 = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(local_b8._4_4_,local_b8.Index);
    TStack_d8._28_4_ = uStack_9c;
    TStack_d8.BaseBitIndex = iStack_a0;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8.CurrentBitIndex = iStack_a4;
    local_e0 = __return_storage_ptr__;
    TStack_d8.Array = local_b8.Pointer;
    if (iStack_a4 < iVar11) {
      do {
        uVar17 = __return_storage_ptr__->HashSize - 1U &
                 *(uint *)(*(longlong *)&local_e0->Elements +
                          (longlong)TStack_d8.CurrentBitIndex * 0xc);
        lVar9 = *(longlong *)&local_e0->Elements + (longlong)TStack_d8.CurrentBitIndex * 0xc;
        *(uint *)(lVar9 + 8) = uVar17;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar1;
        }
        uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar9 + 4) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
        *(int *)((longlong)FVar13 + uVar15 * 4) = TStack_d8.CurrentBitIndex;
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
    }
  }
LAB_143e308ba:
  local_98 = (this->MElements).ArrayNum;
  uVar15 = (ulonglong)(int)local_98;
  pFVar19 = (this->MElements).AllocatorInstance.Data;
  local_60 = pFVar19 + uVar15 * 0xc;
  do {
    pFVar4 = local_60;
    local_68 = pFVar19;
    if ((this->MElements).ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (pFVar19 == pFVar4) {
      return __return_storage_ptr__;
    }
    local_50[0] = *(uint *)pFVar19;
    local_50[1] = *(uint *)(pFVar19 + 4);
    local_50[2] = *(uint *)(pFVar19 + 8);
    uVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
            *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    uVar17 = uVar5 + 3;
    pTVar3 = TStack_d8.Array;
    if (uVar5 < uVar17) {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)__return_storage_ptr__,uVar17);
      if (uVar17 < 4) {
        uVar17 = 1;
      }
      else {
        uVar15 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar9 & 0x1f);
      }
      if ((__return_storage_ptr__->HashSize == 0) ||
         (pTVar3 = TStack_d8.Array, __return_storage_ptr__->HashSize < (int)uVar17)) {
        __return_storage_ptr__->HashSize = uVar17;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        pTVar3 = TStack_d8.Array;
        if (uVar17 != 0) {
          uVar5 = uVar17;
          if (uVar17 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar5 = 0;
              goto LAB_143e3098b;
            }
          }
          else {
LAB_143e3098b:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar5,4)
            ;
            pTVar3 = TStack_d8.Array;
          }
          uVar15 = 0;
          if (0 < (int)uVar17) {
            uVar20 = (ulonglong)uVar17;
            do {
              FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar1 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar1;
              }
              uVar8 = (longlong)(int)uVar17 - 1U & uVar15;
              uVar15 = uVar15 + 1;
              *(undefined4 *)((longlong)FVar13 + uVar8 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        iVar11 = 0;
        if (__return_storage_ptr__->HashSize != 0) {
          iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          TStack_d8._padding_ = (longlong)&(__return_storage_ptr__->Elements).field_0x10;
          local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&DAT_100000000;
          TStack_d8.Array._4_4_ = 0;
          TStack_d8.UnvisitedBitMask = 0;
          if (iVar6 != 0) {
            puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar14 = (uint *)TStack_d8._padding_;
            if (puVar21 != (uint *)0x0) {
              puVar14 = puVar21;
            }
            uVar17 = *puVar14;
            while (uVar17 == 0) {
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask + 0x20;
              lVar9 = (longlong)iVar11;
              iVar11 = iVar11 + 1;
              local_e0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
              local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         CONCAT44(local_e0._4_4_,iVar11);
              if ((int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5 < iVar11)
              goto LAB_143e30a8c;
              uVar17 = puVar14[lVar9 + 1];
            }
            local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       CONCAT44(-uVar17 & uVar17,(undefined4)local_e0);
            uVar15 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            TStack_d8.Array._4_4_ = (TStack_d8.UnvisitedBitMask - 1) + (int)lVar9;
            if (iVar6 < (int)TStack_d8.Array._4_4_) {
LAB_143e30a8c:
              TStack_d8.Array._4_4_ = iVar6;
            }
          }
          TStack_d8.Array._0_4_ = 0xffffffff;
          pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)
                   CONCAT44(TStack_d8.Array._4_4_,0xffffffff);
          local_88.CurrentBitIndex = TStack_d8.Array._4_4_;
          local_88.UnvisitedBitMask = 0xffffffff;
          local_88._28_4_ = TStack_d8.CurrentBitIndex;
          local_88.BaseBitIndex = TStack_d8.UnvisitedBitMask;
          local_88._padding_ = (longlong)local_e0;
          local_90 = __return_storage_ptr__;
          local_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_d8._padding_;
          iVar11 = TStack_d8.Array._4_4_;
          if ((int)TStack_d8.Array._4_4_ < iVar6) {
            do {
              uVar17 = __return_storage_ptr__->HashSize - 1U &
                       *(uint *)(*(longlong *)&local_90->Elements + (longlong)iVar11 * 0xc);
              lVar9 = *(longlong *)&local_90->Elements + (longlong)iVar11 * 0xc;
              *(uint *)(lVar9 + 8) = uVar17;
              FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar1 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar1;
              }
              uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(lVar9 + 4) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
              *(int *)((longlong)FVar13 + uVar15 * 4) = iVar11;
              local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
              pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)
                       CONCAT44(TStack_d8.Array._4_4_,TStack_d8.Array._0_4_);
              iVar11 = local_88.CurrentBitIndex;
            } while (local_88.CurrentBitIndex < (local_88.Array)->NumBits);
          }
        }
      }
    }
    puVar21 = local_50;
    TStack_d8.Array = pTVar3;
    do {
      iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar11 == 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar23 = (int)((iVar11 >> 0x1f & 0x1fU) + iVar11) >> 5;
        if ((iVar11 == 0) || (iVar23 != (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
          if (iVar7 < iVar11 + 1) {
            uVar17 = iVar7 + 0x1fU >> 5;
            uVar5 = iVar11 + 0x20U >> 5;
            if (uVar5 < 5) {
              iVar7 = 4;
            }
            else {
              uVar15 = (ulonglong)uVar5;
              if (uVar17 < 5) {
                uVar17 = 0;
              }
              if (uVar17 == 0) {
                uVar20 = 4;
                if (4 < uVar15) {
                  uVar20 = uVar15;
                }
              }
              else {
                uVar20 = ((ulonglong)uVar5 * 3 >> 3) + 0x10 + uVar15;
              }
              uVar10 = FMemory::QuantizeSize(uVar20 * 4,0);
              iVar7 = (int)(uVar10 >> 2);
              if (iVar7 < (int)uVar5) {
                iVar7 = 0x7fffffff;
              }
            }
            *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar7 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       *(int *)&(__return_storage_ptr__->Elements).field_0x28);
          }
          puVar2 = &(__return_storage_ptr__->Elements).field_0x28;
          *(int *)puVar2 = *(int *)puVar2 + 1;
          iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          uVar5 = iVar7 >> 0x1f & 0x1f;
          uVar17 = iVar7 + uVar5;
          iVar7 = (uVar17 & 0x1f) - uVar5;
          if (iVar7 != 0) {
            puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar12 = this_00;
            if (puVar2 != (undefined1 *)0x0) {
              puVar12 = puVar2;
            }
            *(uint *)(puVar12 + (longlong)((int)uVar17 >> 5) * 4) =
                 *(uint *)(puVar12 + (longlong)((int)uVar17 >> 5) * 4) &
                 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
          }
        }
        else {
          *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar11 + 1;
        }
        puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar2 != (undefined1 *)0x0) {
          this_00 = puVar2;
        }
        *(uint *)(this_00 + (longlong)iVar23 * 4) =
             *(uint *)(this_00 + (longlong)iVar23 * 4) & ~(1 << ((byte)iVar11 & 0x1f));
      }
      else {
        iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar11 = iVar11 + -1;
        lVar9 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar23 = *(int *)(lVar9 + 4 + (longlong)iVar6 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar23;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar11;
        if (iVar11 != 0) {
          *(undefined4 *)(lVar9 + (longlong)iVar23 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_b8,iVar6);
      puVar14 = (uint *)0x0;
      puVar16 = puVar14;
      if (local_b8.Pointer != (uint *)0x0) {
        *(uint *)local_b8.Pointer = *puVar21;
        *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
        puVar16 = local_b8.Pointer;
      }
      iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar17 = *puVar16;
      if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar1;
        }
        iVar11 = *(int *)((longlong)FVar13 +
                         (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar17) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar11 * 0xc)
                == uVar17) {
              if (iVar11 != -1) {
                *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar11 * 0xc) =
                     uVar17;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,local_b8.Index,1);
                pTVar3 = TStack_d8.Array;
                goto LAB_143e30f8f;
              }
              break;
            }
            iVar11 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 4 +
                             (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      uVar18 = 1;
      uVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
              *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar5) {
        uVar15 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((int)uVar5 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
        uVar17 = __return_storage_ptr__->HashSize - 1U & uVar17;
        puVar16[2] = uVar17;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar1;
        }
        uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        puVar16[1] = *(uint *)((longlong)FVar13 + uVar15 * 4);
        *(int *)((longlong)FVar13 + uVar15 * 4) = local_b8.Index;
        pTVar3 = TStack_d8.Array;
      }
      else {
        __return_storage_ptr__->HashSize = uVar18;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar18 != 0) {
          uVar17 = uVar18;
          if (uVar18 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar17 = 0;
              goto LAB_143e30dcc;
            }
          }
          else {
LAB_143e30dcc:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17,4
                      );
          }
          if (0 < (int)uVar18) {
            uVar15 = (ulonglong)uVar18;
            puVar16 = puVar14;
            do {
              FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar1 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar1;
              }
              uVar20 = (ulonglong)puVar16 & (longlong)(int)uVar18 - 1U;
              puVar16 = (uint *)((longlong)puVar16 + 1);
              *(undefined4 *)((longlong)FVar13 + uVar20 * 4) = 0xffffffff;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        pTVar3 = TStack_d8.Array;
        if (__return_storage_ptr__->HashSize != 0) {
          uVar17 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
          TStack_d8._padding_ = (longlong)&(__return_storage_ptr__->Elements).field_0x10;
          local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&DAT_100000000;
          TStack_d8.Array._4_4_ = 0;
          TStack_d8.UnvisitedBitMask = 0;
          if (uVar17 != 0) {
            puVar16 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar22 = (uint *)TStack_d8._padding_;
            if (puVar16 != (uint *)0x0) {
              puVar22 = puVar16;
            }
            uVar5 = *puVar22;
            puVar16 = puVar14;
            while (uVar5 == 0) {
              TStack_d8.UnvisitedBitMask = (int)puVar16 + 0x20;
              puVar16 = (uint *)(ulonglong)TStack_d8.UnvisitedBitMask;
              iVar11 = (int)puVar14;
              uVar5 = iVar11 + 1;
              puVar14 = (uint *)(ulonglong)uVar5;
              local_e0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
              local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         CONCAT44(local_e0._4_4_,uVar5);
              if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < (int)uVar5)
              goto LAB_143e30eca;
              uVar5 = puVar22[(longlong)iVar11 + 1];
            }
            local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       CONCAT44(-uVar5 & uVar5,(undefined4)local_e0);
            uVar15 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            TStack_d8.Array._4_4_ = (int)lVar9 + -1 + TStack_d8.UnvisitedBitMask;
            puVar14 = (uint *)(ulonglong)TStack_d8.Array._4_4_;
            if ((int)uVar17 < (int)TStack_d8.Array._4_4_) {
LAB_143e30eca:
              puVar14 = (uint *)(ulonglong)uVar17;
              TStack_d8.Array._4_4_ = uVar17;
            }
          }
          TStack_d8.Array._0_4_ = 0xffffffff;
          local_88.CurrentBitIndex = TStack_d8.Array._4_4_;
          local_88.UnvisitedBitMask = 0xffffffff;
          local_88._28_4_ = TStack_d8.CurrentBitIndex;
          local_88.BaseBitIndex = TStack_d8.UnvisitedBitMask;
          local_88._padding_ = (longlong)local_e0;
          local_90 = __return_storage_ptr__;
          local_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_d8._padding_;
          pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)
                   CONCAT44(TStack_d8.Array._4_4_,0xffffffff);
          if ((int)puVar14 < (int)uVar17) {
            do {
              iVar11 = (int)puVar14;
              uVar17 = __return_storage_ptr__->HashSize - 1U &
                       *(uint *)(*(longlong *)&local_90->Elements + (longlong)iVar11 * 0xc);
              lVar9 = *(longlong *)&local_90->Elements + (longlong)iVar11 * 0xc;
              *(uint *)(lVar9 + 8) = uVar17;
              FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar1 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar1;
              }
              uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(lVar9 + 4) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
              *(int *)((longlong)FVar13 + uVar15 * 4) = iVar11;
              local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
              puVar14 = (uint *)(ulonglong)(uint)local_88.CurrentBitIndex;
              pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)
                       CONCAT44(TStack_d8.Array._4_4_,TStack_d8.Array._0_4_);
            } while (local_88.CurrentBitIndex < (local_88.Array)->NumBits);
          }
        }
      }
LAB_143e30f8f:
      TStack_d8.Array = pTVar3;
      puVar21 = puVar21 + 1;
    } while (puVar21 != &local_44);
    uVar15 = (ulonglong)local_98;
    pFVar19 = local_68 + 0xc;
    this = local_58;
  } while( true );
}

// Init @ 143e32670

void __thiscall
Chaos::FTriangleMesh::Init
          (FTriangleMesh *this,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FTriangleMesh *)param_1) {
    pFVar1 = (this->MElements).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->MElements).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MElements).ArrayNum = param_1->ArrayNum;
    (this->MElements).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  this->MStartIdx = 0;
  this->MNumIndices = 0;
  ResetAuxiliaryStructures(this);
  InitHelper(this,param_2,param_3,param_4);
  return;
}

// Init @ 143e32710

void __thiscall
Chaos::FTriangleMesh::Init
          (FTriangleMesh *this,TArrayView<Chaos::TVector<int,3>_const_,int> *param_1,int param_2,
          int param_3,bool param_4)

{
  int *piVar1;
  int iVar2;
  TVector<int,3> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->MElements).ArrayMax;
  _Src = param_1->DataPtr;
  (this->MElements).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->MElements).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
    }
  }
  this->MStartIdx = 0;
  this->MNumIndices = 0;
  ResetAuxiliaryStructures(this);
  InitHelper(this,param_2,param_3,param_4);
  return;
}

// InitHelper @ 143e327d0

void __thiscall
Chaos::FTriangleMesh::InitHelper(FTriangleMesh *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = (this->MElements).ArrayNum;
  if (iVar11 != 0) {
    uVar8 = iVar11 - 1;
    uVar9 = 0;
    if ((int)uVar8 < iVar11) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = (this->MElements).ArrayNum - 1;
    iVar11 = *(int *)((this->MElements).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc);
    this->MStartIdx = iVar11;
    if (-1 < (int)uVar9) {
      lVar7 = (longlong)(int)uVar9 * 0xc;
      do {
        piVar6 = &this->MStartIdx;
        uVar12 = ~uVar9 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar9 < (this->MElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)((this->MElements).AllocatorInstance.Data + lVar7);
        if (*piVar6 < iVar1) {
          iVar1 = *piVar6;
        }
        *piVar6 = iVar1;
        uVar8 = 0;
        if ((int)uVar9 < (this->MElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)((this->MElements).AllocatorInstance.Data + lVar7);
        if (iVar1 < iVar11) {
          iVar1 = iVar11;
        }
        uVar8 = 0;
        if ((int)uVar9 < (this->MElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar11 = *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 4);
        if (*piVar6 < iVar11) {
          iVar11 = *piVar6;
        }
        *piVar6 = iVar11;
        uVar8 = 0;
        if ((int)uVar9 < (this->MElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 4);
        if (iVar5 < iVar1) {
          iVar5 = iVar1;
        }
        uVar8 = 0;
        if ((int)uVar9 < (this->MElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar11 = *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 8);
        if (this->MStartIdx < iVar11) {
          iVar11 = this->MStartIdx;
        }
        this->MStartIdx = iVar11;
        uVar8 = 0;
        if ((int)uVar9 < (this->MElements).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar11 = *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 8);
        if (iVar11 < iVar5) {
          iVar11 = iVar5;
        }
        if (param_3) {
          uVar8 = 0;
          if ((int)uVar9 < (this->MElements).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->MElements).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar9 < (this->MElements).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(pFVar2 + lVar7) !=
              *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 4)) {
            uVar8 = 0;
            if ((int)uVar9 < (this->MElements).ArrayNum) {
              uVar8 = uVar12;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this->MElements).AllocatorInstance.Data;
            uVar8 = 0;
            if ((int)uVar9 < (this->MElements).ArrayNum) {
              uVar8 = uVar12;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(pFVar2 + lVar7) !=
                *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 8)) {
              uVar8 = 0;
              if ((int)uVar9 < (this->MElements).ArrayNum) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this->MElements).AllocatorInstance.Data;
              uVar8 = 0;
              if ((int)uVar9 < (this->MElements).ArrayNum) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)(pFVar2 + lVar7 + 4) !=
                  *(int *)((this->MElements).AllocatorInstance.Data + lVar7 + 8))
              goto LAB_143e32cf2;
            }
          }
          uVar8 = 0;
          if ((int)uVar9 < (this->MElements).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar1 = (this->MElements).ArrayNum;
          iVar5 = ~uVar9 + iVar1;
          pFVar2 = (this->MElements).AllocatorInstance.Data;
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove(pFVar2 + lVar7,pFVar2 + (longlong)(iVar1 - iVar5) * 0xc,(longlong)iVar5 * 0xc);
          }
          piVar6 = &(this->MElements).ArrayNum;
          *piVar6 = *piVar6 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,(ForAnyElementType *)this,(this->MElements).ArrayNum,
                     &(this->MElements).ArrayMax);
        }
LAB_143e32cf2:
        lVar7 = lVar7 + -0xc;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    this->MNumIndices = (iVar11 - this->MStartIdx) + 1;
  }
  piVar10 = &this->MNumIndices;
  piVar6 = &this->MStartIdx;
  if ((*piVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MStartIdx >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                         ,0xdd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*piVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MNumIndices >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMesh.cpp"
                         ,0xde,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 <= *piVar6) && (*piVar6 + -1 + *piVar10 <= param_2)) {
    *piVar6 = param_1;
    *piVar10 = (param_2 - param_1) + 1;
  }
  return;
}

// PointProximityQuery @ 143e37a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMesh::PointProximityQuery
          (FTriangleMesh *this,THierarchicalSpatialHash<int,float> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,int param_3,
          TVector<float,3> *param_4,float param_5,FPBDFlatWeightMap *param_6,float param_7,
          int param_8,TFunctionRef<bool___cdecl(int,int)> *param_9,
          TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> *param_10)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8 [8];
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_1e0;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  int local_1c8;
  uint local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b0;
  TVector<float,3> *local_1a0;
  TVector<float,3> *local_198;
  TVector<float,3> *local_190;
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> *local_188;
  FScriptContainerElement *local_180;
  FScriptContainerElement *local_178;
  TVector<float,3> *local_170;
  FScriptContainerElement *local_168;
  int local_160 [2];
  TFunctionRef<bool___cdecl(int,int)> *local_158;
  code *local_150;
  int *local_148;
  __m128 local_138;
  undefined1 local_128 [16];
  undefined4 local_118;
  int iStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1a0 = param_4;
  fVar23 = (float)*(undefined8 *)param_4;
  fVar17 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  local_158 = param_9;
  local_148 = local_160;
  local_188 = param_10;
  local_128._4_4_ = param_5 + fVar17;
  local_128._0_4_ = param_5 + fVar23;
  local_128._8_4_ = param_5 + *(float *)&param_4->field_0x8;
  local_128._12_4_ = 0;
  local_150 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FTriangleMesh::PointProximityQuery'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_138.m128_f32[1] = fVar17 - param_5;
  local_138.m128_f32[0] = fVar23 - param_5;
  local_138.m128_f32[2] = *(float *)&param_4->field_0x8 - param_5;
  local_138.m128_f32[3] = 0.0;
  local_1e0 = param_2;
  local_1c8 = param_3;
  local_160[0] = param_3;
  THierarchicalSpatialHash<int,float>::FindAllIntersections
            (param_1,&local_1b0,(FVectorAABB *)&local_138,
             (TFunctionRef<bool___cdecl(int)> *)&local_150);
  iVar11 = local_1b0.ArrayNum;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_1b0._8_8_ & 0xffffffff);
  }
  param_10->ArrayNum = 0;
  if (param_10->ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,iVar11,&param_10->AllocatorInstance,0,&param_10->ArrayMax);
  }
  local_1c4 = local_1b0.ArrayNum;
  uVar13 = (ulonglong)(int)local_1c4;
  local_168 = local_1b0.AllocatorInstance.Data + uVar13 * 4;
  FVar15.Data = local_1b0.AllocatorInstance.Data;
  while( true ) {
    pFVar3 = local_168;
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar23 = __real_38d1b717;
    local_180 = FVar15.Data;
    if (local_1b0.ArrayNum != (int)uVar13) {
      local_1e8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1e8);
    }
    if (FVar15.Data == pFVar3) {
      iVar11 = param_10->ArrayNum;
      if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      return 0 < iVar11;
    }
    uVar2 = *(uint *)FVar15.Data;
    lVar16 = (longlong)(int)uVar2;
    uVar14 = ~uVar2 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar2 < (this->MElements).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar9 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar16 * 0xc);
    uVar10 = 0;
    if ((int)uVar9 < local_1e0->ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_198 = local_1e0->DataPtr + (int)uVar9;
    uVar9 = 0;
    if ((int)uVar2 < (this->MElements).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar9 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar16 * 0xc + 4);
    uVar10 = 0;
    if ((int)uVar9 < local_1e0->ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_190 = local_1e0->DataPtr + (int)uVar9;
    uVar9 = 0;
    if ((int)uVar2 < (this->MElements).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar9 = *(uint *)((this->MElements).AllocatorInstance.Data + lVar16 * 0xc + 8);
    uVar10 = 0;
    if ((int)uVar9 < local_1e0->ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_170 = local_1e0->DataPtr + (int)uVar9;
    FindClosestPointAndBaryOnTriangle<float,3>
              ((TVector<float,3> *)&local_1d8,local_198,local_190,local_170,local_1a0,
               (TVector<float,3> *)&local_1c0);
    uVar9 = 0;
    if ((int)uVar2 < (this->MElements).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar3 = (this->MElements).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar2 < (this->MElements).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    local_178 = (this->MElements).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar2 < (this->MElements).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar4 = (this->MElements).AllocatorInstance.Data;
    if (((param_6->MapView).MapValues.ArrayNum < 1) ||
       (fVar17 = *(float *)&(param_6->MapView).OffsetRange.field_0x4,
       (float)((uint)fVar17 & uVar6) <= fVar23)) {
      fVar24 = *(float *)&(param_6->MapView).OffsetRange;
    }
    else {
      fVar24 = *(float *)&(param_6->MapView).OffsetRange;
      pfVar12 = TArrayView<float_const_,int>::operator[]
                          (&(param_6->MapView).MapValues,*(int *)(pFVar3 + lVar16 * 0xc) - param_8);
      fVar24 = fVar17 * *pfVar12 + fVar24;
    }
    if (((param_6->MapView).MapValues.ArrayNum < 1) ||
       (fVar17 = *(float *)&(param_6->MapView).OffsetRange.field_0x4,
       (float)((uint)fVar17 & uVar6) <= fVar23)) {
      fVar21 = *(float *)&(param_6->MapView).OffsetRange;
    }
    else {
      fVar21 = *(float *)&(param_6->MapView).OffsetRange;
      pfVar12 = TArrayView<float_const_,int>::operator[]
                          (&(param_6->MapView).MapValues,
                           *(int *)(local_178 + lVar16 * 0xc + 4) - param_8);
      fVar21 = fVar17 * *pfVar12 + fVar21;
    }
    if (((param_6->MapView).MapValues.ArrayNum < 1) ||
       (fVar17 = *(float *)&(param_6->MapView).OffsetRange.field_0x4,
       (float)((uint)fVar17 & uVar6) <= fVar23)) {
      fVar23 = *(float *)&(param_6->MapView).OffsetRange;
    }
    else {
      fVar23 = *(float *)&(param_6->MapView).OffsetRange;
      pfVar12 = TArrayView<float_const_,int>::operator[]
                          (&(param_6->MapView).MapValues,
                           *(int *)(pFVar4 + lVar16 * 0xc + 8) - param_8);
      fVar23 = fVar17 * *pfVar12 + fVar23;
    }
    param_10 = local_188;
    fVar18 = *(float *)&local_1a0->field_0x8 - local_1d0;
    fVar17 = *(float *)&local_1a0->field_0x4 - fStack_1d4;
    fVar25 = *(float *)local_1a0 - local_1d8;
    fVar23 = (fVar21 * local_1bc + local_1c0 * fVar24 + fVar23 * local_1b8) * param_7 + param_5;
    fVar17 = fVar25 * fVar25 + fVar17 * fVar17 + fVar18 * fVar18;
    if (fVar17 <= fVar23 * fVar23) {
      fVar23 = *(float *)&local_198->field_0x8;
      fVar24 = *(float *)&local_198->field_0x4;
      fVar25 = *(float *)&local_170->field_0x8 - fVar23;
      fVar21 = *(float *)local_198;
      fVar19 = *(float *)&local_170->field_0x4 - fVar24;
      fVar20 = *(float *)&local_190->field_0x8 - fVar23;
      fVar18 = *(float *)&local_190->field_0x4 - fVar24;
      fVar22 = fVar18 * fVar25 - fVar20 * fVar19;
      fVar25 = fVar20 * (*(float *)local_170 - fVar21) - (*(float *)local_190 - fVar21) * fVar25;
      fVar19 = (*(float *)local_190 - fVar21) * fVar19 - fVar18 * (*(float *)local_170 - fVar21);
      fVar18 = fVar25 * fVar25 + fVar22 * fVar22 + fVar19 * fVar19;
      fStack_ec = fVar25;
      local_e8 = fVar19;
      fStack_f0 = fVar22;
      if ((fVar18 != __real_3f800000) &&
         (fStack_ec = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
         local_e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
         fStack_f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
         __real_322bcc77 <= fVar18)) {
        fVar18 = __real_3f800000 / SQRT(fVar18);
        fStack_ec = fVar25 * fVar18;
        local_e8 = fVar19 * fVar18;
        fStack_f0 = fVar22 * fVar18;
      }
      if ((*(float *)local_1a0 - fVar21) * fStack_f0 +
          (*(float *)&local_1a0->field_0x4 - fVar24) * fStack_ec +
          (*(float *)&local_1a0->field_0x8 - fVar23) * local_e8 <= __real_00000000) {
        fStack_f0 = (float)((uint)fStack_f0 ^ __xmm_80000000800000008000000080000000);
        fStack_ec = (float)((uint)fStack_ec ^ __xmm_80000000800000008000000080000000);
        local_e8 = (float)((uint)local_e8 ^ __xmm_80000000800000008000000080000000);
      }
      local_108 = local_1c0;
      pFVar3 = (local_188->AllocatorInstance).Data;
      piVar1 = &local_188->ArrayMax;
      fStack_100 = local_1b8;
      fStack_fc = local_1d8;
      fStack_f8 = fStack_1d4;
      fStack_f4 = local_1d0;
      fStack_e4 = SQRT(fVar17);
      iStack_114 = local_1c8;
      local_118 = CONCAT31(local_118._1_3_,1);
      uStack_10c = 0x3f800000;
      fStack_104 = local_1bc;
      uStack_110 = uVar2;
      if (((pFVar3 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar3 + (longlong)*piVar1 * 0x38)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar11 = param_10->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x438,&param_10->AllocatorInstance,piVar1);
      }
      param_10->ArrayNum = iVar11 + 1;
      lVar16 = (longlong)iVar11 * 0x38;
      pFVar3 = (param_10->AllocatorInstance).Data;
      *(ulonglong *)(pFVar3 + lVar16) = CONCAT44(iStack_114,local_118);
      *(ulonglong *)(pFVar3 + lVar16 + 8) = CONCAT44(uStack_10c,uStack_110);
      *(ulonglong *)(pFVar3 + lVar16 + 0x10) = CONCAT44(fStack_104,local_108);
      *(ulonglong *)(pFVar3 + lVar16 + 0x10 + 8) = CONCAT44(fStack_fc,fStack_100);
      *(ulonglong *)(pFVar3 + lVar16 + 0x20) = CONCAT44(fStack_f4,fStack_f8);
      *(ulonglong *)(pFVar3 + lVar16 + 0x20 + 8) = CONCAT44(fStack_ec,fStack_f0);
      *(ulonglong *)(pFVar3 + lVar16 + 0x30) = CONCAT44(fStack_e4,local_e8);
    }
    FVar15.Data = local_180 + 4;
    uVar13 = (ulonglong)local_1c4;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return (bool)uVar8;
}

// RemapVertices @ 143e3ce60

void __thiscall
Chaos::FTriangleMesh::RemapVertices
          (FTriangleMesh *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong local_res8;
  
  iVar7 = (this->MElements).ArrayNum;
  uVar8 = 0;
  uVar5 = 0x7fffffff;
  uVar6 = 0x80000001;
  if (0 < iVar7) {
    local_res8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar7) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar9 = (this->MElements).AllocatorInstance.Data + local_res8;
      uVar4 = *(uint *)pFVar9;
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = *(uint *)pFVar9;
      if (uVar3 != *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4)) {
        uVar4 = 0;
        if ((int)uVar3 < param_1->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        uVar4 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 4);
        *(uint *)pFVar9 = uVar4;
        uVar3 = uVar4;
        if ((int)uVar5 <= (int)uVar4) {
          uVar3 = uVar5;
        }
        uVar5 = uVar3;
        if ((int)uVar6 < (int)uVar4) {
          uVar6 = uVar4;
        }
      }
      uVar4 = *(uint *)(pFVar9 + 4);
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = *(uint *)(pFVar9 + 4);
      if (uVar3 != *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4)) {
        uVar4 = 0;
        if ((int)uVar3 < param_1->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        uVar4 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 4);
        *(uint *)(pFVar9 + 4) = uVar4;
        uVar3 = uVar4;
        if ((int)uVar5 <= (int)uVar4) {
          uVar3 = uVar5;
        }
        uVar5 = uVar3;
        if ((int)uVar6 < (int)uVar4) {
          uVar6 = uVar4;
        }
      }
      uVar4 = *(uint *)(pFVar9 + 8);
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = *(uint *)(pFVar9 + 8);
      if (uVar3 != *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4)) {
        uVar4 = 0;
        if ((int)uVar3 < param_1->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        uVar4 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 4);
        *(uint *)(pFVar9 + 8) = uVar4;
        uVar3 = uVar4;
        if ((int)uVar5 <= (int)uVar4) {
          uVar3 = uVar5;
        }
        uVar5 = uVar3;
        if ((int)uVar6 < (int)uVar4) {
          uVar6 = uVar4;
        }
      }
      uVar8 = uVar8 + 1;
      iVar7 = (this->MElements).ArrayNum;
      local_res8 = local_res8 + 0xc;
    } while ((int)uVar8 < iVar7);
    if (uVar5 != 0x7fffffff) {
      if (((int)uVar5 <= this->MStartIdx) &&
         (this->MNumIndices + -1 + this->MStartIdx <= (int)uVar6)) {
        this->MStartIdx = uVar5;
        this->MNumIndices = (uVar6 - uVar5) + 1;
      }
      RemoveDuplicateElements(this);
      RemoveDegenerateElements(this);
      ResetAuxiliaryStructures(this);
    }
  }
  return;
}

// RemapVertices @ 143e3d1b0

void __thiscall
Chaos::FTriangleMesh::RemapVertices
          (FTriangleMesh *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    local_res18 = (this->MElements).ArrayNum;
    uVar5 = (ulonglong)(int)local_res18;
    uVar8 = 0x7fffffff;
    uVar9 = 0x80000001;
    pFVar10 = (this->MElements).AllocatorInstance.Data;
    local_res20 = pFVar10 + uVar5 * 0xc;
    while( true ) {
      pFVar2 = local_res20;
      if ((this->MElements).ArrayNum != (int)uVar5) {
        `TCheckedPointerIterator<Chaos::TVector<int,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar10 == pFVar2) break;
      puVar1 = &param_1->field_0x38;
      if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
        puVar6 = puVar1;
        if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_1->field_0x40;
        }
        uVar11 = *(uint *)(puVar6 + (ulonglong)
                                    (*(int *)&param_1->field_0x48 - 1U & *(uint *)pFVar10) * 4);
        if (uVar11 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)param_1);
            if (*puVar4 == *(uint *)pFVar10) {
              if (uVar11 != 0xffffffff) {
                puVar7 = puVar4 + 1;
                if (puVar4 == (uint *)0x0) {
                  puVar7 = (uint *)0x0;
                }
                if (puVar7 != (uint *)0x0) {
                  *(uint *)pFVar10 = *puVar7;
                  uVar11 = *puVar7;
                  uVar3 = uVar11;
                  if ((int)uVar8 <= (int)uVar11) {
                    uVar3 = uVar8;
                  }
                  uVar8 = uVar3;
                  if ((int)uVar9 < (int)uVar11) {
                    uVar9 = uVar11;
                  }
                }
              }
              break;
            }
            uVar11 = puVar4[2];
          } while (uVar11 != 0xffffffff);
        }
      }
      if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
        puVar6 = *(undefined1 **)&param_1->field_0x40;
        puVar12 = puVar1;
        if (puVar6 != (undefined1 *)0x0) {
          puVar12 = puVar6;
        }
        uVar11 = *(uint *)(puVar12 +
                          (ulonglong)(*(int *)&param_1->field_0x48 - 1U & *(uint *)(pFVar10 + 4)) *
                          4);
        if (uVar11 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)param_1);
            if (*puVar4 == *(uint *)(pFVar10 + 4)) {
              if (uVar11 != 0xffffffff) {
                puVar7 = puVar4 + 1;
                if (puVar4 == (uint *)0x0) {
                  puVar7 = (uint *)0x0;
                }
                if (puVar7 != (uint *)0x0) {
                  *(uint *)(pFVar10 + 4) = *puVar7;
                  uVar11 = *puVar7;
                  uVar3 = uVar11;
                  if ((int)uVar8 <= (int)uVar11) {
                    uVar3 = uVar8;
                  }
                  uVar8 = uVar3;
                  if ((int)uVar9 < (int)uVar11) {
                    uVar9 = uVar11;
                  }
                }
              }
              break;
            }
            uVar11 = puVar4[2];
          } while (uVar11 != 0xffffffff);
        }
      }
      if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
LAB_143e3d3fe:
        uVar5 = (ulonglong)local_res18;
        pFVar10 = pFVar10 + 0xc;
      }
      else {
        puVar6 = *(undefined1 **)&param_1->field_0x40;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar11 = *(uint *)(puVar6 + (ulonglong)
                                    (*(int *)&param_1->field_0x48 - 1U & *(uint *)(pFVar10 + 8)) * 4
                          );
        if (uVar11 == 0xffffffff) goto LAB_143e3d3fe;
        do {
          puVar4 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)param_1);
          if (*puVar4 == *(uint *)(pFVar10 + 8)) {
            puVar7 = puVar4 + 1;
            if (puVar4 == (uint *)0x0) {
              puVar7 = (uint *)0x0;
            }
            if (puVar7 != (uint *)0x0) {
              *(uint *)(pFVar10 + 8) = *puVar7;
              uVar11 = *puVar7;
              uVar3 = uVar11;
              if ((int)uVar8 <= (int)uVar11) {
                uVar3 = uVar8;
              }
              uVar8 = uVar3;
              if ((int)uVar9 < (int)uVar11) {
                uVar9 = uVar11;
              }
            }
            goto LAB_143e3d3fe;
          }
          uVar11 = puVar4[2];
        } while (uVar11 != 0xffffffff);
        uVar5 = (ulonglong)local_res18;
        pFVar10 = pFVar10 + 0xc;
      }
    }
    if (uVar8 != 0x7fffffff) {
      if (((int)uVar8 <= this->MStartIdx) &&
         (this->MNumIndices + -1 + this->MStartIdx <= (int)uVar9)) {
        this->MStartIdx = uVar8;
        this->MNumIndices = (uVar9 - uVar8) + 1;
      }
      RemoveDuplicateElements(this);
      RemoveDegenerateElements(this);
      ResetAuxiliaryStructures(this);
    }
  }
  return;
}

// RemoveDegenerateElements @ 143e3f5e0

void __thiscall Chaos::FTriangleMesh::RemoveDegenerateElements(FTriangleMesh *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = (this->MElements).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 * 0xc;
    do {
      uVar8 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < (this->MElements).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->MElements).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar10 < (this->MElements).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(pFVar3 + lVar9) == *(int *)((this->MElements).AllocatorInstance.Data + lVar9 + 4)
         ) {
LAB_143e3f7f3:
        uVar6 = 0;
        if ((int)uVar10 < (this->MElements).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->MElements).ArrayNum;
        pFVar3 = (this->MElements).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar10;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + lVar9,pFVar3 + (longlong)(iVar2 - iVar7) * 0xc,(longlong)iVar7 * 0xc);
        }
        piVar1 = &(this->MElements).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)this,(this->MElements).ArrayNum,
                   &(this->MElements).ArrayMax);
      }
      else {
        uVar6 = 0;
        if ((int)uVar10 < (this->MElements).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->MElements).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar10 < (this->MElements).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(pFVar3 + lVar9) ==
            *(int *)((this->MElements).AllocatorInstance.Data + lVar9 + 8)) goto LAB_143e3f7f3;
        uVar6 = 0;
        if ((int)uVar10 < (this->MElements).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->MElements).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar10 < (this->MElements).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(pFVar3 + lVar9 + 4) ==
            *(int *)((this->MElements).AllocatorInstance.Data + lVar9 + 8)) goto LAB_143e3f7f3;
      }
      lVar9 = lVar9 + -0xc;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// RemoveDuplicateElements @ 143e3f8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Chaos::FTriangleMesh::RemoveDuplicateElements(FTriangleMesh *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStackY_108 [32];
  uint local_b8 [2];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar6 = (this->MElements).ArrayNum;
  local_a8._0_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_b8[0] = 0;
  if (0 < iVar6) {
    do {
      uVar10 = local_b8[0];
      uVar8 = 0;
      if ((int)local_b8[0] < iVar6) {
        uVar8 = ~local_b8[0] >> 0x1f;
      }
      iVar6 = (int)local_a8;
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (int)local_a8;
      }
      pFVar3 = (this->MElements).AllocatorInstance.Data;
      local_a0 = *(ulonglong *)(pFVar3 + (longlong)(int)uVar10 * 0xc);
      local_98 = *(uint *)(pFVar3 + (longlong)(int)uVar10 * 0xc + 8);
      uVar11 = local_a0 >> 0x20;
      uVar10 = (uint)(local_a0 >> 0x20);
      if ((int)uVar10 < (int)(uint)local_a0) {
        uVar8 = (uint)local_a0;
        local_a0 = CONCAT44((uint)local_a0,uVar10);
      }
      else {
        uVar11 = local_a0 & 0xffffffff;
        uVar8 = uVar10;
        uVar10 = (uint)local_a0;
      }
      uVar12 = uVar8;
      if ((int)local_98 < (int)uVar8) {
        local_a0 = CONCAT44(local_98,(uint)local_a0);
        uVar12 = local_98;
        local_98 = uVar8;
      }
      uVar8 = (uint)uVar11;
      if ((int)uVar12 < (int)uVar8) {
        local_a0 = CONCAT44(uVar8,uVar12);
        uVar11 = (ulonglong)uVar12;
        uVar10 = uVar12;
        uVar12 = uVar8;
      }
      uVar8 = (uint)uVar11 * 0x40 + -0x61c88647 + uVar12 + (int)(uVar11 >> 2) ^ (uint)uVar11;
      if (local_88._8_4_ != local_54) {
        FVar9 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = local_48;
        }
        iVar2 = *(int *)((longlong)FVar9 +
                        (ulonglong)
                        (local_40 - 1U &
                        ((uVar8 >> 2) + 0x9e3779b9 + local_98 + uVar8 * 0x40 ^ uVar8)) * 4);
        while (iVar2 != -1) {
          lVar7 = (longlong)iVar2;
          if (((*(uint *)(local_88._0_8_ + lVar7 * 0x14) == uVar10) &&
              (*(uint *)(local_88._0_8_ + lVar7 * 0x14 + 4) == uVar12)) &&
             (*(uint *)(local_88._0_8_ + lVar7 * 0x14 + 8) == local_98)) {
            if (iVar2 != -1) {
              if ((local_b0.Data <= (FScriptContainerElement *)local_b8) &&
                 ((FScriptContainerElement *)local_b8 < local_b0.Data + (longlong)local_a8._4_4_ * 4
                 )) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = (int)local_a8;
              }
              if (iVar6 == local_a8._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_b0,(int *)((longlong)&local_a8 + 4));
              }
              local_a8 = CONCAT44(local_a8._4_4_,iVar6 + 1);
              *(uint *)(local_b0.Data + (longlong)iVar6 * 4) = local_b8[0];
              goto LAB_143e3fad0;
            }
            break;
          }
          iVar2 = *(int *)(local_88._0_8_ + lVar7 * 0x14 + 0xc);
        }
      }
      TSet<Chaos::TVector<int,3>,DefaultKeyFuncs<Chaos::TVector<int,3>,0>,FDefaultSetAllocator>::
      Emplace<Chaos::TVector<int,3>_const_&>
                ((TSet<Chaos::TVector<int,3>,DefaultKeyFuncs<Chaos::TVector<int,3>,0>,FDefaultSetAllocator>
                  *)local_88,(TVector<int,3> *)local_90,(bool *)&local_a0);
LAB_143e3fad0:
      iVar6 = (this->MElements).ArrayNum;
      local_b8[0] = local_b8[0] + 1;
    } while ((int)local_b8[0] < iVar6);
  }
  uVar10 = (int)local_a8 - 1;
  if (-1 < (int)uVar10) {
    lVar7 = (longlong)(int)uVar10 * 4;
    iVar6 = (int)local_a8;
    while( true ) {
      uVar8 = 0;
      if ((int)uVar10 < iVar6) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = *(uint *)(local_b0.Data + lVar7);
      uVar12 = 0;
      if ((int)uVar8 < (this->MElements).ArrayNum) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = (this->MElements).ArrayNum;
      pFVar3 = (this->MElements).AllocatorInstance.Data;
      iVar6 = iVar2 + ~uVar8;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar8 * 0xc,pFVar3 + (longlong)(iVar2 - iVar6) * 0xc,
                (longlong)iVar6 * 0xc);
      }
      piVar1 = &(this->MElements).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(ForAnyElementType *)this,(this->MElements).ArrayNum,
                 &(this->MElements).ArrayMax);
      lVar7 = lVar7 + -4;
      uVar10 = uVar10 - 1;
      if ((int)uVar10 < 0) break;
      iVar6 = (int)local_a8;
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar6 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return;
}

// ResetAuxiliaryStructures @ 143e46620

void __thiscall Chaos::FTriangleMesh::ResetAuxiliaryStructures(FTriangleMesh *this)

{
  int *piVar1;
  FSegmentMesh *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_28 [16];
  
  piVar1 = &(this->MPointToTriangleMap).ArrayMax;
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (this->MPointToTriangleMap).AllocatorInstance.Data;
  iVar3 = (this->MPointToTriangleMap).ArrayNum;
  if ((this->MPointToTriangleMap).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar3);
    (this->MPointToTriangleMap).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->MPointToTriangleMap).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar3);
    (this->MPointToTriangleMap).ArrayNum = 0;
  }
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->MPointToNeighborsMap);
  this_00 = &this->MSegmentMesh;
  FSegmentMesh::_ClearAuxStructures(this_00);
  if (this_00 != (FSegmentMesh *)local_28) {
    iVar3 = (this->MSegmentMesh).MElements.ArrayMax;
    piVar1 = &(this->MSegmentMesh).MElements.ArrayMax;
    (this->MSegmentMesh).MElements.ArrayNum = 0;
    if (iVar3 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,iVar3,(ForAnyElementType *)this_00,0,piVar1);
    }
  }
  pFVar7 = (this_00->MElements).AllocatorInstance.Data;
  iVar3 = (this->MSegmentMesh).MElements.ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->MSegmentMesh).MElements.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    if (*(int *)pFVar7 == *(int *)(pFVar7 + 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("edge[0] != edge[1]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                         ,0x22,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  (this->MFaceToEdges).ArrayNum = 0;
  if ((this->MFaceToEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->MFaceToEdges).AllocatorInstance,0,&(this->MFaceToEdges).ArrayMax);
  }
  (this->MEdgeToFaces).ArrayNum = 0;
  if ((this->MEdgeToFaces).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->MEdgeToFaces).AllocatorInstance,0,&(this->MEdgeToFaces).ArrayMax);
  }
  return;
}

// Serialize @ 143e4b930

void __thiscall Chaos::FTriangleMesh::Serialize(FTriangleMesh *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::Serialize<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>
            (param_1,&this->MElements);
  piVar1 = &this->MStartIdx;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->MNumIndices;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    ResetAuxiliaryStructures(this);
  }
  return;
}

