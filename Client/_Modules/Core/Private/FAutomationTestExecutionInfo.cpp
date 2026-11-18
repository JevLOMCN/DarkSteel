// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FAutomationTestExecutionInfo @ 141815200

FAutomationTestExecutionInfo * __thiscall
FAutomationTestExecutionInfo::FAutomationTestExecutionInfo
          (FAutomationTestExecutionInfo *this,FAutomationTestExecutionInfo *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FAutomationTelemetryData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FAutomationTelemetryData *pFVar7;
  FAutomationExecutionEntry *pFVar8;
  
  pTVar1 = &this->AnalyticsItems;
  this->bSuccessful = param_1->bSuccessful;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AnalyticsItems).ArrayMax;
  iVar5 = (param_1->AnalyticsItems).ArrayNum;
  pFVar6 = (param_1->AnalyticsItems).AllocatorInstance.Data;
  (this->AnalyticsItems).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  pTVar3 = &this->TelemetryItems;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TelemetryItems).ArrayMax;
  iVar5 = (param_1->TelemetryItems).ArrayNum;
  pFVar7 = (FAutomationTelemetryData *)(param_1->TelemetryItems).AllocatorInstance.Data;
  (this->TelemetryItems).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FAutomationTelemetryData,FAutomationTelemetryData,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  ::FString::FString(&this->TelemetryStorage,&param_1->TelemetryStorage);
  pTVar4 = &this->Entries;
  this->Duration = param_1->Duration;
  piVar2 = &(this->Entries).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Entries).ArrayNum;
  pFVar8 = (FAutomationExecutionEntry *)(param_1->Entries).AllocatorInstance.Data;
  (this->Entries).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
              ((pTVar4->AllocatorInstance).Data,pFVar8,iVar5);
  }
  pTVar1 = &this->ContextStack;
  this->Errors = param_1->Errors;
  this->Warnings = param_1->Warnings;
  piVar2 = &(this->ContextStack).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ContextStack).ArrayNum;
  pFVar6 = (param_1->ContextStack).AllocatorInstance.Data;
  (this->ContextStack).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  return this;
}

// ~FAutomationTestExecutionInfo @ 1418164f0

