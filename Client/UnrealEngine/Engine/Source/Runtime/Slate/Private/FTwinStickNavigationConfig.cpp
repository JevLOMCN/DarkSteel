// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FTwinStickNavigationConfig @ 1426a9870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTwinStickNavigationConfig * __thiscall
FTwinStickNavigationConfig::FTwinStickNavigationConfig(FTwinStickNavigationConfig *this)

{
  FKey **ppFVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65 [13];
  FKey *local_58 [10];
  
  local_58[8] = (FKey *)(__security_cookie.value ^ (ulonglong)auStack_88);
  FNavigationConfig::FNavigationConfig((FNavigationConfig *)this);
  this->field_0x18 = 0;
  *(undefined ***)this = &___7FTwinStickNavigationConfig__6B_;
  local_68 = 0;
  local_58[0] = &EKeys::Gamepad_DPad_Left;
  local_58[1] = (FKey *)&local_68;
  local_67 = 1;
  local_58[2] = &EKeys::Gamepad_DPad_Right;
  local_58[3] = (FKey *)&local_67;
  local_58[4] = &EKeys::Gamepad_DPad_Up;
  local_58[5] = (FKey *)&local_66;
  local_58[6] = &EKeys::Gamepad_DPad_Down;
  local_58[7] = (FKey *)local_65;
  local_66 = 2;
  local_65[0] = 3;
  TSet<TTuple<FKey,enum_EUINavigation>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>,FDefaultSetAllocator>
  ::Empty(&this->field_0x58,4);
  ppFVar1 = local_58;
  do {
    TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
    ::Emplace<FKey_const_&,enum_EUINavigation_const_&>
              (&this->field_0x58,*ppFVar1,(EUINavigation *)ppFVar1[1]);
    ppFVar1 = ppFVar1 + 2;
  } while (ppFVar1 != local_58 + 8);
  return this;
}

// IsAnalogHorizontalKey @ 1426c2500

bool __thiscall
FTwinStickNavigationConfig::IsAnalogHorizontalKey(FTwinStickNavigationConfig *this,FKey *param_1)

{
  if ((param_1->KeyName != EKeys::Gamepad_LeftX.KeyName) &&
     (param_1->KeyName != EKeys::Gamepad_RightX.KeyName)) {
    return false;
  }
  return true;
}

// IsAnalogVerticalKey @ 1426c2550

bool __thiscall
FTwinStickNavigationConfig::IsAnalogVerticalKey(FTwinStickNavigationConfig *this,FKey *param_1)

{
  if ((param_1->KeyName != EKeys::Gamepad_LeftY.KeyName) &&
     (param_1->KeyName != EKeys::Gamepad_RightY.KeyName)) {
    return false;
  }
  return true;
}

