// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// FUniformTessellate @ 14c6e0180

FUniformTessellate * __thiscall
UE::Geometry::FUniformTessellate::FUniformTessellate
          (FUniformTessellate *this,FDynamicMesh3 *param_1)

{
  this->bUseParallel = true;
  this->bComputeMappings = false;
  this->_padding_ = (longlong)&___7FUniformTessellate_Geometry_UE__6B_;
  (this->VertexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexMap).ArrayNum = 0;
  (this->VertexMap).ArrayMax = 0;
  *(undefined8 *)&this->VertexEdgeMap = 0;
  *(undefined8 *)&(this->VertexEdgeMap).field_0x8 = 0;
  *(undefined8 *)&(this->VertexEdgeMap).field_0x20 = 0;
  this->Progress = (FProgressCancel *)0x0;
  this->TessellationNum = 0;
  this->ResultMesh = param_1;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x28 = 0;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x34 = 0;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VertexEdgeMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x48 = 0;
  *(undefined8 *)&this->VertexTriangleMap = 0;
  *(undefined8 *)&(this->VertexTriangleMap).field_0x8 = 0;
  *(undefined8 *)&(this->VertexTriangleMap).field_0x20 = 0;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x28 = 0;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x34 = 0;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VertexTriangleMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x48 = 0;
  this->Mesh = (FDynamicMesh3 *)0x0;
  this->bInPlace = true;
  return this;
}

// ~FUniformTessellate @ 14c6e1be0

