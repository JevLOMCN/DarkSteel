// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// Exec_Dev @ 146e79450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAISystemExec::Exec_Dev(FAISystemExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int iVar1;
  UAISystemBase *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  wchar_t *local_res18 [2];
  
  if (param_1 == (UWorld *)0x0) {
    return false;
  }
  pUVar2 = (param_1->AISystem).field0_0x0.DebugPtr;
  if (pUVar2 != (UAISystemBase *)0x0) {
    local_res18[0] = param_2;
    pUVar4 = UAISystem::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      bVar3 = FParse::Command(local_res18,L"AIIgnorePlayers",true);
      if (bVar3) {
        (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2);
        return true;
      }
      bVar3 = FParse::Command(local_res18,L"AILoggingVerbose",true);
      if (bVar3) {
        (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2);
        return true;
      }
      bVar3 = FParse::Command(local_res18,L"DumpBTUsageStats",true);
      if ((bVar3) && (pUVar2[2].AISystemModuleName != (FName)0x0)) {
        UBehaviorTreeManager::DumpUsageStats((UBehaviorTreeManager *)pUVar2[2].AISystemModuleName);
        return true;
      }
    }
  }
  return false;
}

