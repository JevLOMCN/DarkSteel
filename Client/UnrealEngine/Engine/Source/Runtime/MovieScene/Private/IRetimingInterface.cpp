// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// ~IRetimingInterface @ 146098240

void __thiscall UE::MovieScene::IRetimingInterface::~IRetimingInterface(IRetimingInterface *this)

{
  *this = (IRetimingInterface)&___7IRetimingInterface_MovieScene_UE__6B_;
  return;
}

// RemapTime @ 1461c80d0

FFrameNumber __thiscall
UE::MovieScene::IRetimingInterface::RemapTime(IRetimingInterface *this,FFrameNumber param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  undefined1 local_res8 [4];
  undefined4 uStackX_c;
  
  uStackX_c = 0;
  piVar2 = (int *)(**(code **)((longlong)*this + 8))(this,local_res8,in_R8D);
  iVar1 = *piVar2;
  if (__real_3f000000 < (float)piVar2[1] || __real_3f000000 == (float)piVar2[1]) {
    iVar1 = iVar1 + 1;
  }
  *(int *)CONCAT44(in_register_00000014,param_1.Value) = iVar1;
  return (FFrameNumber)param_1.Value;
}

