// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// Contains @ 1460b7ac0

bool __thiscall
UE::MovieScene::Interpolation::FCachedInterpolationRange::Contains
          (FCachedInterpolationRange *this,FFrameNumber param_1)

{
  int iVar1;
  
  if (((this->Start).Value <= param_1.Value) &&
     ((iVar1 = (this->End).Value, param_1.Value < iVar1 || (iVar1 == 0x7fffffff)))) {
    return true;
  }
  return false;
}

// Empty @ 1460c2090

FCachedInterpolationRange __cdecl
UE::MovieScene::Interpolation::FCachedInterpolationRange::Empty(void)

{
  FCachedInterpolationRange FVar1;
  
  FVar1.Start.Value = 0;
  FVar1.End.Value = -1;
  return FVar1;
}

// Finite @ 1460c6650

FCachedInterpolationRange __cdecl
UE::MovieScene::Interpolation::FCachedInterpolationRange::Finite
          (FFrameNumber param_1,FFrameNumber param_2)

{
  FCachedInterpolationRange FVar1;
  
  FVar1.End.Value = param_2.Value;
  FVar1.Start.Value = param_1.Value;
  return FVar1;
}

// From @ 1460c6fe0

FCachedInterpolationRange __cdecl
UE::MovieScene::Interpolation::FCachedInterpolationRange::From(FFrameNumber param_1)

{
  return (FCachedInterpolationRange)((ulonglong)(uint)param_1.Value | 0x7fffffff00000000);
}

// Infinite @ 1460d1e80

FCachedInterpolationRange __cdecl
UE::MovieScene::Interpolation::FCachedInterpolationRange::Infinite(void)

{
  FCachedInterpolationRange FVar1;
  
  FVar1.Start.Value = -0x80000000;
  FVar1.End.Value = 0x7fffffff;
  return FVar1;
}

// IsEmpty @ 1460d9020

bool __thiscall
UE::MovieScene::Interpolation::FCachedInterpolationRange::IsEmpty(FCachedInterpolationRange *this)

{
  return (this->End).Value <= (this->Start).Value;
}

// Only @ 1460dcb20

FCachedInterpolationRange __cdecl
UE::MovieScene::Interpolation::FCachedInterpolationRange::Only(FFrameNumber param_1)

{
  FCachedInterpolationRange FVar1;
  FCachedInterpolationRange FVar2;
  
  if (param_1.Value < 0x7fffffff) {
    FVar1.End.Value = param_1.Value + 1;
    FVar1.Start.Value = param_1.Value;
    return FVar1;
  }
  FVar2.End.Value = param_1.Value;
  FVar2.Start.Value = param_1.Value;
  return FVar2;
}

// Until @ 1460fc5f0

FCachedInterpolationRange __cdecl
UE::MovieScene::Interpolation::FCachedInterpolationRange::Until(FFrameNumber param_1)

{
  return (FCachedInterpolationRange)((ulonglong)(uint)param_1.Value << 0x20 | 0x80000000);
}

