// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 5

// AllocateMemoryForEmplace<TTuple<unsigned_int,unsigned___int64>_const_&> @ 14b307da0

TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
* __thiscall
TSortedMap<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState,TSizedDefaultAllocator<32>,TLess<TTuple<unsigned_int,unsigned___int64>_const_&>_>
::AllocateMemoryForEmplace<TTuple<unsigned_int,unsigned___int64>_const_&>
          (TSortedMap<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState,TSizedDefaultAllocator<32>,TLess<TTuple<unsigned_int,unsigned___int64>_const_&>_>
           *this,TTuple<unsigned_int,unsigned___int64> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
  *pTVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  pFVar4 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      uVar3 = *(uint *)(pFVar4 + (longlong)iVar1 * 0x28);
      if ((uVar3 < *(uint *)param_1) ||
         ((uVar3 == *(uint *)param_1 &&
          (*(ulonglong *)(pFVar4 + (longlong)iVar1 * 0x28 + 8) < *(ulonglong *)&param_1->field_0x8))
         )) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar3 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar3 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
                *)(*pcVar5)();
      return pTVar7;
    }
    if (iVar8 < 0) goto LAB_14b307ec3;
  }
  if (iVar8 < (this->Pairs).ArrayNum) {
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
                *)(*pcVar5)();
      return pTVar7;
    }
    pFVar4 = (this->Pairs).AllocatorInstance.Data;
    pTVar7 = (TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
              *)(pFVar4 + (longlong)iVar8 * 0x28);
    uVar2 = *(uint *)(pFVar4 + (longlong)iVar8 * 0x28);
    if ((uVar2 <= *(uint *)param_1) &&
       ((*(uint *)param_1 != uVar2 ||
        (*(ulonglong *)&pTVar7->field_0x8 <= *(ulonglong *)&param_1->field_0x8)))) {
      DestructItems<TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_14b307ec3:
  TArray<TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  return (TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x28);
}

// AllocateMemoryForEmplace<FName_const_&> @ 14b307f00

TTuple<FName,UMetaSoundSource::FRuntimeInput> * __thiscall
TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TTuple<FName,UMetaSoundSource::FRuntimeInput> *pTVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar11 = uVar1;
    do {
      iVar6 = (uVar11 >> 1) + iVar10;
      lVar7 = (longlong)iVar6 * 200;
      iVar9 = *(int *)(pFVar2 + lVar7) - (param_1->ComparisonIndex).Value;
      if (iVar9 == 0) {
        iVar9 = *(int *)(pFVar2 + lVar7 + 4) - param_1->Number;
      }
      if (iVar9 < 0) {
        iVar10 = iVar6 + (uVar11 & 1);
      }
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar1 < iVar10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)(*pcVar3)();
      return pTVar8;
    }
    if (iVar10 < 0) goto LAB_14b308017;
  }
  if (iVar10 < (this->Pairs).ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)(*pcVar3)();
      return pTVar8;
    }
    pTVar8 = (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 200);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar8;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar8->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>(pTVar8,1);
      return pTVar8;
    }
  }
LAB_14b308017:
  TArray<TTuple<FName,UMetaSoundSource::FRuntimeInput>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar10,1);
  return (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 200);
}

// Emplace<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_&> @ 14b30fd60

/* WARNING: Enum "Type": Some values do not have unique names */

Type * __thiscall
TSortedMap<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent,enum_ELogVerbosity::Type,TSizedDefaultAllocator<32>,TLess<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_>_>
::Emplace<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_&>
          (void *this,ELogEvent *param_1)

{
  void *_Src;
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  Type *pTVar6;
  ELogEvent *pEVar7;
  int iVar8;
  uint uVar9;
  
  uVar1 = *(uint *)((longlong)this + 8);
  iVar8 = 0;
  if (0 < (int)uVar1) {
    uVar9 = uVar1;
    do {
      iVar5 = (uVar9 >> 1) + iVar8;
      if (*(ELogEvent *)(*(longlong *)this + (longlong)iVar5 * 2) < *param_1) {
        iVar8 = iVar5 + (uVar9 & 1);
      }
      uVar3 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar3 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar1 < iVar8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (Type *)(*pcVar2)();
      return pTVar6;
    }
    if (-1 < iVar8) goto LAB_14b30fdf7;
  }
  else {
LAB_14b30fdf7:
    if (iVar8 < *(int *)((longlong)this + 8)) {
      if ((iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (Type *)(*pcVar2)();
        return pTVar6;
      }
      pEVar7 = (ELogEvent *)(*(longlong *)this + (longlong)iVar8 * 2);
      if (*(ELogEvent *)(*(longlong *)this + (longlong)iVar8 * 2) <= *param_1) goto LAB_14b30fe96;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,1,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  _Src = (void *)(*(longlong *)this + (longlong)iVar8 * 2);
  memmove((void *)((longlong)_Src + 2),_Src,(longlong)(iVar5 - iVar8) * 2);
  pEVar7 = (ELogEvent *)(*(longlong *)this + (longlong)iVar8 * 2);
LAB_14b30fe96:
  *pEVar7 = *param_1;
  pEVar7[1] = DuplicateEntries;
  return pEVar7 + 1;
}

// Find @ 14b3a5db0

FRuntimeInput * __thiscall
TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>::Find
          (TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FRuntimeInput *pFVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,UMetaSoundSource::FRuntimeInput>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (FRuntimeInput *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRuntimeInput *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FRuntimeInput *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 200 + 8);
}

// Find @ 14b3a5e60

/* WARNING: Enum "Type": Some values do not have unique names */

Type * __thiscall
TSortedMap<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent,enum_ELogVerbosity::Type,TSizedDefaultAllocator<32>,TLess<enum_Metasound::Engine::FDocumentBuilderRegistry::ELogEvent_const_>_>
::Find(void *this,ELogEvent param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  Type *pTVar7;
  uint uVar8;
  
  uVar2 = *(uint *)((longlong)this + 8);
  iVar6 = 0;
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar8 >> 1) + iVar6;
      if (*(ELogEvent *)(*(longlong *)this + (longlong)iVar1 * 2) < param_1) {
        iVar6 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(ELogEvent *)(*(longlong *)this + (longlong)iVar6 * 2) <= param_1))
     && (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (Type *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (Type *)(*(longlong *)this + (longlong)iVar6 * 2 + 1);
  }
  else {
    pTVar7 = (Type *)0x0;
  }
  return pTVar7;
}

