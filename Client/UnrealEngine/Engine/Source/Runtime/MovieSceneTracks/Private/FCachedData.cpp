// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// FCachedData @ 14660ec70

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.Y;
  (this->Value).Data.X = (param_1->Value).Data.X;
  (this->Value).Data.Y = dVar2;
  dVar2 = (param_1->Value).Data.W;
  (this->Value).Data.Z = (param_1->Value).Data.Z;
  (this->Value).Data.W = dVar2;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  (this->Value).MetaData = (param_1->Value).MetaData;
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x50;
  this->field_0x50 = bVar3;
  this->field_0x50 = (bVar3 ^ param_1->field_0x50) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660ece0

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.Y;
  (this->Value).Data.X = (param_1->Value).Data.X;
  (this->Value).Data.Y = dVar2;
  dVar2 = (param_1->Value).Data.W;
  (this->Value).Data.Z = (param_1->Value).Data.Z;
  (this->Value).Data.W = dVar2;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  (this->Value).MetaData = (param_1->Value).MetaData;
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x50;
  this->field_0x50 = bVar3;
  this->field_0x50 = (bVar3 ^ param_1->field_0x50) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660ed50

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.T_Y;
  (this->Value).Data.T_X = (param_1->Value).Data.T_X;
  (this->Value).Data.T_Y = dVar2;
  dVar2 = (param_1->Value).Data.R_X;
  (this->Value).Data.T_Z = (param_1->Value).Data.T_Z;
  (this->Value).Data.R_X = dVar2;
  dVar2 = (param_1->Value).Data.R_Z;
  (this->Value).Data.R_Y = (param_1->Value).Data.R_Y;
  (this->Value).Data.R_Z = dVar2;
  dVar2 = (param_1->Value).Data.S_Y;
  (this->Value).Data.S_X = (param_1->Value).Data.S_X;
  (this->Value).Data.S_Y = dVar2;
  (this->Value).Data.S_Z = (param_1->Value).Data.S_Z;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  (this->Value).MetaData = (param_1->Value).MetaData;
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x78;
  this->field_0x78 = bVar3;
  this->field_0x78 = (bVar3 ^ param_1->field_0x78) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660ede0

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.G;
  (this->Value).Data.R = (param_1->Value).Data.R;
  (this->Value).Data.G = dVar2;
  dVar2 = (param_1->Value).Data.A;
  (this->Value).Data.B = (param_1->Value).Data.B;
  (this->Value).Data.A = dVar2;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  (this->Value).MetaData = (param_1->Value).MetaData;
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x50;
  this->field_0x50 = bVar3;
  this->field_0x50 = (bVar3 ^ param_1->field_0x50) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660ee50

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.Yaw;
  (this->Value).Data.Pitch = (param_1->Value).Data.Pitch;
  (this->Value).Data.Yaw = dVar2;
  (this->Value).Data.Roll = (param_1->Value).Data.Roll;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x40;
  this->field_0x40 = bVar3;
  this->field_0x40 = (bVar3 ^ param_1->field_0x40) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660eec0

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.T_Y;
  (this->Value).Data.T_X = (param_1->Value).Data.T_X;
  (this->Value).Data.T_Y = dVar2;
  dVar2 = (param_1->Value).Data.R_X;
  (this->Value).Data.T_Z = (param_1->Value).Data.T_Z;
  (this->Value).Data.R_X = dVar2;
  dVar2 = (param_1->Value).Data.R_Z;
  (this->Value).Data.R_Y = (param_1->Value).Data.R_Y;
  (this->Value).Data.R_Z = dVar2;
  dVar2 = (param_1->Value).Data.S_Y;
  (this->Value).Data.S_X = (param_1->Value).Data.S_X;
  (this->Value).Data.S_Y = dVar2;
  (this->Value).Data.S_Z = (param_1->Value).Data.S_Z;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x70;
  this->field_0x70 = bVar3;
  this->field_0x70 = (bVar3 ^ param_1->field_0x70) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660ef40

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.T_Y;
  (this->Value).Data.T_X = (param_1->Value).Data.T_X;
  (this->Value).Data.T_Y = dVar2;
  dVar2 = (param_1->Value).Data.R_X;
  (this->Value).Data.T_Z = (param_1->Value).Data.T_Z;
  (this->Value).Data.R_X = dVar2;
  dVar2 = (param_1->Value).Data.R_Z;
  (this->Value).Data.R_Y = (param_1->Value).Data.R_Y;
  (this->Value).Data.R_Z = dVar2;
  dVar2 = (param_1->Value).Data.S_Y;
  (this->Value).Data.S_X = (param_1->Value).Data.S_X;
  (this->Value).Data.S_Y = dVar2;
  (this->Value).Data.S_Z = (param_1->Value).Data.S_Z;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x70;
  this->field_0x70 = bVar3;
  this->field_0x70 = (bVar3 ^ param_1->field_0x70) & 2 ^ bVar3;
  return this;
}

// FCachedData @ 14660efc0

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  (this->Value).Data.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).Data.Data.AllocatorInstance.Data = (param_1->Value).Data.Data.AllocatorInstance.Data
  ;
  (param_1->Value).Data.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).Data.Data.ArrayNum = (param_1->Value).Data.Data.ArrayNum;
  (this->Value).Data.Data.ArrayMax = (param_1->Value).Data.Data.ArrayMax;
  (param_1->Value).Data.Data.ArrayNum = 0;
  (param_1->Value).Data.Data.ArrayMax = 0;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar2 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x38;
  this->field_0x38 = bVar2;
  this->field_0x38 = (bVar2 ^ param_1->field_0x38) & 2 ^ bVar2;
  return this;
}

// FCachedData @ 14660f040

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  FText::FText(&(this->Value).Data,&(param_1->Value).Data);
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar2 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x38;
  this->field_0x38 = bVar2;
  this->field_0x38 = (bVar2 ^ param_1->field_0x38) & 2 ^ bVar2;
  return this;
}

// FCachedData @ 14660f0c0

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.T_Y;
  (this->Value).Data.T_X = (param_1->Value).Data.T_X;
  (this->Value).Data.T_Y = dVar2;
  dVar2 = (param_1->Value).Data.R_X;
  (this->Value).Data.T_Z = (param_1->Value).Data.T_Z;
  (this->Value).Data.R_X = dVar2;
  dVar2 = (param_1->Value).Data.R_Z;
  (this->Value).Data.R_Y = (param_1->Value).Data.R_Y;
  (this->Value).Data.R_Z = dVar2;
  dVar2 = (param_1->Value).Data.S_Y;
  (this->Value).Data.S_X = (param_1->Value).Data.S_X;
  (this->Value).Data.S_Y = dVar2;
  (this->Value).Data.S_Z = (param_1->Value).Data.S_Z;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x70;
  this->field_0x70 = bVar3;
  this->field_0x70 = (bVar3 ^ param_1->field_0x70) & 2 ^ bVar3;
  return this;
}

