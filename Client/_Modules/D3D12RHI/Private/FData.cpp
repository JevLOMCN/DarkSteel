// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// Empty @ 1459bed10

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
                -0x80000000) && (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Next @ 1459c82b0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Allocate<unsigned___int64_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1459e1ce0

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<unsigned___int64_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (FData *this,ulong64 *param_1,FUnitType *param_2,FHashType param_3)

{
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  void *_Dst;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar9;
  uint uVar10;
  uint uVar11;
  uint local_res20 [2];
  ulong64 local_38 [2];
  
  iVar8 = (this->FreeList).NumElements;
  local_res20[0] = param_3.Hash;
  if (iVar8 < 1) {
    local_38[0] = *param_1;
    uVar7 = (this->KeyVals).ArrayNum;
    pFVar4 = (this->KeyVals).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)(this->KeyVals).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar2 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar2);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    *(ulong64 *)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38[0];
    pFVar4 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar4 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar2 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar2);
    }
    pFVar4 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    *(uint *)(pFVar4 + (longlong)iVar8 * 4) = local_res20[0];
    return uVar7;
  }
  pTVar1 = &this->FreeList;
  (this->FreeList).NumElements = iVar8 + -1;
  iVar8 = (this->FreeList).FreeList.ArrayNum;
  uVar10 = iVar8 - 1;
  uVar7 = 0;
  if ((int)uVar10 < iVar8) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  FVar9 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
  iVar8 = (this->FreeList).FreeList.ArrayNum;
  if (FVar9 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )0x0) {
    FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )pTVar1;
  }
  uVar7 = ((int *)((longlong)FVar9 + -8))[(longlong)iVar8 * 2];
  lVar3 = (longlong)FVar9 + (longlong)iVar8 * 8;
  if (uVar7 == *(uint *)(lVar3 + -4)) {
    if (iVar8 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    iVar8 = (this->FreeList).FreeList.ArrayNum;
    FVar9 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
    uVar10 = iVar8 - 1;
    if (FVar9 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar9 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )pTVar1;
    }
    _Dst = (void *)((longlong)FVar9 + (longlong)(int)uVar10 * 8);
    iVar8 = ~uVar10 + iVar8;
    if (iVar8 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar8 << 3);
    }
    piVar2 = &(this->FreeList).FreeList.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    *)pTVar1,(this->FreeList).FreeList.ArrayNum,&(this->FreeList).FreeList.ArrayMax)
    ;
  }
  else {
    *(uint *)(lVar3 + -8) = uVar7 + 1;
  }
  uVar10 = 0;
  if ((int)uVar7 < (this->KeyVals).ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  uVar10 = local_res20[0];
  *(ulong64 *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = *param_1;
  uVar11 = 0;
  if ((int)uVar7 < (this->Hashes).ArrayNum) {
    uVar11 = ~uVar7 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar10;
  return uVar7;
}

// Get @ 145a17b80

TKeyValue<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

