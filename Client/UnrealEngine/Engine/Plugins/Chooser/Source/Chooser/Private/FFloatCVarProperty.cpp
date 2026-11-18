// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a871fe0

UScriptStruct * __cdecl FFloatCVarProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatCVarProperty.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatCVarProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatCVarProperty,(UObject *)pUVar1,
                         L"FloatCVarProperty");
  }
  return Z_Registration_Info_UScriptStruct_FFloatCVarProperty.OuterSingleton;
}

// GetValue @ 14a872020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FFloatCVarProperty::GetValue
          (FFloatCVarProperty *this,FChooserEvaluationContext *param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  float fVar6;
  
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
    fVar6 = (float)(**(code **)(*plVar4 + 0xd0))(plVar4);
    *param_2 = (double)fVar6;
    return true;
  }
  if (2 < (byte)LogChooser._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChooser);
  }
  return false;
}

// SetValue @ 14a872110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FFloatCVarProperty::SetValue
          (FFloatCVarProperty *this,FChooserEvaluationContext *param_1,double param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  undefined1 local_58 [16];
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this->VariableName).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->VariableName).Data.AllocatorInstance.Data;
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar7,1);
  if (plVar5 == (longlong *)0x0) {
    if (2 < (byte)LogChooser._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChooser);
    }
    bVar3 = false;
  }
  else {
    local_38 = 0xe000000;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0xf000000;
    local_20 = 0x1000000;
    ::FString::PrintfImpl(&local_48,L"%g");
    lVar1 = *plVar5;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    uVar6 = (**(code **)(lVar1 + 0xa8))(plVar5,local_58,&local_38);
    (**(code **)(lVar1 + 0xb0))(plVar5,FVar8.Data,uVar6);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetDisplayName @ 14a872280

void __thiscall FFloatCVarProperty::GetDisplayName(FFloatCVarProperty *this,FText *param_1)

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

