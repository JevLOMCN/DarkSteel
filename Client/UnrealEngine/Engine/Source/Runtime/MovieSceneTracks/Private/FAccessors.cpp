// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ~FAccessors @ 146620790

void __thiscall
UE::MovieScene::FMovieSceneTracksComponentTypes::FAccessors::~FAccessors(FAccessors *this)

{
  void *pvVar1;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar2;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>_>
  FVar3;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>_>
  FVar4;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>_>
  FVar5;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
  FVar6;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>_>
  FVar7;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
  FVar8;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>_>
  FVar9;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
  FVar10;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
  FVar11;
  
  *(undefined4 *)&(this->Object).MetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Object).MetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Object).MetaData);
  pvVar1 = (void *)(this->Object)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->Object)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar2 = (this->ComponentTransform).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ComponentTransform)._padding_ =
       (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar3 = (this->Transform).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->Transform)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar4 = (this->DoubleVector).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->DoubleVector)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar5 = (this->FloatVector).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->FloatVector)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar6 = (this->Color).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
                )0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->Color)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar7 = (this->Double).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>_>
                )0x0) {
    FMemory::Free((void *)FVar7);
  }
  (this->Double)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar8 = (this->Float).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                )0x0) {
    FMemory::Free((void *)FVar8);
  }
  (this->Float)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar9 = (this->Integer).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>_>
                )0x0) {
    FMemory::Free((void *)FVar9);
  }
  (this->Integer)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar10 = (this->Enum).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
                 )0x0) {
    FMemory::Free((void *)FVar10);
  }
  (this->Enum)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar10 = (this->Byte).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
                 )0x0) {
    FMemory::Free((void *)FVar10);
  }
  (this->Byte)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar11 = (this->Bool).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
                 )0x0) {
    FMemory::Free((void *)FVar11);
  }
  (this->Bool)._padding_ = (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  return;
}

