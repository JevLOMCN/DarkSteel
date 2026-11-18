// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 195

// ~TDynamicVector<unsigned_int,512> @ 143369460

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::~TDynamicVector<unsigned_int,512>
          (TDynamicVector<unsigned_int,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<unsigned_int,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> @ 143369560

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>
          (TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x1800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::FSparseOctreeCell,512> @ 143369660

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::
~TDynamicVector<UE::Geometry::FSparseOctreeCell,512>
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x6800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// operator= @ 14336a7e0

TDynamicVector<int,512> * __thiscall
UE::Geometry::TDynamicVector<int,512>::operator=
          (TDynamicVector<int,512> *this,TDynamicVector<int,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  TDynamicVector<int,512> *pTVar7;
  uint uVar8;
  longlong lVar9;
  void *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar8 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      _Dst = ::operator_new(0x800);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TDynamicVector<int,512> *)(*pcVar3)();
          return pTVar7;
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + lVar9 * 8),0x800);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDynamicVector<int,512> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (this->Blocks).ArrayNum;
      if (iVar6 == (this->Blocks).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar8 = uVar8 + 1;
      (this->Blocks).ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
    } while (lVar9 < iVar1);
  }
  return this;
}

// operator= @ 14336a9b0

TDynamicVector<UE::Math::TVector<double>,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::operator=
          (TDynamicVector<UE::Math::TVector<double>,512> *this,
          TDynamicVector<UE::Math::TVector<double>,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar7;
  uint uVar8;
  longlong lVar9;
  void *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar8 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      _Dst = ::operator_new(0x3000);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TDynamicVector<UE::Math::TVector<double>,512> *)(*pcVar3)();
          return pTVar7;
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + lVar9 * 8),0x3000);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDynamicVector<UE::Math::TVector<double>,512> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (this->Blocks).ArrayNum;
      if (iVar6 == (this->Blocks).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar8 = uVar8 + 1;
      (this->Blocks).ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
    } while (lVar9 < iVar1);
  }
  return this;
}

// operator= @ 14336ab80

TDynamicVector<UE::AnimationCore::FBoneWeights,512> * __thiscall
UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
          (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this,
          TDynamicVector<UE::AnimationCore::FBoneWeights,512> *param_1)

{
  TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *pTVar9;
  ForElementType<UE::AnimationCore::FBoneWeight> *_Dst;
  longlong lVar10;
  int *piVar11;
  void *pvVar12;
  void *_Src;
  longlong lVar13;
  uint local_res18;
  longlong local_res20;
  void *local_58;
  longlong local_50;
  
  if (this == param_1) {
    return this;
  }
  iVar7 = (param_1->Blocks).ArrayNum;
  lVar10 = (longlong)iVar7;
  Empty(this,iVar7);
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  local_res18 = 0;
  if (0 < iVar7) {
    pTVar1 = &this->Blocks;
    local_res20 = 0;
    local_50 = lVar10;
    do {
      pvVar8 = ::operator_new(0x8000);
      if (pvVar8 == (void *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)local_res18 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~local_res18 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(*pcVar4)();
          return pTVar9;
        }
        lVar13 = 0x200;
        pvVar12 = *(void **)((param_1->Blocks).AllocatorInstance.Data + local_res20 * 8);
        piVar11 = (int *)((longlong)pvVar8 + 0x3c);
        do {
          piVar11[-3] = 0;
          piVar11[-2] = 0;
          lVar13 = lVar13 + -1;
          pvVar2 = *(void **)((longlong)pvVar12 + 0x30);
          iVar7 = *(int *)((longlong)pvVar12 + 0x38);
          piVar11[-1] = iVar7;
          _Src = pvVar12;
          if (pvVar2 != (void *)0x0) {
            _Src = pvVar2;
          }
          if (iVar7 == 0) {
            *piVar11 = 0xc;
          }
          else {
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,iVar7,0,
                       (ForElementType<UE::AnimationCore::FBoneWeight> *)(piVar11 + -0xf),iVar7,
                       piVar11);
            _Dst = *(ForElementType<UE::AnimationCore::FBoneWeight> **)(piVar11 + -3);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> **)(piVar11 + -3) ==
                (ForElementType<UE::AnimationCore::FBoneWeight> *)0x0) {
              _Dst = (ForElementType<UE::AnimationCore::FBoneWeight> *)(piVar11 + -0xf);
            }
            memcpy(_Dst,_Src,(longlong)iVar7 << 2);
          }
          piVar11 = piVar11 + 0x10;
          pvVar12 = (void *)((longlong)pvVar12 + 0x40);
          lVar10 = local_50;
        } while (lVar13 != 0);
      }
      piVar11 = &(this->Blocks).ArrayMax;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      local_58 = pvVar8;
      if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)*piVar11 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar11) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar11);
      }
      local_res18 = local_res18 + 1;
      (this->Blocks).ArrayNum = iVar7 + 1;
      local_res20 = local_res20 + 1;
      *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58;
    } while (local_res20 < lVar10);
  }
  return this;
}

// AddAllocatedBlock @ 14337ccf0

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
          (TDynamicVector<unsigned_short,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x400);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14337cdb0

void __thiscall
UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(TDynamicVector<int,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x800);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14337ce70

void __thiscall
UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(TDynamicVector<float,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x800);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14337cf30

void __thiscall
UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(TDynamicVector<double,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14337cff0

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
          (TDynamicVector<UE::Math::TVector<double>,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x3000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14337d0b0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1800);
  if (local_18[0] != (undefined4 *)0x0) {
    lVar8 = 0x200;
    puVar7 = local_18[0];
    do {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(undefined4 **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14337d1a0

void __thiscall
UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
          (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  longlong lVar9;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  pvVar7 = ::operator_new(0x8000);
  local_18[0] = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    lVar9 = 0x200;
    puVar8 = (undefined4 *)((longlong)pvVar7 + 0x38);
    do {
      *(undefined8 *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xc;
      puVar8 = puVar8 + 0x10;
      lVar9 = lVar9 + -1;
      local_18[0] = pvVar7;
    } while (lVar9 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) &&
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// Empty @ 14339c080

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Empty
          (TDynamicVector<unsigned_short,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x400);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 14339c170

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Empty(TDynamicVector<int,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x800);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 14339c260

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Empty(TDynamicVector<double,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x1000);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 14339c350

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty
          (TDynamicVector<UE::Math::TVector<double>,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x3000);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 14339c440

void __thiscall
UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty
          (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this,int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar8 = 0;
  lVar11 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar11) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pvVar3 = *(void **)((this->Blocks).AllocatorInstance.Data + lVar9 * 8);
      if (pvVar3 != (void *)0x0) {
        lVar7 = 0x200;
        lVar10 = (longlong)pvVar3 + 0x8030;
        do {
          puVar1 = (undefined8 *)(lVar10 + -0x40);
          lVar10 = lVar10 + -0x40;
          lVar7 = lVar7 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            FMemory::Free((void *)*puVar1);
          }
        } while (lVar7 != 0);
        ::operator_delete(pvVar3,0x8000);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar11);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar2 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar2 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar2);
  }
  return;
}

// Fill @ 14339d0e0

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Fill(TDynamicVector<double,512> *this,double *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = (this->Blocks).ArrayNum;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 0;
      if (uVar4 < uVar1 - 1) {
        uVar6 = 0x200;
LAB_14339d134:
        lVar7 = (longlong)(int)uVar4;
        iVar3 = 2;
        do {
          lVar2 = (longlong)(int)uVar5;
          uVar5 = uVar5 + 4;
          *(double *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + lVar2 * 8)
               = *param_1;
          *(double *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + -8 +
           (longlong)iVar3 * 8) = *param_1;
          *(double *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + (longlong)iVar3 * 8)
               = *param_1;
          lVar2 = (longlong)iVar3;
          iVar3 = iVar3 + 4;
          *(double *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + 8 + lVar2 * 8) =
               *param_1;
        } while (uVar5 < uVar6 - 3);
        for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
LAB_14339d1a0:
          *(double *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
           (longlong)(int)uVar5 * 8) = *param_1;
        }
      }
      else {
        uVar6 = (this->CurBlock - (uVar1 - 1)) * 0x200 + this->CurBlockUsed;
        if (3 < uVar6) goto LAB_14339d134;
        if (uVar6 != 0) goto LAB_14339d1a0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

// InsertAt @ 1433b9f60

void __thiscall
UE::Geometry::TDynamicVector<int,512>::InsertAt
          (TDynamicVector<int,512> *this,int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar2) {
      *(int *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8)
              + (ulonglong)(param_2 & 0x1ff) * 4) = *param_1;
      return;
    }
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    uVar1 = this->CurBlock;
  }
  *(int *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
          (longlong)(int)uVar3 * 4) = *param_1;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// Resize @ 1433c6310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Resize(TDynamicVector<int,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x800);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 1433c64a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Resize(TDynamicVector<float,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x800);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 1433c6630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Resize(TDynamicVector<double,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1000);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 1433c67c0

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Resize
          (TDynamicVector<double,512> *this,uint param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = this->CurBlock * 0x200 + this->CurBlockUsed;
  Resize(this,param_1);
  if (uVar3 < param_1) {
    if (3 < param_1 - uVar3) {
      uVar4 = uVar3 + 2;
      do {
        uVar2 = uVar3 >> 9;
        uVar1 = uVar3 & 0x1ff;
        uVar3 = uVar3 + 4;
        *(double *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
         (ulonglong)uVar1 * 8) = *param_2;
        *(double *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar4 - 1 >> 9) * 8) +
         (ulonglong)(uVar4 - 1 & 0x1ff) * 8) = *param_2;
        *(double *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
         (ulonglong)(uVar4 & 0x1ff) * 8) = *param_2;
        uVar2 = uVar4 + 1;
        uVar4 = uVar4 + 4;
        *(double *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
         (ulonglong)(uVar2 & 0x1ff) * 8) = *param_2;
      } while (uVar3 < param_1 - 3);
      if (param_1 <= uVar3) {
        return;
      }
    }
    do {
      uVar2 = uVar3 & 0x1ff;
      uVar4 = uVar3 >> 9;
      uVar3 = uVar3 + 1;
      *(double *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar4 * 8) +
       (ulonglong)uVar2 * 8) = *param_2;
    } while (uVar3 < param_1);
  }
  return;
}

// Resize @ 1433c68e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Resize
          (TDynamicVector<UE::Math::TVector<double>,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x3000);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 1433c6a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
          (TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1800);
        if (local_28[0] == (undefined4 *)0x0) {
          local_28[0] = (undefined4 *)0x0;
        }
        else {
          lVar6 = 0x200;
          puVar8 = local_28[0];
          do {
            *puVar8 = 0xffffffff;
            puVar8 = puVar8 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(undefined4 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 1433c6c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
          (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x8000);
        if (local_28[0] == (void *)0x0) {
          local_28[0] = (void *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = (undefined4 *)((longlong)local_28[0] + 0x38);
          do {
            *(undefined8 *)(puVar6 + -2) = 0;
            *puVar6 = 0;
            puVar6[1] = 0xc;
            puVar6 = puVar6 + 0x10;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// TruncateBlocks @ 1433db340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<int,512>::TruncateBlocks
          (TDynamicVector<int,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1433db540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<float,512>::TruncateBlocks
          (TDynamicVector<float,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1433db740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<double,512>::TruncateBlocks
          (TDynamicVector<double,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1433db940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TruncateBlocks
          (TDynamicVector<UE::Math::TVector<double>,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x3000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1433dbb40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1433dbd40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TruncateBlocks
          (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this,int param_1,
          EAllowShrinking param_2)

{
  TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar7 = (this->Blocks).ArrayNum;
  if (0 < iVar7 - param_1) {
    pTVar1 = &this->Blocks;
    lVar11 = (longlong)param_1 * 8;
    uVar9 = param_1;
    if (param_1 < iVar7) {
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
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
        pvVar3 = *(void **)((pTVar1->AllocatorInstance).Data + lVar11);
        if (pvVar3 != (void *)0x0) {
          lVar8 = 0x200;
          lVar10 = (longlong)pvVar3 + 0x8030;
          do {
            puVar2 = (undefined8 *)(lVar10 + -0x40);
            lVar10 = lVar10 + -0x40;
            lVar8 = lVar8 + -1;
            if ((void *)*puVar2 != (void *)0x0) {
              FMemory::Free((void *)*puVar2);
            }
          } while (lVar8 != 0);
          ::operator_delete(pvVar3,0x8000);
        }
        uVar6 = 0;
        if ((int)uVar9 < (this->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
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
        uVar9 = uVar9 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar11) = 0;
        iVar7 = (this->Blocks).ArrayNum;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < iVar7);
    }
    uVar9 = iVar7 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar9 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8;
      iVar7 = ((this->Blocks).ArrayNum - uVar9) - param_1;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar9 * 8,(longlong)iVar7 << 3);
      }
      iVar7 = (this->Blocks).ArrayNum - uVar9;
      (this->Blocks).ArrayNum = iVar7;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,iVar7,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 1434308c0

void __cdecl
`UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,1>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001434308c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x400);
  return;
}

// <lambda_invoker_cdecl> @ 1434308e0

void __cdecl
`UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001434308e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x800);
  return;
}

// <lambda_invoker_cdecl> @ 143430900

void __cdecl
`UE::Geometry::TDynamicVector<float,512>::Serialize<1,1>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x800);
  return;
}

// <lambda_invoker_cdecl> @ 143430920

void __cdecl
`UE::Geometry::TDynamicVector<double,512>::Serialize<1,1>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,double *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1000);
  return;
}

// <lambda_invoker_cdecl> @ 143430940

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector2<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1000);
  return;
}

// <lambda_invoker_cdecl> @ 143430960

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,1>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1800);
  return;
}

// <lambda_invoker_cdecl> @ 143430980

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x3000);
  return;
}

// <lambda_invoker_cdecl> @ 1434309a0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,1>'::__l5::
<lambda_1>::<lambda_invoker_cdecl>(FArchive *param_1,FEdge *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001434309a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x2000);
  return;
}

// <lambda_invoker_cdecl> @ 1434309c0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,FIndex3i *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001434309c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1800);
  return;
}

// <lambda_invoker_cdecl> @ 1434309e0

void __cdecl
`UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001434309e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x400);
  return;
}

// <lambda_invoker_cdecl> @ 143430a00

void __cdecl
`UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x800);
  return;
}

// <lambda_invoker_cdecl> @ 143430a20

void __cdecl
`UE::Geometry::TDynamicVector<float,512>::Serialize<1,0>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430a29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x800);
  return;
}

// <lambda_invoker_cdecl> @ 143430a40

void __cdecl
`UE::Geometry::TDynamicVector<double,512>::Serialize<1,0>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,double *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1000);
  return;
}

// <lambda_invoker_cdecl> @ 143430a60

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector2<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1000);
  return;
}

// <lambda_invoker_cdecl> @ 143430a80

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1800);
  return;
}

// <lambda_invoker_cdecl> @ 143430aa0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x3000);
  return;
}

// <lambda_invoker_cdecl> @ 143430ac0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,0>'::__l5::
<lambda_1>::<lambda_invoker_cdecl>(FArchive *param_1,FEdge *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x2000);
  return;
}

// <lambda_invoker_cdecl> @ 143430ae0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,FIndex3i *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1800);
  return;
}

// <lambda_invoker_cdecl> @ 143430b00

void __cdecl
`UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<0,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430b09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x400);
  return;
}

// <lambda_invoker_cdecl> @ 143430b20

void __cdecl
`UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x800);
  return;
}

// <lambda_invoker_cdecl> @ 143430b40

void __cdecl
`UE::Geometry::TDynamicVector<float,512>::Serialize<0,0>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x800);
  return;
}

// <lambda_invoker_cdecl> @ 143430b60

void __cdecl
`UE::Geometry::TDynamicVector<double,512>::Serialize<0,0>'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FArchive *param_1,double *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1000);
  return;
}

// <lambda_invoker_cdecl> @ 143430b80

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<0,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector2<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1000);
  return;
}

// <lambda_invoker_cdecl> @ 143430ba0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<0,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430ba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1800);
  return;
}

// <lambda_invoker_cdecl> @ 143430bc0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x3000);
  return;
}

// <lambda_invoker_cdecl> @ 143430be0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<0,0>'::__l5::
<lambda_1>::<lambda_invoker_cdecl>(FArchive *param_1,FEdge *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x2000);
  return;
}

// <lambda_invoker_cdecl> @ 143430c00

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<0,0>'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(FArchive *param_1,FIndex3i *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x1800);
  return;
}

// <lambda_invoker_cdecl> @ 143430c20

void __cdecl
`UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Serialize<0,0>'::__l5::
<lambda_1>::<lambda_invoker_cdecl>(FArchive *param_1,FBoneWeights *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143430c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x8000);
  return;
}

// <lambda_invoker_cdecl> @ 143430cc0

void __cdecl
`UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,1>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,ushort *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143430d50

