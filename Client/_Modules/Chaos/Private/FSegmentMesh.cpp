// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FSegmentMesh @ 143dfbb10

FSegmentMesh * __thiscall
Chaos::FSegmentMesh::FSegmentMesh
          (FSegmentMesh *this,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FSegmentMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  (this->MElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MElements).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MElements).ArrayNum = param_1->ArrayNum;
  (this->MElements).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  *(undefined8 *)&this->MPointToEdgeMap = 0;
  *(undefined8 *)&(this->MPointToEdgeMap).field_0x8 = 0;
  *(undefined8 *)&(this->MPointToEdgeMap).field_0x20 = 0;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x28 = 0;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x34 = 0;
  *(undefined8 *)&(this->MPointToEdgeMap).field_0x40 = 0;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x48 = 0;
  *(undefined8 *)&this->MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x20 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x34 = 0;
  *(undefined8 *)&(this->MPointToNeighborsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 0;
  pFVar6 = (this->MElements).AllocatorInstance.Data;
  iVar2 = (this->MElements).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MElements).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(int *)pFVar6 == *(int *)(pFVar6 + 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("edge[0] != edge[1]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                         ,0xe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FSegmentMesh *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return this;
}

// ~FSegmentMesh @ 143dfe160

void __thiscall Chaos::FSegmentMesh::~FSegmentMesh(FSegmentMesh *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MPointToNeighborsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MPointToNeighborsMap);
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MPointToEdgeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MPointToEdgeMap);
  pFVar2 = (this->MElements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetEdgeLengths @ 143e28d30

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FSegmentMesh::GetEdgeLengths
          (FSegmentMesh *this,TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TParticles<double,3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 unaff_XMM6 [16];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(this->MElements).ArrayNum,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  iVar10 = (this->MElements).ArrayNum;
  if (param_2) {
    uVar14 = 0;
    if (0 < iVar10) {
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar14 < iVar10) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        pFVar1 = (this->MElements).AllocatorInstance.Data;
        uVar7 = *(uint *)(pFVar1 + lVar13 * 8);
        lVar11 = (longlong)(int)uVar7;
        uVar8 = 0;
        if ((int)uVar7 < *(int *)&(param_1->MX).field_0x10) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        lVar2 = *(longlong *)&(param_1->MX).field_0x8;
        uVar7 = *(uint *)(pFVar1 + lVar13 * 8 + 4);
        lVar12 = (longlong)(int)uVar7;
        uVar8 = 0;
        if ((int)uVar7 < *(int *)&(param_1->MX).field_0x10) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        lVar3 = *(longlong *)&(param_1->MX).field_0x8;
        dVar15 = *(double *)(lVar2 + 0x10 + lVar11 * 0x18) -
                 *(double *)(lVar3 + 0x10 + lVar12 * 0x18);
        dVar17 = *(double *)(lVar2 + 8 + lVar11 * 0x18) - *(double *)(lVar3 + 8 + lVar12 * 0x18);
        dVar16 = *(double *)(lVar2 + lVar11 * 0x18) - *(double *)(lVar3 + lVar12 * 0x18);
        uVar7 = 0;
        if ((int)uVar14 < __return_storage_ptr__->ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        uVar14 = uVar14 + 1;
        *(double *)((__return_storage_ptr__->AllocatorInstance).Data + lVar13 * 8) =
             dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
        lVar13 = lVar13 + 1;
        iVar10 = (this->MElements).ArrayNum;
      } while ((int)uVar14 < iVar10);
    }
  }
  else {
    uVar14 = 0;
    if (0 < iVar10) {
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar14 < iVar10) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        pFVar1 = (this->MElements).AllocatorInstance.Data;
        uVar7 = *(uint *)(pFVar1 + lVar13 * 8);
        lVar11 = (longlong)(int)uVar7;
        uVar8 = 0;
        if ((int)uVar7 < *(int *)&(param_1->MX).field_0x10) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        lVar2 = *(longlong *)&(param_1->MX).field_0x8;
        uVar7 = *(uint *)(pFVar1 + lVar13 * 8 + 4);
        lVar12 = (longlong)(int)uVar7;
        uVar8 = 0;
        if ((int)uVar7 < *(int *)&(param_1->MX).field_0x10) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        lVar3 = *(longlong *)&(param_1->MX).field_0x8;
        dVar16 = *(double *)(lVar2 + lVar11 * 0x18) - *(double *)(lVar3 + lVar12 * 0x18);
        dVar15 = *(double *)(lVar2 + 8 + lVar11 * 0x18) - *(double *)(lVar3 + 8 + lVar12 * 0x18);
        dVar17 = *(double *)(lVar2 + 0x10 + lVar11 * 0x18) -
                 *(double *)(lVar3 + 0x10 + lVar12 * 0x18);
        uVar7 = 0;
        if ((int)uVar14 < __return_storage_ptr__->ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar16 * dVar16 + dVar15 * dVar15 + dVar17 * dVar17;
        unaff_XMM6 = sqrtpd(unaff_XMM6,auVar5);
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        uVar14 = uVar14 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + lVar13 * 8) =
             unaff_XMM6._0_8_;
        lVar13 = lVar13 + 1;
        iVar10 = (this->MElements).ArrayNum;
      } while ((int)uVar14 < iVar10);
    }
  }
  return __return_storage_ptr__;
}

