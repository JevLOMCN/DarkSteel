// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FWaitForSpecifiedMapToLoadCommand @ 14880d050

void __thiscall
FWaitForSpecifiedMapToLoadCommand::~FWaitForSpecifiedMapToLoadCommand
          (FWaitForSpecifiedMapToLoadCommand *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FWaitForSpecifiedMapToLoadCommand__6B_;
  pFVar3 = (this->MapName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014880d0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Update @ 148860400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FWaitForSpecifiedMapToLoadCommand::Update(FWaitForSpecifiedMapToLoadCommand *this)

{
  AGameStateBase *pAVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  UWorld *this_00;
  FString *pFVar5;
  FName local_res10;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  this_00 = AutomationCommon::GetAnyGameWorld();
  if (this_00 != (UWorld *)0x0) {
    bVar2 = UWorld::AreActorsInitialized(this_00);
    if ((bVar2) &&
       (pAVar1 = (this_00->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
      cVar3 = (**(code **)(pAVar1->_padding_ + 0x778))();
      if (cVar3 != '\0') {
        local_18.DataPtr = (wchar_t *)(this->MapName).Data.AllocatorInstance.Data;
        iVar4 = (this->MapName).Data.ArrayNum;
        local_18.Size = iVar4 + -1;
        if (iVar4 == 0) {
          local_18.Size = 0;
        }
        FPackageName::GetShortName(&local_28,&local_18);
        pFVar5 = FPaths::GetBaseFilename((FString *)&local_18,&local_28,true);
        if (&local_28 != pFVar5) {
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.DataPtr);
        }
        local_res10 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res10,(FString *)&local_18);
        iVar4 = local_18.Size;
        if (iVar4 == local_28.Data.ArrayNum) {
          if (iVar4 < 2) {
            bVar2 = true;
          }
          else {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              (local_18.DataPtr,(wchar_t *)local_28.Data.AllocatorInstance.Data);
            bVar2 = iVar4 == 0;
          }
        }
        else {
          bVar2 = iVar4 + local_28.Data.ArrayNum == 1;
        }
        if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.DataPtr);
        }
        if (bVar2) {
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          return true;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

