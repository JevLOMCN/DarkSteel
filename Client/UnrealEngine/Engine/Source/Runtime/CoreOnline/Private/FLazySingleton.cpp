// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 1

// Construct<UE::Online::FOnlineIdRegistryRegistry> @ 144611440

void __cdecl FLazySingleton::Construct<UE::Online::FOnlineIdRegistryRegistry>(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  puVar1 = ::operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[7] = 0;
    puVar1[9] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    puVar2 = puVar1;
  }
  *(undefined8 **)((longlong)param_1 + 0x50) = puVar2;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  return;
}

