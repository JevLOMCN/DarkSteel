// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a872380

UScriptStruct * __cdecl FEnumCVarProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumCVarProperty.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEnumCVarProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumCVarProperty,(UObject *)pUVar1,
                         L"EnumCVarProperty");
  }
  return Z_Registration_Info_UScriptStruct_FEnumCVarProperty.OuterSingleton;
}

// GetValue @ 14a8723c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnumCVarProperty::GetValue
          (FEnumCVarProperty *this,FChooserEvaluationContext *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar uVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this->VariableName).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->VariableName).Data.AllocatorInstance.Data;
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar6,1);
  if (plVar5 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 200))(plVar5);
    *param_2 = uVar4;
    return true;
  }
  if (2 < (byte)LogChooser._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChooser);
  }
  return false;
}

// SetValue @ 14a8724b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnumCVarProperty::SetValue
          (FEnumCVarProperty *this,FChooserEvaluationContext *param_1,uchar param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  undefined7 in_register_00000081;
  undefined1 local_48 [16];
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
     (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) {
    in_register_00000081 = 4;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x4fb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->VariableName).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->VariableName).Data.AllocatorInstance.Data;
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar7,CONCAT71(in_register_00000081,1));
  if (plVar5 == (longlong *)0x0) {
    if (2 < (byte)LogChooser._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChooser);
    }
    bVar3 = false;
  }
  else {
    local_28 = 0xe000000;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0xf000000;
    local_10 = 0x1000000;
    ::FString::PrintfImpl(&local_38,L"%d");
    lVar1 = *plVar5;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    uVar6 = (**(code **)(lVar1 + 0xa8))(plVar5,local_48,&local_28);
    (**(code **)(lVar1 + 0xb0))(plVar5,FVar8.Data,uVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetDisplayName @ 14a872610

void __thiscall FEnumCVarProperty::GetDisplayName(FEnumCVarProperty *this,FText *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::FromString(&local_18,&this->VariableName);
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

