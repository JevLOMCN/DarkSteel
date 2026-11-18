// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// Add @ 14dd12e70

void __thiscall
TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::Add
          (TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
           *this,FEvaluationTreeEntryHandle param_1,
          TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1.EntryIndex * 0xc;
  if (*(int *)(pFVar1 + 8) < *(int *)(pFVar2 + (longlong)param_1.EntryIndex * 0xc + 4) + 1) {
    iVar4 = *(int *)(pFVar1 + 8) * 2;
    iVar12 = 2;
    if (2 < iVar4) {
      iVar12 = iVar4;
    }
    ReserveEntry(this,param_1,iVar12);
  }
  uVar11 = *(int *)(pFVar1 + 4) + *(int *)pFVar1;
  uVar5 = *(undefined4 *)param_2;
  uVar6 = *(undefined4 *)&param_2->field_0x4;
  uVar7 = *(undefined4 *)&param_2->field_0x8;
  uVar8 = *(undefined4 *)&param_2->field_0xc;
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
  *(undefined4 *)pFVar2 = uVar5;
  *(undefined4 *)(pFVar2 + 4) = uVar6;
  *(undefined4 *)(pFVar2 + 8) = uVar7;
  *(undefined4 *)(pFVar2 + 0xc) = uVar8;
  *(int *)(pFVar1 + 4) = *(int *)(pFVar1 + 4) + 1;
  return;
}

// AllocateEntry @ 14dd133b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEvaluationTreeEntryHandle __thiscall
TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
AllocateEntry(TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
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
  TArray<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,TSizedDefaultAllocator<32>_>::
  SetNum(&this->Items,(this->Items).ArrayNum + in_R8D,Default);
  return (FEvaluationTreeEntryHandle)param_1;
}

// Get @ 14dd22b90

TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> * __thiscall
TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::Get
          (TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
           *this,TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int>
                 *__return_storage_ptr__,FEvaluationTreeEntryHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *pTVar5;
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
      pTVar5 = (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *)
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
      pTVar5 = (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> *)
       ((this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// ReserveEntry @ 14dd3d490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
ReserveEntry(TEvaluationTreeEntryContainer<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
             *this,FEvaluationTreeEntryHandle param_1,int param_2)

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
  TArray<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,TSizedDefaultAllocator<32>_>::
  SetNum(&this->Items,uVar5 + param_2,Default);
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
  pFVar6 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
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
  memmove((this->Items).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10,pFVar6,
          (longlong)(int)*(uint *)(pFVar1 + 4) << 4);
  DefaultConstructItems<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,int>
            (pFVar6,*(uint *)(pFVar1 + 4));
  *(uint *)pFVar1 = uVar5;
  return;
}