void __cdecl
`UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143430de0

void __cdecl
`UE::Geometry::TDynamicVector<float,512>::Serialize<1,1>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      *param_2 = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143430e70

void __cdecl
`UE::Geometry::TDynamicVector<double,512>::Serialize<1,1>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    pdVar1 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
      }
    }
    else {
      *param_2 = *pdVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143430f00

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector2<float> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  
  lVar3 = 0x200;
  do {
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      (param_2->field0_0x0)._s_0.X = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar1 = &(param_2->field0_0x0)._s_0.Y;
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
      }
    }
    else {
      *pfVar1 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143430fd0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,1>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<float> *param_2)

{
  TVector<float>_u_0_s_0 *pTVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  
  pfVar5 = &(param_2->field0_0x0)._s_0.Z;
  lVar4 = 0x200;
  do {
    pTVar1 = (TVector<float>_u_0_s_0 *)(pfVar5 + -2);
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
      }
    }
    else {
      pTVar1->X = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = pfVar5 + -1;
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
      }
    }
    else {
      *pfVar5 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar5 = pfVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 1434310e0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<double> *param_2)

{
  undefined1 local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 143431100

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,1>'::__l5::
<lambda_2>::<lambda_invoker_cdecl>(FArchive *param_1,FEdge *param_2)

{
  longlong lVar1;
  
  lVar1 = 0x200;
  do {
    UE::Geometry::operator<<(param_1,&param_2->Vert);
    UE::Geometry::operator<<(param_1,&param_2->Tri);
    param_2 = param_2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431160

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,FIndex3i *param_2)

{
  FIndex3i_u_0_s_0 *pFVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = &(param_2->field0_0x0)._s_0.C;
  lVar4 = 0x200;
  do {
    pFVar1 = (FIndex3i_u_0_s_0 *)(piVar5 + -2);
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
      }
    }
    else {
      pFVar1->A = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar3 = piVar5 + -1;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
      }
    }
    else {
      *piVar3 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar5 = piVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431270

void __cdecl
`UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,ushort *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431300

void __cdecl
`UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431390

void __cdecl
`UE::Geometry::TDynamicVector<float,512>::Serialize<1,0>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      *param_2 = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431420

void __cdecl
`UE::Geometry::TDynamicVector<double,512>::Serialize<1,0>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    pdVar1 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
      }
    }
    else {
      *param_2 = *pdVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 1434314b0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector2<float> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  
  lVar3 = 0x200;
  do {
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      (param_2->field0_0x0)._s_0.X = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar1 = &(param_2->field0_0x0)._s_0.Y;
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
      }
    }
    else {
      *pfVar1 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431580

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<float> *param_2)

{
  TVector<float>_u_0_s_0 *pTVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  
  pfVar5 = &(param_2->field0_0x0)._s_0.Z;
  lVar4 = 0x200;
  do {
    pTVar1 = (TVector<float>_u_0_s_0 *)(pfVar5 + -2);
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
      }
    }
    else {
      pTVar1->X = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = pfVar5 + -1;
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
      }
    }
    else {
      *pfVar5 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar5 = pfVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431690

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<double> *param_2)

{
  undefined1 local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 1434316b0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,0>'::__l5::
<lambda_2>::<lambda_invoker_cdecl>(FArchive *param_1,FEdge *param_2)

{
  longlong lVar1;
  
  lVar1 = 0x200;
  do {
    UE::Geometry::operator<<(param_1,&param_2->Vert);
    UE::Geometry::operator<<(param_1,&param_2->Tri);
    param_2 = param_2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431710

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,FIndex3i *param_2)

{
  FIndex3i_u_0_s_0 *pFVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = &(param_2->field0_0x0)._s_0.C;
  lVar4 = 0x200;
  do {
    pFVar1 = (FIndex3i_u_0_s_0 *)(piVar5 + -2);
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
      }
    }
    else {
      pFVar1->A = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar3 = piVar5 + -1;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
      }
    }
    else {
      *piVar3 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar5 = piVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431820

void __cdecl
`UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<0,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,ushort *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 1434318b0

void __cdecl
`UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431940

void __cdecl
`UE::Geometry::TDynamicVector<float,512>::Serialize<0,0>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      *param_2 = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 1434319d0

void __cdecl
`UE::Geometry::TDynamicVector<double,512>::Serialize<0,0>'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FArchive *param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  
  lVar2 = 0x200;
  do {
    pdVar1 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
      }
    }
    else {
      *param_2 = *pdVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431a60

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<0,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector2<float> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  
  lVar3 = 0x200;
  do {
    pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
      }
    }
    else {
      (param_2->field0_0x0)._s_0.X = *pfVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar1 = &(param_2->field0_0x0)._s_0.Y;
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
      }
    }
    else {
      *pfVar1 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431b30

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<0,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<float> *param_2)

{
  TVector<float>_u_0_s_0 *pTVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  
  pfVar5 = &(param_2->field0_0x0)._s_0.Z;
  lVar4 = 0x200;
  do {
    pTVar1 = (TVector<float>_u_0_s_0 *)(pfVar5 + -2);
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
      }
    }
    else {
      pTVar1->X = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = pfVar5 + -1;
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
      }
    }
    else {
      *pfVar5 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar5 = pfVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431c40

void __cdecl
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,TVector<double> *param_2)

{
  undefined1 local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 143431c60

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<0,0>'::__l5::
<lambda_2>::<lambda_invoker_cdecl>(FArchive *param_1,FEdge *param_2)

{
  longlong lVar1;
  
  lVar1 = 0x200;
  do {
    UE::Geometry::operator<<(param_1,&param_2->Vert);
    UE::Geometry::operator<<(param_1,&param_2->Tri);
    param_2 = param_2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431cc0

void __cdecl
`UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<0,0>'::__l5::<lambda_2>::
<lambda_invoker_cdecl>(FArchive *param_1,FIndex3i *param_2)

