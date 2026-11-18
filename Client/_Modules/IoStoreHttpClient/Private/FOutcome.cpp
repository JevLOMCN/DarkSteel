// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 5

// Error @ 144572ca0

FOutcome __cdecl UE::IoStore::HTTP::FOutcome::Error(char *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FOutcome FVar3;
  undefined4 in_register_00000014;
  ulonglong uVar4;
  int in_R8D;
  
  uVar4 = CONCAT44(in_register_00000014,param_2);
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Message != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar3.field0_0x0;
    }
  }
  if (0x1fffe < in_R8D + 0xffffU) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Code <= 0xffff && Code >= -0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar3.field0_0x0;
    }
  }
  *(ulonglong *)param_1 = (uVar4 ^ *(ulonglong *)param_1) & 0xffff000000000000 ^ uVar4;
  *(short *)(param_1 + 6) = (short)in_R8D;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Ok @ 14457bb60

FOutcome __cdecl UE::IoStore::HTTP::FOutcome::Ok(int param_1)

{
  FOutcome_u_0 FVar1;
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) = 0x8000;
  FVar1._s_1.Tag = in_register_0000000c;
  FVar1._s_1.Result = param_1;
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (FOutcome)FVar1;
}

// WaitBuffer @ 1445852d0

FOutcome __cdecl UE::IoStore::HTTP::FOutcome::WaitBuffer(int param_1)

{
  FOutcome_u_0 FVar1;
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) = 0x38000;
  FVar1._s_1.Tag = in_register_0000000c;
  FVar1._s_1.Result = param_1;
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (FOutcome)FVar1;
}

// WaitStream @ 1445852f0

FOutcome __cdecl UE::IoStore::HTTP::FOutcome::WaitStream(int param_1)

{
  FOutcome_u_0 FVar1;
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) = 0x58000;
  FVar1._s_1.Tag = in_register_0000000c;
  FVar1._s_1.Result = param_1;
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (FOutcome)FVar1;
}

// Waiting @ 144585310

FOutcome __cdecl UE::IoStore::HTTP::FOutcome::Waiting(int param_1)

{
  FOutcome_u_0 FVar1;
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) = 0x18000;
  FVar1._s_1.Tag = in_register_0000000c;
  FVar1._s_1.Result = param_1;
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (FOutcome)FVar1;
}

