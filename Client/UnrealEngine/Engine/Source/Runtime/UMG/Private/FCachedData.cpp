// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// FCachedData @ 1468fe160

FCachedData * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
::FCachedData::FCachedData(FCachedData *this,FCachedData *param_1)

{
  undefined8 uVar1;
  double dVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  *(undefined8 *)&this->Key = *(undefined8 *)&param_1->Key;
  *(undefined8 *)&(this->Key).field_0x8 = uVar1;
  dVar2 = (param_1->Value).Data.TranslationY;
  (this->Value).Data.TranslationX = (param_1->Value).Data.TranslationX;
  (this->Value).Data.TranslationY = dVar2;
  dVar2 = (param_1->Value).Data.ScaleX;
  (this->Value).Data.Rotation = (param_1->Value).Data.Rotation;
  (this->Value).Data.ScaleX = dVar2;
  dVar2 = (param_1->Value).Data.ShearX;
  (this->Value).Data.ScaleY = (param_1->Value).Data.ScaleY;
  (this->Value).Data.ShearX = dVar2;
  (this->Value).Data.ShearY = (param_1->Value).Data.ShearY;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            (&(this->Value).Binding,&(param_1->Value).Binding);
  bVar3 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x60;
  this->field_0x60 = bVar3;
  this->field_0x60 = (bVar3 ^ param_1->field_0x60) & 2 ^ bVar3;
  return this;
}

