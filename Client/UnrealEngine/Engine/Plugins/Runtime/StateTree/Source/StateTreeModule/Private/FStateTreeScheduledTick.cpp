// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 11

// StaticStruct @ 14d4da510

UScriptStruct * __cdecl FStateTreeScheduledTick::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeScheduledTick,(UObject *)pUVar1,
                         L"StateTreeScheduledTick");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.OuterSingleton;
}

// GetTickRate @ 14d500650

float __thiscall FStateTreeScheduledTick::GetTickRate(FStateTreeScheduledTick *this)

{
  return this->NextDeltaTime;
}

// HasCustomTickRate @ 14d500b50

bool __thiscall FStateTreeScheduledTick::HasCustomTickRate(FStateTreeScheduledTick *this)

{
  return 0.0 < this->NextDeltaTime;
}

// MakeCustomTickRate @ 14d501d60

FStateTreeScheduledTick __cdecl
FStateTreeScheduledTick::MakeCustomTickRate(float param_1,ETickReason param_2)

{
  FStateTreeScheduledTick in_RCX;
  undefined1 in_R8B;
  float in_XMM1_Da;
  undefined1 local_res10 [24];
  
  if (0.0 <= in_XMM1_Da) {
    *(undefined1 *)((longlong)in_RCX + 4) = in_R8B;
    if (0.0 < in_XMM1_Da) {
      *(float *)in_RCX = in_XMM1_Da;
      return in_RCX;
    }
  }
  else {
    `FStateTreeScheduledTick::MakeCustomTickRate'::__l2::<lambda_1>::operator()(local_res10);
    *(undefined1 *)((longlong)in_RCX + 4) = in_R8B;
  }
  *(undefined4 *)in_RCX = 0;
  return in_RCX;
}

// MakeEveryFrames @ 14d501dc0

FStateTreeScheduledTick __cdecl FStateTreeScheduledTick::MakeEveryFrames(ETickReason param_1)

{
  FStateTreeScheduledTick FVar1;
  undefined7 in_register_00000009;
  undefined1 in_DL;
  
  *(undefined4 *)CONCAT71(in_register_00000009,param_1) = 0;
  FVar1._1_7_ = in_register_00000009;
  FVar1.NextDeltaTime._0_1_ = param_1;
  *(undefined1 *)(CONCAT71(in_register_00000009,param_1) + 4) = in_DL;
  return FVar1;
}

// MakeNextFrame @ 14d501de0

FStateTreeScheduledTick __cdecl FStateTreeScheduledTick::MakeNextFrame(ETickReason param_1)

{
  FStateTreeScheduledTick FVar1;
  undefined7 in_register_00000009;
  undefined1 in_DL;
  
  *(undefined4 *)CONCAT71(in_register_00000009,param_1) = 0x38d1b717;
  FVar1._1_7_ = in_register_00000009;
  FVar1.NextDeltaTime._0_1_ = param_1;
  *(undefined1 *)(CONCAT71(in_register_00000009,param_1) + 4) = in_DL;
  return FVar1;
}

// MakeSleep @ 14d502340

FStateTreeScheduledTick __cdecl FStateTreeScheduledTick::MakeSleep(void)

{
  FStateTreeScheduledTick in_RCX;
  
  *(undefined4 *)in_RCX = 0x4b000000;
  *(undefined1 *)((longlong)in_RCX + 4) = 0;
  return in_RCX;
}

// ShouldSleep @ 14d515590

bool __thiscall FStateTreeScheduledTick::ShouldSleep(FStateTreeScheduledTick *this)

{
  return __real_4b000000 < this->NextDeltaTime || __real_4b000000 == this->NextDeltaTime;
}

// ShouldTickEveryFrames @ 14d5155b0

bool __thiscall FStateTreeScheduledTick::ShouldTickEveryFrames(FStateTreeScheduledTick *this)

{
  if (this->NextDeltaTime == 0.0) {
    return true;
  }
  return false;
}

// ShouldTickOnceNextFrame @ 14d5155d0

bool __thiscall FStateTreeScheduledTick::ShouldTickOnceNextFrame(FStateTreeScheduledTick *this)

{
  if (__real_38d1b717 == this->NextDeltaTime) {
    return true;
  }
  return false;
}

// operator() @ 15057efe0

bool __thiscall
`FStateTreeScheduledTick::MakeCustomTickRate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1311110712101175065>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1311110712101175065>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