{
  FIndex3i_u_0_s_0 *pFVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = &(param_2->field0_0x0)._s_0.C;
  lVar4 = 0x200;
  do {
    pFVar1 = (FIndex3i_u_0_s_0 *)(piVar5 + -2);
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
      }
    }
    else {
      pFVar1->A = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar3 = piVar5 + -1;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
      }
    }
    else {
      *piVar3 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar5 = piVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// <lambda_invoker_cdecl> @ 143431dd0

void __cdecl
`UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Serialize<0,0>'::__l5::
<lambda_2>::<lambda_invoker_cdecl>(FArchive *param_1,FBoneWeights *param_2)

{
  longlong lVar1;
  
  lVar1 = 0x200;
  do {
    TArrayPrivateFriend::
    Serialize<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&param_2->BoneWeights);
    param_2 = param_2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// Add<512> @ 143433490

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Add<512>
          (TDynamicVector<unsigned_short,512> *this,TDynamicVector<unsigned_short,512> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar3 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar3 + iVar4);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = uVar6 + iVar4;
      uVar2 = uVar6 >> 9;
      uVar5 = uVar6 & 0x1ff;
      uVar6 = uVar6 + 1;
      *(undefined2 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 2) =
           *(undefined2 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
            (ulonglong)uVar5 * 2);
    } while (uVar6 < uVar3);
  }
  return;
}

// Add<512> @ 143433540

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Add<512>
          (TDynamicVector<int,512> *this,TDynamicVector<int,512> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar3 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar3 + iVar4);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = uVar6 + iVar4;
      uVar2 = uVar6 >> 9;
      uVar5 = uVar6 & 0x1ff;
      uVar6 = uVar6 + 1;
      *(undefined4 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
            (ulonglong)uVar5 * 4);
    } while (uVar6 < uVar3);
  }
  return;
}

// Add<512> @ 1434335e0

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Add<512>
          (TDynamicVector<float,512> *this,TDynamicVector<float,512> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar3 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar3 + iVar4);
  uVar9 = 0;
  if (3 < uVar3) {
    uVar2 = iVar4 + 2;
    do {
      uVar1 = uVar9 >> 9;
      uVar7 = uVar9 & 0x1ff;
      uVar9 = uVar9 + 4;
      uVar8 = (-1 - iVar4) + uVar2;
      *(undefined4 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 - 2 >> 9) * 8) +
       (ulonglong)(uVar2 - 2 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
            (ulonglong)uVar7 * 4);
      *(undefined4 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 - 1 >> 9) * 8) +
       (ulonglong)(uVar2 - 1 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) +
            (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar8 = uVar2 & 0x1ff;
      uVar7 = uVar2 - iVar4;
      uVar1 = uVar2 >> 9;
      uVar5 = (1 - iVar4) + uVar2;
      uVar6 = uVar2 + 1;
      uVar2 = uVar2 + 4;
      *(undefined4 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
       (ulonglong)uVar8 * 4) =
           *(undefined4 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
            (ulonglong)(uVar7 & 0x1ff) * 4);
      *(undefined4 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
       (ulonglong)(uVar6 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
            (ulonglong)(uVar5 & 0x1ff) * 4);
    } while (uVar9 < uVar3 - 3);
  }
  for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
    *(undefined4 *)
     (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 + iVar4 >> 9) * 8) +
     (ulonglong)(uVar9 + iVar4 & 0x1ff) * 4) =
         *(undefined4 *)
          (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) +
          (ulonglong)(uVar9 & 0x1ff) * 4);
  }
  return;
}

// Add<512> @ 1434337b0

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Add<512>
          (TDynamicVector<double,512> *this,TDynamicVector<double,512> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar3 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar3 + iVar4);
  uVar9 = 0;
  if (3 < uVar3) {
    uVar2 = iVar4 + 2;
    do {
      uVar1 = uVar9 >> 9;
      uVar7 = uVar9 & 0x1ff;
      uVar9 = uVar9 + 4;
      uVar8 = (-1 - iVar4) + uVar2;
      *(undefined8 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 - 2 >> 9) * 8) +
       (ulonglong)(uVar2 - 2 & 0x1ff) * 8) =
           *(undefined8 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
            (ulonglong)uVar7 * 8);
      *(undefined8 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 - 1 >> 9) * 8) +
       (ulonglong)(uVar2 - 1 & 0x1ff) * 8) =
           *(undefined8 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) +
            (ulonglong)(uVar8 & 0x1ff) * 8);
      uVar8 = uVar2 & 0x1ff;
      uVar7 = uVar2 - iVar4;
      uVar1 = uVar2 >> 9;
      uVar5 = (1 - iVar4) + uVar2;
      uVar6 = uVar2 + 1;
      uVar2 = uVar2 + 4;
      *(undefined8 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
       (ulonglong)uVar8 * 8) =
           *(undefined8 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
            (ulonglong)(uVar7 & 0x1ff) * 8);
      *(undefined8 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
       (ulonglong)(uVar6 & 0x1ff) * 8) =
           *(undefined8 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
            (ulonglong)(uVar5 & 0x1ff) * 8);
    } while (uVar9 < uVar3 - 3);
  }
  for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
    *(undefined8 *)
     (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 + iVar4 >> 9) * 8) +
     (ulonglong)(uVar9 + iVar4 & 0x1ff) * 8) =
         *(undefined8 *)
          (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) +
          (ulonglong)(uVar9 & 0x1ff) * 8);
  }
  return;
}

// Add<512> @ 143433980

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Add<512>
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,
          TDynamicVector<UE::Math::TVector2<float>,512> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar3 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar3 + iVar4);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = uVar6 + iVar4;
      uVar2 = uVar6 >> 9;
      uVar5 = uVar6 & 0x1ff;
      uVar6 = uVar6 + 1;
      *(undefined8 *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 8) =
           *(undefined8 *)
            (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
            (ulonglong)uVar5 * 8);
    } while (uVar6 < uVar3);
  }
  return;
}

// Add<512> @ 143433a20

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Add<512>
          (TDynamicVector<UE::Math::TVector<float>,512> *this,
          TDynamicVector<UE::Math::TVector<float>,512> *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar7 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar7 + iVar8);
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      uVar5 = uVar9 & 0x1ff;
      lVar3 = *(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      uVar1 = uVar9 + iVar8;
      uVar2 = *(undefined4 *)(lVar3 + (ulonglong)uVar5 * 0xc + 8);
      uVar9 = uVar9 + 1;
      uVar6 = (ulonglong)(uVar1 & 0x1ff);
      lVar4 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
      *(undefined8 *)(lVar4 + uVar6 * 0xc) = *(undefined8 *)(lVar3 + (ulonglong)uVar5 * 0xc);
      *(undefined4 *)(lVar4 + 8 + uVar6 * 0xc) = uVar2;
    } while (uVar9 < uVar7);
  }
  return;
}

// Add<512> @ 143433ae0

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Add<512>
          (TDynamicVector<UE::Math::TVector<double>,512> *this,
          TDynamicVector<UE::Math::TVector<double>,512> *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar8 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar8 + iVar9);
  uVar10 = 0;
  if (uVar8 != 0) {
    do {
      lVar5 = *(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8)
      ;
      puVar2 = (undefined8 *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
      uVar6 = puVar2[1];
      uVar4 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
      uVar1 = uVar10 + iVar9;
      uVar10 = uVar10 + 1;
      uVar7 = (ulonglong)(uVar1 & 0x1ff);
      lVar5 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
      puVar3 = (undefined8 *)(lVar5 + uVar7 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18) = uVar4;
    } while (uVar10 < uVar8);
  }
  return;
}

// Add<512> @ 143433b90

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Add<512>
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,
          TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar7 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar7 + iVar8);
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      uVar6 = uVar9 & 0x1ff;
      uVar4 = uVar9 >> 9;
      uVar1 = uVar9 + iVar8;
      uVar9 = uVar9 + 1;
      puVar2 = (undefined8 *)
               (*(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)uVar4 * 8) +
               (ulonglong)uVar6 * 0x10);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)
               (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
               (ulonglong)(uVar1 & 0x1ff) * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
    } while (uVar9 < uVar7);
  }
  return;
}

// Add<512> @ 143433c40

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Add<512>
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = this->CurBlock * 0x200 + this->CurBlockUsed;
  uVar7 = param_1->CurBlock * 0x200 + param_1->CurBlockUsed;
  Resize(this,uVar7 + iVar8);
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      uVar5 = uVar9 & 0x1ff;
      lVar3 = *(longlong *)((param_1->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      uVar1 = uVar9 + iVar8;
      uVar2 = *(undefined4 *)(lVar3 + (ulonglong)uVar5 * 0xc + 8);
      uVar9 = uVar9 + 1;
      uVar6 = (ulonglong)(uVar1 & 0x1ff);
      lVar4 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
      *(undefined8 *)(lVar4 + uVar6 * 0xc) = *(undefined8 *)(lVar3 + (ulonglong)uVar5 * 0xc);
      *(undefined4 *)(lVar4 + 8 + uVar6 * 0xc) = uVar2;
    } while (uVar9 < uVar7);
  }
  return;
}

// Serialize<1,1> @ 14343bdd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,1>
          (TDynamicVector<unsigned_short,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar18,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 2,0,(longlong)(int)uVar18 * 2);
    }
    FVar17.Data = local_90.Data;
    uVar18 = uVar16;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,1>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(ushort *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x400;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < local_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_90.Data + (longlong)(int)uVar16 * 2;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined2 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 2) = *(undefined2 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14343c5bd;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343c5bd;
  }
  uVar18 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar16 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar16 = uVar13;
  }
  this->CurBlock = uVar16;
  uVar16 = uVar13;
  if (local_res10[0] != 0) {
    uVar16 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_14343c1a6;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343c1a6:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar17.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 2);
        FVar17.Data = FVar17.Data + 0x400;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] * 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar16), uVar16 != 0)) {
      do {
        local_80 = ::operator_new(0x400);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_80,FVar17.Data,uVar14 * 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x400;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 * 2);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    Empty(this,uVar16);
    if (uVar16 != 0) {
      do {
        local_78 = ::operator_new(0x400);
        uVar16 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar16 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar16 * 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14343c5bd:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343c600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>
          (TDynamicVector<int,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar18,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar18 << 2);
    }
    FVar17.Data = local_90.Data;
    uVar18 = uVar16;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(int *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x800;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < local_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_90.Data + (longlong)(int)uVar16 * 4;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined4 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14343cdee;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343cdee;
  }
  uVar18 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar16 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar16 = uVar13;
  }
  this->CurBlock = uVar16;
  uVar16 = uVar13;
  if (local_res10[0] != 0) {
    uVar16 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_14343c9d4;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343c9d4:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar17.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 4);
        FVar17.Data = FVar17.Data + 0x800;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar16), uVar16 != 0)) {
      do {
        local_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_80,FVar17.Data,uVar14 << 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x800;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 2);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    Empty(this,uVar16);
    if (uVar16 != 0) {
      do {
        local_78 = ::operator_new(0x800);
        uVar16 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar16 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar16 << 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14343cdee:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343ce30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Serialize<1,1>
          (TDynamicVector<float,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar19 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar19 << 2);
    }
    FVar18.Data = local_90.Data;
    uVar19 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<float,512>::Serialize<1,1>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(float *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0x800;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_res18[0]);
    }
    uVar19 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar19 & 0x1ff) != 0) + (uVar19 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar19 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_88[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18.Data = local_90.Data;
        lVar15 = (longlong)(int)uVar17;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined4 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)(FVar18.Data + lVar15 * 4);
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar19);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14343d5fe;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343d5fe;
  }
  uVar19 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_14343d201;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343d201:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar20 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_70,local_res10[0],Default)
    ;
    uVar16 = (ulonglong)local_res10[0];
    FVar18.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar16 < 0x200) {
          local_48 = uVar16;
        }
        uVar10 = uVar13;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar18.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               local_48 * 4);
        FVar18.Data = FVar18.Data + 0x800;
        uVar16 = uVar16 - 0x200;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar16 < 0x200) {
          uVar14 = uVar16;
        }
        memcpy(local_80,FVar18.Data,uVar14 << 2);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar18.Data = FVar18.Data + 0x800;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar16 = uVar16 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
                   (ulonglong)uVar13 << 2);
        uVar19 = uVar19 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar19 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_78 = ::operator_new(0x800);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar17 << 2);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
LAB_14343d5fe:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343d640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Serialize<1,1>
          (TDynamicVector<double,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<double,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar19 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 8,0,(longlong)(int)uVar19 << 3);
    }
    FVar18.Data = local_90.Data;
    uVar19 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<double,512>::Serialize<1,1>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(double *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0x1000;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_res18[0]);
    }
    uVar19 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar19 & 0x1ff) != 0) + (uVar19 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar19 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_88[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18.Data = local_90.Data;
        lVar15 = (longlong)(int)uVar17;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)(FVar18.Data + lVar15 * 8);
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar19);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14343de0e;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343de0e;
  }
  uVar19 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_14343da12;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343da12:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar20 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar16 = (ulonglong)local_res10[0];
    FVar18.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar16 < 0x200) {
          local_48 = uVar16;
        }
        uVar10 = uVar13;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar18.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               local_48 * 8);
        FVar18.Data = FVar18.Data + 0x1000;
        uVar16 = uVar16 - 0x200;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_80 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar16 < 0x200) {
          uVar14 = uVar16;
        }
        memcpy(local_80,FVar18.Data,uVar14 << 3);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar18.Data = FVar18.Data + 0x1000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar16 = uVar16 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
                   (ulonglong)uVar13 << 3);
        uVar19 = uVar19 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar19 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_78 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar17 << 3);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
LAB_14343de0e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343de50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  void *local_90;
  void *local_88;
  ForAnyElementType local_80;
  int local_78 [2];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res18[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_res18[0] << 9,&local_80,local_78,local_78 + 1);
    }
    FVar16.Data = local_80.Data;
    uVar18 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector2<float> *)FVar16.Data);
        uVar18 = uVar18 + 1;
        FVar16.Data = FVar16.Data + 0x1000;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_78[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_80.Data + (longlong)(int)uVar17 * 8;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar18);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    goto LAB_14343e62e;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343e62e;
  }
  uVar18 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar17;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_14343e215;
  }
  else {
    uVar17 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343e215:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar16.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 8);
        FVar16.Data = FVar16.Data + 0x1000;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_90 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_90,FVar16.Data,uVar14 << 3);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar16.Data = FVar16.Data + 0x1000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_90;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 3);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_88 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,(ulonglong)uVar17 << 3);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14343e62e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343e670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,1>
          (TDynamicVector<UE::Math::TVector<float>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  FScriptContainerElement *local_68;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res20[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_res20[0] << 9,&local_78,local_70,local_70 + 1);
    }
    FVar17.Data = local_78.Data;
    uVar20 = uVar19;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,1>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector<float> *)FVar17.Data);
        uVar20 = uVar20 + 1;
        FVar17.Data = FVar17.Data + 0x1800;
      } while ((int)uVar20 < (int)local_res20[0]);
    }
    uVar20 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar20 & 0x1ff) != 0) + (uVar20 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar20 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar19 < local_70[0]) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = local_78.Data + (longlong)(int)uVar19 * 0xc;
        uVar16 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar16 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar5 = *(longlong *)
                 ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        *(undefined8 *)(lVar5 + (longlong)(int)uVar16 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar5 + 8 + (longlong)(int)uVar16 * 0xc) = uVar3;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar19 < uVar20);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    goto LAB_14343ee67;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343ee67;
  }
  uVar20 = 0;
  bVar10 = true;
  uVar16 = 0;
  uVar19 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar19 = uVar16;
  }
  this->CurBlock = uVar19;
  uVar19 = uVar16;
  if (local_res18[0] != 0) {
    uVar19 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar19;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    local_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar15 = param_1->field_0x28;
    uVar19 = local_90[0];
    if ((bVar15 & 1) != 0) goto LAB_14343ea4b;
  }
  else {
    uVar19 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar15 = param_1->field_0x28;
LAB_14343ea4b:
    bVar10 = uVar19 != 0;
  }
  uVar19 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar21 = (ulonglong)uVar19;
  if (bVar10) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar17.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar19 != 0)) {
      do {
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar12 = uVar16;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar17.Data = FVar17.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        uVar20 = uVar20 + 1;
        local_68 = FVar17.Data;
      } while (uVar20 < uVar19);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = local_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0xc,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar19), uVar19 != 0)) {
      do {
        local_88 = ::operator_new(0x1800);
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(local_88,FVar17.Data,uVar14 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x1800;
        (this->Blocks).ArrayNum = iVar11 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_88;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar15 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar16 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar16 = local_res18[0];
        }
        uVar12 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar16 * 0xc);
        uVar20 = uVar20 + 1;
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar20 < uVar19);
    }
  }
  else {
    Empty(this,uVar19);
    if (uVar19 != 0) {
      do {
        local_80 = ::operator_new(0x1800);
        uVar19 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar19 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
LAB_14343ee67:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343eea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>
          (TDynamicVector<UE::Math::TVector<double>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  longlong lVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  code *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  FScriptContainerElement *local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar5 = *(longlong **)&param_1->field_0x8;
    uVar20 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5::
              <lambda_2>::<lambda_invoker_cdecl>;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if (0x3eb < (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20)) {
      pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5
                ::<lambda_1>::<lambda_invoker_cdecl>;
    }
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res20[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res20[0] << 9,&local_78,local_70,local_70 + 1);
    }
    FVar21.Data = local_78.Data;
    uVar22 = uVar20;
    if (0 < (int)local_res20[0]) {
      do {
        (*pcVar18)(param_1,FVar21.Data);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar17 = 0;
        if ((int)uVar20 < local_70[0]) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        FVar21.Data = local_78.Data;
        lVar14 = (longlong)(int)uVar20;
        uVar17 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar17 = 0;
        }
        uVar20 = uVar20 + 1;
        pFVar3 = FVar21.Data + lVar14 * 0x18;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        uVar4 = *(undefined8 *)(FVar21.Data + lVar14 * 0x18 + 0x10);
        lVar14 = *(longlong *)
                  ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar14 + (longlong)(int)uVar17 * 0x18);
        *puVar2 = *(undefined8 *)pFVar3;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar14 + 0x10 + (longlong)(int)uVar17 * 0x18) = uVar4;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar20 < uVar22);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    goto LAB_14343f6af;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14343f6af;
  }
  uVar22 = 0;
  bVar10 = true;
  uVar17 = 0;
  uVar20 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar20 = uVar17;
  }
  this->CurBlock = uVar20;
  uVar20 = uVar17;
  if (local_res18[0] != 0) {
    uVar20 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar20;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    local_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar20 = local_90[0];
    if ((bVar16 & 1) != 0) goto LAB_14343f29c;
  }
  else {
    uVar20 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_14343f29c:
    bVar10 = uVar20 != 0;
  }
  uVar20 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar23 = (ulonglong)uVar20;
  if (bVar10) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar19 = (ulonglong)local_res18[0];
    FVar21.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar20 != 0)) {
      do {
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        uVar12 = uVar17;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        memcpy(FVar21.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
               uVar15 * 0x18);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar19 = uVar19 - 0x200;
        uVar22 = uVar22 + 1;
        local_68 = FVar21.Data;
      } while (uVar22 < uVar20);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = local_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0x18,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar20), uVar20 != 0)) {
      do {
        local_88 = ::operator_new(0x3000);
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        memcpy(local_88,FVar21.Data,uVar15 * 0x18);
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar21.Data = FVar21.Data + 0x3000;
        (this->Blocks).ArrayNum = iVar11 + 1;
        uVar19 = uVar19 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_88;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar20 != 0) {
      do {
        uVar17 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar17 = local_res18[0];
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
                   (ulonglong)uVar17 * 0x18);
        uVar22 = uVar22 + 1;
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar22 < uVar20);
    }
  }
  else {
    Empty(this,uVar20);
    if (uVar20 != 0) {
      do {
        local_80 = ::operator_new(0x3000);
        uVar20 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar20 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar20 * 0x18);
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
LAB_14343f6af:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343f6f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,1>
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  byte bVar14;
  void *pvVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  FScriptContainerElement *local_78;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar23 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,local_res20[0] << 9,Default);
    FVar16.Data = local_70.AllocatorInstance.Data;
    uVar22 = uVar23;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,1>'::__l5
        ::<lambda_1>::<lambda_invoker_cdecl>(param_1,(FEdge *)FVar16.Data);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar19 = 0;
        if ((int)uVar23 < local_70.ArrayNum) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar21 = local_70.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
        uVar19 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar19 = 0;
        }
        uVar23 = uVar23 + 1;
        uVar5 = *(undefined8 *)(pFVar21 + 8);
        puVar12 = (undefined8 *)
                  (*(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
                  (longlong)(int)uVar19 * 0x10);
        *puVar12 = *(undefined8 *)&pFVar21->field_0x0;
        puVar12[1] = uVar5;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar23 < uVar22);
    }
    if ((FEdge *)local_70.AllocatorInstance.Data != (FEdge *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    goto LAB_14343ff0e;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      TruncateBlocks(this,1,No);
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      if ((this->Blocks).ArrayNum == 0) {
        AddAllocatedBlock(this);
      }
    }
    goto LAB_14343ff0e;
  }
  pvVar15 = (void *)0x0;
  bVar8 = true;
  uVar22 = 0;
  uVar23 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar23 = uVar22;
  }
  this->CurBlock = uVar23;
  uVar23 = uVar22;
  if (local_res18[0] != 0) {
    uVar23 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar23;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar14 = param_1->field_0x28;
    uVar23 = local_90[0];
    if ((bVar14 & 1) != 0) goto LAB_14343fa8f;
  }
  else {
    uVar23 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar14 = param_1->field_0x28;
LAB_14343fa8f:
    bVar8 = uVar23 != 0;
  }
  uVar23 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar24 = (ulonglong)uVar23;
  if (bVar8) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar16.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar11 = pvVar15, uVar23 != 0)) {
      do {
        uVar19 = (uint)pvVar11;
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        uVar20 = uVar22;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               uVar17 << 4);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar18 = uVar18 - 0x200;
        pvVar11 = (void *)(ulonglong)(uVar19 + 1);
        local_78 = FVar16.Data;
      } while (uVar19 + 1 < uVar23);
    }
    FVar10 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    FVar10 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    FVar6.Number = uStack_4c;
    FVar6.ComparisonIndex.Value = local_50.Value;
    uStack_44 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_48;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] << 4,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar23), uVar23 != 0)) {
      do {
        pvVar11 = ::operator_new(0x2000);
        local_88 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            local_88 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        memcpy(local_88,FVar16.Data,uVar17 << 4);
        pFVar21 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar21 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar16.Data = FVar16.Data + 0x2000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar14 & 1) == 0) {
    if (uVar23 != 0) {
      do {
        uVar22 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar22 = local_res18[0];
        }
        uVar20 = (uint)pvVar15;
        uVar19 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar22 << 4);
        pvVar15 = (void *)(ulonglong)(uVar20 + 1);
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar20 + 1 < uVar23);
    }
  }
  else {
    Empty(this,uVar23);
    if (uVar23 != 0) {
      do {
        pvVar11 = ::operator_new(0x2000);
        local_80 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            local_80 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar23 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar23 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar23 << 4);
        pFVar21 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar21 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_14343ff0e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,1> @ 14343ff60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  void *pvVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  FScriptContainerElement *local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar10 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,local_res20[0] << 9,Default);
    FVar22.Data = local_70.AllocatorInstance.Data;
    uVar23 = uVar19;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>'::__l5::<lambda_1>
        ::<lambda_invoker_cdecl>(param_1,(FIndex3i *)FVar22.Data);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)local_res20[0]);
    }
    uVar23 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar23 & 0x1ff) != 0) + (uVar23 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar23 != 0) {
      do {
        uVar20 = 0;
        if ((int)uVar19 < local_70.ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = local_70.AllocatorInstance.Data + (longlong)(int)uVar19 * 0xc;
        uVar20 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar20 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar15 = *(longlong *)
                  ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        *(undefined8 *)(lVar15 + (longlong)(int)uVar20 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar15 + 8 + (longlong)(int)uVar20 * 0xc) = uVar3;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar19 < uVar23);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    goto LAB_143440797;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      TruncateBlocks(this,1,No);
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      if ((this->Blocks).ArrayNum == 0) {
        AddAllocatedBlock(this);
      }
    }
    goto LAB_143440797;
  }
  pvVar17 = (void *)0x0;
  bVar9 = true;
  uVar23 = 0;
  uVar19 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar19 = uVar23;
  }
  this->CurBlock = uVar19;
  uVar19 = uVar23;
  if (local_res18[0] != 0) {
    uVar19 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  this->CurBlockUsed = uVar19;
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar19 = local_90[0];
    if ((bVar16 & 1) != 0) goto LAB_143440310;
  }
  else {
    uVar19 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_143440310:
    bVar9 = uVar19 != 0;
  }
  uVar19 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar24 = (ulonglong)uVar19;
  if (bVar9) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar22.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar12 = pvVar17, uVar19 != 0)) {
      do {
        uVar20 = (uint)pvVar12;
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar21 = uVar23;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(FVar22.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        pvVar12 = (void *)(ulonglong)(uVar20 + 1);
        local_78 = FVar22.Data;
      } while (uVar20 + 1 < uVar19);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    uStack_44 = 0;
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = local_48;
    FVar7.Number = uStack_4c;
    FVar7.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0xc,FVar8,FVar7,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar19), uVar19 != 0)) {
      do {
        pvVar12 = ::operator_new(0x1800);
        local_88 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            local_88 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(local_88,FVar22.Data,uVar14 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Blocks).ArrayNum;
        if (iVar10 == (this->Blocks).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar22.Data = FVar22.Data + 0x1800;
        (this->Blocks).ArrayNum = iVar10 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar23 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar23 = local_res18[0];
        }
        uVar21 = (uint)pvVar17;
        uVar20 = 0;
        if ((int)uVar21 < (this->Blocks).ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar21 * 8),
                   (ulonglong)uVar23 * 0xc);
        pvVar17 = (void *)(ulonglong)(uVar21 + 1);
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar21 + 1 < uVar19);
    }
  }
  else {
    Empty(this,uVar19);
    if (uVar19 != 0) {
      do {
        pvVar12 = ::operator_new(0x1800);
        local_80 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            local_80 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar19 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar19 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Blocks).ArrayNum;
        if (iVar10 == (this->Blocks).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar10 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_143440797:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 1434407f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,0>
          (TDynamicVector<unsigned_short,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar18,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 2,0,(longlong)(int)uVar18 * 2);
    }
    FVar17.Data = local_90.Data;
    uVar18 = uVar16;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<1,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(ushort *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x400;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < local_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_90.Data + (longlong)(int)uVar16 * 2;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined2 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 2) = *(undefined2 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_143440fcd;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_143440fcd;
  }
  uVar18 = 0;
  uVar13 = 0;
  uVar16 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar16 = uVar13;
  }
  this->CurBlock = uVar16;
  uVar16 = uVar13;
  if (local_res10[0] != 0) {
    uVar16 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143440bb9;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143440bb9:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar17.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 2);
        FVar17.Data = FVar17.Data + 0x400;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] * 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar16), uVar16 != 0)) {
      do {
        local_80 = ::operator_new(0x400);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_80,FVar17.Data,uVar14 * 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x400;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 * 2);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    Empty(this,uVar16);
    if (uVar16 != 0) {
      do {
        local_78 = ::operator_new(0x400);
        uVar16 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar16 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar16 * 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_143440fcd:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143441010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>
          (TDynamicVector<int,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar18,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar18 << 2);
    }
    FVar17.Data = local_90.Data;
    uVar18 = uVar16;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(int *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x800;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < local_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_90.Data + (longlong)(int)uVar16 * 4;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined4 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_1434417ee;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_1434417ee;
  }
  uVar18 = 0;
  uVar13 = 0;
  uVar16 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar16 = uVar13;
  }
  this->CurBlock = uVar16;
  uVar16 = uVar13;
  if (local_res10[0] != 0) {
    uVar16 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_1434413d7;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_1434413d7:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar17.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 4);
        FVar17.Data = FVar17.Data + 0x800;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar16), uVar16 != 0)) {
      do {
        local_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_80,FVar17.Data,uVar14 << 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x800;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 2);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    Empty(this,uVar16);
    if (uVar16 != 0) {
      do {
        local_78 = ::operator_new(0x800);
        uVar16 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar16 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar16 << 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_1434417ee:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143441830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Serialize<1,0>
          (TDynamicVector<float,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar19 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar19 << 2);
    }
    FVar18.Data = local_90.Data;
    uVar19 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<float,512>::Serialize<1,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(float *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0x800;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_res18[0]);
    }
    uVar19 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar19 & 0x1ff) != 0) + (uVar19 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar19 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_88[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18.Data = local_90.Data;
        lVar15 = (longlong)(int)uVar17;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined4 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)(FVar18.Data + lVar15 * 4);
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar19);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_143441fee;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_143441fee;
  }
  uVar19 = 0;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143441bf4;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143441bf4:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar20 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_70,local_res10[0],Default)
    ;
    uVar16 = (ulonglong)local_res10[0];
    FVar18.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar16 < 0x200) {
          local_48 = uVar16;
        }
        uVar10 = uVar13;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar18.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               local_48 * 4);
        FVar18.Data = FVar18.Data + 0x800;
        uVar16 = uVar16 - 0x200;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar16 < 0x200) {
          uVar14 = uVar16;
        }
        memcpy(local_80,FVar18.Data,uVar14 << 2);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar18.Data = FVar18.Data + 0x800;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar16 = uVar16 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
                   (ulonglong)uVar13 << 2);
        uVar19 = uVar19 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar19 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_78 = ::operator_new(0x800);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar17 << 2);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
LAB_143441fee:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143442030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Serialize<1,0>
          (TDynamicVector<double,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<double,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar19 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 8,0,(longlong)(int)uVar19 << 3);
    }
    FVar18.Data = local_90.Data;
    uVar19 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<double,512>::Serialize<1,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(double *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0x1000;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_res18[0]);
    }
    uVar19 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar19 & 0x1ff) != 0) + (uVar19 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar19 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_88[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18.Data = local_90.Data;
        lVar15 = (longlong)(int)uVar17;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)(FVar18.Data + lVar15 * 8);
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar19);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_1434427ee;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_1434427ee;
  }
  uVar19 = 0;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_1434423f5;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_1434423f5:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar20 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar16 = (ulonglong)local_res10[0];
    FVar18.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar16 < 0x200) {
          local_48 = uVar16;
        }
        uVar10 = uVar13;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar18.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               local_48 * 8);
        FVar18.Data = FVar18.Data + 0x1000;
        uVar16 = uVar16 - 0x200;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_80 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar16 < 0x200) {
          uVar14 = uVar16;
        }
        memcpy(local_80,FVar18.Data,uVar14 << 3);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar18.Data = FVar18.Data + 0x1000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar16 = uVar16 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
                   (ulonglong)uVar13 << 3);
        uVar19 = uVar19 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar19 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_78 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar17 << 3);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
LAB_1434427ee:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143442830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  void *local_90;
  void *local_88;
  ForAnyElementType local_80;
  int local_78 [2];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res18[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_res18[0] << 9,&local_80,local_78,local_78 + 1);
    }
    FVar16.Data = local_80.Data;
    uVar18 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector2<float> *)FVar16.Data);
        uVar18 = uVar18 + 1;
        FVar16.Data = FVar16.Data + 0x1000;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_78[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_80.Data + (longlong)(int)uVar17 * 8;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar18);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    goto LAB_143442ffe;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_143442ffe;
  }
  uVar18 = 0;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar17;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143442be8;
  }
  else {
    uVar17 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143442be8:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar16.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 8);
        FVar16.Data = FVar16.Data + 0x1000;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_90 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_90,FVar16.Data,uVar14 << 3);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar16.Data = FVar16.Data + 0x1000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_90;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 3);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_88 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,(ulonglong)uVar17 << 3);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_143442ffe:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143443040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,0>
          (TDynamicVector<UE::Math::TVector<float>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  FScriptContainerElement *local_68;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res20[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_res20[0] << 9,&local_78,local_70,local_70 + 1);
    }
    FVar17.Data = local_78.Data;
    uVar20 = uVar19;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,0>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector<float> *)FVar17.Data);
        uVar20 = uVar20 + 1;
        FVar17.Data = FVar17.Data + 0x1800;
      } while ((int)uVar20 < (int)local_res20[0]);
    }
    uVar20 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar20 & 0x1ff) != 0) + (uVar20 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar20 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar19 < local_70[0]) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = local_78.Data + (longlong)(int)uVar19 * 0xc;
        uVar16 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar16 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar5 = *(longlong *)
                 ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        *(undefined8 *)(lVar5 + (longlong)(int)uVar16 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar5 + 8 + (longlong)(int)uVar16 * 0xc) = uVar3;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar19 < uVar20);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    goto LAB_143443837;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_143443837;
  }
  uVar20 = 0;
  uVar16 = 0;
  uVar19 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar19 = uVar16;
  }
  this->CurBlock = uVar19;
  uVar19 = uVar16;
  if (local_res18[0] != 0) {
    uVar19 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar10 = false;
  this->CurBlockUsed = uVar19;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar15 = param_1->field_0x28;
    uVar19 = local_90[0];
    if ((bVar15 & 1) != 0) goto LAB_14344340e;
  }
  else {
    uVar19 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar15 = param_1->field_0x28;
LAB_14344340e:
    bVar10 = uVar19 != 0;
  }
  uVar19 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar21 = (ulonglong)uVar19;
  if (bVar10) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar17.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar19 != 0)) {
      do {
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar12 = uVar16;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar17.Data = FVar17.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        uVar20 = uVar20 + 1;
        local_68 = FVar17.Data;
      } while (uVar20 < uVar19);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = local_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0xc,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar19), uVar19 != 0)) {
      do {
        local_88 = ::operator_new(0x1800);
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(local_88,FVar17.Data,uVar14 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x1800;
        (this->Blocks).ArrayNum = iVar11 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_88;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar15 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar16 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar16 = local_res18[0];
        }
        uVar12 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar16 * 0xc);
        uVar20 = uVar20 + 1;
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar20 < uVar19);
    }
  }
  else {
    Empty(this,uVar19);
    if (uVar19 != 0) {
      do {
        local_80 = ::operator_new(0x1800);
        uVar19 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar19 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
LAB_143443837:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143443870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>
          (TDynamicVector<UE::Math::TVector<double>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  longlong lVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  code *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  FScriptContainerElement *local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar5 = *(longlong **)&param_1->field_0x8;
    uVar20 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>'::__l5::
              <lambda_2>::<lambda_invoker_cdecl>;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if (0x3eb < (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20)) {
      pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>'::__l5
                ::<lambda_1>::<lambda_invoker_cdecl>;
    }
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res20[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res20[0] << 9,&local_78,local_70,local_70 + 1);
    }
    FVar21.Data = local_78.Data;
    uVar22 = uVar20;
    if (0 < (int)local_res20[0]) {
      do {
        (*pcVar18)(param_1,FVar21.Data);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar17 = 0;
        if ((int)uVar20 < local_70[0]) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        FVar21.Data = local_78.Data;
        lVar14 = (longlong)(int)uVar20;
        uVar17 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar17 = 0;
        }
        uVar20 = uVar20 + 1;
        pFVar3 = FVar21.Data + lVar14 * 0x18;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        uVar4 = *(undefined8 *)(FVar21.Data + lVar14 * 0x18 + 0x10);
        lVar14 = *(longlong *)
                  ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar14 + (longlong)(int)uVar17 * 0x18);
        *puVar2 = *(undefined8 *)pFVar3;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar14 + 0x10 + (longlong)(int)uVar17 * 0x18) = uVar4;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar20 < uVar22);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    goto LAB_14344406f;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344406f;
  }
  uVar22 = 0;
  uVar17 = 0;
  uVar20 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar20 = uVar17;
  }
  this->CurBlock = uVar20;
  uVar20 = uVar17;
  if (local_res18[0] != 0) {
    uVar20 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar10 = false;
  this->CurBlockUsed = uVar20;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar20 = local_90[0];
    if ((bVar16 & 1) != 0) goto LAB_143443c5f;
  }
  else {
    uVar20 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_143443c5f:
    bVar10 = uVar20 != 0;
  }
  uVar20 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar23 = (ulonglong)uVar20;
  if (bVar10) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar19 = (ulonglong)local_res18[0];
    FVar21.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar20 != 0)) {
      do {
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        uVar12 = uVar17;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        memcpy(FVar21.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
               uVar15 * 0x18);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar19 = uVar19 - 0x200;
        uVar22 = uVar22 + 1;
        local_68 = FVar21.Data;
      } while (uVar22 < uVar20);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = local_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0x18,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar20), uVar20 != 0)) {
      do {
        local_88 = ::operator_new(0x3000);
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        memcpy(local_88,FVar21.Data,uVar15 * 0x18);
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar21.Data = FVar21.Data + 0x3000;
        (this->Blocks).ArrayNum = iVar11 + 1;
        uVar19 = uVar19 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_88;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar20 != 0) {
      do {
        uVar17 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar17 = local_res18[0];
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
                   (ulonglong)uVar17 * 0x18);
        uVar22 = uVar22 + 1;
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar22 < uVar20);
    }
  }
  else {
    Empty(this,uVar20);
    if (uVar20 != 0) {
      do {
        local_80 = ::operator_new(0x3000);
        uVar20 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar20 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar20 * 0x18);
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
LAB_14344406f:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 1434440b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,0>
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  byte bVar14;
  void *pvVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  FScriptContainerElement *local_78;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar23 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,local_res20[0] << 9,Default);
    FVar16.Data = local_70.AllocatorInstance.Data;
    uVar22 = uVar23;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,0>'::__l5
        ::<lambda_1>::<lambda_invoker_cdecl>(param_1,(FEdge *)FVar16.Data);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar19 = 0;
        if ((int)uVar23 < local_70.ArrayNum) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar21 = local_70.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
        uVar19 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar19 = 0;
        }
        uVar23 = uVar23 + 1;
        uVar5 = *(undefined8 *)(pFVar21 + 8);
        puVar12 = (undefined8 *)
                  (*(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
                  (longlong)(int)uVar19 * 0x10);
        *puVar12 = *(undefined8 *)&pFVar21->field_0x0;
        puVar12[1] = uVar5;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar23 < uVar22);
    }
    if ((FEdge *)local_70.AllocatorInstance.Data != (FEdge *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    goto LAB_1434448be;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      TruncateBlocks(this,1,No);
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      if ((this->Blocks).ArrayNum == 0) {
        AddAllocatedBlock(this);
      }
    }
    goto LAB_1434448be;
  }
  pvVar15 = (void *)0x0;
  uVar22 = 0;
  uVar23 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar23 = uVar22;
  }
  this->CurBlock = uVar23;
  uVar23 = uVar22;
  if (local_res18[0] != 0) {
    uVar23 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar23;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar14 = param_1->field_0x28;
    uVar23 = local_90[0];
    if ((bVar14 & 1) != 0) goto LAB_143444442;
  }
  else {
    uVar23 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar14 = param_1->field_0x28;
LAB_143444442:
    bVar8 = uVar23 != 0;
  }
  uVar23 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar24 = (ulonglong)uVar23;
  if (bVar8) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar16.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar11 = pvVar15, uVar23 != 0)) {
      do {
        uVar19 = (uint)pvVar11;
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        uVar20 = uVar22;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               uVar17 << 4);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar18 = uVar18 - 0x200;
        pvVar11 = (void *)(ulonglong)(uVar19 + 1);
        local_78 = FVar16.Data;
      } while (uVar19 + 1 < uVar23);
    }
    FVar10 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    FVar10 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    FVar6.Number = uStack_4c;
    FVar6.ComparisonIndex.Value = local_50.Value;
    uStack_44 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_48;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] << 4,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar23), uVar23 != 0)) {
      do {
        pvVar11 = ::operator_new(0x2000);
        local_88 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            local_88 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        memcpy(local_88,FVar16.Data,uVar17 << 4);
        pFVar21 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar21 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar16.Data = FVar16.Data + 0x2000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar14 & 1) == 0) {
    if (uVar23 != 0) {
      do {
        uVar22 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar22 = local_res18[0];
        }
        uVar20 = (uint)pvVar15;
        uVar19 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar22 << 4);
        pvVar15 = (void *)(ulonglong)(uVar20 + 1);
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar20 + 1 < uVar23);
    }
  }
  else {
    Empty(this,uVar23);
    if (uVar23 != 0) {
      do {
        pvVar11 = ::operator_new(0x2000);
        local_80 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            local_80 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar23 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar23 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar23 << 4);
        pFVar21 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar21 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_1434448be:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<1,0> @ 143444910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  void *pvVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  FScriptContainerElement *local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar10 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,local_res20[0] << 9,Default);
    FVar22.Data = local_70.AllocatorInstance.Data;
    uVar23 = uVar19;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>'::__l5::<lambda_1>
        ::<lambda_invoker_cdecl>(param_1,(FIndex3i *)FVar22.Data);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)local_res20[0]);
    }
    uVar23 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar23 & 0x1ff) != 0) + (uVar23 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar23 != 0) {
      do {
        uVar20 = 0;
        if ((int)uVar19 < local_70.ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = local_70.AllocatorInstance.Data + (longlong)(int)uVar19 * 0xc;
        uVar20 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar20 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar15 = *(longlong *)
                  ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        *(undefined8 *)(lVar15 + (longlong)(int)uVar20 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar15 + 8 + (longlong)(int)uVar20 * 0xc) = uVar3;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar19 < uVar23);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    goto LAB_143445137;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      TruncateBlocks(this,1,No);
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      if ((this->Blocks).ArrayNum == 0) {
        AddAllocatedBlock(this);
      }
    }
    goto LAB_143445137;
  }
  pvVar17 = (void *)0x0;
  uVar23 = 0;
  uVar19 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar19 = uVar23;
  }
  this->CurBlock = uVar19;
  uVar19 = uVar23;
  if (local_res18[0] != 0) {
    uVar19 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar9 = false;
  this->CurBlockUsed = uVar19;
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar19 = local_90[0];
    if ((bVar16 & 1) != 0) goto LAB_143444cb3;
  }
  else {
    uVar19 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_143444cb3:
    bVar9 = uVar19 != 0;
  }
  uVar19 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar24 = (ulonglong)uVar19;
  if (bVar9) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar22.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar12 = pvVar17, uVar19 != 0)) {
      do {
        uVar20 = (uint)pvVar12;
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar21 = uVar23;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(FVar22.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        pvVar12 = (void *)(ulonglong)(uVar20 + 1);
        local_78 = FVar22.Data;
      } while (uVar20 + 1 < uVar19);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    uStack_44 = 0;
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = local_48;
    FVar7.Number = uStack_4c;
    FVar7.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0xc,FVar8,FVar7,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar19), uVar19 != 0)) {
      do {
        pvVar12 = ::operator_new(0x1800);
        local_88 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            local_88 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(local_88,FVar22.Data,uVar14 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Blocks).ArrayNum;
        if (iVar10 == (this->Blocks).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar22.Data = FVar22.Data + 0x1800;
        (this->Blocks).ArrayNum = iVar10 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar23 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar23 = local_res18[0];
        }
        uVar21 = (uint)pvVar17;
        uVar20 = 0;
        if ((int)uVar21 < (this->Blocks).ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar21 * 8),
                   (ulonglong)uVar23 * 0xc);
        pvVar17 = (void *)(ulonglong)(uVar21 + 1);
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar21 + 1 < uVar19);
    }
  }
  else {
    Empty(this,uVar19);
    if (uVar19 != 0) {
      do {
        pvVar12 = ::operator_new(0x1800);
        local_80 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            local_80 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar19 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar19 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Blocks).ArrayNum;
        if (iVar10 == (this->Blocks).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar10 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_143445137:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 143445190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<0,0>
          (TDynamicVector<unsigned_short,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar18,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 2,0,(longlong)(int)uVar18 * 2);
    }
    FVar17.Data = local_90.Data;
    uVar18 = uVar16;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<unsigned_short,512>::Serialize<0,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(ushort *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x400;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < local_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_90.Data + (longlong)(int)uVar16 * 2;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined2 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 2) = *(undefined2 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14344596d;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344596d;
  }
  uVar18 = 0;
  uVar13 = 0;
  uVar16 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar16 = uVar13;
  }
  this->CurBlock = uVar16;
  uVar16 = uVar13;
  if (local_res10[0] != 0) {
    uVar16 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143445559;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143445559:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar17.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 2);
        FVar17.Data = FVar17.Data + 0x400;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] * 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar16), uVar16 != 0)) {
      do {
        local_80 = ::operator_new(0x400);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_80,FVar17.Data,uVar14 * 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x400;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 * 2);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    Empty(this,uVar16);
    if (uVar16 != 0) {
      do {
        local_78 = ::operator_new(0x400);
        uVar16 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar16 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar16 * 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14344596d:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 1434459b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>
          (TDynamicVector<int,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar18,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar18 << 2);
    }
    FVar17.Data = local_90.Data;
    uVar18 = uVar16;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(int *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x800;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < local_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_90.Data + (longlong)(int)uVar16 * 4;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined4 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14344618e;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344618e;
  }
  uVar18 = 0;
  uVar13 = 0;
  uVar16 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar16 = uVar13;
  }
  this->CurBlock = uVar16;
  uVar16 = uVar13;
  if (local_res10[0] != 0) {
    uVar16 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143445d77;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143445d77:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar17.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 4);
        FVar17.Data = FVar17.Data + 0x800;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar16), uVar16 != 0)) {
      do {
        local_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_80,FVar17.Data,uVar14 << 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x800;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 2);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    Empty(this,uVar16);
    if (uVar16 != 0) {
      do {
        local_78 = ::operator_new(0x800);
        uVar16 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar16 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar16 << 2);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14344618e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 1434461d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Serialize<0,0>
          (TDynamicVector<float,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar19 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar19 << 2);
    }
    FVar18.Data = local_90.Data;
    uVar19 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<float,512>::Serialize<0,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(float *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0x800;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_res18[0]);
    }
    uVar19 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar19 & 0x1ff) != 0) + (uVar19 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar19 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_88[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18.Data = local_90.Data;
        lVar15 = (longlong)(int)uVar17;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined4 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)(FVar18.Data + lVar15 * 4);
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar19);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14344698e;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344698e;
  }
  uVar19 = 0;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143446594;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143446594:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar20 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_70,local_res10[0],Default)
    ;
    uVar16 = (ulonglong)local_res10[0];
    FVar18.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar16 < 0x200) {
          local_48 = uVar16;
        }
        uVar10 = uVar13;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar18.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               local_48 * 4);
        FVar18.Data = FVar18.Data + 0x800;
        uVar16 = uVar16 - 0x200;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar16 < 0x200) {
          uVar14 = uVar16;
        }
        memcpy(local_80,FVar18.Data,uVar14 << 2);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar18.Data = FVar18.Data + 0x800;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar16 = uVar16 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
                   (ulonglong)uVar13 << 2);
        uVar19 = uVar19 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar19 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_78 = ::operator_new(0x800);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar17 << 2);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
LAB_14344698e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 1434469d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<double,512>::Serialize<0,0>
          (TDynamicVector<double,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  ForAnyElementType local_90;
  int local_88 [2];
  void *local_80;
  void *local_78;
  TArray<double,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_90.Data = (FScriptContainerElement *)0x0;
    uVar19 = local_res18[0] << 9;
    local_88[0] = 0;
    local_88[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar9 * 8,0,(longlong)(int)uVar19 << 3);
    }
    FVar18.Data = local_90.Data;
    uVar19 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<double,512>::Serialize<0,0>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(double *)FVar18.Data);
        FVar18.Data = FVar18.Data + 0x1000;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)local_res18[0]);
    }
    uVar19 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar19 & 0x1ff) != 0) + (uVar19 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar19 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_88[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18.Data = local_90.Data;
        lVar15 = (longlong)(int)uVar17;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)(FVar18.Data + lVar15 * 8);
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar19);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    goto LAB_14344718e;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344718e;
  }
  uVar19 = 0;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143446d95;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143446d95:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar20 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar16 = (ulonglong)local_res10[0];
    FVar18.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar16 < 0x200) {
          local_48 = uVar16;
        }
        uVar10 = uVar13;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar18.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               local_48 * 8);
        FVar18.Data = FVar18.Data + 0x1000;
        uVar16 = uVar16 - 0x200;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_80 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar16 < 0x200) {
          uVar14 = uVar16;
        }
        memcpy(local_80,FVar18.Data,uVar14 << 3);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar18.Data = FVar18.Data + 0x1000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar16 = uVar16 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
                   (ulonglong)uVar13 << 3);
        uVar19 = uVar19 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar19 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_78 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,(ulonglong)uVar17 << 3);
        pFVar4 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
        local_res10[0] = local_res10[0] - 0x200;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
LAB_14344718e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 1434471d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<0,0>
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  void *local_90;
  void *local_88;
  ForAnyElementType local_80;
  int local_78 [2];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_res20[0] = 0;
    local_98 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    if ((int)(local_res18[0] << 9) < 1) {
      if ((int)(local_res18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res18[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_res18[0] << 9,&local_80,local_78,local_78 + 1);
    }
    FVar16.Data = local_80.Data;
    uVar18 = uVar17;
    if (0 < (int)local_res18[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<0,0>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector2<float> *)FVar16.Data);
        uVar18 = uVar18 + 1;
        FVar16.Data = FVar16.Data + 0x1000;
      } while ((int)uVar18 < (int)local_res18[0]);
    }
    uVar18 = local_res20[0] * 0x200 + local_98;
    Empty(this,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < local_78[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = local_80.Data + (longlong)(int)uVar17 * 8;
        uVar13 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)pFVar2;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar17 < uVar18);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    goto LAB_14344799e;
  }
  local_res10[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344799e;
  }
  uVar18 = 0;
  uVar13 = 0;
  uVar17 = local_res10[0] - 1 >> 9;
  if (local_res10[0] == 0) {
    uVar17 = uVar13;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar13;
  if (local_res10[0] != 0) {
    uVar17 = (local_res10[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar17;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_94 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = local_94;
    if ((bVar12 & 1) != 0) goto LAB_143447588;
  }
  else {
    uVar17 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_143447588:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((local_res10[0] & 0x1ff) != 0) + (local_res10[0] >> 9);
  uVar19 = (ulonglong)uVar17;
  if (bVar8) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_70,local_res10[0],Default);
    uVar15 = (ulonglong)local_res10[0];
    FVar16.Data = local_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        local_48 = 0x200;
        if (uVar15 < 0x200) {
          local_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               local_48 * 8);
        FVar16.Data = FVar16.Data + 0x1000;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_50);
    uStack_5c = 0;
    local_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_4c);
    local_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = local_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_58;
    FArchive::SerializeCompressedNew
              (param_1,local_70.AllocatorInstance.Data,(ulonglong)local_res10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        local_90 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(local_90,FVar16.Data,uVar14 << 3);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar16.Data = FVar16.Data + 0x1000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_90;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar13 = local_res10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 3);
        uVar18 = uVar18 + 1;
        local_res10[0] = local_res10[0] - 0x200;
      } while (uVar18 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        local_88 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (local_res10[0] < 0x200) {
          uVar17 = local_res10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,(ulonglong)uVar17 << 3);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
        local_res10[0] = local_res10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14344799e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 1434479e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<0,0>
          (TDynamicVector<UE::Math::TVector<float>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  FScriptContainerElement *local_68;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res20[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_res20[0] << 9,&local_78,local_70,local_70 + 1);
    }
    FVar17.Data = local_78.Data;
    uVar20 = uVar19;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<0,0>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector<float> *)FVar17.Data);
        uVar20 = uVar20 + 1;
        FVar17.Data = FVar17.Data + 0x1800;
      } while ((int)uVar20 < (int)local_res20[0]);
    }
    uVar20 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar20 & 0x1ff) != 0) + (uVar20 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar20 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar19 < local_70[0]) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = local_78.Data + (longlong)(int)uVar19 * 0xc;
        uVar16 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar16 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar5 = *(longlong *)
                 ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        *(undefined8 *)(lVar5 + (longlong)(int)uVar16 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar5 + 8 + (longlong)(int)uVar16 * 0xc) = uVar3;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar19 < uVar20);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    goto LAB_1434481d7;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_1434481d7;
  }
  uVar20 = 0;
  uVar16 = 0;
  uVar19 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar19 = uVar16;
  }
  this->CurBlock = uVar19;
  uVar19 = uVar16;
  if (local_res18[0] != 0) {
    uVar19 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar10 = false;
  this->CurBlockUsed = uVar19;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar15 = param_1->field_0x28;
    uVar19 = local_90[0];
    if ((bVar15 & 1) != 0) goto LAB_143447dae;
  }
  else {
    uVar19 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar15 = param_1->field_0x28;
LAB_143447dae:
    bVar10 = uVar19 != 0;
  }
  uVar19 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar21 = (ulonglong)uVar19;
  if (bVar10) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar17.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar19 != 0)) {
      do {
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar12 = uVar16;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar17.Data = FVar17.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        uVar20 = uVar20 + 1;
        local_68 = FVar17.Data;
      } while (uVar20 < uVar19);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = local_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0xc,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar19), uVar19 != 0)) {
      do {
        local_88 = ::operator_new(0x1800);
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(local_88,FVar17.Data,uVar14 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar17.Data = FVar17.Data + 0x1800;
        (this->Blocks).ArrayNum = iVar11 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_88;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar15 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar16 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar16 = local_res18[0];
        }
        uVar12 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar16 * 0xc);
        uVar20 = uVar20 + 1;
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar20 < uVar19);
    }
  }
  else {
    Empty(this,uVar19);
    if (uVar19 != 0) {
      do {
        local_80 = ::operator_new(0x1800);
        uVar19 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar19 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
LAB_1434481d7:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 143448210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>
          (TDynamicVector<UE::Math::TVector<double>,512> *this,FArchive *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  longlong lVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  code *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  FScriptContainerElement *local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar5 = *(longlong **)&param_1->field_0x8;
    uVar20 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>'::__l5::
              <lambda_2>::<lambda_invoker_cdecl>;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if (0x3eb < (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20)) {
      pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>'::__l5
                ::<lambda_1>::<lambda_invoker_cdecl>;
    }
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(local_res20[0] << 9));
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res20[0] << 9,&local_78,local_70,local_70 + 1);
    }
    FVar21.Data = local_78.Data;
    uVar22 = uVar20;
    if (0 < (int)local_res20[0]) {
      do {
        (*pcVar18)(param_1,FVar21.Data);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar17 = 0;
        if ((int)uVar20 < local_70[0]) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        FVar21.Data = local_78.Data;
        lVar14 = (longlong)(int)uVar20;
        uVar17 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar17 = 0;
        }
        uVar20 = uVar20 + 1;
        pFVar3 = FVar21.Data + lVar14 * 0x18;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        uVar4 = *(undefined8 *)(FVar21.Data + lVar14 * 0x18 + 0x10);
        lVar14 = *(longlong *)
                  ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar14 + (longlong)(int)uVar17 * 0x18);
        *puVar2 = *(undefined8 *)pFVar3;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar14 + 0x10 + (longlong)(int)uVar17 * 0x18) = uVar4;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar20 < uVar22);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    goto LAB_143448a0f;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_143448a0f;
  }
  uVar22 = 0;
  uVar17 = 0;
  uVar20 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar20 = uVar17;
  }
  this->CurBlock = uVar20;
  uVar20 = uVar17;
  if (local_res18[0] != 0) {
    uVar20 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar10 = false;
  this->CurBlockUsed = uVar20;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar20 = local_90[0];
    if ((bVar16 & 1) != 0) goto LAB_1434485ff;
  }
  else {
    uVar20 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_1434485ff:
    bVar10 = uVar20 != 0;
  }
  uVar20 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar23 = (ulonglong)uVar20;
  if (bVar10) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar19 = (ulonglong)local_res18[0];
    FVar21.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar20 != 0)) {
      do {
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        uVar12 = uVar17;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        memcpy(FVar21.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
               uVar15 * 0x18);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar19 = uVar19 - 0x200;
        uVar22 = uVar22 + 1;
        local_68 = FVar21.Data;
      } while (uVar22 < uVar20);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = local_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0x18,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar20), uVar20 != 0)) {
      do {
        local_88 = ::operator_new(0x3000);
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        memcpy(local_88,FVar21.Data,uVar15 * 0x18);
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar21.Data = FVar21.Data + 0x3000;
        (this->Blocks).ArrayNum = iVar11 + 1;
        uVar19 = uVar19 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_88;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar20 != 0) {
      do {
        uVar17 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar17 = local_res18[0];
        }
        uVar12 = 0;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
                   (ulonglong)uVar17 * 0x18);
        uVar22 = uVar22 + 1;
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar22 < uVar20);
    }
  }
  else {
    Empty(this,uVar20);
    if (uVar20 != 0) {
      do {
        local_80 = ::operator_new(0x3000);
        uVar20 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar20 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar20 * 0x18);
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (this->Blocks).ArrayNum;
        if (iVar11 == (this->Blocks).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
LAB_143448a0f:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 143448a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<0,0>
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  byte bVar14;
  void *pvVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  FScriptContainerElement *local_78;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar23 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,local_res20[0] << 9,Default);
    FVar16.Data = local_70.AllocatorInstance.Data;
    uVar22 = uVar23;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<0,0>'::__l5
        ::<lambda_1>::<lambda_invoker_cdecl>(param_1,(FEdge *)FVar16.Data);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar19 = 0;
        if ((int)uVar23 < local_70.ArrayNum) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar21 = local_70.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
        uVar19 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar19 = 0;
        }
        uVar23 = uVar23 + 1;
        uVar5 = *(undefined8 *)(pFVar21 + 8);
        puVar12 = (undefined8 *)
                  (*(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8) +
                  (longlong)(int)uVar19 * 0x10);
        *puVar12 = *(undefined8 *)&pFVar21->field_0x0;
        puVar12[1] = uVar5;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar23 < uVar22);
    }
    if ((FEdge *)local_70.AllocatorInstance.Data != (FEdge *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    goto LAB_14344925e;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      TruncateBlocks(this,1,No);
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      if ((this->Blocks).ArrayNum == 0) {
        AddAllocatedBlock(this);
      }
    }
    goto LAB_14344925e;
  }
  pvVar15 = (void *)0x0;
  uVar22 = 0;
  uVar23 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar23 = uVar22;
  }
  this->CurBlock = uVar23;
  uVar23 = uVar22;
  if (local_res18[0] != 0) {
    uVar23 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar8 = false;
  this->CurBlockUsed = uVar23;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar14 = param_1->field_0x28;
    uVar23 = local_90[0];
    if ((bVar14 & 1) != 0) goto LAB_143448de2;
  }
  else {
    uVar23 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar14 = param_1->field_0x28;
LAB_143448de2:
    bVar8 = uVar23 != 0;
  }
  uVar23 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar24 = (ulonglong)uVar23;
  if (bVar8) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar16.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar11 = pvVar15, uVar23 != 0)) {
      do {
        uVar19 = (uint)pvVar11;
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        uVar20 = uVar22;
        if ((int)uVar19 < (this->Blocks).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               uVar17 << 4);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar18 = uVar18 - 0x200;
        pvVar11 = (void *)(ulonglong)(uVar19 + 1);
        local_78 = FVar16.Data;
      } while (uVar19 + 1 < uVar23);
    }
    FVar10 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    FVar10 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    FVar6.Number = uStack_4c;
    FVar6.ComparisonIndex.Value = local_50.Value;
    uStack_44 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_48;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] << 4,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar23), uVar23 != 0)) {
      do {
        pvVar11 = ::operator_new(0x2000);
        local_88 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            local_88 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        memcpy(local_88,FVar16.Data,uVar17 << 4);
        pFVar21 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar21 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar16.Data = FVar16.Data + 0x2000;
        (this->Blocks).ArrayNum = iVar9 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar14 & 1) == 0) {
    if (uVar23 != 0) {
      do {
        uVar22 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar22 = local_res18[0];
        }
        uVar20 = (uint)pvVar15;
        uVar19 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar22 << 4);
        pvVar15 = (void *)(ulonglong)(uVar20 + 1);
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar20 + 1 < uVar23);
    }
  }
  else {
    Empty(this,uVar23);
    if (uVar23 != 0) {
      do {
        pvVar11 = ::operator_new(0x2000);
        local_80 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            local_80 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar23 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar23 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar23 << 4);
        pFVar21 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar21 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->Blocks).ArrayNum;
        if (iVar9 == (this->Blocks).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_14344925e:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 1434492b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<0,0>
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,FArchive *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  void *pvVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  void *local_88;
  void *local_80;
  FScriptContainerElement *local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_60;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar10 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,local_res20[0] << 9,Default);
    FVar22.Data = local_70.AllocatorInstance.Data;
    uVar23 = uVar19;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<0,0>'::__l5::<lambda_1>
        ::<lambda_invoker_cdecl>(param_1,(FIndex3i *)FVar22.Data);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)local_res20[0]);
    }
    uVar23 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar23 & 0x1ff) != 0) + (uVar23 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar23 != 0) {
      do {
        uVar20 = 0;
        if ((int)uVar19 < local_70.ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = local_70.AllocatorInstance.Data + (longlong)(int)uVar19 * 0xc;
        uVar20 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar20 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar15 = *(longlong *)
                  ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
        *(undefined8 *)(lVar15 + (longlong)(int)uVar20 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar15 + 8 + (longlong)(int)uVar20 * 0xc) = uVar3;
        this->CurBlockUsed = this->CurBlockUsed + 1;
      } while (uVar19 < uVar23);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    goto LAB_143449ad7;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      TruncateBlocks(this,1,No);
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      if ((this->Blocks).ArrayNum == 0) {
        AddAllocatedBlock(this);
      }
    }
    goto LAB_143449ad7;
  }
  pvVar17 = (void *)0x0;
  uVar23 = 0;
  uVar19 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar19 = uVar23;
  }
  this->CurBlock = uVar19;
  uVar19 = uVar23;
  if (local_res18[0] != 0) {
    uVar19 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar9 = false;
  this->CurBlockUsed = uVar19;
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar19 = local_90[0];
    if ((bVar16 & 1) != 0) goto LAB_143449653;
  }
  else {
    uVar19 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_143449653:
    bVar9 = uVar19 != 0;
  }
  uVar19 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar24 = (ulonglong)uVar19;
  if (bVar9) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_60,local_res18[0],Default);
    uVar18 = (ulonglong)local_res18[0];
    FVar22.Data = local_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar12 = pvVar17, uVar19 != 0)) {
      do {
        uVar20 = (uint)pvVar12;
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar21 = uVar23;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(FVar22.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        pvVar12 = (void *)(ulonglong)(uVar20 + 1);
        local_78 = FVar22.Data;
      } while (uVar20 + 1 < uVar19);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    uStack_44 = 0;
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = local_48;
    FVar7.Number = uStack_4c;
    FVar7.ComparisonIndex.Value = local_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,local_60.AllocatorInstance.Data,(ulonglong)local_res18[0] * 0xc,FVar8,FVar7,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar19), uVar19 != 0)) {
      do {
        pvVar12 = ::operator_new(0x1800);
        local_88 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            local_88 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(local_88,FVar22.Data,uVar14 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Blocks).ArrayNum;
        if (iVar10 == (this->Blocks).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar22.Data = FVar22.Data + 0x1800;
        (this->Blocks).ArrayNum = iVar10 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar23 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar23 = local_res18[0];
        }
        uVar21 = (uint)pvVar17;
        uVar20 = 0;
        if ((int)uVar21 < (this->Blocks).ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar21 * 8),
                   (ulonglong)uVar23 * 0xc);
        pvVar17 = (void *)(ulonglong)(uVar21 + 1);
        local_res18[0] = local_res18[0] - 0x200;
      } while (uVar21 + 1 < uVar19);
    }
  }
  else {
    Empty(this,uVar19);
    if (uVar19 != 0) {
      do {
        pvVar12 = ::operator_new(0x1800);
        local_80 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            local_80 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar19 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar19 = local_res18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Blocks).ArrayNum;
        if (iVar10 == (this->Blocks).ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar10 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_80;
        local_res18[0] = local_res18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_143449ad7:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// Serialize<0,0> @ 143449b30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Serialize<0,0>
          (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  int *piVar12;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  longlong lVar14;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  ForAnyElementType local_88;
  int local_80 [2];
  ForAnyElementType local_78;
  int local_70 [2];
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *local_68;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *local_60;
  ulonglong local_58;
  FNameEntryId local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar8 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    local_98 = 0;
    local_94 = 0;
    local_res20[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_88.Data = (FScriptContainerElement *)0x0;
    uVar22 = local_res20[0] << 9;
    local_80[0] = 0;
    local_80[1] = 0;
    if ((int)(local_res20[0] << 9) < 1) {
      if ((int)(local_res20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
    }
    else {
      iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,uVar22,&local_88,local_80,local_80 + 1);
      DefaultConstructItems<UE::AnimationCore::FBoneWeights,int>
                (local_88.Data + (longlong)iVar8 * 0x40,uVar22);
    }
    FVar19.Data = local_88.Data;
    uVar22 = uVar17;
    if (0 < (int)local_res20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Serialize<0,0>'::__l5::
        <lambda_2>::<lambda_invoker_cdecl>(param_1,(FBoneWeights *)FVar19.Data);
        FVar19.Data = FVar19.Data + 0x8000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_res20[0]);
    }
    uVar22 = local_98 * 0x200 + local_94;
    Empty(this,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    AddAllocatedBlock(this);
    if (uVar22 != 0) {
      do {
        uVar18 = 0;
        if ((int)uVar17 < local_80[0]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar23 = local_88.Data + (longlong)(int)uVar17 * 0x40;
        uVar18 = this->CurBlockUsed;
        if (this->CurBlockUsed == 0x200) {
          if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
            AddAllocatedBlock(this);
          }
          this->CurBlock = this->CurBlock + 1;
          this->CurBlockUsed = 0;
          uVar18 = 0;
        }
        AnimationCore::FBoneWeights::operator=
                  ((FBoneWeights *)
                   ((longlong)(int)uVar18 * 0x40 +
                   *(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8)),
                   (FBoneWeights *)pFVar23);
        this->CurBlockUsed = this->CurBlockUsed + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar22);
    }
    DestructItems<UE::AnimationCore::FBoneWeights,int>((FBoneWeights *)local_88.Data,local_80[0]);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    goto LAB_14344a3cd;
  }
  local_res18[0] = this->CurBlock * 0x200 + this->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    TruncateBlocks(this,1,No);
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    if ((this->Blocks).ArrayNum == 0) {
      AddAllocatedBlock(this);
    }
    goto LAB_14344a3cd;
  }
  pTVar15 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)0x0;
  uVar22 = 0;
  uVar17 = local_res18[0] - 1 >> 9;
  if (local_res18[0] == 0) {
    uVar17 = uVar22;
  }
  this->CurBlock = uVar17;
  uVar17 = uVar22;
  if (local_res18[0] != 0) {
    uVar17 = (local_res18[0] - 1 & 0x1ff) + 1;
  }
  bVar7 = false;
  this->CurBlockUsed = uVar17;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_90[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_90,4);
    if (1 < local_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar17 = local_90[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_143449f0b;
  }
  else {
    uVar17 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_143449f0b:
    bVar7 = uVar17 != 0;
  }
  uVar16 = (ulonglong)local_res18[0];
  uVar17 = (uint)((local_res18[0] & 0x1ff) != 0) + (local_res18[0] >> 9);
  uVar21 = (ulonglong)uVar17;
  if (bVar7) {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70[0] = 0;
    local_70[1] = 0;
    if ((int)local_res18[0] < 1) {
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar16);
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,local_res18[0],&local_78,local_70,local_70 + 1);
      uVar16 = (ulonglong)local_res18[0];
    }
    FVar19.Data = local_78.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pTVar11 = pTVar15, uVar17 != 0)) {
      do {
        uVar18 = (uint)pTVar11;
        uVar20 = 0x200;
        if (uVar16 < 0x200) {
          uVar20 = uVar16;
        }
        uVar9 = uVar22;
        if ((int)uVar18 < (this->Blocks).ArrayNum) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy(FVar19.Data,
               *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               uVar20 << 6);
        FVar19.Data = FVar19.Data + 0x8000;
        uVar16 = uVar16 - 0x200;
        pTVar11 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   *)(ulonglong)(uVar18 + 1);
        local_58 = uVar16;
      } while (uVar18 + 1 < uVar17);
    }
    FVar10 = FNameEntryId::FromValidEName((EName)local_40);
    uStack_4c = 0;
    local_50.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    FVar10 = FNameEntryId::FromValidEName((EName)local_3c);
    local_48 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    FVar5.Number = uStack_4c;
    FVar5.ComparisonIndex.Value = local_50.Value;
    uStack_44 = 0;
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = local_48;
    FArchive::SerializeCompressedNew
              (param_1,local_78.Data,(ulonglong)local_res18[0] << 6,FVar6,FVar5,COMPRESS_NoFlags,
               false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) && (Empty(this,uVar17), uVar17 != 0)) {
      do {
        pTVar11 = ::operator_new(0x8000);
        local_68 = pTVar15;
        if (pTVar11 !=
            (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          lVar14 = 0x200;
          piVar12 = &pTVar11->ArrayNum;
          do {
            *(ForElementType<UE::AnimationCore::FBoneWeight> *)(piVar12 + -2) =
                 (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            *piVar12 = 0;
            piVar12[1] = 0xc;
            piVar12 = piVar12 + 0x10;
            lVar14 = lVar14 + -1;
            local_68 = pTVar11;
          } while (lVar14 != 0);
        }
        uVar20 = 0x200;
        if (uVar16 < 0x200) {
          uVar20 = uVar16;
        }
        memcpy(local_68,FVar19.Data,uVar20 << 6);
        pFVar23 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar23 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar23 + (longlong)(this->Blocks).ArrayMax * 8)
            ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->Blocks).ArrayNum;
        if (iVar8 == (this->Blocks).ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        FVar19.Data = FVar19.Data + 0x8000;
        (this->Blocks).ArrayNum = iVar8 + 1;
        uVar16 = uVar16 - 0x200;
        *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_68;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    DestructItems<UE::AnimationCore::FBoneWeights,int>((FBoneWeights *)local_78.Data,local_70[0]);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  else if ((param_1->field_0x28 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar22 = (uint)pTVar15;
        uVar21 = 0x200;
        if ((uint)uVar16 < 0x200) {
          uVar21 = uVar16;
        }
        uVar18 = 0;
        if ((int)uVar22 < (this->Blocks).ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        uVar9 = (uint)uVar16;
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar9 = local_res18[0], bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar15 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                    **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
        if ((int)uVar21 != 0) {
          do {
            TArrayPrivateFriend::
            Serialize<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                      (param_1,pTVar15);
            pTVar15 = pTVar15 + 1;
            uVar21 = uVar21 - 1;
            uVar9 = local_res18[0];
          } while (uVar21 != 0);
        }
        local_res18[0] = uVar9 - 0x200;
        uVar16 = (ulonglong)local_res18[0];
        pTVar15 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   *)(ulonglong)(uVar22 + 1);
      } while (uVar22 + 1 < uVar17);
    }
  }
  else {
    Empty(this,uVar17);
    if (uVar17 != 0) {
      do {
        pTVar13 = ::operator_new(0x8000);
        pTVar11 = pTVar15;
        if (pTVar13 !=
            (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          lVar14 = 0x200;
          piVar12 = &pTVar13->ArrayNum;
          do {
            *(ForElementType<UE::AnimationCore::FBoneWeight> *)(piVar12 + -2) =
                 (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            *piVar12 = 0;
            piVar12[1] = 0xc;
            piVar12 = piVar12 + 0x10;
            lVar14 = lVar14 + -1;
            pTVar11 = pTVar13;
          } while (lVar14 != 0);
        }
        uVar17 = 0x200;
        if (local_res18[0] < 0x200) {
          uVar17 = local_res18[0];
        }
        local_60 = pTVar11;
        if (uVar17 != 0) {
          uVar16 = (ulonglong)uVar17;
          do {
            TArrayPrivateFriend::
            Serialize<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                      (param_1,pTVar11);
            pTVar11 = pTVar11 + 1;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        piVar12 = &(this->Blocks).ArrayMax;
        pFVar23 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar23 <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 < pFVar23 + (longlong)*piVar12 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->Blocks).ArrayNum;
        if (iVar8 == *piVar12) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,piVar12);
        }
        (this->Blocks).ArrayNum = iVar8 + 1;
        *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_60;
        local_res18[0] = local_res18[0] - 0x200;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
LAB_14344a3cd:
  if (((param_1->field_0x28 & 1) != 0) && ((this->Blocks).ArrayNum == 0)) {
    AddAllocatedBlock(this);
  }
  return;
}

// TDynamicVector<unsigned_short,512> @ 14344fc50

TDynamicVector<unsigned_short,512> * __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
          (TDynamicVector<unsigned_short,512> *this,TDynamicVector<unsigned_short,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  TDynamicVector<unsigned_short,512> *pTVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar15 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar16 = uVar15;
    do {
      puVar9 = ::operator_new(0x400);
      uVar14 = (uint)uVar15;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        uVar7 = 0;
        if ((int)uVar14 < (param_1->Blocks).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TDynamicVector<unsigned_short,512> *)(*pcVar4)();
          return pTVar10;
        }
        lVar13 = 8;
        puVar11 = puVar9;
        puVar12 = *(undefined8 **)((param_1->Blocks).AllocatorInstance.Data + uVar16 * 8);
        do {
          uVar5 = puVar12[1];
          *puVar11 = *puVar12;
          puVar11[1] = uVar5;
          uVar5 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar5;
          uVar5 = puVar12[5];
          puVar11[4] = puVar12[4];
          puVar11[5] = uVar5;
          uVar5 = puVar12[7];
          puVar11[6] = puVar12[6];
          puVar11[7] = uVar5;
          uVar5 = puVar12[9];
          puVar11[8] = puVar12[8];
          puVar11[9] = uVar5;
          uVar5 = puVar12[0xb];
          puVar11[10] = puVar12[10];
          puVar11[0xb] = uVar5;
          uVar5 = puVar12[0xd];
          puVar11[0xc] = puVar12[0xc];
          puVar11[0xd] = uVar5;
          uVar5 = puVar12[0xf];
          puVar11[0xe] = puVar12[0xe];
          puVar11[0xf] = uVar5;
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 0x10;
          puVar12 = puVar12 + 0x10;
        } while (lVar13 != 0);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = puVar9;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TDynamicVector<unsigned_short,512> *)(*pcVar4)();
        return pTVar10;
      }
      iVar8 = (this->Blocks).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      (this->Blocks).ArrayNum = iVar8 + 1;
      uVar16 = uVar16 + 1;
      *(undefined8 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38[0];
    } while ((longlong)uVar16 < (longlong)(int)uVar2);
  }
  return this;
}

// TDynamicVector<int,512> @ 14344fe80

TDynamicVector<int,512> * __thiscall
UE::Geometry::TDynamicVector<int,512>::TDynamicVector<int,512>
          (TDynamicVector<int,512> *this,TDynamicVector<int,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  TDynamicVector<int,512> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar10 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar11 = uVar10;
    do {
      _Dst = ::operator_new(0x800);
      uVar9 = (uint)uVar10;
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TDynamicVector<int,512> *)(*pcVar4)();
            return pTVar8;
          }
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + uVar11 * 8),0x800);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TDynamicVector<int,512> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      (this->Blocks).ArrayNum = iVar7 + 1;
      uVar11 = uVar11 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while ((longlong)uVar11 < (longlong)(int)uVar2);
  }
  return this;
}

// TDynamicVector<UE::Math::TVector2<float>,512> @ 143450060

TDynamicVector<UE::Math::TVector2<float>,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::
TDynamicVector<UE::Math::TVector2<float>,512>
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,
          TDynamicVector<UE::Math::TVector2<float>,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  TDynamicVector<UE::Math::TVector2<float>,512> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar10 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar11 = uVar10;
    do {
      _Dst = ::operator_new(0x1000);
      uVar9 = (uint)uVar10;
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TDynamicVector<UE::Math::TVector2<float>,512> *)(*pcVar4)();
            return pTVar8;
          }
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + uVar11 * 8),0x1000);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TDynamicVector<UE::Math::TVector2<float>,512> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      (this->Blocks).ArrayNum = iVar7 + 1;
      uVar11 = uVar11 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while ((longlong)uVar11 < (longlong)(int)uVar2);
  }
  return this;
}

// TDynamicVector<UE::Math::TVector<float>,512> @ 143450240

TDynamicVector<UE::Math::TVector<float>,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::
TDynamicVector<UE::Math::TVector<float>,512>
          (TDynamicVector<UE::Math::TVector<float>,512> *this,
          TDynamicVector<UE::Math::TVector<float>,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar10 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar11 = uVar10;
    do {
      _Dst = ::operator_new(0x1800);
      uVar9 = (uint)uVar10;
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TDynamicVector<UE::Math::TVector<float>,512> *)(*pcVar4)();
            return pTVar8;
          }
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + uVar11 * 8),0x1800);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TDynamicVector<UE::Math::TVector<float>,512> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      (this->Blocks).ArrayNum = iVar7 + 1;
      uVar11 = uVar11 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while ((longlong)uVar11 < (longlong)(int)uVar2);
  }
  return this;
}

// TDynamicVector<UE::Math::TVector<double>,512> @ 143450420

TDynamicVector<UE::Math::TVector<double>,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::
TDynamicVector<UE::Math::TVector<double>,512>
          (TDynamicVector<UE::Math::TVector<double>,512> *this,
          TDynamicVector<UE::Math::TVector<double>,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar10 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar11 = uVar10;
    do {
      _Dst = ::operator_new(0x3000);
      uVar9 = (uint)uVar10;
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TDynamicVector<UE::Math::TVector<double>,512> *)(*pcVar4)();
            return pTVar8;
          }
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + uVar11 * 8),0x3000);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TDynamicVector<UE::Math::TVector<double>,512> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      (this->Blocks).ArrayNum = iVar7 + 1;
      uVar11 = uVar11 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while ((longlong)uVar11 < (longlong)(int)uVar2);
  }
  return this;
}

// TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> @ 143450600

TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::
TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,
          TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar10 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar11 = uVar10;
    do {
      _Dst = ::operator_new(0x2000);
      uVar9 = (uint)uVar10;
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *)(*pcVar4)();
            return pTVar8;
          }
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + uVar11 * 8),0x2000);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      (this->Blocks).ArrayNum = iVar7 + 1;
      uVar11 = uVar11 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while ((longlong)uVar11 < (longlong)(int)uVar2);
  }
  return this;
}

// TDynamicVector<UE::Geometry::FIndex3i,512> @ 1434507e0

TDynamicVector<UE::Geometry::FIndex3i,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TDynamicVector<UE::Geometry::FIndex3i,512>
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *local_38 [2];
  
  piVar1 = &(this->Blocks).ArrayMax;
  uVar10 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->Blocks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Blocks).AllocatorInstance,0,piVar1);
    uVar11 = uVar10;
    do {
      _Dst = ::operator_new(0x1800);
      uVar9 = (uint)uVar10;
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TDynamicVector<UE::Geometry::FIndex3i,512> *)(*pcVar4)();
            return pTVar8;
          }
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + uVar11 * 8),0x1800);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TDynamicVector<UE::Geometry::FIndex3i,512> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      (this->Blocks).ArrayNum = iVar7 + 1;
      uVar11 = uVar11 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while ((longlong)uVar11 < (longlong)(int)uVar2);
  }
  return this;
}

// operator= @ 143454c30

TDynamicVector<unsigned_short,512> * __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::operator=
          (TDynamicVector<unsigned_short,512> *this,TDynamicVector<unsigned_short,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  TDynamicVector<unsigned_short,512> *pTVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar13 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar14 = 0;
    do {
      puVar8 = ::operator_new(0x400);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar13 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TDynamicVector<unsigned_short,512> *)(*pcVar3)();
          return pTVar9;
        }
        lVar12 = 8;
        puVar10 = puVar8;
        puVar11 = *(undefined8 **)((param_1->Blocks).AllocatorInstance.Data + lVar14 * 8);
        do {
          uVar4 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar4;
          uVar4 = puVar11[3];
          puVar10[2] = puVar11[2];
          puVar10[3] = uVar4;
          uVar4 = puVar11[5];
          puVar10[4] = puVar11[4];
          puVar10[5] = uVar4;
          uVar4 = puVar11[7];
          puVar10[6] = puVar11[6];
          puVar10[7] = uVar4;
          uVar4 = puVar11[9];
          puVar10[8] = puVar11[8];
          puVar10[9] = uVar4;
          uVar4 = puVar11[0xb];
          puVar10[10] = puVar11[10];
          puVar10[0xb] = uVar4;
          uVar4 = puVar11[0xd];
          puVar10[0xc] = puVar11[0xc];
          puVar10[0xd] = uVar4;
          uVar4 = puVar11[0xf];
          puVar10[0xe] = puVar11[0xe];
          puVar10[0xf] = uVar4;
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + 0x10;
          puVar11 = puVar11 + 0x10;
        } while (lVar12 != 0);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = puVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TDynamicVector<unsigned_short,512> *)(*pcVar3)();
        return pTVar9;
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == (this->Blocks).ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar13 = uVar13 + 1;
      (this->Blocks).ArrayNum = iVar7 + 1;
      lVar14 = lVar14 + 1;
      *(undefined8 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while (lVar14 < iVar1);
  }
  return this;
}

// operator= @ 143454e50

TDynamicVector<int,512> * __thiscall
UE::Geometry::TDynamicVector<int,512>::operator=
          (TDynamicVector<int,512> *this,TDynamicVector<int,512> *param_1)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    Empty(this,0);
    pTVar1 = &param_1->Blocks;
    pTVar2 = &this->Blocks;
    this->CurBlock = param_1->CurBlock;
    this->CurBlockUsed = param_1->CurBlockUsed;
    if (pTVar2 != pTVar1) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Blocks).ArrayNum = (param_1->Blocks).ArrayNum;
      (this->Blocks).ArrayMax = (param_1->Blocks).ArrayMax;
      (param_1->Blocks).ArrayNum = 0;
      (param_1->Blocks).ArrayMax = 0;
    }
    param_1->CurBlock = 0;
    param_1->CurBlockUsed = 0;
    AddAllocatedBlock(param_1);
  }
  return this;
}

// operator= @ 143454ef0

TDynamicVector<float,512> * __thiscall
UE::Geometry::TDynamicVector<float,512>::operator=
          (TDynamicVector<float,512> *this,TDynamicVector<float,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  TDynamicVector<float,512> *pTVar7;
  uint uVar8;
  longlong lVar9;
  void *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar8 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      _Dst = ::operator_new(0x800);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TDynamicVector<float,512> *)(*pcVar3)();
          return pTVar7;
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + lVar9 * 8),0x800);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDynamicVector<float,512> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (this->Blocks).ArrayNum;
      if (iVar6 == (this->Blocks).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar8 = uVar8 + 1;
      (this->Blocks).ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
    } while (lVar9 < iVar1);
  }
  return this;
}

// operator= @ 1434550c0

TDynamicVector<double,512> * __thiscall
UE::Geometry::TDynamicVector<double,512>::operator=
          (TDynamicVector<double,512> *this,TDynamicVector<double,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  TDynamicVector<double,512> *pTVar7;
  uint uVar8;
  longlong lVar9;
  void *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar8 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      _Dst = ::operator_new(0x1000);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TDynamicVector<double,512> *)(*pcVar3)();
          return pTVar7;
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + lVar9 * 8),0x1000);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDynamicVector<double,512> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (this->Blocks).ArrayNum;
      if (iVar6 == (this->Blocks).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar8 = uVar8 + 1;
      (this->Blocks).ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
    } while (lVar9 < iVar1);
  }
  return this;
}

// operator= @ 143455290

TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::operator=
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,
          TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *pTVar7;
  uint uVar8;
  longlong lVar9;
  void *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar8 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      _Dst = ::operator_new(0x2000);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *)(*pcVar3)();
          return pTVar7;
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + lVar9 * 8),0x2000);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (this->Blocks).ArrayNum;
      if (iVar6 == (this->Blocks).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar8 = uVar8 + 1;
      (this->Blocks).ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
    } while (lVar9 < iVar1);
  }
  return this;
}

// operator= @ 143455460

TDynamicVector<UE::Geometry::FIndex3i,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::operator=
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_1)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    Empty(this,0);
    pTVar1 = &param_1->Blocks;
    pTVar2 = &this->Blocks;
    this->CurBlock = param_1->CurBlock;
    this->CurBlockUsed = param_1->CurBlockUsed;
    if (pTVar2 != pTVar1) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Blocks).ArrayNum = (param_1->Blocks).ArrayNum;
      (this->Blocks).ArrayMax = (param_1->Blocks).ArrayMax;
      (param_1->Blocks).ArrayNum = 0;
      (param_1->Blocks).ArrayMax = 0;
    }
    param_1->CurBlock = 0;
    param_1->CurBlockUsed = 0;
    AddAllocatedBlock(param_1);
  }
  return this;
}

// operator= @ 143455500

TDynamicVector<UE::Geometry::FIndex3i,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::operator=
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar7;
  uint uVar8;
  longlong lVar9;
  void *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar8 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      _Dst = ::operator_new(0x1800);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TDynamicVector<UE::Geometry::FIndex3i,512> *)(*pcVar3)();
          return pTVar7;
        }
        memcpy(_Dst,*(void **)((param_1->Blocks).AllocatorInstance.Data + lVar9 * 8),0x1800);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = _Dst;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDynamicVector<UE::Geometry::FIndex3i,512> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (this->Blocks).ArrayNum;
      if (iVar6 == (this->Blocks).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar8 = uVar8 + 1;
      (this->Blocks).ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 1;
      *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
    } while (lVar9 < iVar1);
  }
  return this;
}

// operator() @ 143462cb0

void __thiscall
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5::<lambda_2>::
operator()(void *this,FArchive *param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  float local_res20 [2];
  float local_28;
  float local_24 [3];
  
  pdVar4 = &(param_2->field0_0x0)._s_0.Z;
  lVar5 = 0x200;
  do {
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_24,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_24);
        }
      }
      else {
        local_24[0] = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
        }
      }
      else {
        local_res20[0] = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_28);
        }
      }
      else {
        local_28 = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      ((TVector<double>_u_0_s_0 *)(pdVar4 + -2))->X = (double)local_24[0];
      pdVar4[-1] = (double)local_res20[0];
      *pdVar4 = (double)local_28;
    }
    else {
      ::operator<<(param_1,(double *)(pdVar4 + -2));
      ::operator<<(param_1,pdVar4 + -1);
      ::operator<<(param_1,pdVar4);
    }
    pdVar4 = pdVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// operator() @ 143462e50

void __thiscall
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>'::__l5::<lambda_2>::
operator()(void *this,FArchive *param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  float local_res20 [2];
  float local_28;
  float local_24 [3];
  
  pdVar4 = &(param_2->field0_0x0)._s_0.Z;
  lVar5 = 0x200;
  do {
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_24,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_24);
        }
      }
      else {
        local_24[0] = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
        }
      }
      else {
        local_res20[0] = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_28);
        }
      }
      else {
        local_28 = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      ((TVector<double>_u_0_s_0 *)(pdVar4 + -2))->X = (double)local_24[0];
      pdVar4[-1] = (double)local_res20[0];
      *pdVar4 = (double)local_28;
    }
    else {
      ::operator<<(param_1,(double *)(pdVar4 + -2));
      ::operator<<(param_1,pdVar4 + -1);
      ::operator<<(param_1,pdVar4);
    }
    pdVar4 = pdVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// operator() @ 143462ff0

void __thiscall
`UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>'::__l5::<lambda_2>::
operator()(void *this,FArchive *param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  float local_res20 [2];
  float local_28;
  float local_24 [3];
  
  pdVar4 = &(param_2->field0_0x0)._s_0.Z;
  lVar5 = 0x200;
  do {
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_24,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_24);
        }
      }
      else {
        local_24[0] = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
        }
      }
      else {
        local_res20[0] = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_28);
        }
      }
      else {
        local_28 = *(float *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      ((TVector<double>_u_0_s_0 *)(pdVar4 + -2))->X = (double)local_24[0];
      pdVar4[-1] = (double)local_res20[0];
      *pdVar4 = (double)local_28;
    }
    else {
      ::operator<<(param_1,(double *)(pdVar4 + -2));
      ::operator<<(param_1,pdVar4 + -1);
      ::operator<<(param_1,pdVar4);
    }
    pdVar4 = pdVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// Add @ 143465500

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Add
          (TDynamicVector<UE::Math::TVector<float>,512> *this,TVector<float> *param_1)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  if (uVar3 == 0x200) {
    if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
      AddAllocatedBlock(this);
    }
    this->CurBlock = this->CurBlock + 1;
    uVar3 = 0;
    this->CurBlockUsed = 0;
  }
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  lVar2 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
  *(undefined8 *)(lVar2 + (longlong)(int)uVar3 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
  *(float *)(lVar2 + 8 + (longlong)(int)uVar3 * 0xc) = fVar1;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// Add @ 143465570

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Add
          (TDynamicVector<UE::Math::TVector<double>,512> *this,TVector<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  
  uVar5 = this->CurBlockUsed;
  if (uVar5 == 0x200) {
    if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
      AddAllocatedBlock(this);
    }
    this->CurBlock = this->CurBlock + 1;
    uVar5 = 0;
    this->CurBlockUsed = 0;
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  lVar3 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
  pdVar1 = (double *)(lVar3 + (longlong)(int)uVar5 * 0x18);
  *pdVar1 = (param_1->field0_0x0)._s_0.X;
  pdVar1[1] = dVar4;
  *(double *)(lVar3 + 0x10 + (longlong)(int)uVar5 * 0x18) = dVar2;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// Add @ 1434655e0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Add
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,FIndex3i *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  if (uVar3 == 0x200) {
    if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
      AddAllocatedBlock(this);
    }
    this->CurBlock = this->CurBlock + 1;
    uVar3 = 0;
    this->CurBlockUsed = 0;
  }
  iVar1 = (param_1->field0_0x0)._s_0.C;
  lVar2 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
  *(undefined8 *)(lVar2 + (longlong)(int)uVar3 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
  *(int *)(lVar2 + 8 + (longlong)(int)uVar3 * 0xc) = iVar1;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// AddAllocatedBlock @ 143465650

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock
          (TDynamicVector<UE::Math::TVector2<float>,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 143465710

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
          (TDynamicVector<UE::Math::TVector<float>,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1800);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 1434657d0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x2000);
  if (local_18[0] != (void *)0x0) {
    lVar8 = 0x200;
    puVar7 = (undefined8 *)((longlong)local_18[0] + 8);
    do {
      puVar7[-1] = 0xffffffffffffffff;
      *puVar7 = 0xffffffffffffffff;
      puVar7 = puVar7 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 1434658d0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1800);
  if (local_18[0] != (void *)0x0) {
    lVar8 = 0x200;
    puVar7 = (undefined4 *)((longlong)local_18[0] + 8);
    do {
      *(undefined8 *)(puVar7 + -2) = 0xffffffffffffffff;
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// Clear @ 143483710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::TDynamicVector<int,512>::Clear(TDynamicVector<int,512> *this)

{
  TruncateBlocks(this,1,No);
  this->CurBlock = 0;
  this->CurBlockUsed = 0;
  if ((this->Blocks).ArrayNum == 0) {
    AddAllocatedBlock(this);
    return;
  }
  return;
}

// Empty @ 1434b19e0

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Empty(TDynamicVector<float,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x800);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 1434b1ad0

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x1000);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 1434b1bc0

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty
          (TDynamicVector<UE::Math::TVector<float>,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x1800);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 1434b1cb0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x2000);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 1434b1da0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Empty
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x1800);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Fill @ 1434b86d0

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Fill
          (TDynamicVector<unsigned_short,512> *this,ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (this->Blocks).ArrayNum;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar5 < uVar1 - 1) {
        uVar4 = 0x200;
LAB_1434b8717:
        uVar2 = 0;
        do {
          lVar3 = (longlong)(int)uVar2;
          uVar2 = uVar2 + 1;
          *(ushort *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
           lVar3 * 2) = *param_1;
        } while (uVar2 < uVar4);
      }
      else {
        uVar4 = (this->CurBlock - (uVar1 - 1)) * 0x200 + this->CurBlockUsed;
        if (uVar4 != 0) goto LAB_1434b8717;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

// Fill @ 1434b8770

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Fill(TDynamicVector<int,512> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (this->Blocks).ArrayNum;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar5 < uVar1 - 1) {
        uVar4 = 0x200;
LAB_1434b87b7:
        uVar2 = 0;
        do {
          lVar3 = (longlong)(int)uVar2;
          uVar2 = uVar2 + 1;
          *(int *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
                  lVar3 * 4) = *param_1;
        } while (uVar2 < uVar4);
      }
      else {
        uVar4 = (this->CurBlock - (uVar1 - 1)) * 0x200 + this->CurBlockUsed;
        if (uVar4 != 0) goto LAB_1434b87b7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

// Fill @ 1434b8810

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Fill(TDynamicVector<float,512> *this,float *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = (this->Blocks).ArrayNum;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 0;
      if (uVar4 < uVar1 - 1) {
        uVar6 = 0x200;
LAB_1434b8864:
        lVar7 = (longlong)(int)uVar4;
        iVar3 = 2;
        do {
          lVar2 = (longlong)(int)uVar5;
          uVar5 = uVar5 + 4;
          *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + lVar2 * 4) =
               *param_1;
          *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + -4 +
                    (longlong)iVar3 * 4) = *param_1;
          *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) +
                    (longlong)iVar3 * 4) = *param_1;
          lVar2 = (longlong)iVar3;
          iVar3 = iVar3 + 4;
          *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + 4 +
                    lVar2 * 4) = *param_1;
        } while (uVar5 < uVar6 - 3);
        for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
LAB_1434b88c8:
          *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8)
                    + (longlong)(int)uVar5 * 4) = *param_1;
        }
      }
      else {
        uVar6 = (this->CurBlock - (uVar1 - 1)) * 0x200 + this->CurBlockUsed;
        if (3 < uVar6) goto LAB_1434b8864;
        if (uVar6 != 0) goto LAB_1434b88c8;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

// Fill @ 1434b8910

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Fill
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,FIndex3i *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (this->Blocks).ArrayNum;
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar7 < uVar1 - 1) {
        uVar4 = 0x200;
LAB_1434b8961:
        uVar6 = 0;
        do {
          iVar2 = (param_1->field0_0x0)._s_0.C;
          lVar5 = (longlong)(int)uVar6;
          uVar6 = uVar6 + 1;
          lVar3 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
          *(undefined8 *)(lVar3 + lVar5 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
          *(int *)(lVar3 + 8 + lVar5 * 0xc) = iVar2;
        } while (uVar6 < uVar4);
      }
      else {
        uVar4 = (this->CurBlock - (uVar1 - 1)) * 0x200 + this->CurBlockUsed;
        if (uVar4 != 0) goto LAB_1434b8961;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return;
}

// InsertAt @ 1434d2610

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::InsertAt
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,TVector2<float> *param_1,uint param_2
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar2) {
      ((TVector2<float>_u_0 *)
      (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8) +
      (ulonglong)(param_2 & 0x1ff) * 8))->_s_0 = (TVector2<float>_u_0_s_0)param_1->field0_0x0;
      return;
    }
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    uVar1 = this->CurBlock;
  }
  ((TVector2<float>_u_0 *)
  (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
  (longlong)(int)uVar3 * 8))->_s_0 = (TVector2<float>_u_0_s_0)param_1->field0_0x0;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 1434d26f0

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::InsertAt
          (TDynamicVector<UE::Math::TVector<float>,512> *this,TVector<float> *param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = this->CurBlock * 0x200 + this->CurBlockUsed;
  if (param_2 != uVar3) {
    if (param_2 <= uVar3) {
      fVar1 = (param_1->field0_0x0)._s_0.Z;
      lVar2 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8);
      *(undefined8 *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0xc) =
           *(undefined8 *)&param_1->field0_0x0;
      *(float *)(lVar2 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc) = fVar1;
      return;
    }
    Resize(this,param_2);
  }
  Add(this,param_1);
  return;
}