void __thiscall UE::Geometry::FUniformTessellate::~FUniformTessellate(FUniformTessellate *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->VertexTriangleMap).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FUniformTessellate_Geometry_UE__6B_;
  pvVar1 = *(void **)&(this->VertexTriangleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VertexTriangleMap);
  *(undefined4 *)&(this->VertexEdgeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VertexEdgeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VertexEdgeMap);
  pFVar2 = (this->VertexMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Validate @ 14c77c000

EOperationValidationResult __thiscall
UE::Geometry::FUniformTessellate::Validate(FUniformTessellate *this)

{
  bool bVar1;
  byte bVar2;
  
  if (this->bInPlace == false) {
    if ((this->Mesh == (FDynamicMesh3 *)0x0) || (this->ResultMesh == (FDynamicMesh3 *)0x0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
    if (this->ResultMesh == (FDynamicMesh3 *)0x0) {
      bVar2 = 1;
      goto LAB_14c77c01e;
    }
  }
  bVar2 = 0;
LAB_14c77c01e:
  if ((-1 < this->TessellationNum) && (!bVar1)) {
    return (EOperationValidationResult)bVar2;
  }
  return Failed_UnknownReason;
}

// Cancelled @ 14c7e7fb0

bool __thiscall UE::Geometry::FUniformTessellate::Cancelled(FUniformTessellate *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// Compute @ 14c7ed580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Geometry::FUniformTessellate::Compute(FUniformTessellate *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
  *pTVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  FDynamicMesh3 *pFVar12;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar13;
  uint *puVar14;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar15;
  ulonglong uVar16;
  uint *puVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  uint uVar20;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar21;
  longlong lVar22;
  uint uVar23;
  uint *puVar24;
  undefined1 auStackY_658 [32];
  IndexIterator local_618;
  int local_608;
  uint local_604;
  FCompactMaps local_600;
  TPairInitializer<int_const_&,int_const_&> local_5e0;
  undefined1 auStack_5d0 [16];
  uint uStack_5c0;
  uint uStack_5bc;
  longlong local_5b8;
  TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  *pTStack_5b0;
  TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  *local_5a8;
  undefined2 local_5a0;
  longlong *local_598;
  undefined1 auStack_590 [16];
  uint uStack_580;
  uint uStack_57c;
  longlong local_578;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTStack_570;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_568;
  undefined2 local_560;
  int *local_558;
  uint *local_550;
  undefined1 local_548 [32];
  longlong local_528;
  TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  *pTStack_520;
  undefined1 local_518 [32];
  longlong local_4f8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTStack_4f0;
  FDynamicMesh3 local_4e8;
  FDynamicMesh3 local_2b8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_658;
  iVar10 = (**(code **)(this->_padding_ + 8))();
  if (iVar10 != 0) {
    return false;
  }
  if (this->TessellationNum == 0) {
    return true;
  }
  if (this->bInPlace == false) {
    pFVar12 = this->Mesh;
  }
  else {
    pFVar12 = this->ResultMesh;
  }
  if ((pFVar12->TriangleRefCounts).UsedCount == 0) {
    return true;
  }
  FDynamicMesh3::FDynamicMesh3(&local_2b8);
  if (this->bInPlace != false) {
    FDynamicMesh3::Copy(&local_2b8,this->ResultMesh,true,true,true,true);
    this->Mesh = &local_2b8;
  }
  FDynamicMesh3::Clear(this->ResultMesh);
  pTVar21 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0;
  piVar1 = &(this->VertexMap).ArrayMax;
  (this->VertexMap).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->VertexMap).AllocatorInstance,0,piVar1);
  }
  bVar6 = 1 < *(int *)&(this->VertexEdgeMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                      *)&this->VertexEdgeMap);
  }
  puVar2 = &(this->VertexEdgeMap).field_0xc;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->VertexEdgeMap,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->VertexEdgeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->VertexEdgeMap).field_0x2c;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->VertexEdgeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexEdgeMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->VertexEdgeMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
              *)&this->VertexEdgeMap);
  }
  pTVar13 = &this->VertexTriangleMap;
  bVar6 = 1 < *(int *)&(this->VertexTriangleMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)pTVar13);
  }
  puVar2 = &(this->VertexTriangleMap).field_0xc;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar13,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->VertexTriangleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->VertexTriangleMap).field_0x2c;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->VertexTriangleMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexTriangleMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->VertexTriangleMap).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pTVar13);
  }
  pFVar12 = this->Mesh;
  if ((((pFVar12->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
        (pFVar12->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
      ((pFVar12->EdgeRefCounts).FreeIndices.CurBlock * 0x200 +
       (pFVar12->EdgeRefCounts).FreeIndices.CurBlockUsed == 0)) &&
     ((pFVar12->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (pFVar12->TriangleRefCounts).FreeIndices.CurBlockUsed == 0)) {
    pTVar13 = pTVar21;
    pTVar15 = pTVar21;
    if (this->bComputeMappings != false) {
      pTVar13 = &this->VertexTriangleMap;
      pTVar15 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                &this->VertexEdgeMap;
    }
    bVar6 = UniformTessellateLocals::Tessellate
                      (pFVar12,this->TessellationNum,this->Progress,this->bUseParallel,
                       (TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                        *)pTVar15,pTVar13,this->ResultMesh);
    if (bVar6) {
      if ((this->bComputeMappings != false) &&
         (TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&this->VertexMap,
                     (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,Default),
         pTVar13 = pTVar21,
         0 < (int)((this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed))) {
        do {
          uVar19 = (uint)pTVar21;
          uVar23 = 0;
          if ((int)uVar19 < (this->VertexMap).ArrayNum) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          *(uint *)(&pTVar13->field_0x0 + (longlong)(this->VertexMap).AllocatorInstance.Data) =
               uVar19;
          pTVar21 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (ulonglong)(uVar19 + 1);
          pTVar13 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    &pTVar13->field_0x4;
        } while ((int)(uVar19 + 1) <
                 (int)((this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed));
      }
LAB_14c7ee073:
      cVar9 = (**(code **)(this->_padding_ + 0x18))(this);
      if (cVar9 == '\0') {
        bVar6 = true;
        goto LAB_14c7ee201;
      }
    }
  }
  else {
    FDynamicMesh3::FDynamicMesh3(&local_4e8);
    local_600.VertMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_600.VertMap.ArrayNum = 0;
    local_600.VertMap.ArrayMax = 0;
    local_600.TriMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_600.TriMap.ArrayNum = 0;
    local_600.TriMap.ArrayMax = 0;
    FDynamicMesh3::CompactCopy(&local_4e8,this->Mesh,true,true,true,true,&local_600);
    pTVar13 = pTVar21;
    pTVar15 = pTVar21;
    if (this->bComputeMappings != false) {
      pTVar13 = &this->VertexTriangleMap;
      pTVar15 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                &this->VertexEdgeMap;
    }
    bVar6 = UniformTessellateLocals::Tessellate
                      (&local_4e8,this->TessellationNum,this->Progress,this->bUseParallel,
                       (TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                        *)pTVar15,pTVar13,this->ResultMesh);
    if ((bVar6) && (this->bComputeMappings != false)) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->VertexMap,
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,Default);
      pTVar13 = pTVar21;
      if (0 < (int)((this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed)) {
        do {
          uVar19 = (uint)pTVar21;
          uVar23 = 0;
          if ((int)uVar19 < local_600.VertMap.ArrayNum) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar4 = *(undefined4 *)
                   (local_600.VertMap.AllocatorInstance.Data + (longlong)&pTVar13->field_0x0);
          uVar23 = 0;
          if ((int)uVar19 < (this->VertexMap).ArrayNum) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pTVar21 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (ulonglong)(uVar19 + 1);
          *(undefined4 *)(&pTVar13->field_0x0 + (longlong)(this->VertexMap).AllocatorInstance.Data)
               = uVar4;
          pTVar13 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    &pTVar13->field_0x4;
        } while ((int)(uVar19 + 1) <
                 (int)((this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed));
      }
      local_88.Elements._0_8_ = 0;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                (&local_88,local_4e8.TriangleRefCounts.UsedCount);
      pFVar12 = this->Mesh;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_618,&pFVar12->TriangleRefCounts,0,
                 (pFVar12->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar12->TriangleRefCounts).RefCounts.CurBlockUsed);
      uVar23 = (pFVar12->TriangleRefCounts).RefCounts.CurBlock;
      uVar19 = (pFVar12->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar20 = local_618._8_4_;
joined_r0x00014c7edb30:
      local_618._8_4_ = uVar20;
      if (uVar20 != uVar23 * 0x200 + uVar19) {
        uVar11 = 0;
        if ((int)uVar20 < local_600.TriMap.ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        local_604 = uVar20;
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_608 = *(int *)(local_600.TriMap.AllocatorInstance.Data + (longlong)(int)uVar20 * 4);
        if (local_608 != -1) {
          local_558 = &local_608;
          local_550 = &local_604;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_88,&local_5e0,(bool *)&local_558);
        }
        uVar20 = uVar20 + 1;
        if ((int)uVar20 < (int)local_618._12_4_) {
          do {
            lVar22 = (ulonglong)(uVar20 & 0x1ff) * 2;
            if ((*(short *)(lVar22 + *(longlong *)
                                      (*(longlong *)(local_618._0_8_ + 8) +
                                      (ulonglong)(uVar20 >> 9) * 8)) != 0) &&
               (*(short *)(lVar22 + *(longlong *)
                                     (*(longlong *)(local_618._0_8_ + 8) +
                                     (ulonglong)(uVar20 >> 9) * 8)) != -1)) break;
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < (int)local_618._12_4_);
        }
        goto joined_r0x00014c7edb30;
      }
      puVar24 = (uint *)0x0;
      pTVar3 = &this->VertexEdgeMap;
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_548,
                 (TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                  *)pTVar3);
      local_5a0 = 0;
      stack0xfffffffffffffa38 = local_548._16_16_;
      local_5e0.Value = (int *)local_548._0_8_;
      auStack_5d0._0_8_ = local_548._8_8_;
      local_5b8 = local_528;
      pTStack_5b0 = pTStack_520;
      uVar16 = local_548._24_8_ >> 0x20;
      local_5a8 = (TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                   *)pTVar3;
      if (local_548._28_4_ < *(int *)(local_548._16_8_ + 0x18)) {
        do {
          lVar22 = *(longlong *)local_5e0.Value + (longlong)(int)uVar16 * 0x14;
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_88.Hash.SecondaryData;
            }
            uVar23 = *(uint *)((longlong)FVar18 +
                              (ulonglong)(local_88.HashSize - 1U & *(uint *)(lVar22 + 4)) * 4);
            while (uVar23 != 0xffffffff) {
              puVar17 = (uint *)((longlong)(int)uVar23 * 0x10 + local_88.Elements._0_8_);
              if (*puVar17 == *(uint *)(lVar22 + 4)) {
                puVar14 = puVar17 + 1;
                if (puVar17 == (uint *)0x0) {
                  puVar14 = puVar24;
                }
                if (puVar14 != (uint *)0x0) goto LAB_14c7edd53;
                break;
              }
              uVar23 = puVar17[2];
            }
          }
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5974361012667676622>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\UniformTessellate.cpp"
                             ,0x832,"TID1 != nullptr");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          puVar14 = (uint *)(lVar22 + 4);
LAB_14c7edd53:
          uVar23 = *(uint *)(lVar22 + 8);
          *(uint *)(lVar22 + 4) = *puVar14;
          if (uVar23 != 0xffffffff) {
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              FVar18 = (ForElementType<FSetElementId>)&local_88.Hash;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar18 = local_88.Hash.SecondaryData;
              }
              uVar19 = *(uint *)((longlong)FVar18 + (ulonglong)(local_88.HashSize - 1U & uVar23) * 4
                                );
              while (uVar19 != 0xffffffff) {
                puVar17 = (uint *)((longlong)(int)uVar19 * 0x10 + local_88.Elements._0_8_);
                if (*puVar17 == uVar23) {
                  puVar14 = puVar17 + 1;
                  if (puVar17 == (uint *)0x0) {
                    puVar14 = puVar24;
                  }
                  if (puVar14 != (uint *)0x0) goto LAB_14c7ede03;
                  break;
                }
                uVar19 = puVar17[2];
              }
            }
            bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5974361012667676616>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\UniformTessellate.cpp"
                               ,0x838,"TID2 != nullptr");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            puVar14 = (uint *)(lVar22 + 8);
LAB_14c7ede03:
            *(uint *)(lVar22 + 8) = *puVar14;
          }
          uStack_5c0 = uStack_5c0 & ~auStack_5d0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_5d0);
          uVar16 = (ulonglong)uStack_5bc;
        } while ((int)uStack_5bc < *(int *)(auStack_5d0._8_8_ + 0x18));
        if (((char)local_5a0 != '\0') && (local_5a0._1_1_ != '\0')) {
          uVar23 = *(int *)&(local_5a8->Elements).field_0x8 -
                   *(int *)&(local_5a8->Elements).field_0x34;
          if (uVar23 < 4) {
            iVar10 = 1;
          }
          else {
            uVar16 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_5e0.Key._4_4_ = (undefined4)lVar22;
            iVar10 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((0 < (int)uVar23) && (local_5a8->HashSize < iVar10)) ||
             (iVar10 < local_5a8->HashSize)) {
            local_5a8->HashSize = iVar10;
            TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Rehash(local_5a8);
          }
        }
      }
      pTVar21 = &this->VertexTriangleMap;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_518,
                (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )pTVar21);
      stack0xfffffffffffffa78 = local_518._16_16_;
      local_598 = (longlong *)local_518._0_8_;
      auStack_590._0_8_ = local_518._8_8_;
      local_560 = 0;
      local_578 = local_4f8;
      pTStack_570 = pTStack_4f0;
      uVar16 = local_518._24_8_ >> 0x20;
      local_568 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)pTVar21;
      if (local_518._28_4_ < *(int *)(local_518._16_8_ + 0x18)) {
        do {
          lVar22 = (longlong)(int)uVar16 * 0x10 + *local_598;
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_88.Hash.SecondaryData;
            }
            uVar23 = *(uint *)((longlong)FVar18 +
                              (ulonglong)(local_88.HashSize - 1U & *(uint *)(lVar22 + 4)) * 4);
            while (uVar23 != 0xffffffff) {
              puVar17 = (uint *)((longlong)(int)uVar23 * 0x10 + local_88.Elements._0_8_);
              if (*puVar17 == *(uint *)(lVar22 + 4)) {
                puVar14 = puVar17 + 1;
                if (puVar17 == (uint *)0x0) {
                  puVar14 = puVar24;
                }
                if (puVar14 != (uint *)0x0) goto LAB_14c7edf93;
                break;
              }
              uVar23 = puVar17[2];
            }
          }
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5974361012667676607>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\UniformTessellate.cpp"
                             ,0x841,"TID1 != nullptr");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          puVar14 = (uint *)(lVar22 + 4);
