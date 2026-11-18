// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FMessageLogScopedOverride @ 1417a3870

FMessageLogScopedOverride * __thiscall
FMessageLogScopedOverride::FMessageLogScopedOverride(FMessageLogScopedOverride *this,FName param_1)

{
  TSortedMap<EMessageSeverity::Type,EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<EMessageSeverity::Type_const_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FMessageLogScopedOverride *pFVar10;
  TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_> *pTVar12;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FMessageLogScopedOverride *local_48 [2];
  
  this->LogName = param_1;
  pTVar1 = &this->MessageSeverityRemapping;
  (this->bSuppressLoggingToOutputLog).bIsSet = false;
  (this->MessageSeverityRemapping).Pairs.ArrayMax = 0;
  piVar2 = &(this->MessageSeverityRemapping).Pairs.ArrayMax;
  (pTVar1->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageSeverityRemapping).Pairs.ArrayNum = 0;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                         ,0x184,
                         L"FMessageLogScopedOverride should only be pushed from the game-thread!"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FMessageLogScopedOverride *)(*pcVar6)();
    return pFVar10;
  }
  this_00 = UE::MessageLog::Private::GetOverrideStack();
  pTVar11 = TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(this_00,this->LogName);
  if (pTVar11 == (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar12 = TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>(this_00,&this->LogName);
    uVar8 = (this->LogName).Number;
    *(uint *)&pTVar12->field_0x0 = (this->LogName).ComparisonIndex.Value;
    *(uint *)&pTVar12->field_0x4 = uVar8;
    pTVar11 = (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)
              &pTVar12->field_0x8;
    *(undefined8 *)pTVar11 = 0;
    *(undefined8 *)&pTVar12->field_0x10 = 0;
  }
  iVar9 = pTVar11->ArrayNum;
  if (0 < iVar9) {
    uVar8 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar8 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FMessageLogScopedOverride *)(*pcVar6)();
      return pFVar10;
    }
    lVar4 = *(longlong *)((pTVar11->AllocatorInstance).Data + (longlong)pTVar11->ArrayNum * 8 + -8);
    if ((TOptional<bool> *)(lVar4 + 8) != &this->bSuppressLoggingToOutputLog) {
      if (*(char *)(lVar4 + 9) == '\0') {
        if ((this->bSuppressLoggingToOutputLog).bIsSet != false) {
          (this->bSuppressLoggingToOutputLog).bIsSet = false;
        }
      }
      else {
        (this->bSuppressLoggingToOutputLog).TypedValue = *(bool *)(lVar4 + 8);
        (this->bSuppressLoggingToOutputLog).bIsSet = true;
      }
    }
    if (pTVar1 != (TSortedMap<EMessageSeverity::Type,EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<EMessageSeverity::Type_const_>_>
                   *)(lVar4 + 0x10)) {
      iVar9 = *(int *)(lVar4 + 0x18);
      iVar3 = *piVar2;
      _Src = *(void **)(lVar4 + 0x10);
      (this->MessageSeverityRemapping).Pairs.ArrayNum = iVar9;
      if ((iVar9 == 0) && (iVar3 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar9,iVar3,(ForAnyElementType *)pTVar1,iVar9,piVar2);
        if (iVar9 != 0) {
          memcpy((pTVar1->Pairs).AllocatorInstance.Data,_Src,(longlong)iVar9 << 3);
        }
      }
    }
  }
  pFVar5 = (pTVar11->AllocatorInstance).Data;
  local_48[0] = this;
  if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)pTVar11->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FMessageLogScopedOverride *)(*pcVar6)();
    return pFVar10;
  }
  iVar9 = pTVar11->ArrayNum;
  if (iVar9 == pTVar11->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
  }
  pTVar11->ArrayNum = iVar9 + 1;
  *(FMessageLogScopedOverride **)((pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 8) =
       local_48[0];
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FMessageLogScopedOverride @ 1417a78b0

void __thiscall
FMessageLogScopedOverride::~FMessageLogScopedOverride(FMessageLogScopedOverride *this)

{
  FMessageLogScopedOverride *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                         ,0x194,
                         L"FMessageLogScopedOverride should only be popped from the game-thread!"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = UE::MessageLog::Private::GetOverrideStack();
  pTVar5 = TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,this->LogName);
  if (pTVar5 == (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                       ,0x19c,
                       L"FMessageLogScopedOverride popped an unexpected log name off the stack! Out of order destruction of FMessageLogScopedOverride!"
                      );
    if (bVar4) goto code_r0x0001417a7a0d;
  }
  else {
    if ((pTVar5->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = pTVar5->ArrayNum + -1;
    pFVar1 = *(FMessageLogScopedOverride **)
              ((pTVar5->AllocatorInstance).Data + (longlong)pTVar5->ArrayNum * 8 + -8);
    pTVar5->ArrayNum = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar5->AllocatorInstance,iVar6,&pTVar5->ArrayMax);
    if ((this != pFVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("this == This",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                           ,0x198,
                           L"FMessageLogScopedOverride popped an unexpected override off the stack! Out of order destruction of FMessageLogScopedOverride!"
                          ), bVar4)) {
code_r0x0001417a7a0d:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar2 = (this->MessageSeverityRemapping).Pairs.AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// RemapMessageSeverity @ 1417f4d00

FMessageLogScopedOverride * __thiscall
FMessageLogScopedOverride::RemapMessageSeverity
          (FMessageLogScopedOverride *this,Type param_1,Type param_2)

{
  FLLMScope local_res8 [2];
  Type local_res10 [2];
  Type local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>
  ::Emplace<enum_EMessageSeverity::Type_const_&,enum_EMessageSeverity::Type_const_&>
            (&this->MessageSeverityRemapping,local_res10,local_res18);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// SuppressLoggingToOutputLog @ 141801cb0

FMessageLogScopedOverride * __thiscall
FMessageLogScopedOverride::SuppressLoggingToOutputLog(FMessageLogScopedOverride *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<bool> *)local_res10 != &this->bSuppressLoggingToOutputLog) {
    (this->bSuppressLoggingToOutputLog).TypedValue = param_1;
    (this->bSuppressLoggingToOutputLog).bIsSet = true;
  }
  return this;
}

