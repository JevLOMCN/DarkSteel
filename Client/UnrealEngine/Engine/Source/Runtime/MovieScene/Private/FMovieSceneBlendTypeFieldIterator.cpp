// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// operator* @ 146187af0

EMovieSceneBlendType __thiscall
FMovieSceneBlendTypeFieldIterator::operator*(FMovieSceneBlendTypeFieldIterator *this)

{
  return '\x01' << (this->Offset & 0x1fU);
}

// IterateToNext @ 1461bc360

void __thiscall
FMovieSceneBlendTypeFieldIterator::IterateToNext(FMovieSceneBlendTypeFieldIterator *this)

{
  schar *psVar1;
  UPackage *pUVar2;
  
  while( true ) {
    psVar1 = &this->Offset;
    *psVar1 = *psVar1 + '\x01';
    if (*psVar1 < '\0') {
      return;
    }
    if (Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton == (UEnum *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MovieScene();
      Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType,(UObject *)pUVar2,
                         L"EMovieSceneBlendType");
    }
    if ((char)((char)((Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton)->Names).
                     NumValues + -2) < this->Offset) break;
    if (((this->Field).BlendTypeField & '\x01' << (this->Offset & 0x1fU)) != Invalid) {
      return;
    }
  }
  return;
}

