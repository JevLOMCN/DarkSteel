// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// FMovieSceneBlendTypeField @ 14617eb10

FMovieSceneBlendTypeField * __thiscall
FMovieSceneBlendTypeField::FMovieSceneBlendTypeField(FMovieSceneBlendTypeField *this)

{
  this->BlendTypeField = Invalid;
  return this;
}

// Add @ 14618c170

void __thiscall
FMovieSceneBlendTypeField::Add(FMovieSceneBlendTypeField *this,FMovieSceneBlendTypeField param_1)

{
  this->BlendTypeField = this->BlendTypeField | param_1.BlendTypeField;
  return;
}

// Add @ 14618c180

void __thiscall
FMovieSceneBlendTypeField::Add(FMovieSceneBlendTypeField *this,EMovieSceneBlendType param_1)

{
  this->BlendTypeField = this->BlendTypeField | param_1;
  return;
}

// All @ 1461919e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneBlendTypeField __cdecl FMovieSceneBlendTypeField::All(void)

{
  byte bVar1;
  byte *in_RCX;
  byte *pbVar2;
  byte local_18 [24];
  
  pbVar2 = local_18;
  *in_RCX = 0;
  bVar1 = 0;
  local_18[0] = 1;
  local_18[1] = 2;
  local_18[2] = 4;
  local_18[3] = 8;
  local_18[4] = 0x10;
  do {
    bVar1 = bVar1 | *pbVar2;
    pbVar2 = pbVar2 + 1;
    *in_RCX = bVar1;
  } while (pbVar2 != local_18 + 5);
  return (FMovieSceneBlendTypeField)(EMovieSceneBlendType)in_RCX;
}

// Contains @ 146199240

bool __thiscall
FMovieSceneBlendTypeField::Contains(FMovieSceneBlendTypeField *this,EMovieSceneBlendType param_1)

{
  return (this->BlendTypeField & param_1) != Invalid;
}

// Invert @ 1461bb900

FMovieSceneBlendTypeField __thiscall
FMovieSceneBlendTypeField::Invert(FMovieSceneBlendTypeField *this)

{
  byte *in_RDX;
  
  *in_RDX = ~this->BlendTypeField;
  return (FMovieSceneBlendTypeField)(EMovieSceneBlendType)in_RDX;
}

// None @ 1461bef00

FMovieSceneBlendTypeField __cdecl FMovieSceneBlendTypeField::None(void)

{
  undefined1 *in_RCX;
  
  *in_RCX = 0;
  return (FMovieSceneBlendTypeField)(EMovieSceneBlendType)in_RCX;
}

// Num @ 1461bef10

int __thiscall FMovieSceneBlendTypeField::Num(FMovieSceneBlendTypeField *this)

{
  EMovieSceneBlendType EVar1;
  
  EVar1 = this->BlendTypeField;
  return (EVar1 >> 3 & 1) + (EVar1 >> 4 & 1) + (EVar1 >> 2 & 1) + (EVar1 >> 1 & 1) + (EVar1 & 1);
}

// Remove @ 1461c8e40

void __thiscall
FMovieSceneBlendTypeField::Remove(FMovieSceneBlendTypeField *this,FMovieSceneBlendTypeField param_1)

{
  this->BlendTypeField = this->BlendTypeField & ~param_1.BlendTypeField;
  return;
}

// Remove @ 1461c8e50

void __thiscall
FMovieSceneBlendTypeField::Remove(FMovieSceneBlendTypeField *this,EMovieSceneBlendType param_1)

{
  this->BlendTypeField = this->BlendTypeField | param_1;
  return;
}

