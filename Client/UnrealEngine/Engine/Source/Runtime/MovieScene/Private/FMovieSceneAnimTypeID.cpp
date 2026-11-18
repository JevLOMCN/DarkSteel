// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// Combine @ 146197040

FMovieSceneAnimTypeID __cdecl
FMovieSceneAnimTypeID::Combine(FMovieSceneAnimTypeID param_1,FMovieSceneAnimTypeID param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_R8;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = (int)in_R8;
  uVar2 = (uint)(in_R8 >> 0x20);
  uVar5 = (int)(param_2.ID >> 0x20) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar6 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar5 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 5;
  uVar7 = (uVar6 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar7) - uVar5 ^ uVar7 << 10;
  uVar2 = (int)param_2.ID - iVar3 ^ (uint)(in_R8 >> 0xd) & 0x7ffff;
  uVar4 = (-0x61c88647 - uVar2) - iVar3 ^ uVar2 << 8;
  uVar6 = (iVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar2 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar6 ^ uVar2 << 10;
  *(ulonglong *)param_1.ID =
       ((ulonglong)((uVar5 - uVar1) - uVar7) << 0xf ^ (ulonglong)uVar1 & 0xffffffffffff8000) << 0x11
       | (ulonglong)((uVar6 - uVar4) - uVar2 ^ uVar4 >> 0xf);
  return (FMovieSceneAnimTypeID)param_1.ID;
}

// GenerateHash @ 1461af600

ulong64 __cdecl FMovieSceneAnimTypeID::GenerateHash(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (int)((ulonglong)param_1 >> 0x20) - param_2 ^ param_2 >> 0xd;
  uVar2 = (int)param_1 - param_2 ^ param_2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar1) - param_2 ^ uVar1 << 8;
  uVar4 = (param_2 - uVar1) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 << 0x10;
  uVar5 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar4 = (uVar3 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar6 = (-0x61c88647 - uVar2) - param_2 ^ uVar2 << 8;
  uVar3 = (param_2 - uVar2) - uVar6 ^ uVar6 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xc;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 3;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 10;
  return ((ulonglong)((uVar5 - uVar4) - uVar1) << 0xf ^ (ulonglong)uVar4 & 0xffffffffffff8000) <<
         0x11 | (ulonglong)((uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xf);
}

// Initialize @ 1461b59b0

ulong64 __cdecl FMovieSceneAnimTypeID::Initialize(ulong64 *param_1,uint param_2)

{
  ulong64 uVar1;
  
  uVar1 = GenerateHash(param_1,param_2);
  *param_1 = uVar1;
  return uVar1;
}

// Unique @ 1461de2b0

FMovieSceneAnimTypeID __cdecl FMovieSceneAnimTypeID::Unique(void)

{
  ulong64 uVar1;
  ulong64 *in_RCX;
  
  RunningCount = RunningCount + 1;
  uVar1 = GenerateHash(&RunningCount,(uint)RunningCount);
  *in_RCX = uVar1;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

