// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 26

// Add @ 1460a5c60

void __thiscall
TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::Add
          (TEvaluationTreeEntryContainer<FCompileOnTheFlyData> *this,
          FEvaluationTreeEntryHandle param_1,FCompileOnTheFlyData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar13 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar13 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1.EntryIndex * 0xc;
  if (*(int *)(pFVar1 + 8) < *(int *)(pFVar3 + (longlong)param_1.EntryIndex * 0xc + 4) + 1) {
    iVar2 = *(int *)(pFVar1 + 8) * 2;
    iVar16 = 2;
    if (2 < iVar2) {
      iVar16 = iVar2;
    }
    ReserveEntry(this,param_1,iVar16);
  }
  uVar6 = *(undefined4 *)param_2;
  uVar7 = *(undefined4 *)&param_2->EvaluationPriority;
  uVar13 = (param_2->EvaluationGroup).ComparisonIndex.Value;
  uVar8 = (param_2->EvaluationGroup).Number;
  uVar14 = *(int *)(pFVar1 + 4) + *(int *)pFVar1;
  uVar9 = *(undefined8 *)&param_2->bRequiresInit;
  uVar10 = *(undefined8 *)&(param_2->Track).TrackIdentifier;
  iVar2 = (param_2->Child).ForcedTime.Value;
  uVar15 = 0;
  if ((int)uVar14 < (this->Items).ArrayNum) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar12 = (longlong)(int)uVar14;
  pFVar4 = (this->Items).AllocatorInstance.Data;
  pFVar3 = pFVar4 + lVar12 * 0x24;
  *(undefined4 *)pFVar3 = uVar6;
  *(undefined4 *)(pFVar3 + 4) = uVar7;
  *(uint *)(pFVar3 + 8) = uVar13;
  *(uint *)(pFVar3 + 0xc) = uVar8;
  *(undefined8 *)(pFVar4 + lVar12 * 0x24 + 0x10) = uVar9;
  *(undefined8 *)(pFVar4 + lVar12 * 0x24 + 0x10 + 8) = uVar10;
  *(int *)(pFVar4 + lVar12 * 0x24 + 0x20) = iVar2;
  *(int *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + 1;
  return;
}

// Add @ 1460a5db0

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData>::Add
          (TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData> *this,
          FEvaluationTreeEntryHandle param_1,FMovieSceneTrackEvaluationData *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar10 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar10 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1.EntryIndex * 0xc;
  if (*(int *)(pFVar1 + 8) < *(int *)(pFVar3 + (longlong)param_1.EntryIndex * 0xc + 4) + 1) {
    iVar6 = *(int *)(pFVar1 + 8) * 2;
    iVar12 = 2;
    if (2 < iVar6) {
      iVar12 = iVar6;
    }
    ReserveEntry(this,param_1,iVar12);
  }
  uVar11 = *(int *)(pFVar1 + 4) + *(int *)pFVar1;
  iVar6 = (param_2->Track).WeakPtr.ObjectIndex;
  iVar12 = (param_2->Track).WeakPtr.ObjectSerialNumber;
  iVar7 = (param_2->Section).WeakPtr.ObjectIndex;
  iVar8 = (param_2->Section).WeakPtr.ObjectSerialNumber;
  uVar2 = *(undefined8 *)&param_2->ForcedTime;
  uVar10 = 0;
  if ((int)uVar11 < (this->Items).ArrayNum) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Items).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)(int)uVar11 * 0x18;
  *(int *)pFVar3 = iVar6;
  *(int *)(pFVar3 + 4) = iVar12;
  *(int *)(pFVar3 + 8) = iVar7;
  *(int *)(pFVar3 + 0xc) = iVar8;
  *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10) = uVar2;
  *(int *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + 1;
  return;
}

// AllocateEntry @ 1460aa0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEvaluationTreeEntryHandle __thiscall
TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::AllocateEntry
          (TEvaluationTreeEntryContainer<FCompileOnTheFlyData> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int in_R8D;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(int *)CONCAT44(in_register_00000014,param_1) = (this->Entries).ArrayNum;
  local_38 = (this->Items).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uStack_34 = 0;
  local_30 = in_R8D;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar6 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar6 * 0xc)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_38;
    local_60 = pFVar2;
    local_58 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FEvaluationTreeEntryHandle)iVar5;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_30;
  TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,(this->Items).ArrayNum + in_R8D,Default);
  return (FEvaluationTreeEntryHandle)param_1;
}