// GetPointToEdges @ 143e2b470

TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall Chaos::FSegmentMesh::GetPointToEdges(FSegmentMesh *this)

{
  if (*(int *)&(this->MPointToEdgeMap).field_0x8 == *(int *)&(this->MPointToEdgeMap).field_0x34) {
    _UpdatePointToEdgesMap(this);
  }
  return &this->MPointToEdgeMap;
}

// GetPointToNeighborsMap @ 143e2b4a0

TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
* __thiscall Chaos::FSegmentMesh::GetPointToNeighborsMap(FSegmentMesh *this)

{
  if (*(int *)&(this->MPointToNeighborsMap).field_0x8 ==
      *(int *)&(this->MPointToNeighborsMap).field_0x34) {
    _UpdatePointToNeighborsMap(this);
  }
  return &this->MPointToNeighborsMap;
}

// Init @ 143e324c0

void __thiscall
Chaos::FSegmentMesh::Init
          (FSegmentMesh *this,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  _ClearAuxStructures(this);
  if (this != (FSegmentMesh *)param_1) {
    pFVar2 = (this->MElements).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->MElements).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MElements).ArrayNum = param_1->ArrayNum;
    (this->MElements).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar5 = (this->MElements).AllocatorInstance.Data;
  iVar1 = (this->MElements).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->MElements).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    if (*(int *)pFVar5 == *(int *)(pFVar5 + 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("edge[0] != edge[1]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                         ,0x2d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// Init @ 143e32580

void __thiscall
Chaos::FSegmentMesh::Init
          (FSegmentMesh *this,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  _ClearAuxStructures(this);
  if (this != (FSegmentMesh *)param_1) {
    iVar2 = param_1->ArrayNum;
    piVar1 = &(this->MElements).ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    (this->MElements).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((this->MElements).AllocatorInstance.Data,pFVar3,(longlong)iVar2 << 3);
      }
    }
  }
  pFVar6 = (this->MElements).AllocatorInstance.Data;
  iVar2 = (this->MElements).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MElements).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    if (*(int *)pFVar6 == *(int *)(pFVar6 + 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("edge[0] != edge[1]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                         ,0x22,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// _ClearAuxStructures @ 143e62de0

void __thiscall Chaos::FSegmentMesh::_ClearAuxStructures(FSegmentMesh *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->MPointToEdgeMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MPointToEdgeMap);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->MPointToEdgeMap,0,*(int *)&(this->MPointToEdgeMap).field_0x8);
  puVar1 = &(this->MPointToEdgeMap).field_0xc;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->MPointToEdgeMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->MPointToEdgeMap).field_0x2c;
  *(undefined4 *)&(this->MPointToEdgeMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MPointToEdgeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MPointToEdgeMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MPointToEdgeMap).field_0x48 = 1;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MPointToEdgeMap);
  }
  bVar3 = 1 < *(int *)&(this->MPointToNeighborsMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->MPointToNeighborsMap);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->MPointToNeighborsMap,0,*(int *)&(this->MPointToNeighborsMap).field_0x8
                   );
  puVar1 = &(this->MPointToNeighborsMap).field_0xc;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&this->MPointToNeighborsMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->MPointToNeighborsMap).field_0x2c;
  *(undefined4 *)&(this->MPointToNeighborsMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MPointToNeighborsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MPointToNeighborsMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MPointToNeighborsMap).field_0x48 = 1;
    TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&this->MPointToNeighborsMap);
  }
  return;
}