// InsertAt @ 1434d2770

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
          (TDynamicVector<UE::Math::TVector<double>,512> *this,TVector<double> *param_1,uint param_2
          )

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  
  uVar5 = this->CurBlock * 0x200 + this->CurBlockUsed;
  if (param_2 != uVar5) {
    if (param_2 <= uVar5) {
      dVar4 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      lVar3 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8);
      pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
      *pdVar1 = (param_1->field0_0x0)._s_0.X;
      pdVar1[1] = dVar4;
      *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18) = dVar2;
      return;
    }
    Resize(this,param_2);
  }
  Add(this,param_1);
  return;
}

// InsertAt @ 1434d27f0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,FIndex3i *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = this->CurBlock * 0x200 + this->CurBlockUsed;
  if (param_2 != uVar3) {
    if (param_2 <= uVar3) {
      iVar1 = (param_1->field0_0x0)._s_0.C;
      lVar2 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8);
      *(undefined8 *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0xc) =
           *(undefined8 *)&param_1->field0_0x0;
      *(int *)(lVar2 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc) = iVar1;
      return;
    }
    Resize(this,param_2);
  }
  Add(this,param_1);
  return;
}

// Resize @ 143519290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::Resize
          (TDynamicVector<unsigned_short,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x400);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 143519420