LAB_14c7edf93:
          *(uint *)(lVar22 + 4) = *puVar14;
          uStack_580 = uStack_580 & ~auStack_590._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_590);
          uVar16 = (ulonglong)uStack_57c;
        } while ((int)uStack_57c < *(int *)(auStack_590._8_8_ + 0x18));
        if (((char)local_560 != '\0') && (local_560._1_1_ != '\0')) {
          uVar23 = *(int *)&(local_568->Elements).field_0x8 -
                   *(int *)&(local_568->Elements).field_0x34;
          if (uVar23 < 4) {
            iVar10 = 1;
          }
          else {
            uVar16 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar10 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((0 < (int)uVar23) && (local_568->HashSize < iVar10)) ||
             (iVar10 < local_568->HashSize)) {
            local_568->HashSize = iVar10;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Rehash(local_568);
          }
        }
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
    if (local_600.TriMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.TriMap.AllocatorInstance.Data);
    }
    if (local_600.VertMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.VertMap.AllocatorInstance.Data);
    }
    FDynamicMesh3::~FDynamicMesh3(&local_4e8);
    if (bVar6) goto LAB_14c7ee073;
  }
  if (this->bInPlace == false) {
    FDynamicMesh3::Clear(this->ResultMesh);
  }
  else {
    FDynamicMesh3::Copy(this->ResultMesh,&local_2b8,true,true,true,true);
  }
  (this->VertexMap).ArrayNum = 0;
  if ((this->VertexMap).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->VertexMap).AllocatorInstance,0,&(this->VertexMap).ArrayMax);
  }
  bVar6 = 1 < *(int *)&(this->VertexEdgeMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                      *)&this->VertexEdgeMap);
  }
  *(undefined4 *)&(this->VertexEdgeMap).field_0x8 = 0;
  if (*(int *)&(this->VertexEdgeMap).field_0xc != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->VertexEdgeMap,0,
               (int *)&(this->VertexEdgeMap).field_0xc);
  }
  *(undefined4 *)&(this->VertexEdgeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->VertexEdgeMap).field_0x2c;
  *(undefined4 *)&(this->VertexEdgeMap).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->VertexEdgeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexEdgeMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->VertexEdgeMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
              *)&this->VertexEdgeMap);
  }
  pTVar21 = &this->VertexTriangleMap;
  bVar6 = 1 < *(int *)&(this->VertexTriangleMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)pTVar21);
  }
  *(undefined4 *)&(this->VertexTriangleMap).field_0x8 = 0;
  if (*(int *)&(this->VertexTriangleMap).field_0xc != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar21,0,(int *)&(this->VertexTriangleMap).field_0xc);
  }
  *(undefined4 *)&(this->VertexTriangleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->VertexTriangleMap).field_0x2c;
  *(undefined4 *)&(this->VertexTriangleMap).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->VertexTriangleMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexTriangleMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->VertexTriangleMap).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pTVar21);
  }
  bVar6 = false;
LAB_14c7ee201:
  FDynamicMesh3::~FDynamicMesh3(&local_2b8);
  return bVar6;
}

// ExpectedNumTriangles @ 14c802a90

int __cdecl
UE::Geometry::FUniformTessellate::ExpectedNumTriangles(FDynamicMesh3 *param_1,int param_2)

{
  return (param_2 + 1) * (param_1->TriangleRefCounts).UsedCount * (param_2 + 1);
}

// ExpectedNumVertices @ 14c802ab0

int __cdecl
UE::Geometry::FUniformTessellate::ExpectedNumVertices(FDynamicMesh3 *param_1,int param_2)

{
  return (((param_2 + 3) * (param_2 + 2)) / 2 + (param_2 + 2) * -3 + 3) *
         (param_1->TriangleRefCounts).UsedCount + param_2 * (param_1->EdgeRefCounts).UsedCount +
         (param_1->VertexRefCounts).UsedCount;
}

