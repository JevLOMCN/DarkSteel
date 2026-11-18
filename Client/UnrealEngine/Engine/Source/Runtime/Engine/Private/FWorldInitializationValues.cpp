// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FWorldInitializationValues @ 1489b6230

FWorldInitializationValues * __thiscall
FWorldInitializationValues::FWorldInitializationValues
          (FWorldInitializationValues *this,FWorldInitializationValues *param_1)

{
  UClass *pUVar1;
  uint uVar2;
  
  uVar2 = (this->bInitializeScenes ^ param_1->bInitializeScenes) & 1 ^ *(uint *)this;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 2 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 4 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 8 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x10 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x20 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x40 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x80 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x100 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x200 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x400 ^ uVar2;
  *(uint *)this = uVar2;
  uVar2 = (uVar2 ^ *(uint *)param_1) & 0x800 ^ uVar2;
  *(uint *)this = uVar2;
  *(uint *)this = (uVar2 ^ *(uint *)param_1) & 0x1000 ^ uVar2;
  pUVar1 = (param_1->DefaultGameMode).Class.field0_0x0.DebugPtr;
  (this->DefaultGameMode).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

