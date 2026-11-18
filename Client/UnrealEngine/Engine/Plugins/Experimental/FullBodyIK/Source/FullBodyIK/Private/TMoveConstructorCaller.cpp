// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 3

// Construct @ 14df7c5d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FPoleVectorConstraint>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  return;
}

// Construct @ 14df7c5f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FPositionLimitConstraint>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  return;
}

// Construct @ 14df7c650

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FRotationLimitConstraint>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
  return;
}

