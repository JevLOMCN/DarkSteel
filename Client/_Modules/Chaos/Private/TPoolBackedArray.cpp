// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// Alloc<int_const_&,Chaos::FConstraintHandle_*_&> @ 143b513a0

FPBDIslandConstraint * __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
::Alloc<int_const_&,Chaos::FConstraintHandle_*_&>
          (TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
           *this,int *param_1,FConstraintHandle **param_2)

{
  int *piVar1;
  FConstraintHandle *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  FPBDIslandConstraint *pFVar8;
  FPBDIslandConstraint *local_18 [2];
  
  iVar7 = (this->FreeItems).ArrayNum;
  if (iVar7 == 0) {
    local_18[0] = TObjectPool<Chaos::Private::FPBDIslandConstraint>::
                  Alloc<int_const_&,Chaos::FConstraintHandle_*_&>(&this->Pool,param_1,param_2);
  }
  else {
    if (iVar7 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPBDIslandConstraint *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->FreeItems).ArrayNum;
    pFVar8 = *(FPBDIslandConstraint **)
              ((this->FreeItems).AllocatorInstance.Data + (longlong)iVar7 * 8 + -8);
    (this->FreeItems).ArrayNum = iVar7 + -1;
    pFVar2 = *param_2;
    pFVar8->ContainerIndex = *param_1;
    pFVar8->Constraint = pFVar2;
    local_18[0] = pFVar8;
    if (pFVar2 != (FConstraintHandle *)0x0) {
      if ((pFVar8 != (FPBDIslandConstraint *)0x0) &&
         (pFVar2->GraphEdge != (FPBDIslandConstraint *)0x0)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InEdge == nullptr) || (GraphEdge == nullptr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                           ,0x99,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FPBDIslandConstraint *)(*pcVar4)();
          return pFVar8;
        }
      }
      pFVar2->GraphEdge = pFVar8;
      bVar6 = (**(code **)(pFVar8->Constraint->_padding_ + 0x40))();
      (pFVar8->Flags).Bits = (pFVar8->Flags).Bits ^ ((pFVar8->Flags).Bits ^ (uint)bVar6) & 1;
    }
  }
  pFVar3 = (this->Items).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Items).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPBDIslandConstraint *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->Items).ArrayNum;
  piVar1 = &(this->Items).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar3 = (this->Items).AllocatorInstance.Data;
  (this->Items).ArrayNum = iVar7 + 1;
  *(FPBDIslandConstraint **)(pFVar3 + (longlong)iVar7 * 8) = local_18[0];
  local_18[0]->ArrayIndex = iVar7;
  return local_18[0];
}

// operator[] @ 143b584e0

FPBDIsland * __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
::operator[](TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIsland *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Items).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIsland *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIsland **)((this->Items).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 143b58560

FPBDIsland * __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
::operator[](TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIsland *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Items).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIsland *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIsland **)((this->Items).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// Free @ 143b66a50

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
::Free(TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
       *this,FPBDIsland *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FPBDIsland *local_res10;
  
  if (param_1 != (FPBDIsland *)0x0) {
    uVar2 = param_1->ArrayIndex;
    lVar9 = (longlong)(int)uVar2;
    uVar10 = ~uVar2 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    local_res10 = param_1;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(FPBDIsland **)((this->Items).AllocatorInstance.Data + lVar9 * 8) != local_res10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Items[Index] == Item",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                         ,0x50,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = (this->Items).ArrayNum;
    pFVar4 = (this->Items).AllocatorInstance.Data;
    iVar8 = iVar3 + ~uVar2;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->Items).ArrayNum;
    *piVar1 = *piVar1 + -1;
    local_res10->ArrayIndex = -1;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      if ((int)uVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)((this->Items).AllocatorInstance.Data + lVar9 * 8) + 0x7c) = uVar2;
    }
    FPBDIsland::Trash(local_res10);
    pFVar4 = (this->FreeItems).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(this->FreeItems).ArrayMax * 8)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->FreeItems).ArrayNum;
    piVar1 = &(this->FreeItems).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeItems).AllocatorInstance,piVar1);
    }
    (this->FreeItems).ArrayNum = iVar8 + 1;
    *(FPBDIsland **)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_res10;
  }
  return;
}

