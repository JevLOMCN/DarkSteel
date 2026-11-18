// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 3

// GetCurrentPlatformDefaults @ 14a775170

void __cdecl FCommonInputBase::GetCurrentPlatformDefaults(ECommonInputType *param_1,FName *param_2)

{
  UClass *pUVar1;
  UCommonInputPlatformSettings *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pUVar2 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr);
  *param_1 = pUVar2->DefaultInputType;
  pUVar1 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pUVar2 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                     ((UPlatformSettingsManager *)(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr);
  *param_2 = pUVar2->DefaultGamepadName;
  return;
}

// GetCurrentPlatformName @ 14a775200

FName __cdecl FCommonInputBase::GetCurrentPlatformName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"PC");
  return in_RCX;
}

// GetInputSettings @ 14a775790

UCommonInputSettings * __cdecl FCommonInputBase::GetInputSettings(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *pFVar5;
  IModuleInterface *pIVar6;
  UCommonInputSettings *pUVar7;
  FName FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FString FStack_18;
  
  bVar3 = IsInGameThread();
  if (bVar3) {
    pFVar4 = ::FName::FName(&FStackX_10,"CommonInput");
    FVar1 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
  }
  else {
    pFVar4 = ::FName::FName(&FStackX_18,"CommonInput");
    FStackX_8 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    bVar3 = FModuleManager::IsModuleLoaded(pFVar5,FStackX_8);
    if (!bVar3) {
      ::FName::ToString(&FStackX_8,&FStack_18);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UCommonInputSettings *)(*pcVar2)();
        return pUVar7;
      }
    }
    pIVar6 = FModuleManager::GetModule(pFVar5,FStackX_8);
  }
  pUVar7 = (UCommonInputSettings *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
  if ((pUVar7 == (UCommonInputSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Public\\ICommonInputModule.h"
                         ,0x2c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UCommonInputSettings *)(*pcVar2)();
    return pUVar7;
  }
  return pUVar7;
}

