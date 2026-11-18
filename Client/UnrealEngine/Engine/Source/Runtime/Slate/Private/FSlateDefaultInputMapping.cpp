// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// GetInputDeviceIdForKeyboard @ 1426bd230

FInputDeviceId __thiscall
FSlateDefaultInputMapping::GetInputDeviceIdForKeyboard(FSlateDefaultInputMapping *this)

{
  IPlatformInputDeviceMapper *pIVar1;
  int in_EDX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1);
  return (FInputDeviceId)in_EDX;
}

// GetInputDeviceIdForMouse @ 1426bd290

FInputDeviceId __thiscall
FSlateDefaultInputMapping::GetInputDeviceIdForMouse(FSlateDefaultInputMapping *this)

{
  IPlatformInputDeviceMapper *pIVar1;
  int in_EDX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1);
  return (FInputDeviceId)in_EDX;
}

// GetUserIndexForController @ 1426c0030

TOptional<int> __thiscall
FSlateDefaultInputMapping::GetUserIndexForController
          (FSlateDefaultInputMapping *this,int param_1,FKey *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined4 uVar2;
  undefined4 in_register_00000014;
  TOptional<int> TVar3;
  longlong in_R9;
  
  TVar3._4_4_ = in_register_00000014;
  TVar3.TypedValue = param_1;
  uVar2 = (**(code **)((longlong)*this + 0x40))(this,(ulonglong)param_2 & 0xffffffff);
  pTVar1 = *(TReferenceControllerBase<1> **)(in_R9 + 0x10);
  *(undefined4 *)TVar3 = uVar2;
  *(undefined1 *)((longlong)TVar3 + 4) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return TVar3;
}

// GetUserIndexForController @ 1426c0070

int __thiscall
FSlateDefaultInputMapping::GetUserIndexForController(FSlateDefaultInputMapping *this,int param_1)

{
  return param_1;
}

// GetUserIndexForKeyboard @ 1426c0150

int __thiscall FSlateDefaultInputMapping::GetUserIndexForKeyboard(FSlateDefaultInputMapping *this)

{
  return 0;
}

// GetUserIndexForMouse @ 1426c0180

int __thiscall FSlateDefaultInputMapping::GetUserIndexForMouse(FSlateDefaultInputMapping *this)

{
  return 0;
}