// Free @ 143b66ca0

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
::Free(TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
       *this,FPBDIslandConstraint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FPBDIslandConstraint *local_res10;
  
  if (param_1 != (FPBDIslandConstraint *)0x0) {
    uVar2 = param_1->ArrayIndex;
    lVar9 = (longlong)(int)uVar2;
    uVar10 = ~uVar2 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    local_res10 = param_1;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(FPBDIslandConstraint **)((this->Items).AllocatorInstance.Data + lVar9 * 8) != local_res10)
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Items[Index] == Item",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                         ,0x50,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = (this->Items).ArrayNum;
    pFVar4 = (this->Items).AllocatorInstance.Data;
    iVar8 = iVar3 + ~uVar2;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->Items).ArrayNum;
    *piVar1 = *piVar1 + -1;
    local_res10->ArrayIndex = -1;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      if ((int)uVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)((this->Items).AllocatorInstance.Data + lVar9 * 8) + 0x24) = uVar2;
    }
    FPBDIslandConstraint::Trash(local_res10);
    pFVar4 = (this->FreeItems).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(this->FreeItems).ArrayMax * 8)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->FreeItems).ArrayNum;
    piVar1 = &(this->FreeItems).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeItems).AllocatorInstance,piVar1);
    }
    (this->FreeItems).ArrayNum = iVar8 + 1;
    *(FPBDIslandConstraint **)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar8 * 8) =
         local_res10;
  }
  return;
}

// Free @ 143b66ef0

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
::Free(TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
       *this,FPBDIslandMergeSet *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FPBDIslandMergeSet *local_res10;
  
  if (param_1 != (FPBDIslandMergeSet *)0x0) {
    uVar2 = param_1->ArrayIndex;
    lVar9 = (longlong)(int)uVar2;
    uVar10 = ~uVar2 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    local_res10 = param_1;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(FPBDIslandMergeSet **)((this->Items).AllocatorInstance.Data + lVar9 * 8) != local_res10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Items[Index] == Item",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                         ,0x50,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = (this->Items).ArrayNum;
    pFVar4 = (this->Items).AllocatorInstance.Data;
    iVar8 = iVar3 + ~uVar2;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->Items).ArrayNum;
    *piVar1 = *piVar1 + -1;
    local_res10->ArrayIndex = -1;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      if ((int)uVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)((this->Items).AllocatorInstance.Data + lVar9 * 8) + 0x14) = uVar2;
    }
    FPBDIslandMergeSet::Trash(local_res10);
    pFVar4 = (this->FreeItems).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(this->FreeItems).ArrayMax * 8)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->FreeItems).ArrayNum;
    piVar1 = &(this->FreeItems).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeItems).AllocatorInstance,piVar1);
    }
    (this->FreeItems).ArrayNum = iVar8 + 1;
    *(FPBDIslandMergeSet **)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar8 * 8) =
         local_res10;
  }
  return;
}

// Free @ 143b67140

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
::Free(TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
       *this,FPBDIslandParticle *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FPBDIslandParticle *local_res10;
  
  if (param_1 != (FPBDIslandParticle *)0x0) {
    uVar2 = param_1->ArrayIndex;
    lVar9 = (longlong)(int)uVar2;
    uVar10 = ~uVar2 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    local_res10 = param_1;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(FPBDIslandParticle **)((this->Items).AllocatorInstance.Data + lVar9 * 8) != local_res10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Items[Index] == Item",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                         ,0x50,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = 0;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = (this->Items).ArrayNum;
    pFVar4 = (this->Items).AllocatorInstance.Data;
    iVar8 = iVar3 + ~uVar2;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->Items).ArrayNum;
    *piVar1 = *piVar1 + -1;
    local_res10->ArrayIndex = -1;
    if ((int)uVar2 < (this->Items).ArrayNum) {
      if ((int)uVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)((this->Items).AllocatorInstance.Data + lVar9 * 8) + 0x24) = uVar2;
    }
    FPBDIslandParticle::Trash(local_res10);
    pFVar4 = (this->FreeItems).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(this->FreeItems).ArrayMax * 8)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->FreeItems).ArrayNum;
    piVar1 = &(this->FreeItems).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeItems).AllocatorInstance,piVar1);
    }
    (this->FreeItems).ArrayNum = iVar8 + 1;
    *(FPBDIslandParticle **)((this->FreeItems).AllocatorInstance.Data + (longlong)iVar8 * 8) =
         local_res10;
  }
  return;
}

