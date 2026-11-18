// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// Construct<FNDIDataChannelLayoutManager> @ 148e44f30

void __cdecl FLazySingleton::Construct<FNDIDataChannelLayoutManager>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Construct<FNiagaraDataChannelDebugUtilities> @ 1490836b0

void __cdecl FLazySingleton::Construct<FNiagaraDataChannelDebugUtilities>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Construct<FNiagaraTypeRegistry> @ 1493c49b0

void __cdecl FLazySingleton::Construct<FNiagaraTypeRegistry>(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGCObject__6B_;
  FGCObject::RegisterGCObject(param_1);
  puVar2 = (undefined8 *)0x0;
  *(undefined ***)param_1 = &___7FNiagaraTypeRegistry__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined1 *)((longlong)param_1 + 0x178) = 0;
  puVar1 = ::operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    puVar2 = puVar1;
  }
  *(undefined8 **)((longlong)param_1 + 0x188) = puVar2;
  *(undefined8 **)((longlong)param_1 + 0x180) = puVar2;
  NiagaraDebugVisHelper::GCoreTypeRegistrySingletonPtr = param_1;
  return;
}