// _UpdatePointToEdgesMap @ 143e62f50

void __thiscall Chaos::FSegmentMesh::_UpdatePointToEdgesMap(FSegmentMesh *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_28 [4];
  
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->MPointToEdgeMap);
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->MPointToEdgeMap,(this->MElements).ArrayNum * 2);
  iVar7 = (this->MElements).ArrayNum;
  local_28[0] = 0;
  if (0 < iVar7) {
    do {
      uVar8 = local_28[0];
      uVar6 = 0;
      if ((int)local_28[0] < iVar7) {
        uVar6 = ~local_28[0] >> 0x1f;
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
      pFVar1 = (this->MElements).AllocatorInstance.Data;
      local_res8[0] = *(uint *)(pFVar1 + (longlong)(int)uVar8 * 8);
      if (*(int *)&(this->MPointToEdgeMap).field_0x8 != *(int *)&(this->MPointToEdgeMap).field_0x34)
      {
        puVar2 = *(undefined1 **)&(this->MPointToEdgeMap).field_0x40;
        puVar11 = &(this->MPointToEdgeMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar6 = *(uint *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->MPointToEdgeMap).field_0x48 - 1U & local_res8[0]) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)&this->MPointToEdgeMap);
            if (*puVar10 == local_res8[0]) {
              if (puVar10 != (uint *)0x0) {
                pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 2);
                goto LAB_143e63062;
              }
              break;
            }
            uVar6 = puVar10[6];
          } while (uVar6 != 0xffffffff);
        }
      }
      pTVar9 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
               ::EmplaceByHash<int>
                         ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->MPointToEdgeMap,local_res8[0],(int *)local_res8);
LAB_143e63062:
      pFVar3 = (pTVar9->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)pTVar9->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = pTVar9->ArrayNum;
      if (iVar7 == pTVar9->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar7 + 1;
      *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      local_res10[0] = *(uint *)(pFVar1 + (longlong)(int)uVar8 * 8 + 4);
      if (*(int *)&(this->MPointToEdgeMap).field_0x8 != *(int *)&(this->MPointToEdgeMap).field_0x34)
      {
        puVar2 = *(undefined1 **)&(this->MPointToEdgeMap).field_0x40;
        puVar11 = &(this->MPointToEdgeMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar8 = *(uint *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->MPointToEdgeMap).field_0x48 - 1U & local_res10[0]) * 4);
        if (uVar8 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar8 * 0x20 + *(longlong *)&this->MPointToEdgeMap);
            if (*puVar10 == local_res10[0]) {
              if (puVar10 != (uint *)0x0) {
                pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 2);
                goto LAB_143e63164;
              }
              break;
            }
            uVar8 = puVar10[6];
          } while (uVar8 != 0xffffffff);
        }
      }
      pTVar9 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
               ::EmplaceByHash<int>
                         ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->MPointToEdgeMap,local_res10[0],(int *)local_res10);
LAB_143e63164:
      pFVar1 = (pTVar9->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)pTVar9->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = pTVar9->ArrayNum;
      if (iVar7 == pTVar9->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar7 + 1;
      *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      iVar7 = (this->MElements).ArrayNum;
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < iVar7);
  }
  return;
}

