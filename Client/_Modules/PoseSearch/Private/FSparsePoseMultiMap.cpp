// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 5

// operator[] @ 14a8af4e0

TArrayView<int_const_,int> * __thiscall
UE::PoseSearch::FSparsePoseMultiMap<int>::operator[]
          (FSparsePoseMultiMap<int> *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<int_const_,int> *pTVar6;
  uint uVar7;
  uint uVar8;
  TArrayView<int_const_,int> local_28;
  
  if ((param_1 == -1) || (this->MaxKey <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key != Type(INDEX_NONE) && Key < MaxKey",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x18e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  uVar7 = 0;
  if (param_1 < (this->DataValues).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar3 = (this->DataValues).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 4);
  if (this->MaxValue < iVar1) {
    if (iVar1 < this->DeltaKeyValue) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value >= DeltaKeyValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x195,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    uVar8 = iVar1 - this->DeltaKeyValue;
    uVar7 = 0;
    if ((int)uVar8 < (this->DataValues).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    iVar1 = *(int *)((this->DataValues).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    if ((this->DataValues).ArrayNum < (int)(iVar1 + uVar8 + 1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(DataOffset + Size) <= DataValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x19c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    local_28.DataPtr = (int *)(this->DataValues).AllocatorInstance.Data;
    iVar2 = (this->DataValues).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    local_28.ArrayNum = iVar2;
    TArrayView<int_const_,int>::Slice(&local_28,__return_storage_ptr__,uVar8 + 1,iVar1);
  }
  else {
    iVar1 = (this->DataValues).ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x15b,L"Invalid index (%lld)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    if (iVar1 < param_1 + 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + InNum <= ArrayNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x15d,
                         L"Range (index: %lld, count: %lld) lies outside the view of %lld elements")
      ;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->DataPtr = (int *)(pFVar3 + (longlong)param_1 * 4);
    __return_storage_ptr__->ArrayNum = 1;
  }
  return __return_storage_ptr__;
}

// FSparsePoseMultiMap<int> @ 14a8dfe20

FSparsePoseMultiMap<int> * __thiscall
UE::PoseSearch::FSparsePoseMultiMap<int>::FSparsePoseMultiMap<int>
          (FSparsePoseMultiMap<int> *this,FSparsePoseMultiMap<int> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->DataValues;
  this->MaxKey = param_1->MaxKey;
  this->MaxValue = param_1->MaxValue;
  this->DeltaKeyValue = param_1->DeltaKeyValue;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DataValues).ArrayMax;
  iVar3 = (param_1->DataValues).ArrayNum;
  _Src = (param_1->DataValues).AllocatorInstance.Data;
  (this->DataValues).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// operator== @ 14a8e4940

bool __thiscall
UE::PoseSearch::FSparsePoseMultiMap<int>::operator==
          (FSparsePoseMultiMap<int> *this,FSparsePoseMultiMap<int> *param_1)

{
  int iVar1;
  
  if (((this->MaxKey == param_1->MaxKey) && (this->MaxValue == param_1->MaxValue)) &&
     (this->DeltaKeyValue == param_1->DeltaKeyValue)) {
    iVar1 = (this->DataValues).ArrayNum;
    if (iVar1 == (param_1->DataValues).ArrayNum) {
      if ((iVar1 != 0) &&
         (iVar1 = memcmp((this->DataValues).AllocatorInstance.Data,
                         (param_1->DataValues).AllocatorInstance.Data,(longlong)iVar1 << 2),
         iVar1 != 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// Init @ 14a900150

void __thiscall
UE::PoseSearch::FSparsePoseMultiMap<int>::Init
          (FSparsePoseMultiMap<int> *this,int param_1,int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_18 [4];
  
  uVar8 = (ulonglong)(uint)param_1;
  pTVar1 = &this->DataValues;
  this->MaxKey = param_1;
  piVar2 = &(this->DataValues).ArrayMax;
  this->MaxValue = param_2;
  iVar7 = 0;
  if (param_1 <= param_2) {
    iVar7 = (param_2 - param_1) + 1;
  }
  this->DeltaKeyValue = iVar7;
  (this->DataValues).ArrayNum = 0;
  if (*piVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar5 = param_1 * 2;
  if (-1 < (int)uVar5) {
    if (*piVar2 < (int)uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&pTVar1->AllocatorInstance,(this->DataValues).ArrayNum,piVar2);
    }
    if (0 < param_1) {
      do {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_18[0] = 0xffffffff;
        if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar2 * 4)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = (this->DataValues).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->DataValues).ArrayNum = iVar7 + 1;
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// Insert @ 14a9014f0

void __thiscall
UE::PoseSearch::FSparsePoseMultiMap<int>::Insert
          (FSparsePoseMultiMap<int> *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  int local_38 [4];
  
  lVar9 = (longlong)param_1;
  if (param_1 == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key != Type(INDEX_NONE)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x163,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((-1 < param_1) && (param_1 < this->MaxKey)) goto LAB_14a901570;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Key >= 0 && Key < MaxKey",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                     ,0x166,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a901570:
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->DataValues).ArrayNum) {
    uVar6 = uVar10;
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
  if ((*(int *)((this->DataValues).AllocatorInstance.Data + lVar9 * 4) != -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataValues[Key] == Type(INDEX_NONE)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x169,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->ArrayNum == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Values.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x16c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar8 = param_2->DataPtr;
  piVar1 = piVar8 + param_2->ArrayNum;
  for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
    if (((this->MaxValue < *piVar8) || (*piVar8 == -1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value <= MaxValue && Value != Type(INDEX_NONE)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                           ,0x171,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum == 1) {
    iVar2 = *param_2->DataPtr;
    uVar6 = 0;
    if (param_1 < (this->DataValues).ArrayNum) {
      uVar6 = uVar10;
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
    *(int *)((this->DataValues).AllocatorInstance.Data + lVar9 * 4) = iVar2;
  }
  else {
    if ((0x7fff < param_2->ArrayNum + 1 + (this->DataValues).ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(DataValues.Num() + 1 + Values.Num()) < (1 << (sizeof(Type) * 4 - 1))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                           ,0x17e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->DataValues).ArrayNum < this->MaxKey) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(MaxKey) <= DataValues.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                           ,0x17f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->DataValues).ArrayNum;
    iVar7 = this->DeltaKeyValue;
    uVar6 = 0;
    if (param_1 < iVar2) {
      uVar6 = uVar10;
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
    piVar1 = &(this->DataValues).ArrayNum;
    *(int *)((this->DataValues).AllocatorInstance.Data + lVar9 * 4) = iVar2 + iVar7;
    uVar6 = 0;
    if (param_1 < *piVar1) {
      uVar6 = uVar10;
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
    if ((*(int *)((this->DataValues).AllocatorInstance.Data + lVar9 * 4) <= this->MaxValue) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataValues[Key] > MaxValue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                           ,0x183,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = param_2->ArrayNum;
    pFVar3 = (this->DataValues).AllocatorInstance.Data;
    local_38[0] = iVar2;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this->DataValues).ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *piVar1;
    piVar8 = &(this->DataValues).ArrayMax;
    if (iVar7 == *piVar8) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->DataValues).AllocatorInstance,piVar8);
    }
    *piVar1 = iVar7 + 1;
    *(int *)((this->DataValues).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_38[0];
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9a9,L"Invalid range size: %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar2 == 0) {
      return;
    }
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar2,&(this->DataValues).AllocatorInstance,piVar1,piVar8);
    memcpy((this->DataValues).AllocatorInstance.Data + (longlong)iVar7 * 4,param_2->DataPtr,
           (longlong)iVar2 << 2);
  }
  return;
}