void __thiscall
UE::Geometry::TDynamicVector<int,512>::Resize
          (TDynamicVector<int,512> *this,uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->CurBlock;
  uVar2 = this->CurBlockUsed;
  Resize(this,param_1);
  for (uVar2 = uVar1 * 0x200 + uVar2; uVar2 < param_1; uVar2 = uVar2 + 1) {
    *(int *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff) * 4) = *param_2;
  }
  return;
}

// Resize @ 143519490

void __thiscall
UE::Geometry::TDynamicVector<float,512>::Resize
          (TDynamicVector<float,512> *this,uint param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = this->CurBlock * 0x200 + this->CurBlockUsed;
  Resize(this,param_1);
  if (uVar3 < param_1) {
    if (3 < param_1 - uVar3) {
      uVar4 = uVar3 + 2;
      do {
        uVar2 = uVar3 >> 9;
        uVar1 = uVar3 & 0x1ff;
        uVar3 = uVar3 + 4;
        *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
                  (ulonglong)uVar1 * 4) = *param_2;
        *(float *)(*(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar4 - 1 >> 9) * 8) +
                  (ulonglong)(uVar4 - 1 & 0x1ff) * 4) = *param_2;
        *(float *)(*(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
                  (ulonglong)(uVar4 & 0x1ff) * 4) = *param_2;
        uVar2 = uVar4 + 1;
        uVar4 = uVar4 + 4;
        *(float *)(*(longlong *)
                    ((this->Blocks).AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                  (ulonglong)(uVar2 & 0x1ff) * 4) = *param_2;
      } while (uVar3 < param_1 - 3);
      if (param_1 <= uVar3) {
        return;
      }
    }
    do {
      uVar2 = uVar3 & 0x1ff;
      uVar4 = uVar3 >> 9;
      uVar3 = uVar3 + 1;
      *(float *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar4 * 8) +
                (ulonglong)uVar2 * 4) = *param_2;
    } while (uVar3 < param_1);
  }
  return;
}

