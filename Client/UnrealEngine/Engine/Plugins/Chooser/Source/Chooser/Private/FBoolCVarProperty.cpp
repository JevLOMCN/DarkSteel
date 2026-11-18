// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a871ca0

UScriptStruct * __cdecl FBoolCVarProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolCVarProperty.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolCVarProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolCVarProperty,(UObject *)pUVar1,
                         L"BoolCVarProperty");
  }
  return Z_Registration_Info_UScriptStruct_FBoolCVarProperty.OuterSingleton;
}

// GetValue @ 14a871ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBoolCVarProperty::GetValue
          (FBoolCVarProperty *this,FChooserEvaluationContext *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  
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
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->VariableName).Data.AllocatorInstance.Data;
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar5,1);
  if (plVar4 != (longlong *)0x0) {
    bVar2 = (bool)(**(code **)(*plVar4 + 0xc0))(plVar4);
    *param_2 = bVar2;
    return true;
  }
  if (2 < (byte)LogChooser._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChooser);
  }
  return false;
}

// SetValue @ 14a871dd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBoolCVarProperty::SetValue(FBoolCVarProperty *this,FChooserEvaluationContext *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  undefined7 in_register_00000081;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
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
    lVar1 = *plVar5;
    local_2c = 0xe000000;
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0xf000000;
    local_14 = 0x1000000;
    uVar6 = (**(code **)(lVar1 + 0xa8))(plVar5,local_38,&local_2c);
    puVar8 = &u_0;
    if (param_2) {
      puVar8 = &u_1;
    }
    (**(code **)(lVar1 + 0xb0))(plVar5,puVar8,uVar6);
    bVar3 = true;
  }
  return bVar3;
}

// GetDisplayName @ 14a871f10

void __thiscall FBoolCVarProperty::GetDisplayName(FBoolCVarProperty *this,FText *param_1)

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

