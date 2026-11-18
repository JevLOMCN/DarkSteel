// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 1

// FindChecked @ 14e7ef460

FAutomationUtilsGameplayAutomationScreenshotInstance ** __thiscall
TMapBase<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>_>
::FindChecked(TMapBase<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FAutomationUtilsGameplayAutomationScreenshotInstance **ppFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar5 = (FAutomationUtilsGameplayAutomationScreenshotInstance **)(*pcVar1)();
      return ppFVar5;
    }
  }
  return (FAutomationUtilsGameplayAutomationScreenshotInstance **)(lVar8 + 0x10);
}

