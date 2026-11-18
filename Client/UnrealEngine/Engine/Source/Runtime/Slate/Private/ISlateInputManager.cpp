// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// ~ISlateInputManager @ 1426ab930

void __thiscall ISlateInputManager::~ISlateInputManager(ISlateInputManager *this)

{
  return;
}

// GetUserIndexForController @ 1426c0080

int __thiscall ISlateInputManager::GetUserIndexForController(ISlateInputManager *this,int param_1)

{
  return param_1;
}

// GetUserIndexForInputDevice @ 1426c00c0

TOptional<int> __thiscall
ISlateInputManager::GetUserIndexForInputDevice(ISlateInputManager *this,FInputDeviceId param_1)

{
  code *pcVar1;
  IPlatformInputDeviceMapper *pIVar2;
  undefined4 *puVar3;
  undefined4 in_register_00000014;
  TOptional<int> TVar4;
  undefined4 in_R8D;
  undefined1 local_res8 [8];
  
  TVar4._4_4_ = in_register_00000014;
  TVar4.TypedValue = param_1.InternalId;
  pcVar1 = *(code **)((longlong)*this + 0x30);
  pIVar2 = IPlatformInputDeviceMapper::Get();
  puVar3 = (undefined4 *)(**(code **)(pIVar2->_padding_ + 0x68))(pIVar2,local_res8,in_R8D);
  (*pcVar1)(this,TVar4,*puVar3);
  return TVar4;
}

// GetUserIndexForPlatformUser @ 1426c01c0

TOptional<int> __thiscall
ISlateInputManager::GetUserIndexForPlatformUser(ISlateInputManager *this,FPlatformUserId param_1)

{
  TOptional<int> TVar1;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.InternalId) = in_R8D;
  TVar1._4_4_ = in_register_00000014;
  TVar1.TypedValue = param_1.InternalId;
  *(undefined1 *)(CONCAT44(in_register_00000014,param_1.InternalId) + 4) = 1;
  return TVar1;
}