// Resize @ 1435195b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Resize
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1000);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 143519740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Resize
          (TDynamicVector<UE::Math::TVector<float>,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1800);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 1435198d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Resize
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x2000);
        if (local_28[0] == (void *)0x0) {
          local_28[0] = (void *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = (undefined8 *)((longlong)local_28[0] + 8);
          do {
            puVar6[-1] = 0xffffffffffffffff;
            *puVar6 = 0xffffffffffffffff;
            puVar6 = puVar6 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 143519a90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Resize
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1800);
        if (local_28[0] == (void *)0x0) {
          local_28[0] = (void *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = (undefined4 *)((longlong)local_28[0] + 8);
          do {
            *(undefined8 *)(puVar6 + -2) = 0xffffffffffffffff;
            *puVar6 = 0xffffffff;
            puVar6 = puVar6 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// TruncateBlocks @ 1435535d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_short,512>::TruncateBlocks
          (TDynamicVector<unsigned_short,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x400);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1435537d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::TruncateBlocks
          (TDynamicVector<UE::Math::TVector2<float>,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 1435539d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TruncateBlocks
          (TDynamicVector<UE::Math::TVector<float>,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 143553bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x2000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 143553dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FIndex3i,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// ~TDynamicVector<int,512> @ 1435684f0

void __thiscall
UE::Geometry::TDynamicVector<int,512>::~TDynamicVector<int,512>(TDynamicVector<int,512> *this)

{
  FScriptContainerElement *pFVar1;
  
  Empty(this,0);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TDynamicVector<UE::Math::TVector<double>,512> @ 143568520

void __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::
~TDynamicVector<UE::Math::TVector<double>,512>(TDynamicVector<UE::Math::TVector<double>,512> *this)

{
  FScriptContainerElement *pFVar1;
  
  Empty(this,0);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512> @ 1435e46a0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::
~TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>
          (TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined8 *puVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  pTVar1 = &this->Blocks;
  lVar11 = (longlong)(this->Blocks).ArrayNum;
  uVar12 = 0;
  if (0 < lVar11) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->Blocks).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar3 = *(void **)((pTVar1->AllocatorInstance).Data + lVar9 * 8);
      if (pvVar3 != (void *)0x0) {
        lVar8 = 0x200;
        lVar10 = (longlong)pvVar3 + 0xc040;
        do {
          puVar2 = (undefined8 *)(lVar10 + -0x60);
          lVar10 = lVar10 + -0x60;
          lVar8 = lVar8 + -1;
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
        } while (lVar8 != 0);
        ::operator_delete(pvVar3,0xc000);
      }
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar11);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

// ~TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> @ 1435e4800

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::
~TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>
          (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x6800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// Add @ 1435ec5c0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Add
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this,FSparseOctreeCell *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = this->CurBlockUsed;
  if (uVar9 == 0x200) {
    if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
      AddAllocatedBlock(this);
    }
    this->CurBlock = this->CurBlock + 1;
    uVar9 = 0;
    this->CurBlockUsed = 0;
  }
  uVar4 = *(undefined8 *)&(param_1->Index).field0_0x0;
  uVar2 = (param_1->Children).Elements[7];
  uVar5 = *(undefined8 *)((longlong)&(param_1->Index).field0_0x0 + 8);
  uVar6 = *(undefined8 *)((param_1->Children).Elements + 1);
  uVar7 = *(undefined8 *)((param_1->Children).Elements + 3);
  uVar8 = *(undefined8 *)((param_1->Children).Elements + 5);
  lVar10 = (longlong)(int)uVar9 * 0x34;
  lVar3 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
  *(undefined8 *)(lVar3 + lVar10) = *(undefined8 *)param_1;
  ((undefined8 *)(lVar3 + lVar10))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar10);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  *(uint *)(lVar3 + 0x30 + lVar10) = uVar2;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// AddAllocatedBlock @ 1435ec640

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::AddAllocatedBlock
          (TDynamicVector<unsigned_int,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<unsigned_int,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x800);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  }
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 1435ec700

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  longlong lVar9;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  pvVar7 = ::operator_new(0xc000);
  local_18[0] = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    lVar9 = 0x200;
    puVar8 = (undefined4 *)((longlong)pvVar7 + 0x48);
    do {
      *(undefined8 *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      puVar8[1] = 8;
      *(undefined8 *)(puVar8 + 2) = 0;
      puVar8[4] = 0;
      puVar8 = puVar8 + 0x18;
      lVar9 = lVar9 + -1;
      local_18[0] = pvVar7;
    } while (lVar9 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) &&
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 1435ec800

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  pvVar7 = ::operator_new(0x6800);
  local_18[0] = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    lVar9 = 0x200;
    puVar8 = (undefined8 *)((longlong)pvVar7 + 8);
    do {
      *(undefined4 *)(puVar8 + -1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar8 + -4) = 0;
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0x24) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
      puVar8 = (undefined8 *)((longlong)puVar8 + 0x34);
      lVar9 = lVar9 + -1;
      local_18[0] = pvVar7;
    } while (lVar9 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) &&
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 1435ec920

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  pvVar7 = ::operator_new(0x6800);
  local_18[0] = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    lVar9 = 0x200;
    puVar8 = (undefined8 *)((longlong)pvVar7 + 8);
    do {
      *(undefined4 *)(puVar8 + -1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar8 + -4) = 0;
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0x24) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
      puVar8 = (undefined8 *)((longlong)puVar8 + 0x34);
      lVar9 = lVar9 + -1;
      local_18[0] = pvVar7;
    } while (lVar9 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) &&
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// InsertAt @ 14360c680

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::InsertAt
          (TDynamicVector<unsigned_int,512> *this,uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar2) {
      *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8)
               + (ulonglong)(param_2 & 0x1ff) * 4) = *param_1;
      return;
    }
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    uVar1 = this->CurBlock;
  }
  *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
           (longlong)(int)uVar3 * 4) = *param_1;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 14360c750

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::InsertAt
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this,FSparseOctreeCell *param_1,
          uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = this->CurBlock * 0x200 + this->CurBlockUsed;
  if (param_2 != uVar8) {
    if (param_2 <= uVar8) {
      uVar3 = *(undefined8 *)&(param_1->Index).field0_0x0;
      uVar8 = (param_1->Children).Elements[7];
      uVar4 = *(undefined8 *)((longlong)&(param_1->Index).field0_0x0 + 8);
      uVar5 = *(undefined8 *)((param_1->Children).Elements + 1);
      uVar6 = *(undefined8 *)((param_1->Children).Elements + 3);
      uVar7 = *(undefined8 *)((param_1->Children).Elements + 5);
      lVar9 = (ulonglong)(param_2 & 0x1ff) * 0x34;
      lVar2 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8);
      *(undefined8 *)(lVar2 + lVar9) = *(undefined8 *)param_1;
      ((undefined8 *)(lVar2 + lVar9))[1] = uVar3;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar9);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(uint *)(lVar2 + 0x30 + lVar9) = uVar8;
      return;
    }
    Resize(this,param_2);
  }
  Add(this,param_1);
  return;
}