void __thiscall
FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(FAutomationTestExecutionInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  Clear(this);
  DestructItems<FString,int>
            ((FString *)(this->ContextStack).AllocatorInstance.Data,(this->ContextStack).ArrayNum);
  pFVar1 = (this->ContextStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomationExecutionEntry,int>
            ((FAutomationExecutionEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TelemetryStorage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomationTelemetryData,int>
            ((FAutomationTelemetryData *)(this->TelemetryItems).AllocatorInstance.Data,
             (this->TelemetryItems).ArrayNum);
  pFVar1 = (this->TelemetryItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AnalyticsItems).AllocatorInstance.Data,
             (this->AnalyticsItems).ArrayNum);
  pFVar1 = (this->AnalyticsItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddError @ 141818290

void __thiscall
FAutomationTestExecutionInfo::AddError(FAutomationTestExecutionInfo *this,FString *param_1)

{
  FAutomationEvent local_48;
  
  local_48.Type = Error;
  ::FString::FString(&local_48.Message,param_1);
  local_48.Artifact.A = 0;
  local_48.Artifact.B = 0;
  local_48.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Context.Data.ArrayNum = 0;
  local_48.Context.Data.ArrayMax = 0;
  local_48.Artifact.C = 0;
  local_48.Artifact.D = 0;
  AddEvent(this,&local_48,0,true);
  if (local_48.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Context.Data.AllocatorInstance.Data);
  }
  if (local_48.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AddEvent @ 1418184a0

/* WARNING: Removing unreachable block (ram,0x00014181886b) */
/* WARNING: Removing unreachable block (ram,0x000141818a61) */
/* WARNING: Removing unreachable block (ram,0x000141818879) */
/* WARNING: Removing unreachable block (ram,0x000141818a70) */
/* WARNING: Removing unreachable block (ram,0x000141818887) */
/* WARNING: Removing unreachable block (ram,0x000141818a7f) */

void __thiscall
FAutomationTestExecutionInfo::AddEvent
          (FAutomationTestExecutionInfo *this,FAutomationEvent *param_1,int param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FAutomationTestFramework *pFVar6;
  FProgramCounterSymbolInfo *pFVar7;
  FAutomationEvent *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FLLMScope local_res8 [2];
  undefined4 local_res10;
  TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> local_188;
  FScriptContainerElement local_178 [8];
  FString local_170;
  FString local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  FScriptContainerElement local_120 [8];
  FString local_118;
  FString local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FString local_e8;
  undefined4 local_d8;
  undefined8 local_d0;
  FString *local_c8;
  FMemScope local_c0;
  FScriptContainerElement local_b8;
  FString local_b0;
  FString local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  FString local_80;
  FAutomationEvent local_70;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1609,L"AutomationTest/Framework");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1609,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,&LLMScope_Name1609,true);
  if (param_1->Type == Warning) {
    this->Warnings = this->Warnings + 1;
  }
  else if (param_1->Type == Error) {
    this->Errors = this->Errors + 1;
  }
  uVar5 = 0xffffffff;
  pFVar6 = FAutomationTestFramework::Get();
  if (((pFVar6->bCaptureStack != false) && (AutomationTest::bSkipStackWalk == false)) && (param_3))
  {
    FWindowsPlatformStackWalk::GetStack(&local_188,param_2 + 1,1,(void *)0x0);
    if (local_188.ArrayNum == 0) {
      uVar4 = 0;
      if (local_188.ArrayMax == 0) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc18,8,&local_188.AllocatorInstance,&local_188.ArrayMax);
      }
      local_188.ArrayNum = uVar4 + 1;
      pFVar7 = FProgramCounterSymbolInfo::FProgramCounterSymbolInfo
                         ((FProgramCounterSymbolInfo *)
                          (local_188.AllocatorInstance.Data + (longlong)(int)uVar4 * 0xc18));
      strncpy(pFVar7->Filename,"Unknown",0x400);
      pFVar7->Filename[0x3ff] = '\0';
      pFVar7->LineNumber = 1;
      if (local_188.ArrayNum != 0) goto LAB_141818610;
    }
    else {
LAB_141818610:
      if ((local_188.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res10 = *(undefined4 *)(local_188.AllocatorInstance.Data + 0xc00);
      if ((local_188.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_c8 = ::FString::FString(&local_80,(char *)(local_188.AllocatorInstance.Data + 0x800));
      pFVar8 = FAutomationEvent::FAutomationEvent(&local_70,param_1);
      local_120[0] = (FScriptContainerElement)pFVar8->Type;
      ::FString::FString(&local_118,&pFVar8->Message);
      ::FString::FString(&local_108,&pFVar8->Context);
      pFVar9 = local_c8;
      local_f8._0_4_ = (pFVar8->Artifact).A;
      local_f8._4_4_ = (pFVar8->Artifact).B;
      uStack_f0._0_4_ = (pFVar8->Artifact).C;
      uStack_f0._4_4_ = (pFVar8->Artifact).D;
      ::FString::FString(&local_e8,local_c8);
      local_d8 = local_res10;
      FDateTime::UtcNow();
      pFVar10 = (pFVar8->Context).Data.AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (pFVar8->Message).Data.AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (this->Entries).AllocatorInstance.Data;
      if (((pFVar10 <= local_120) &&
          (local_120 < pFVar10 + (longlong)(this->Entries).ArrayMax * 0x58)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayMax;
      if (uVar5 == *piVar1) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&(this->Entries).AllocatorInstance,piVar1);
      }
      (this->Entries).ArrayNum = uVar5 + 1;
      pFVar10 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x58;
      *pFVar10 = local_120[0];
      *(undefined8 *)(pFVar10 + 8) = Info;
      *(FScriptContainerElement **)(pFVar10 + 8) = local_118.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + 0x10) = local_118.Data.ArrayNum;
      *(int *)(pFVar10 + 0x14) = local_118.Data.ArrayMax;
      *(undefined8 *)(pFVar10 + 0x18) = Info;
      *(FScriptContainerElement **)(pFVar10 + 0x18) = local_108.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + 0x20) = local_108.Data.ArrayNum;
      *(int *)(pFVar10 + 0x24) = local_108.Data.ArrayMax;
      *(undefined8 *)(pFVar10 + 0x28) = local_f8;
      *(undefined8 *)(pFVar10 + 0x30) = uStack_f0;
      *(undefined8 *)(pFVar10 + 0x38) = Info;
      *(FScriptContainerElement **)(pFVar10 + 0x38) = local_e8.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + 0x40) = local_e8.Data.ArrayNum;
      *(int *)(pFVar10 + 0x44) = local_e8.Data.ArrayMax;
      *(undefined4 *)(pFVar10 + 0x48) = local_d8;
      *(undefined8 *)(pFVar10 + 0x50) = local_d0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    if (uVar5 != 0xffffffff) goto LAB_141818a84;
  }
  local_b8 = (FScriptContainerElement)param_1->Type;
  ::FString::FString(&local_b0,&param_1->Message);
  ::FString::FString(&local_a0,&param_1->Context);
  local_90._0_4_ = (param_1->Artifact).A;
  local_90._4_4_ = (param_1->Artifact).B;
  uStack_88._0_4_ = (param_1->Artifact).C;
  uStack_88._4_4_ = (param_1->Artifact).D;
  local_178[0] = local_b8;
  ::FString::FString(&local_170,&local_b0);
  ::FString::FString(&local_160,&local_a0);
  local_130 = 0xffffffff;
  local_140 = 0;
  local_150 = local_90;
  uStack_148 = uStack_88;
  uStack_138 = 0;
  FDateTime::UtcNow();
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  if (((pFVar10 <= local_178) && (local_178 < pFVar10 + (longlong)(this->Entries).ArrayMax * 0x58))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = uVar5 + 1;
  pFVar10 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x58;
  *pFVar10 = local_178[0];
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(FScriptContainerElement **)(pFVar10 + 8) = local_170.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 0x10) = local_170.Data.ArrayNum;
  *(int *)(pFVar10 + 0x14) = local_170.Data.ArrayMax;
  *(undefined8 *)(pFVar10 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar10 + 0x18) = local_160.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 0x20) = local_160.Data.ArrayNum;
  *(int *)(pFVar10 + 0x24) = local_160.Data.ArrayMax;
  *(undefined8 *)(pFVar10 + 0x28) = local_150;
  *(undefined8 *)(pFVar10 + 0x30) = uStack_148;
  *(undefined8 *)(pFVar10 + 0x38) = 0;
  *(undefined8 *)(pFVar10 + 0x38) = local_140;
  *(undefined4 *)(pFVar10 + 0x40) = (undefined4)uStack_138;
  *(undefined4 *)(pFVar10 + 0x44) = uStack_138._4_4_;
  *(undefined4 *)(pFVar10 + 0x48) = local_130;
  *(undefined8 *)(pFVar10 + 0x50) = local_128;
  uStack_138 = 0;
  local_140 = 0;
  local_160.Data.ArrayNum = 0;
  local_160.Data.ArrayMax = 0;
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = 0;
  local_170.Data.ArrayMax = 0;
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_141818a84:
  uVar4 = 0;
  if ((int)uVar5 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
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
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  if (*(int *)(pFVar10 + (longlong)(int)uVar5 * 0x58 + 0x20) < 2) {
    pFVar9 = GetContext(this);
    ::FString::operator=((FString *)(pFVar10 + (longlong)(int)uVar5 * 0x58 + 0x18),pFVar9);
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddWarning @ 141819f60

void __thiscall
FAutomationTestExecutionInfo::AddWarning(FAutomationTestExecutionInfo *this,FString *param_1)

{
  FAutomationEvent local_48;
  
  local_48.Type = Warning;
  ::FString::FString(&local_48.Message,param_1);
  local_48.Artifact.A = 0;
  local_48.Artifact.B = 0;
  local_48.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Context.Data.ArrayNum = 0;
  local_48.Context.Data.ArrayMax = 0;
  local_48.Artifact.C = 0;
  local_48.Artifact.D = 0;
  AddEvent(this,&local_48,0,true);
  if (local_48.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Context.Data.AllocatorInstance.Data);
  }
  if (local_48.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// Clear @ 14181e1f0

void __thiscall FAutomationTestExecutionInfo::Clear(FAutomationTestExecutionInfo *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->ContextStack).ArrayMax;
  pFVar3 = (this->ContextStack).AllocatorInstance.Data;
  iVar2 = (this->ContextStack).ArrayNum;
  if ((this->ContextStack).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->ContextStack).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ContextStack).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->ContextStack).ArrayNum = 0;
  }
  DestructItems<FAutomationExecutionEntry,int>
            ((FAutomationExecutionEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  (this->Entries).ArrayNum = 0;
  if ((this->Entries).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->Entries).AllocatorInstance,0,&(this->Entries).ArrayMax);
  }
  DestructItems<FString,int>
            ((FString *)(this->AnalyticsItems).AllocatorInstance.Data,
             (this->AnalyticsItems).ArrayNum);
  (this->AnalyticsItems).ArrayNum = 0;
  if ((this->AnalyticsItems).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AnalyticsItems).AllocatorInstance,0,&(this->AnalyticsItems).ArrayMax
              );
  }
  DestructItems<FAutomationTelemetryData,int>
            ((FAutomationTelemetryData *)(this->TelemetryItems).AllocatorInstance.Data,
             (this->TelemetryItems).ArrayNum);
  (this->TelemetryItems).ArrayNum = 0;
  if ((this->TelemetryItems).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->TelemetryItems).AllocatorInstance,0,&(this->TelemetryItems).ArrayMax
              );
  }
  ::FString::Empty(&this->TelemetryStorage);
  this->Errors = 0;
  this->Warnings = 0;
  return;
}

