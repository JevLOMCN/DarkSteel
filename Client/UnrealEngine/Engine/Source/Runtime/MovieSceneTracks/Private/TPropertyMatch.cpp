// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// SupportsProperty @ 1466fee80

bool __cdecl UE::MovieScene::TPropertyMatch<signed_char>::SupportsProperty(FProperty *param_1)

{
  return (bool)(*(byte *)(param_1->_padding_ + 0x18) >> 1 & 1);
}

// SupportsProperty @ 1466feea0

bool __cdecl UE::MovieScene::TPropertyMatch<short>::SupportsProperty(FProperty *param_1)

{
  return SUB41((uint)*(undefined4 *)(param_1->_padding_ + 0x18) >> 0x1f,0);
}

// SupportsProperty @ 1466feec0

bool __cdecl UE::MovieScene::TPropertyMatch<int>::SupportsProperty(FProperty *param_1)

{
  return (bool)(*(byte *)(param_1->_padding_ + 0x18) >> 7);
}

// SupportsProperty @ 1466feee0

bool __cdecl UE::MovieScene::TPropertyMatch<double>::SupportsProperty(FProperty *param_1)

{
  return (bool)((byte)((ulonglong)*(undefined8 *)(param_1->_padding_ + 0x18) >> 0x20) & 1);
}

// SupportsProperty @ 1466fef00

bool __cdecl
UE::MovieScene::TPropertyMatch<UE::Math::TTransform<double>_>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466fef50

bool __cdecl
UE::MovieScene::TPropertyMatch<UE::Math::TVector2<double>_>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466fefa0

bool __cdecl
UE::MovieScene::TPropertyMatch<UE::Math::TVector4<double>_>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  bool bVar2;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    return false;
  }
  pUVar1 = TVariantStructure<UE::Math::TVector4<double>_>::Get();
  if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
    bVar2 = pUVar1 == (UScriptStruct *)0x0;
  }
  else {
    bVar2 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  if (!bVar2) {
    pUVar1 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar2 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar2 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// SupportsProperty @ 1466ff010

bool __cdecl
UE::MovieScene::TPropertyMatch<UE::Math::TVector<double>_>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  bool bVar2;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    return false;
  }
  pUVar1 = TVariantStructure<UE::Math::TVector<double>_>::Get();
  if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
    bVar2 = pUVar1 == (UScriptStruct *)0x0;
  }
  else {
    bVar2 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  if (!bVar2) {
    pUVar1 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar2 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar2 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// SupportsProperty @ 1466ff080

bool __cdecl UE::MovieScene::TPropertyMatch<FColor>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<FColor>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466ff0d0

bool __cdecl UE::MovieScene::TPropertyMatch<FLinearColor>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<FLinearColor>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466ff120

bool __cdecl UE::MovieScene::TPropertyMatch<FSlateColor>::SupportsProperty(FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FSlateColor::StaticStruct();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// SupportsProperty @ 1466ff170

bool __cdecl UE::MovieScene::TPropertyMatch<__int64>::SupportsProperty(FProperty *param_1)

{
  return (bool)((byte)(*(uint *)(param_1->_padding_ + 0x18) >> 0x16) & 1);
}

