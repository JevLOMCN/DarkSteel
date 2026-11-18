// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9a60

IMessagePump * __cdecl BuildPatchServices::FMessagePumpFactory::Create(void)

{
  IMessagePump *pIVar1;
  IMessagePump IVar2;
  IMessagePump IVar3;
  
  pIVar1 = ::operator_new(0x60);
  if (pIVar1 == (IMessagePump *)0x0) {
    return (IMessagePump *)0x0;
  }
  pIVar1[1] = (IMessagePump)0x0;
  pIVar1[2] = (IMessagePump)0x0;
  pIVar1[3] = (IMessagePump)0x0;
  pIVar1[4] = (IMessagePump)0x0;
  pIVar1[5] = (IMessagePump)0x0;
  pIVar1[6] = (IMessagePump)0x0;
  pIVar1[7] = (IMessagePump)0x0;
  pIVar1[8] = (IMessagePump)0x0;
  pIVar1[9] = (IMessagePump)0x0;
  pIVar1[10] = (IMessagePump)0x0;
  pIVar1[0xb] = (IMessagePump)0x0;
  *pIVar1 = (IMessagePump)&___7FMessagePump_BuildPatchServices__6B_;
  IVar2 = (IMessagePump)::operator_new(0x48);
  if (IVar2 == (IMessagePump)0x0) {
    IVar2 = (IMessagePump)0x0;
  }
  else {
    *(undefined8 *)IVar2 = 0;
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x38) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x40) = 0;
    *(undefined8 *)IVar2 = 0;
    *(undefined1 *)((longlong)IVar2 + 0x40) = 0xff;
  }
  IVar3 = (IMessagePump)0x0;
  pIVar1[3] = IVar2;
  pIVar1[2] = IVar2;
  IVar2 = (IMessagePump)::operator_new(0x60);
  if (IVar2 != (IMessagePump)0x0) {
    *(undefined8 *)IVar2 = 0;
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x38) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x40) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x48) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x50) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x58) = 0;
    *(undefined8 *)IVar2 = 0;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x58) = 0;
    IVar3 = IVar2;
  }
  pIVar1[5] = IVar3;
  pIVar1[4] = IVar3;
  pIVar1[6] = (IMessagePump)&___7FDefaultMessageHandler_BuildPatchServices__6B_;
  *(undefined4 *)(pIVar1 + 7) = 0xffffffff;
  pIVar1[8] = (IMessagePump)0x0;
  pIVar1[9] = (IMessagePump)0x0;
  *(undefined4 *)(pIVar1 + 10) = 0;
  return pIVar1;
}

