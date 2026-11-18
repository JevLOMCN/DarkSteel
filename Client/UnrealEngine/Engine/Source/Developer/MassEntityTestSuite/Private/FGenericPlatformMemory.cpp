// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// Memswap @ 147192ca0

void __cdecl FGenericPlatformMemory::Memswap(void *param_1,void *param_2,ulong64 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    *(undefined1 *)param_2 = uVar1;
    return;
  case 2:
    uVar2 = *(undefined2 *)param_1;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined2 *)param_2 = uVar2;
    return;
  case 3:
    uVar2 = *(undefined2 *)param_1;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined2 *)param_2 = uVar2;
    uVar1 = *(undefined1 *)((longlong)param_1 + 2);
    *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined1 *)((longlong)param_2 + 2) = uVar1;
    return;
  case 4:
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar3;
    return;
  case 5:
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar3;
    uVar1 = *(undefined1 *)((longlong)param_1 + 4);
    *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined1 *)((longlong)param_2 + 4) = uVar1;
    return;
  case 6:
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar3;
    uVar2 = *(undefined2 *)((longlong)param_1 + 4);
    *(undefined2 *)((longlong)param_1 + 4) = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined2 *)((longlong)param_2 + 4) = uVar2;
    return;
  case 7:
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar3;
    uVar2 = *(undefined2 *)((longlong)param_1 + 4);
    *(undefined2 *)((longlong)param_1 + 4) = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined2 *)((longlong)param_2 + 4) = uVar2;
    uVar1 = *(undefined1 *)((longlong)param_1 + 6);
    *(undefined1 *)((longlong)param_1 + 6) = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined1 *)((longlong)param_2 + 6) = uVar1;
    return;
  case 8:
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar4;
    return;
  default:
    MemswapGreaterThan8(param_1,param_2,param_3);
    return;
  case 0x10:
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_1 + 8);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_2 + 8) = uVar4;
    return;
  }
}