// AllocateEntry @ 1460aa200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEvaluationTreeEntryHandle __thiscall
TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData>::AllocateEntry
          (TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int in_R8D;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(int *)CONCAT44(in_register_00000014,param_1) = (this->Entries).ArrayNum;
  local_38 = (this->Items).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uStack_34 = 0;
  local_30 = in_R8D;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar6 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar6 * 0xc)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_38;
    local_60 = pFVar2;
    local_58 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FEvaluationTreeEntryHandle)iVar5;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_30;
  TArray<FMovieSceneTrackEvaluationData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,(this->Items).ArrayNum + in_R8D,Default);
  return (FEvaluationTreeEntryHandle)param_1;
}

// Get @ 1460c8a20

TArrayView<FCompileOnTheFlyData_const_,int> * __thiscall
TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::Get
          (TEvaluationTreeEntryContainer<FCompileOnTheFlyData> *this,
          TArrayView<FCompileOnTheFlyData_const_,int> *__return_storage_ptr__,
          FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FCompileOnTheFlyData_const_,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FCompileOnTheFlyData_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FCompileOnTheFlyData_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr = (FCompileOnTheFlyData *)(pFVar2 + (longlong)(int)uVar7 * 0x24);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FCompileOnTheFlyData_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1460c8b50

TArrayView<FMovieSceneEvaluationTreeNode_const_,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this,
          TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *__return_storage_ptr__,
          FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneEvaluationTreeNode *)
       ((this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1460c8c80

TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *this,
          TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *__return_storage_ptr__,
          FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneSubSequenceTreeEntry *)
       ((this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1460c8db0

TArrayView<FMovieSceneTrackEvaluationData_const_,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData> *this,
          TArrayView<FMovieSceneTrackEvaluationData_const_,int> *__return_storage_ptr__,
          FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneTrackEvaluationData_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneTrackEvaluationData_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneTrackEvaluationData *)(pFVar2 + (longlong)(int)uVar7 * 0x18);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneTrackEvaluationData_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// ReserveEntry @ 1460e8c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::ReserveEntry
          (TEvaluationTreeEntryContainer<FCompileOnTheFlyData> *this,
          FEvaluationTreeEntryHandle param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar6 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1.EntryIndex * 0xc;
  if (param_2 <= *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCapacity > Entry.Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                       ,0x3c7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(pFVar1 + 8) = param_2;
  uVar6 = (this->Items).ArrayNum;
  TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,uVar6 + param_2,Default);
  uVar7 = *(uint *)pFVar1;
  uVar5 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x24;
  uVar7 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x24,pFVar2,
          (longlong)(int)*(uint *)(pFVar1 + 4) * 0x24);
  DefaultConstructItems<FCompileOnTheFlyData,int>(pFVar2,*(uint *)(pFVar1 + 4));
  *(uint *)pFVar1 = uVar6;
  return;
}

// ReserveEntry @ 1460e8de0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData>::ReserveEntry
          (TEvaluationTreeEntryContainer<FMovieSceneTrackEvaluationData> *this,
          FEvaluationTreeEntryHandle param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar6 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1.EntryIndex * 0xc;
  if (param_2 <= *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCapacity > Entry.Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                       ,0x3c7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(pFVar1 + 8) = param_2;
  uVar6 = (this->Items).ArrayNum;
  TArray<FMovieSceneTrackEvaluationData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,uVar6 + param_2,Default);
  uVar7 = *(uint *)pFVar1;
  uVar5 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  uVar7 = 0;
  if ((int)uVar6 < (this->Items).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18,pFVar2,
          (longlong)(int)*(uint *)(pFVar1 + 4) * 0x18);
  DefaultConstructItems<FMovieSceneTrackEvaluationData,int>(pFVar2,*(uint *)(pFVar1 + 4));
  *(uint *)pFVar1 = uVar6;
  return;
}

// Add @ 14618bf10

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::Add
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
           *this,FEvaluationTreeEntryHandle param_1,FEntityAndMetaDataIndex *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FEntityAndMetaDataIndex FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1.EntryIndex * 0xc;
  if (*(int *)(pFVar1 + 8) < *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4) + 1) {
    iVar5 = *(int *)(pFVar1 + 8) * 2;
    iVar9 = 2;
    if (2 < iVar5) {
      iVar9 = iVar5;
    }
    ReserveEntry(this,param_1,iVar9);
  }
  uVar8 = *(int *)(pFVar1 + 4) + *(int *)pFVar1;
  FVar3 = *param_2;
  uVar7 = 0;
  if ((int)uVar8 < (this->Items).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(FEntityAndMetaDataIndex *)((this->Items).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) =
       FVar3;
  *(int *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + 1;
  return;
}

// Add @ 14618c030

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::Add
          (TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *this,
          FEvaluationTreeEntryHandle param_1,FMovieSceneSubSequenceTreeEntry *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar6 = (uint)~param_1.EntryIndex >> 0x1f;
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
  pFVar5 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)param_1.EntryIndex * 0xc;
  if (*(int *)(pFVar1 + 8) < *(int *)(pFVar5 + (longlong)param_1.EntryIndex * 0xc + 4) + 1) {
    iVar3 = *(int *)(pFVar1 + 8) * 2;
    iVar8 = 2;
    if (2 < iVar3) {
      iVar8 = iVar3;
    }
    ReserveEntry(this,param_1,iVar8);
  }
  uVar7 = *(int *)(pFVar1 + 4) + *(int *)pFVar1;
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
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
  pFVar5 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
  *(uint *)pFVar5 = (param_2->SequenceID).Value;
  pFVar5[4] = (FScriptContainerElement)param_2->Flags;
  FMovieSceneWarpCounter::operator=
            ((FMovieSceneWarpCounter *)(pFVar5 + 8),&param_2->RootToSequenceWarpCounter);
  *(int *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + 1;
  return;
}

// AllocateEntry @ 146191c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEvaluationTreeEntryHandle __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
AllocateEntry(TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
              *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int in_R8D;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(int *)CONCAT44(in_register_00000014,param_1) = (this->Entries).ArrayNum;
  local_38 = (this->Items).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uStack_34 = 0;
  local_30 = in_R8D;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar6 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar6 * 0xc)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_38;
    local_60 = pFVar2;
    local_58 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FEvaluationTreeEntryHandle)iVar5;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_30;
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->Items,(this->Items).ArrayNum + in_R8D,Default);
  return (FEvaluationTreeEntryHandle)param_1;
}