// Reset @ 143b74120

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
::Reset(TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
        *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPBDIsland *pFVar4;
  FPBDIsland *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [16];
  
  uVar11 = (this->Items).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar14 = (longlong)(int)uVar11 * 8;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Items).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Free(this,*(FPBDIsland **)((this->Items).AllocatorInstance.Data + lVar14));
      lVar14 = lVar14 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  pFVar15 = (this->FreeItems).AllocatorInstance.Data;
  iVar3 = (this->FreeItems).ArrayNum;
  pFVar2 = pFVar15 + (longlong)iVar3 * 8;
  do {
    if ((this->FreeItems).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar2) {
      (this->FreeItems).ArrayNum = 0;
      if ((this->FreeItems).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->FreeItems).AllocatorInstance,0,&(this->FreeItems).ArrayMax);
      }
      if (((this->Items).ArrayNum != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Items.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6e,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->Pool).Capacity != (this->Pool).FreeCount) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool.GetNumAllocated() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      return;
    }
    iVar10 = (this->Pool).Blocks.ArrayNum;
    uVar11 = 0;
    pFVar4 = *(FPBDIsland **)pFVar15;
    lVar14 = 0;
    if (0 < iVar10) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = (this->Pool).Blocks.AllocatorInstance.Data;
        pFVar5 = *(FPBDIsland **)(pFVar12 + lVar13);
        if ((pFVar5 <= pFVar4) &&
           (pFVar4 < (FPBDIsland *)
                     ((longlong)*(int *)(pFVar12 + lVar13 + 0x10) * 0xa8 + (longlong)pFVar5))) {
          uVar9 = 0;
          if ((int)uVar11 < (this->Pool).Blocks.ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) goto LAB_143b742a5;
          goto LAB_143b742db;
        }
        iVar10 = (this->Pool).Blocks.ArrayNum;
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x20;
      } while ((int)uVar11 < iVar10);
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x1d9,L"A pointer was passed to an object pool method that it does not own."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar14 = -1;
LAB_143b742a5:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_143b742db:
    pFVar12 = (this->Pool).Blocks.AllocatorInstance.Data + lVar14 * 0x20;
    if (((pFVar4 < *(FPBDIsland **)pFVar12) ||
        ((FPBDIsland *)
         ((longlong)*(int *)(pFVar12 + 0x10) * 0xa8 + (longlong)*(FPBDIsland **)pFVar12) <= pFVar4))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Owns(Object)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                              ,0x173,
                              L"A pointer was passed to an object pool block that it does not own.")
          , bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TObjectPool<Chaos::Private::FPBDIsland>::ConditionalDestruct<Chaos::Private::FPBDIsland,0>
              (pFVar4);
    lVar14 = *(longlong *)pFVar12;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (longlong)pFVar4 - lVar14;
    lVar13 = SUB168(ZEXT816(0x8618618618618619) * auVar7,8);
    if (*(int *)(pFVar12 + 0x1c) != -1) {
      *(int *)&pFVar4[1].Nodes.AllocatorInstance.Data = *(int *)(pFVar12 + 0x1c);
    }
    *(int *)(pFVar12 + 0x14) = *(int *)(pFVar12 + 0x14) + 1;
    *(int *)(pFVar12 + 0x1c) =
         (int)(((ulonglong)(((longlong)pFVar4 - lVar14) - lVar13) >> 1) + lVar13 >> 7);
    piVar1 = &(this->Pool).FreeCount;
    *piVar1 = *piVar1 + 1;
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// Reset @ 143b74440

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
::Reset(TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
        *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  FPBDIslandConstraint *this_00;
  FPBDIslandConstraint *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [16];
  
  uVar9 = (this->Items).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar13 = (longlong)(int)uVar9 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Items).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
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
      Free(this,*(FPBDIslandConstraint **)((this->Items).AllocatorInstance.Data + lVar13));
      lVar13 = lVar13 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  iVar3 = (this->FreeItems).ArrayNum;
  pFVar11 = (this->FreeItems).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 8;
  do {
    if ((this->FreeItems).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      (this->FreeItems).ArrayNum = 0;
      if ((this->FreeItems).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->FreeItems).AllocatorInstance,0,&(this->FreeItems).ArrayMax);
      }
      if (((this->Items).ArrayNum != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Items.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->Pool).Capacity != (this->Pool).FreeCount) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool.GetNumAllocated() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      return;
    }
    iVar8 = (this->Pool).Blocks.ArrayNum;
    uVar9 = 0;
    this_00 = *(FPBDIslandConstraint **)pFVar11;
    lVar13 = 0;
    if (0 < iVar8) {
      lVar14 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (this->Pool).Blocks.AllocatorInstance.Data;
        pFVar4 = *(FPBDIslandConstraint **)(pFVar10 + lVar14);
        if ((pFVar4 <= this_00) &&
           (this_00 < (FPBDIslandConstraint *)
                      ((longlong)*(int *)(pFVar10 + lVar14 + 0x10) * 0x50 + (longlong)pFVar4))) {
          uVar7 = 0;
          if ((int)uVar9 < (this->Pool).Blocks.ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if (uVar7 == 0) goto LAB_143b745d3;
          goto LAB_143b74609;
        }
        iVar8 = (this->Pool).Blocks.ArrayNum;
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0x20;
      } while ((int)uVar9 < iVar8);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x1d9,L"A pointer was passed to an object pool method that it does not own."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = -1;
LAB_143b745d3:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_143b74609:
    pFVar10 = (this->Pool).Blocks.AllocatorInstance.Data + lVar13 * 0x20;
    if (((this_00 < *(FPBDIslandConstraint **)pFVar10) ||
        ((FPBDIslandConstraint *)
         ((longlong)*(int *)(pFVar10 + 0x10) * 0x50 + (longlong)*(FPBDIslandConstraint **)pFVar10)
         <= this_00)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owns(Object)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x173,
                           L"A pointer was passed to an object pool block that it does not own."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((ulonglong)this_00[1].Constraint & 0x100000000) != 0) {
      FPBDIslandConstraint::Trash(this_00);
      pbVar1 = (byte *)((longlong)&this_00[1].Constraint + 4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    lVar13 = *(longlong *)pFVar10;
    if (*(int *)(pFVar10 + 0x1c) != -1) {
      *(int *)&this_00[1].Constraint = *(int *)(pFVar10 + 0x1c);
    }
    *(int *)(pFVar10 + 0x14) = *(int *)(pFVar10 + 0x14) + 1;
    *(int *)(pFVar10 + 0x1c) = (int)((ulonglong)((longlong)this_00 - lVar13) / 0x50);
    piVar2 = &(this->Pool).FreeCount;
    *piVar2 = *piVar2 + 1;
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// Reset @ 143b74770

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
::Reset(TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
        *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  FPBDIslandMergeSet *this_00;
  FPBDIslandMergeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res8 [16];
  
  uVar10 = (this->Items).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar14 = (longlong)(int)uVar10 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Items).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Free(this,*(FPBDIslandMergeSet **)((this->Items).AllocatorInstance.Data + lVar14));
      lVar14 = lVar14 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  iVar3 = (this->FreeItems).ArrayNum;
  pFVar12 = (this->FreeItems).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->FreeItems).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandMergeSet_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) {
      (this->FreeItems).ArrayNum = 0;
      if ((this->FreeItems).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->FreeItems).AllocatorInstance,0,&(this->FreeItems).ArrayMax);
      }
      if (((this->Items).ArrayNum != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Items.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->Pool).Capacity != (this->Pool).FreeCount) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool.GetNumAllocated() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      return;
    }
    iVar9 = (this->Pool).Blocks.ArrayNum;
    uVar10 = 0;
    this_00 = *(FPBDIslandMergeSet **)pFVar12;
    lVar14 = 0;
    if (0 < iVar9) {
      lVar15 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = (this->Pool).Blocks.AllocatorInstance.Data;
        pFVar4 = *(FPBDIslandMergeSet **)(pFVar11 + lVar15);
        if ((pFVar4 <= this_00) &&
           (this_00 < (FPBDIslandMergeSet *)
                      ((longlong)*(int *)(pFVar11 + lVar15 + 0x10) * 0x20 + (longlong)pFVar4))) {
          uVar8 = 0;
          if ((int)uVar10 < (this->Pool).Blocks.ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if (uVar8 == 0) goto LAB_143b748f4;
          goto LAB_143b7492a;
        }
        iVar9 = (this->Pool).Blocks.ArrayNum;
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 0x20;
      } while ((int)uVar10 < iVar9);
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x1d9,L"A pointer was passed to an object pool method that it does not own."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar14 = -1;
LAB_143b748f4:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_143b7492a:
    pFVar11 = (this->Pool).Blocks.AllocatorInstance.Data + lVar14 * 0x20;
    if (((this_00 < *(FPBDIslandMergeSet **)pFVar11) ||
        ((FPBDIslandMergeSet *)
         ((longlong)*(int *)(pFVar11 + 0x10) * 0x20 + (longlong)*(FPBDIslandMergeSet **)pFVar11) <=
         this_00)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owns(Object)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x173,
                           L"A pointer was passed to an object pool block that it does not own."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((ulonglong)this_00[1].Islands.AllocatorInstance.Data & 0x100000000) != 0) {
      FPBDIslandMergeSet::Trash(this_00);
      pFVar5 = (this_00->Islands).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pbVar1 = (byte *)((longlong)&this_00[1].Islands.AllocatorInstance.Data + 4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    lVar14 = *(longlong *)pFVar11;
    if (*(int *)(pFVar11 + 0x1c) != -1) {
      *(int *)&this_00[1].Islands.AllocatorInstance.Data = *(int *)(pFVar11 + 0x1c);
    }
    *(int *)(pFVar11 + 0x14) = *(int *)(pFVar11 + 0x14) + 1;
    *(int *)(pFVar11 + 0x1c) = (int)((ulonglong)((longlong)this_00 - lVar14) >> 5);
    piVar2 = &(this->Pool).FreeCount;
    *piVar2 = *piVar2 + 1;
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// Reset @ 143b74a90

void __thiscall
Chaos::Private::
TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
::Reset(TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
        *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  FPBDIslandParticle *this_00;
  FPBDIslandParticle *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res8 [16];
  
  uVar10 = (this->Items).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar14 = (longlong)(int)uVar10 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Items).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Free(this,*(FPBDIslandParticle **)((this->Items).AllocatorInstance.Data + lVar14));
      lVar14 = lVar14 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  iVar3 = (this->FreeItems).ArrayNum;
  pFVar12 = (this->FreeItems).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->FreeItems).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) {
      (this->FreeItems).ArrayNum = 0;
      if ((this->FreeItems).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->FreeItems).AllocatorInstance,0,&(this->FreeItems).ArrayMax);
      }
      if (((this->Items).ArrayNum != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Items.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->Pool).Capacity != (this->Pool).FreeCount) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool.GetNumAllocated() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PoolBackedArray.h"
                             ,0x6f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      return;
    }
    iVar9 = (this->Pool).Blocks.ArrayNum;
    uVar10 = 0;
    this_00 = *(FPBDIslandParticle **)pFVar12;
    lVar14 = 0;
    if (0 < iVar9) {
      lVar15 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = (this->Pool).Blocks.AllocatorInstance.Data;
        pFVar4 = *(FPBDIslandParticle **)(pFVar11 + lVar15);
        if ((pFVar4 <= this_00) &&
           (this_00 < (FPBDIslandParticle *)
                      ((longlong)*(int *)(pFVar11 + lVar15 + 0x10) * 0x60 + (longlong)pFVar4))) {
          uVar8 = 0;
          if ((int)uVar10 < (this->Pool).Blocks.ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if (uVar8 == 0) goto LAB_143b74c23;
          goto LAB_143b74c59;
        }
        iVar9 = (this->Pool).Blocks.ArrayNum;
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 0x20;
      } while ((int)uVar10 < iVar9);
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x1d9,L"A pointer was passed to an object pool method that it does not own."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar14 = -1;
LAB_143b74c23:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_143b74c59:
    pFVar11 = (this->Pool).Blocks.AllocatorInstance.Data + lVar14 * 0x20;
    if (((this_00 < *(FPBDIslandParticle **)pFVar11) ||
        ((FPBDIslandParticle *)
         ((longlong)*(int *)(pFVar11 + 0x10) * 0x60 + (longlong)*(FPBDIslandParticle **)pFVar11) <=
         this_00)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owns(Object)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x173,
                           L"A pointer was passed to an object pool block that it does not own."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((ulonglong)this_00[1].Particle & 0x100000000) != 0) {
      FPBDIslandParticle::Trash(this_00);
      pFVar5 = (this_00->Edges).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pbVar1 = (byte *)((longlong)&this_00[1].Particle + 4);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    lVar14 = *(longlong *)pFVar11;
    if (*(int *)(pFVar11 + 0x1c) != -1) {
      *(int *)&this_00[1].Particle = *(int *)(pFVar11 + 0x1c);
    }
    *(int *)(pFVar11 + 0x14) = *(int *)(pFVar11 + 0x14) + 1;
    *(int *)(pFVar11 + 0x1c) = (int)((ulonglong)((longlong)this_00 - lVar14) / 0x60);
    piVar2 = &(this->Pool).FreeCount;
    *piVar2 = *piVar2 + 1;
    pFVar12 = pFVar12 + 8;
  } while( true );
}