// Resize @ 143618890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::Resize
          (TDynamicVector<unsigned_int,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x800);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 143618a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::Resize
          (TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0xc000);
        if (local_28[0] == (void *)0x0) {
          local_28[0] = (void *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = (undefined4 *)((longlong)local_28[0] + 0x48);
          do {
            *(undefined8 *)(puVar6 + -2) = 0;
            *puVar6 = 0;
            puVar6[1] = 8;
            *(undefined8 *)(puVar6 + 2) = 0;
            puVar6[4] = 0;
            puVar6 = puVar6 + 0x18;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 143618be0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Resize
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x6800);
        if (local_28[0] == (void *)0x0) {
          local_28[0] = (void *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = (undefined8 *)((longlong)local_28[0] + 8);
          do {
            *(undefined4 *)(puVar6 + -1) = 0xffffffff;
            *(undefined1 *)((longlong)puVar6 + -4) = 0;
            *puVar6 = 0;
            *(undefined4 *)(puVar6 + 1) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x14) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)puVar6 + 0xc) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)puVar6 + 0x24) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
            puVar6 = (undefined8 *)((longlong)puVar6 + 0x34);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 143618dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::Resize
          (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x6800);
        if (local_28[0] == (void *)0x0) {
          local_28[0] = (void *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = (undefined8 *)((longlong)local_28[0] + 8);
          do {
            *(undefined4 *)(puVar6 + -1) = 0xffffffff;
            *(undefined1 *)((longlong)puVar6 + -4) = 0;
            *puVar6 = 0;
            *(undefined4 *)(puVar6 + 1) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x14) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)puVar6 + 0xc) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)puVar6 + 0x24) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
            puVar6 = (undefined8 *)((longlong)puVar6 + 0x34);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// TruncateBlocks @ 14361d290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::TruncateBlocks
          (TDynamicVector<unsigned_int,512> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 14361d490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512> *this,int param_1,
          EAllowShrinking param_2)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar7 = (this->Blocks).ArrayNum;
  if (0 < iVar7 - param_1) {
    pTVar1 = &this->Blocks;
    lVar11 = (longlong)param_1 * 8;
    uVar9 = param_1;
    if (param_1 < iVar7) {
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
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
        pvVar3 = *(void **)((pTVar1->AllocatorInstance).Data + lVar11);
        if (pvVar3 != (void *)0x0) {
          lVar8 = 0x200;
          lVar10 = (longlong)pvVar3 + 0xc040;
          do {
            puVar2 = (undefined8 *)(lVar10 + -0x60);
            lVar10 = lVar10 + -0x60;
            lVar8 = lVar8 + -1;
            if ((void *)*puVar2 != (void *)0x0) {
              FMemory::Free((void *)*puVar2);
            }
          } while (lVar8 != 0);
          ::operator_delete(pvVar3,0xc000);
        }
        uVar6 = 0;
        if ((int)uVar9 < (this->Blocks).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
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
        uVar9 = uVar9 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar11) = 0;
        iVar7 = (this->Blocks).ArrayNum;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < iVar7);
    }
    uVar9 = iVar7 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar9 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8;
      iVar7 = ((this->Blocks).ArrayNum - uVar9) - param_1;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar9 * 8,(longlong)iVar7 << 3);
      }
      iVar7 = (this->Blocks).ArrayNum - uVar9;
      (this->Blocks).ArrayNum = iVar7;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,iVar7,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 14361d6e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x6800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 14361d8e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x6800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

