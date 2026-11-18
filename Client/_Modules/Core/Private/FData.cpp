// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Allocate<int_const_&,int_const_&> @ 141adf3b0

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::Allocate<int_const_&,int_const_&>(FData *this,int *param_1,int *param_2,FHashType param_3)

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
  int local_38;
  int iStack_34;
  
  iVar8 = (this->FreeList).NumElements;
  local_res20[0] = param_3.Hash;
  if (iVar8 < 1) {
    local_38 = *param_1;
    uVar7 = (this->KeyVals).ArrayNum;
    pFVar4 = (this->KeyVals).AllocatorInstance.Data;
    iStack_34 = *param_2;
    if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(this->KeyVals).ArrayMax * 8)) {
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
                        (0x408,(ForAnyElementType *)this,piVar2);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    *(ulonglong *)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar8 * 8) =
         CONCAT44(iStack_34,local_38);
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
  pFVar4 = (this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
  *(int *)pFVar4 = *param_1;
  *(int *)(pFVar4 + 4) = *param_2;
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

// ~FData @ 141b2adb0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar8 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar8;
    if (uVar8 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      FVar3 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FMemory::Free((void *)FVar3);
      }
      pFVar4 = (this->Hashes).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->KeyVals).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < (this->KeyVals).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    uVar8 = uVar8 + 1;
    if (uVar8 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->Hashes).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
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
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) ==
                -0x80000000) && (uVar8 = uVar8 + 1, uVar8 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Get @ 141b43990

TKeyValue<int,int> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<int,int> *pTVar4;
  
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
      pTVar4 = (TKeyValue<int,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<int,int> *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8)
  ;
}

// Get @ 141b43a10

TKeyValue<int,int> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<int,int> *pTVar4;
  
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
      pTVar4 = (TKeyValue<int,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<int,int> *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8)
  ;
}

// Next @ 141b46d20

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::Next(FData *this,FIteratorState param_1)

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

