// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraCrashReporterScope @ 1490b0ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraCrashReporterScope * __thiscall
FNiagaraCrashReporterScope::FNiagaraCrashReporterScope
          (FNiagaraCrashReporterScope *this,FNiagaraSystemInstance *param_1)

{
  FNiagaraCrashReporterHandler *this_00;
  FString *pFVar1;
  bool bVar2;
  
  this->bWasEnabled = false;
  bVar2 = GbEnableNiagaraCRHandler != 0;
  this->bWasEnabled = bVar2;
  if (bVar2) {
    this_00 = FNiagaraCrashReporterHandler::Get();
    if (param_1 == (FNiagaraSystemInstance *)0x0) {
      pFVar1 = &this_00->NullString;
    }
    else {
      pFVar1 = FNiagaraSystemInstance::GetCrashReporterTag(param_1);
    }
    FNiagaraCrashReporterHandler::PushInfo(this_00,pFVar1);
  }
  return this;
}

// FNiagaraCrashReporterScope @ 1490b0f50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraCrashReporterScope * __thiscall
FNiagaraCrashReporterScope::FNiagaraCrashReporterScope
          (FNiagaraCrashReporterScope *this,FNiagaraSystemSimulation *param_1)

{
  FNiagaraCrashReporterHandler *this_00;
  FString *pFVar1;
  bool bVar2;
  
  this->bWasEnabled = false;
  bVar2 = GbEnableNiagaraCRHandler != 0;
  this->bWasEnabled = bVar2;
  if (bVar2) {
    this_00 = FNiagaraCrashReporterHandler::Get();
    if (param_1 == (FNiagaraSystemSimulation *)0x0) {
      pFVar1 = &this_00->NullString;
    }
    else {
      pFVar1 = FNiagaraSystemSimulation::GetCrashReporterTag(param_1);
    }
    FNiagaraCrashReporterHandler::PushInfo(this_00,pFVar1);
  }
  return this;
}

// FNiagaraCrashReporterScope @ 1490b0fc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraCrashReporterScope * __thiscall
FNiagaraCrashReporterScope::FNiagaraCrashReporterScope
          (FNiagaraCrashReporterScope *this,UNiagaraSystem *param_1)

{
  FNiagaraCrashReporterHandler *this_00;
  FString *pFVar1;
  bool bVar2;
  
  this->bWasEnabled = false;
  bVar2 = GbEnableNiagaraCRHandler != 0;
  this->bWasEnabled = bVar2;
  if (bVar2) {
    this_00 = FNiagaraCrashReporterHandler::Get();
    if (param_1 == (UNiagaraSystem *)0x0) {
      pFVar1 = &this_00->NullString;
    }
    else {
      pFVar1 = UNiagaraSystem::GetCrashReporterTag(param_1);
    }
    FNiagaraCrashReporterHandler::PushInfo(this_00,pFVar1);
  }
  return this;
}

// ~FNiagaraCrashReporterScope @ 1490b7510

void __thiscall
FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(FNiagaraCrashReporterScope *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  FNiagaraCrashReporterHandler *this_00;
  FThreadScopeInfo *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  
  if (this->bWasEnabled != false) {
    this_00 = FNiagaraCrashReporterHandler::Get();
    DVar6 = GetCurrentThreadId();
    if (this_00 == (FNiagaraCrashReporterHandler *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    pFVar8 = TMapBase<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>_>
             ::FindChecked((TMapBase<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>_>
                            *)&this_00->ThreadScopeInfoStack,DVar6);
    pTVar1 = &pFVar8->Stack;
    if ((pFVar8->Stack).ArrayNum < 1) {
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
    lVar9 = (longlong)(pFVar8->Stack).ArrayNum;
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    pvVar3 = *(void **)(pFVar10 + lVar9 * 0x10 + -0x10);
    *(undefined8 *)(pFVar10 + lVar9 * 0x10 + -0x10) = 0;
    *(undefined8 *)(pFVar10 + lVar9 * 0x10 + -8) = 0;
    iVar7 = (pFVar8->Stack).ArrayNum;
    pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    if (*(void **)(pFVar10 + -0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar10 + -0x10));
    }
    iVar7 = (pFVar8->Stack).ArrayNum - iVar7;
    if (iVar7 != 0) {
      memmove(pFVar10 + -0x10,pFVar10,(longlong)iVar7 << 4);
    }
    piVar2 = &(pFVar8->Stack).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar1->AllocatorInstance,(pFVar8->Stack).ArrayNum,&(pFVar8->Stack).ArrayMax)
    ;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FNiagaraCrashReporterHandler::UpdateInfo(this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

