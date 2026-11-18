// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// SupportsProperty @ 1466ff190

bool __cdecl
UE::MovieScene::TVariantPropertyMatch<UE::Math::TVector2<float>_>::SupportsProperty
          (FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TVariantStructure<UE::Math::TVector2<float>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466ff1e0

bool __cdecl
UE::MovieScene::TVariantPropertyMatch<UE::Math::TVector4<float>_>::SupportsProperty
          (FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TVariantStructure<UE::Math::TVector4<float>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466ff230

bool __cdecl
UE::MovieScene::TVariantPropertyMatch<UE::Math::TVector<float>_>::SupportsProperty
          (FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TVariantStructure<UE::Math::TVector<float>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

