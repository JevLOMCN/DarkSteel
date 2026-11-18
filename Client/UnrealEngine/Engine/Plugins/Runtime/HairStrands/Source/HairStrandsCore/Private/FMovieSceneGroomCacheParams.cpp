// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14e0cae80

UScriptStruct * __cdecl FMovieSceneGroomCacheParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams,(UObject *)pUVar1,
                         L"MovieSceneGroomCacheParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.OuterSingleton;
}

// FMovieSceneGroomCacheParams @ 14e0d0c30

FMovieSceneGroomCacheParams * __thiscall
FMovieSceneGroomCacheParams::FMovieSceneGroomCacheParams(FMovieSceneGroomCacheParams *this)

{
  this->bReverse = 0;
  this->FirstLoopStartFrameOffset = 0;
  this->StartFrameOffset = 0;
  (this->EndFrameOffset).Value = 0;
  (this->GroomCache).field0_0x0.DebugPtr = (UGroomCache *)0x0;
  this->PlayRate = 1.0;
  return this;
}

// GetSequenceLength @ 14e0eac90

float __thiscall FMovieSceneGroomCacheParams::GetSequenceLength(FMovieSceneGroomCacheParams *this)

{
  UGroomCache *pUVar1;
  float fVar2;
  
  pUVar1 = (this->GroomCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGroomCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e0eaca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x10))(&pUVar1->_padding_);
    return fVar2;
  }
  return 0.0;
}