// AllocateEntry @ 146191d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEvaluationTreeEntryHandle __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::AllocateEntry
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int in_R8D;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(int *)CONCAT44(in_register_00000014,param_1) = (this->Entries).ArrayNum;
  local_38 = (this->Items).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uStack_34 = 0;
  local_30 = in_R8D;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar6 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar6 * 0xc)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_38;
    local_60 = pFVar2;
    local_58 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FEvaluationTreeEntryHandle)iVar5;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_30;
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,(this->Items).ArrayNum + in_R8D,Default);
  return (FEvaluationTreeEntryHandle)param_1;
}

// AllocateEntry @ 146191ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEvaluationTreeEntryHandle __thiscall
TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::AllocateEntry
          (TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int in_R8D;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(int *)CONCAT44(in_register_00000014,param_1) = (this->Entries).ArrayNum;
  local_38 = (this->Items).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uStack_34 = 0;
  local_30 = in_R8D;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar6 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar6 * 0xc)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_38;
    local_60 = pFVar2;
    local_58 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FEvaluationTreeEntryHandle)iVar5;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_30;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,(this->Items).ArrayNum + in_R8D,Default);
  return (FEvaluationTreeEntryHandle)param_1;
}

// Compact @ 146197180

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
Compact(TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
        *this)

