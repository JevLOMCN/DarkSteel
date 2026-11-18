// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a478470

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlInteger_LimitSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings
                         ,(UObject *)pUVar1,L"RigUnit_HierarchyAddControlInteger_LimitSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings.
         OuterSingleton;
}

// Configure @ 14a51f370

void __thiscall
FRigUnit_HierarchyAddControlInteger_LimitSettings::Configure
          (FRigUnit_HierarchyAddControlInteger_LimitSettings *this,FRigControlSettings *param_1)

{
  FRigControlLimitEnabled FVar1;
  UEnum *this_00;
  code *pcVar2;
  bool bVar3;
  ulonglong local_198;
  ulonglong local_114;
  ulonglong local_90;
  
  FRigControlSettings::SetupLimitArrayForType(param_1,false,false,false);
  FVar1 = this->Limit;
  if ((param_1->LimitEnabled).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)(param_1->LimitEnabled).AllocatorInstance.Data = FVar1;
  this_00 = (param_1->ControlEnum).field0_0x0.DebugPtr;
  local_198 = (ulonglong)(uint)this->MinValue;
  (param_1->MinimumValue).FloatStorage.Float00 = (float)(undefined4)local_198;
  (param_1->MinimumValue).FloatStorage.Float01 = (float)local_198._4_4_;
  (param_1->MinimumValue).FloatStorage.Float02 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float03 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float10 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float11 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float12 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float13 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float20 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float21 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float22 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float23 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float30 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float31 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float32 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float33 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float00_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float01_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float02_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float03_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float10_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float11_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float12_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float13_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float20_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float21_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float22_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float23_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float30_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float31_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float32_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(param_1->MinimumValue).FloatStorage.bValid = 1;
  if (this_00 == (UEnum *)0x0) {
    local_90 = (ulonglong)(uint)this->MaxValue;
    (param_1->MaximumValue).FloatStorage.Float00 = (float)(undefined4)local_90;
    (param_1->MaximumValue).FloatStorage.Float01 = (float)local_90._4_4_;
    (param_1->MaximumValue).FloatStorage.Float02 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float03 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float10 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float11 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float12 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float13 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float20 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float21 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float22 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float23 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float30 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float31 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float32 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float33 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float00_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float01_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float02_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float03_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float10_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float11_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float12_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float13_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float20_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float21_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float22_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float23_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float30_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float31_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float32_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float33_2 = 0.0;
  }
  else {
    local_114 = UEnum::GetMaxEnumValue(this_00);
    local_114 = local_114 & 0xffffffff;
    (param_1->MaximumValue).FloatStorage.Float00 = (float)(undefined4)local_114;
    (param_1->MaximumValue).FloatStorage.Float01 = (float)local_114._4_4_;
    (param_1->MaximumValue).FloatStorage.Float02 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float03 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float10 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float11 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float12 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float13 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float20 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float21 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float22 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float23 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float30 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float31 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float32 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float33 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float00_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float01_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float02_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float03_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float10_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float11_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float12_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float13_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float20_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float21_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float22_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float23_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float30_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float31_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float32_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float33_2 = 0.0;
  }
  *(undefined4 *)&(param_1->MaximumValue).FloatStorage.bValid = 1;
  param_1->bDrawLimits = this->bDrawLimits;
  return;
}

// ConfigureFrom @ 14a520370

void __thiscall
FRigUnit_HierarchyAddControlInteger_LimitSettings::ConfigureFrom
          (FRigUnit_HierarchyAddControlInteger_LimitSettings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Limit = *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data;
  this->MinValue = (int)(param_2->MinimumValue).FloatStorage.Float00;
  this->MaxValue = (int)(param_2->MaximumValue).FloatStorage.Float00;
  this->bDrawLimits = param_2->bDrawLimits;
  return;
}