// _UpdatePointToNeighborsMap @ 143e63250

void __thiscall Chaos::FSegmentMesh::_UpdatePointToNeighborsMap(FSegmentMesh *this)

{
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint *puVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68 [2];
  undefined1 *local_60;
  FScriptContainerElement *local_58;
  
  this_00 = &this->MPointToNeighborsMap;
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)this_00);
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             *)this_00,(this->MElements).ArrayNum * 2);
  local_70 = (this->MElements).ArrayNum;
  uVar8 = (ulonglong)(int)local_70;
  pFVar15 = (this->MElements).AllocatorInstance.Data;
  local_58 = pFVar15 + uVar8 * 8;
  do {
    pFVar4 = local_58;
    if ((this->MElements).ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,2>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar15 == pFVar4) {
      return;
    }
    local_res18[0] = *(uint *)pFVar15;
    pTVar6 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
             ::FindOrAddImpl<int>
                       ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                         *)this_00,local_res18[0],(int *)local_res18);
    local_res20[0] = *(uint *)(pFVar15 + 4);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (pTVar6,&local_6c,(bool *)local_res20);
    local_78 = *(uint *)(pFVar15 + 4);
    pTVar6 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
             ::FindOrAddImpl<int>
                       ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                         *)this_00,local_78,(int *)&local_78);
    local_74 = *(uint *)pFVar15;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (pTVar6,local_68,(bool *)&local_74);
    puVar12 = &(this->MPointToNeighborsMap).field_0x38;
    local_60 = puVar12;
    if (*(int *)&(this->MPointToNeighborsMap).field_0x8 !=
        *(int *)&(this->MPointToNeighborsMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->MPointToNeighborsMap).field_0x40;
      puVar9 = puVar12;
      if (puVar2 != (undefined1 *)0x0) {
        puVar9 = puVar2;
      }
      uVar13 = *(uint *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->MPointToNeighborsMap).field_0x48 - 1U &
                                  *(uint *)pFVar15) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar13 * 0x60 + *(longlong *)&this_00->field_0x0);
          if (*puVar10 == *(uint *)pFVar15) {
            if (uVar13 != 0xffffffff) {
              puVar7 = puVar10 + 2;
              if (puVar10 == (uint *)0x0) {
                puVar7 = (uint *)0x0;
              }
              if (puVar7 != (uint *)0x0) goto LAB_143e633c8;
            }
            break;
          }
          uVar13 = puVar10[0x16];
        } while (uVar13 != 0xffffffff);
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MPointToNeighborsMap.Find(edge[0]) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                       ,0x41,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_143e633c8:
    puVar9 = &(this->MPointToNeighborsMap).field_0x48;
    puVar2 = &(this->MPointToNeighborsMap).field_0x40;
    if (*(int *)&(this->MPointToNeighborsMap).field_0x8 !=
        *(int *)&(this->MPointToNeighborsMap).field_0x34) {
      puVar11 = puVar12;
      if (*(undefined1 **)puVar2 != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)puVar2;
      }
      uVar13 = *(uint *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(this->MPointToNeighborsMap).field_0x48 - 1U &
                        *(uint *)(pFVar15 + 4)) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar13 * 0x60 + *(longlong *)&this_00->field_0x0);
          if (*puVar10 == *(uint *)(pFVar15 + 4)) {
            if (uVar13 != 0xffffffff) {
              puVar7 = puVar10 + 2;
              if (puVar10 == (uint *)0x0) {
                puVar7 = (uint *)0x0;
              }
              if (puVar7 != (uint *)0x0) goto LAB_143e6348f;
            }
            break;
          }
          uVar13 = puVar10[0x16];
        } while (uVar13 != 0xffffffff);
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MPointToNeighborsMap.Find(edge[1]) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                       ,0x42,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_143e6348f:
    puVar7 = (uint *)0x0;
    puVar10 = puVar7;
    if (*(int *)&(this->MPointToNeighborsMap).field_0x8 !=
        *(int *)&(this->MPointToNeighborsMap).field_0x34) {
      puVar11 = *(undefined1 **)puVar2;
      if (*(undefined1 **)puVar2 == (undefined1 *)0x0) {
        puVar11 = puVar12;
      }
      uVar13 = *(uint *)(puVar11 + (ulonglong)(*(int *)puVar9 - 1U & *(uint *)pFVar15) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar13 * 0x60 + *(longlong *)&this_00->field_0x0);
          if (*puVar10 == *(uint *)pFVar15) break;
          uVar13 = puVar10[0x16];
          puVar10 = puVar7;
        } while (uVar13 != 0xffffffff);
      }
    }
    puVar14 = puVar10 + 2;
    if (puVar10 == (uint *)0x0) {
      puVar14 = puVar7;
    }
    if (puVar14[2] != puVar14[0xd]) {
      puVar10 = puVar14 + 0xe;
      if (*(uint **)(puVar14 + 0x10) != (uint *)0x0) {
        puVar10 = *(uint **)(puVar14 + 0x10);
      }
      uVar13 = puVar10[puVar14[0x12] - 1 & *(uint *)(pFVar15 + 4)];
      if (uVar13 != 0xffffffff) {
        do {
          lVar1 = *(longlong *)puVar14 + (longlong)(int)uVar13 * 0xc;
          if (*(uint *)(*(longlong *)puVar14 + (longlong)(int)uVar13 * 0xc) ==
              *(uint *)(pFVar15 + 4)) {
            if (lVar1 != 0) goto LAB_143e6358d;
            break;
          }
          uVar13 = *(uint *)(lVar1 + 4);
        } while (uVar13 != 0xffffffff);
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MPointToNeighborsMap.Find(edge[0])->Find(edge[1]) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                       ,0x43,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_143e6358d:
    puVar7 = (uint *)0x0;
    puVar10 = puVar7;
    if (*(int *)&(this->MPointToNeighborsMap).field_0x8 !=
        *(int *)&(this->MPointToNeighborsMap).field_0x34) {
      puVar12 = *(undefined1 **)puVar2;
      if (*(undefined1 **)puVar2 == (undefined1 *)0x0) {
        puVar12 = local_60;
      }
      uVar13 = *(uint *)(puVar12 + (ulonglong)(*(int *)puVar9 - 1U & *(uint *)(pFVar15 + 4)) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar13 * 0x60 + *(longlong *)&this_00->field_0x0);
          if (*puVar10 == *(uint *)(pFVar15 + 4)) break;
          uVar13 = puVar10[0x16];
          puVar10 = puVar7;
        } while (uVar13 != 0xffffffff);
      }
    }
    puVar14 = puVar10 + 2;
    if (puVar10 == (uint *)0x0) {
      puVar14 = puVar7;
    }
    if (puVar14[2] != puVar14[0xd]) {
      puVar10 = puVar14 + 0xe;
      if (*(uint **)(puVar14 + 0x10) != (uint *)0x0) {
        puVar10 = *(uint **)(puVar14 + 0x10);
      }
      uVar13 = puVar10[puVar14[0x12] - 1 & *(uint *)pFVar15];
      if (uVar13 != 0xffffffff) {
        do {
          lVar1 = *(longlong *)puVar14 + (longlong)(int)uVar13 * 0xc;
          if (*(uint *)(*(longlong *)puVar14 + (longlong)(int)uVar13 * 0xc) == *(uint *)pFVar15) {
            if (lVar1 != 0) goto LAB_143e63665;
            break;
          }
          uVar13 = *(uint *)(lVar1 + 4);
        } while (uVar13 != 0xffffffff);
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MPointToNeighborsMap.Find(edge[1])->Find(edge[0]) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SegmentMesh.cpp"
                       ,0x44,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_143e63665:
    uVar8 = (ulonglong)local_70;
    pFVar15 = pFVar15 + 8;
  } while( true );
}