// GetContext @ 141825bc0

FString * __thiscall FAutomationTestExecutionInfo::GetContext(FAutomationTestExecutionInfo *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FAutomationTestExecutionInfo::GetContext'::__l2::
             _dynamic_atexit_destructor_for__EmptyContext__);
      _Init_thread_footer(&`public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (this->ContextStack).ArrayNum;
  if (iVar1 != 0) {
    uVar4 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar4 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FString *)
           ((this->ContextStack).AllocatorInstance.Data +
           (longlong)((this->ContextStack).ArrayNum + -1) * 0x10);
  }
  return &`public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
          ::__l2::EmptyContext;
}

// RemoveAllEvents @ 14182fd30

int __thiscall
FAutomationTestExecutionInfo::RemoveAllEvents
          (FAutomationTestExecutionInfo *this,
          TFunctionRef<bool___cdecl(FAutomationEvent_&)> *param_1)

{
  int iVar1;
  <lambda_1> local_18;
  
  local_18.__this = this;
  local_18.FilterPredicate = param_1;
  iVar1 = TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::
          RemoveAll<_FAutomationTestExecutionInfo::RemoveAllEvents_::__l2::<lambda_1>_>
                    (&this->Entries,&local_18);
  return iVar1;
}

// RemoveAllEvents @ 14182fd60

int __thiscall
FAutomationTestExecutionInfo::RemoveAllEvents
          (FAutomationTestExecutionInfo *this,EAutomationEventType param_1)

{
  int iVar1;
  EAutomationEventType local_res10 [24];
  code *local_28;
  EAutomationEventType *local_20;
  <lambda_1> local_18;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAutomationTestExecutionInfo::RemoveAllEvents'::__l2::<lambda_1>,bool,FAutomationEvent_&>
             ::Call;
  local_18.FilterPredicate = (TFunctionRef<bool___cdecl(FAutomationEvent_&)> *)&local_28;
  local_res10[0] = param_1;
  local_18.__this = this;
  iVar1 = TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::
          RemoveAll<_FAutomationTestExecutionInfo::RemoveAllEvents_::__l2::<lambda_1>_>
                    (&this->Entries,&local_18);
  return iVar1;
}