{
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  uVar11 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  iVar2 = (this->Entries).ArrayNum;
  pTVar1 = &this->Items;
  pFVar5 = pFVar10 + (longlong)iVar2 * 0xc;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  while( true ) {
    while( true ) {
      uVar8 = (uint)uVar11;
      if ((this->Entries).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        uVar8 = (uint)local_30;
      }
      if (pFVar10 == pFVar5) {
        if (local_30._4_4_ != uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar8,&local_38,uVar8,(int *)((longlong)&local_30 + 4));
          uVar8 = (uint)local_30;
        }
        if (pTVar1 != (TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
                       *)&local_38) {
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
            uVar8 = (uint)local_30;
          }
          (pTVar1->AllocatorInstance).Data = local_38.Data;
          (this->Items).ArrayMax = local_30._4_4_;
          local_30 = 0;
          local_38.Data = (FScriptContainerElement *)0x0;
          (this->Items).ArrayNum = uVar8;
        }
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data);
        }
        return;
      }
      uVar3 = *(uint *)(pFVar10 + 4);
      if (0 < (int)uVar3) break;
      *(uint *)(pFVar10 + 8) = *(uint *)(pFVar10 + 4);
      *(uint *)pFVar10 = 0xffffffff;
      pFVar10 = pFVar10 + 0xc;
      uVar11 = local_30 & 0xffffffff;
    }
    uVar4 = *(uint *)pFVar10;
    *(uint *)pFVar10 = uVar8;
    uVar8 = 0;
    if ((int)uVar4 < (this->Items).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    _Src = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
    if ((_Src == (FScriptContainerElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar3,&local_38,(int *)&local_30,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data + (longlong)iVar9 * 8,_Src,(longlong)(int)uVar3 << 3);
    *(uint *)(pFVar10 + 8) = *(uint *)(pFVar10 + 4);
    pFVar10 = pFVar10 + 0xc;
    uVar11 = local_30 & 0xffffffff;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Compact @ 1461973a0

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Compact
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this)

{
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *_Src;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  uVar11 = 0;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  iVar2 = (this->Entries).ArrayNum;
  pTVar1 = &this->Items;
  pFVar5 = pFVar10 + (longlong)iVar2 * 0xc;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  while( true ) {
    while( true ) {
      uVar8 = (uint)uVar11;
      if ((this->Entries).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        uVar8 = (uint)local_30;
      }
      if (pFVar10 == pFVar5) {
        if (local_30._4_4_ != uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,uVar8,&local_38,uVar8,(int *)((longlong)&local_30 + 4));
          uVar8 = (uint)local_30;
        }
        if (pTVar1 != (TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *)&local_38
           ) {
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
            uVar8 = (uint)local_30;
          }
          (pTVar1->AllocatorInstance).Data = local_38.Data;
          (this->Items).ArrayMax = local_30._4_4_;
          local_30 = 0;
          local_38.Data = (FScriptContainerElement *)0x0;
          (this->Items).ArrayNum = uVar8;
        }
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data);
        }
        return;
      }
      uVar3 = *(uint *)(pFVar10 + 4);
      if (0 < (int)uVar3) break;
      *(uint *)(pFVar10 + 8) = *(uint *)(pFVar10 + 4);
      *(uint *)pFVar10 = 0xffffffff;
      pFVar10 = pFVar10 + 0xc;
      uVar11 = local_30 & 0xffffffff;
    }
    uVar4 = *(uint *)pFVar10;
    *(uint *)pFVar10 = uVar8;
    uVar8 = 0;
    if ((int)uVar4 < (this->Items).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    _Src = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    if ((_Src == (FScriptContainerElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,uVar3,&local_38,(int *)&local_30,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data + (longlong)iVar9 * 0x20,_Src,(longlong)(int)uVar3 << 5);
    *(uint *)(pFVar10 + 8) = *(uint *)(pFVar10 + 4);
    pFVar10 = pFVar10 + 0xc;
    uVar11 = local_30 & 0xffffffff;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Compact @ 1461975c0

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::Compact
          (TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *this)

{
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FMovieSceneSubSequenceTreeEntry *pFVar12;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  pFVar9 = (this->Entries).AllocatorInstance.Data;
  uVar10 = 0;
  pTVar1 = &this->Items;
  iVar2 = (this->Entries).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_res10 = pFVar9 + (longlong)iVar2 * 0xc;
  pFVar11 = local_res10;
  while( true ) {
    while( true ) {
      uVar7 = (uint)uVar10;
      if ((this->Entries).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        uVar7 = (uint)local_40;
      }
      if (pFVar9 == pFVar11) {
        if (local_40._4_4_ != uVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,uVar7,&local_48,uVar7,(int *)((longlong)&local_40 + 4));
          uVar7 = (uint)local_40;
        }
        if (pTVar1 != (TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *)
                      &local_48) {
          DestructItems<FMovieSceneSubSequenceTreeEntry,int>
                    ((FMovieSceneSubSequenceTreeEntry *)(pTVar1->AllocatorInstance).Data,
                     (this->Items).ArrayNum);
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          if (pFVar9 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar9);
          }
          (pTVar1->AllocatorInstance).Data = local_48.Data;
          (this->Items).ArrayNum = (uint)local_40;
          (this->Items).ArrayMax = local_40._4_4_;
          local_40 = 0;
          local_48.Data = (FScriptContainerElement *)0x0;
          uVar7 = 0;
        }
        DestructItems<FMovieSceneSubSequenceTreeEntry,int>
                  ((FMovieSceneSubSequenceTreeEntry *)local_48.Data,uVar7);
        if ((FMovieSceneSubSequenceTreeEntry *)local_48.Data !=
            (FMovieSceneSubSequenceTreeEntry *)0x0) {
          FMemory::Free(local_48.Data);
        }
        return;
      }
      uVar3 = *(uint *)(pFVar9 + 4);
      if (0 < (int)uVar3) break;
      *(uint *)(pFVar9 + 8) = *(uint *)(pFVar9 + 4);
      *(uint *)pFVar9 = 0xffffffff;
      pFVar9 = pFVar9 + 0xc;
      uVar10 = local_40 & 0xffffffff;
    }
    uVar4 = *(uint *)pFVar9;
    *(uint *)pFVar9 = uVar7;
    uVar7 = 0;
    if ((int)uVar4 < (this->Items).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar12 = (FMovieSceneSubSequenceTreeEntry *)
              ((this->Items).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
    if ((pFVar12 == (FMovieSceneSubSequenceTreeEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,uVar3,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    ConstructItems<FMovieSceneSubSequenceTreeEntry,FMovieSceneSubSequenceTreeEntry,int>
              (local_48.Data + (longlong)iVar8 * 0x30,pFVar12,uVar3);
    *(uint *)(pFVar9 + 8) = *(uint *)(pFVar9 + 4);
    pFVar9 = pFVar9 + 0xc;
    uVar10 = local_40 & 0xffffffff;
    pFVar11 = local_res10;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Get @ 1461afa20

TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
           *this,TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int>
                 *__return_storage_ptr__,FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr = (FEntityAndMetaDataIndex *)(pFVar2 + (longlong)(int)uVar7 * 8);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1461afb40

TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
           *this,TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                 *__return_storage_ptr__,FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Items).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr = (FEntityAndMetaDataIndex *)(pFVar2 + (longlong)(int)uVar7 * 8);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1461afc60

TArrayView<FMovieSceneEvaluationTreeNode,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this,
          TArrayView<FMovieSceneEvaluationTreeNode,int> *__return_storage_ptr__,
          FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneEvaluationTreeNode,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationTreeNode,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationTreeNode,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneEvaluationTreeNode *)
       ((this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneEvaluationTreeNode,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1461afd90

TArrayView<FMovieSceneSubSequenceTreeEntry,int> * __thiscall
TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::Get
          (TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *this,
          TArrayView<FMovieSceneSubSequenceTreeEntry,int> *__return_storage_ptr__,
          FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMovieSceneSubSequenceTreeEntry,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4);
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneSubSequenceTreeEntry *)
       ((this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMovieSceneSubSequenceTreeEntry,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Insert @ 1461b67e0

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Insert
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this,
          FEvaluationTreeEntryHandle param_1,int param_2,FMovieSceneEvaluationTreeNode *param_3)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEvaluationTreeNodeHandle *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FMovieSceneEvaluationTreeNodeHandle FVar6;
  FEvaluationTreeEntryHandle FVar7;
  FEvaluationTreeEntryHandle FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  
  uVar11 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar11 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar13 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar13 + (longlong)param_1.EntryIndex * 0xc;
  if (*(int *)(pFVar1 + 8) < *(int *)(pFVar13 + (longlong)param_1.EntryIndex * 0xc + 4) + 1) {
    iVar10 = *(int *)(pFVar1 + 8) * 2;
    iVar14 = 2;
    if (2 < iVar10) {
      iVar14 = iVar10;
    }
    ReserveEntry(this,param_1,iVar14);
  }
  iVar10 = *(int *)(pFVar1 + 8) + -1;
  if (param_2 < *(int *)(pFVar1 + 8) + -1) {
    iVar10 = param_2;
  }
  iVar14 = 0;
  if (0 < iVar10) {
    iVar14 = iVar10;
  }
  if (iVar14 <= *(int *)(pFVar1 + 4) + -1) {
    uVar12 = *(int *)pFVar1 + iVar14;
    uVar11 = 0;
    if ((int)uVar12 < (this->Items).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar15 = *(int *)pFVar1 + 1 + iVar14;
    pFVar13 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
    uVar11 = 0;
    if ((int)uVar15 < (this->Items).ArrayNum) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20,pFVar13,
            (longlong)(*(int *)(pFVar1 + 4) - iVar14) << 5);
    DefaultConstructItems<FMovieSceneEvaluationTreeNode,int>(pFVar13,1);
  }
  *(int *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + 1;
  uVar12 = iVar14 + *(int *)pFVar1;
  uVar4 = *(undefined4 *)&(param_3->Range).LowerBound;
  iVar10 = (param_3->Range).LowerBound.Value.Value;
  uVar5 = *(undefined4 *)&(param_3->Range).UpperBound;
  iVar14 = (param_3->Range).UpperBound.Value.Value;
  FVar6 = param_3->Parent;
  FVar7.EntryIndex = (param_3->ChildrenID).EntryIndex;
  FVar8.EntryIndex = (param_3->DataID).EntryIndex;
  uVar11 = 0;
  if ((int)uVar12 < (this->Items).ArrayNum) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar13 = (this->Items).AllocatorInstance.Data;
  pFVar1 = pFVar13 + (longlong)(int)uVar12 * 0x20;
  *(undefined4 *)pFVar1 = uVar4;
  *(int *)(pFVar1 + 4) = iVar10;
  *(undefined4 *)(pFVar1 + 8) = uVar5;
  *(int *)(pFVar1 + 0xc) = iVar14;
  pFVar2 = (FMovieSceneEvaluationTreeNodeHandle *)(pFVar13 + (longlong)(int)uVar12 * 0x20 + 0x10);
  *pFVar2 = FVar6;
  pFVar2[1].ChildrenHandle = (FEvaluationTreeEntryHandle)FVar7.EntryIndex;
  pFVar2[1].Index = FVar8.EntryIndex;
  return;
}

// ReserveEntry @ 1461cc740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
ReserveEntry(TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             *this,FEvaluationTreeEntryHandle param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar7 = (uint)~param_1.EntryIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1.EntryIndex * 0xc;
  if (param_2 <= *(int *)(pFVar3 + (longlong)param_1.EntryIndex * 0xc + 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCapacity > Entry.Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                       ,0x3c7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(int *)(pFVar1 + 8) = param_2;
  uVar7 = (this->Items).ArrayNum;
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->Items,uVar7 + param_2,Default);
  uVar2 = *(uint *)pFVar1;
  uVar6 = 0;
  if ((int)uVar2 < (this->Items).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Items).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 8,
          pFVar3 + (longlong)(int)uVar2 * 8,(longlong)(int)*(uint *)(pFVar1 + 4) << 3);
  *(uint *)pFVar1 = uVar7;
  return;
}

// ReserveEntry @ 1461cc8d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::ReserveEntry
          (TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *this,
          FEvaluationTreeEntryHandle param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  uVar5 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar5 = (uint)~param_1.EntryIndex >> 0x1f;
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
  pFVar6 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)param_1.EntryIndex * 0xc;
  if (param_2 <= *(int *)(pFVar6 + (longlong)param_1.EntryIndex * 0xc + 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCapacity > Entry.Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                       ,0x3c7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)(pFVar1 + 8) = param_2;
  uVar5 = (this->Items).ArrayNum;
  TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,uVar5 + param_2,Default);
  uVar7 = *(uint *)pFVar1;
  uVar4 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
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
  pFVar6 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
  uVar7 = 0;
  if ((int)uVar5 < (this->Items).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20,pFVar6,
          (longlong)(int)*(uint *)(pFVar1 + 4) << 5);
  DefaultConstructItems<FMovieSceneEvaluationTreeNode,int>(pFVar6,*(uint *)(pFVar1 + 4));
  *(uint *)pFVar1 = uVar5;
  return;
}

// ReserveEntry @ 1461cca70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::ReserveEntry
          (TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *this,
          FEvaluationTreeEntryHandle param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  uVar5 = 0;
  if (param_1.EntryIndex < (this->Entries).ArrayNum) {
    uVar5 = (uint)~param_1.EntryIndex >> 0x1f;
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
  pFVar6 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)param_1.EntryIndex * 0xc;
  if (param_2 <= *(int *)(pFVar6 + (longlong)param_1.EntryIndex * 0xc + 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCapacity > Entry.Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                       ,0x3c7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)(pFVar1 + 8) = param_2;
  uVar5 = (this->Items).ArrayNum;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Items,uVar5 + param_2,Default);
  uVar7 = *(uint *)pFVar1;
  uVar4 = 0;
  if ((int)uVar7 < (this->Items).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
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
  pFVar6 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
  uVar7 = 0;
  if ((int)uVar5 < (this->Items).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30,pFVar6,
          (longlong)(int)*(uint *)(pFVar1 + 4) * 0x30);
  DefaultConstructItems<FMovieSceneSubSequenceTreeEntry,int>(pFVar6,*(uint *)(pFVar1 + 4));
  *(uint *)pFVar1 = uVar5;
  return;
}

