// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 229

// ~TSparseArray<unsigned_char,FDefaultSparseArrayAllocator> @ 14661cfe0

void __thiscall
TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>::
~TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>
          (TSparseArray<unsigned_char,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<double,FDefaultSparseArrayAllocator> @ 14661d080

void __thiscall
TSparseArray<double,FDefaultSparseArrayAllocator>::
~TSparseArray<double,FDefaultSparseArrayAllocator>
          (TSparseArray<double,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::Math::TRotator<double>,FDefaultSparseArrayAllocator> @ 14661d110

void __thiscall
TSparseArray<UE::Math::TRotator<double>,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::Math::TRotator<double>,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::Math::TRotator<double>,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d1b0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d250

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d2f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d390

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d430

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d4d0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d570

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d610

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d6b0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d750

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d7f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d890

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d930

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661d9d0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661da70

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661db10

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661dbb0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661dc50

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661dcf0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14661dd90

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FDoubleIntermediateVector,FDefaultSparseArrayAllocator> @ 14661de30

void __thiscall
TSparseArray<UE::MovieScene::FDoubleIntermediateVector,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FDoubleIntermediateVector,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FDoubleIntermediateVector,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FSystemInterrogator::FExtraMetaData,FDefaultSparseArrayAllocator> @ 14661ded0

void __thiscall
TSparseArray<UE::MovieScene::FSystemInterrogator::FExtraMetaData,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FSystemInterrogator::FExtraMetaData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FSystemInterrogator::FExtraMetaData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FFloatIntermediateVector,FDefaultSparseArrayAllocator> @ 14661df70

void __thiscall
TSparseArray<UE::MovieScene::FFloatIntermediateVector,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FFloatIntermediateVector,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FFloatIntermediateVector,FDefaultSparseArrayAllocator> *this
          )

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FIntermediate3DTransform,FDefaultSparseArrayAllocator> @ 14661e010

void __thiscall
TSparseArray<UE::MovieScene::FIntermediate3DTransform,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FIntermediate3DTransform,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FIntermediate3DTransform,FDefaultSparseArrayAllocator> *this
          )

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FIntermediateColor,FDefaultSparseArrayAllocator> @ 14661e0b0

void __thiscall
TSparseArray<UE::MovieScene::FIntermediateColor,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FIntermediateColor,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FIntermediateColor,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::FObjectComponent,FDefaultSparseArrayAllocator> @ 14661e150

void __thiscall
TSparseArray<UE::MovieScene::FObjectComponent,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::MovieScene::FObjectComponent,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::FObjectComponent,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator> @ 14661e1f0

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e290

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e330

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::FMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e3d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e470

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e510

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e5b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e650

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e6f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e790

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e830

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e8d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661e970

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661ea10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661eab0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<float,double,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661eb50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661ebf0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661ec90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661ed30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661edd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661ee70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661ef10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661efb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f050

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FBoolPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f0f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f190

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FObjectPropertyTraits>::FKeyType,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f230

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f2d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f370

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f410

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f4b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x138,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f550

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14661f5f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x138,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<FString,FDefaultSparseArrayAllocator> @ 14661f690

void __thiscall
TSparseArray<FString,FDefaultSparseArrayAllocator>::
~TSparseArray<FString,FDefaultSparseArrayAllocator>
          (TSparseArray<FString,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<FText,FDefaultSparseArrayAllocator> @ 14661f730

void __thiscall
TSparseArray<FText,FDefaultSparseArrayAllocator>::~TSparseArray<FText,FDefaultSparseArrayAllocator>
          (TSparseArray<FText,FDefaultSparseArrayAllocator> *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<__int64,FDefaultSparseArrayAllocator> @ 14661f7d0

void __thiscall
TSparseArray<__int64,FDefaultSparseArrayAllocator>::
~TSparseArray<__int64,FDefaultSparseArrayAllocator>
          (TSparseArray<__int64,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<bool,FDefaultSparseArrayAllocator> @ 14661f860

void __thiscall
TSparseArray<bool,FDefaultSparseArrayAllocator>::~TSparseArray<bool,FDefaultSparseArrayAllocator>
          (TSparseArray<bool,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 146621ff0

TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x78,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    uVar9 = 1;
    pbVar8 = (byte *)(*(longlong *)this + 0x60);
    lVar12 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if (((iVar11 < 0) || (*(int *)&param_1->field_0x28 <= iVar11)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar7 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)(pbVar8 + -0x60) = *(undefined4 *)(pbVar8 + lVar12 + -0x60);
        *(undefined4 *)(pbVar8 + -0x5c) = *(undefined4 *)(pbVar8 + lVar12 + -0x5c);
      }
      else {
        *(undefined8 *)(pbVar8 + -0x60) = *(undefined8 *)(pbVar8 + lVar12 + -0x60);
        bVar2 = pbVar8[lVar12];
        *pbVar8 = bVar2;
        if ((1 < bVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[bVar2])(pbVar8 + -0x58,pbVar8 + lVar12 + -0x58);
        *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(pbVar8 + lVar12 + 8);
        *(undefined4 *)(pbVar8 + 0x10) = *(undefined4 *)(pbVar8 + lVar12 + 0x10);
        *(undefined4 *)(pbVar8 + 0x14) = *(undefined4 *)(pbVar8 + lVar12 + 0x14);
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pbVar8 = pbVar8 + 0x78;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// Add @ 146634300

int __thiscall
TSparseArray<UE::MovieScene::FFloatIntermediateVector,FDefaultSparseArrayAllocator>::Add
          (TSparseArray<UE::MovieScene::FFloatIntermediateVector,FDefaultSparseArrayAllocator> *this
          ,FFloatIntermediateVector *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&this->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                       (int *)&this->field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,false);
  }
  else {
    iVar4 = *(int *)&this->field_0x30;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)&this->field_0x34 + -1;
    *(int *)&this->field_0x30 = iVar2;
    *(int *)&this->field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)this,&local_18,iVar4);
  if (local_18.Pointer != (double *)0x0) {
    dVar3 = param_1->Y;
    *(double *)local_18.Pointer = param_1->X;
    *(double *)((longlong)local_18.Pointer + 8) = dVar3;
    dVar3 = param_1->W;
    *(double *)((longlong)local_18.Pointer + 0x10) = param_1->Z;
    *(double *)((longlong)local_18.Pointer + 0x18) = dVar3;
  }
  return local_18.Index;
}

// Add @ 1466343d0

int __thiscall
TSparseArray<UE::MovieScene::FIntermediate3DTransform,FDefaultSparseArrayAllocator>::Add
          (TSparseArray<UE::MovieScene::FIntermediate3DTransform,FDefaultSparseArrayAllocator> *this
          ,FIntermediate3DTransform *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&this->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                       (int *)&this->field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,false);
  }
  else {
    iVar4 = *(int *)&this->field_0x30;
    iVar1 = *(int *)&this->field_0x34 + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0x48);
    *(int *)&this->field_0x30 = iVar2;
    *(int *)&this->field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)this,&local_18,iVar4);
  if (local_18.Pointer != (double *)0x0) {
    dVar3 = param_1->T_Y;
    *(double *)local_18.Pointer = param_1->T_X;
    *(double *)((longlong)local_18.Pointer + 8) = dVar3;
    dVar3 = param_1->R_X;
    *(double *)((longlong)local_18.Pointer + 0x10) = param_1->T_Z;
    *(double *)((longlong)local_18.Pointer + 0x18) = dVar3;
    dVar3 = param_1->R_Z;
    *(double *)((longlong)local_18.Pointer + 0x20) = param_1->R_Y;
    *(double *)((longlong)local_18.Pointer + 0x28) = dVar3;
    dVar3 = param_1->S_Y;
    *(double *)((longlong)local_18.Pointer + 0x30) = param_1->S_X;
    *(double *)((longlong)local_18.Pointer + 0x38) = dVar3;
    *(double *)((longlong)local_18.Pointer + 0x40) = param_1->S_Z;
  }
  return local_18.Index;
}

// Add @ 1466344b0

int __thiscall
TSparseArray<UE::MovieScene::FIntermediateColor,FDefaultSparseArrayAllocator>::Add
          (TSparseArray<UE::MovieScene::FIntermediateColor,FDefaultSparseArrayAllocator> *this,
          FIntermediateColor *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&this->field_0x34 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                       (int *)&this->field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,false);
  }
  else {
    iVar4 = *(int *)&this->field_0x30;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)&this->field_0x34 + -1;
    *(int *)&this->field_0x30 = iVar2;
    *(int *)&this->field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)this,&local_18,iVar4);
  if (local_18.Pointer != (double *)0x0) {
    dVar3 = param_1->G;
    *(double *)local_18.Pointer = param_1->R;
    *(double *)((longlong)local_18.Pointer + 8) = dVar3;
    dVar3 = param_1->A;
    *(double *)((longlong)local_18.Pointer + 0x10) = param_1->B;
    *(double *)((longlong)local_18.Pointer + 0x18) = dVar3;
  }
  return local_18.Index;
}

// DestroyElements @ 146657680

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x40 + 0x18 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x40;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1466577b0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x58 + 0x30 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x58;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1466578e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x58 + 0x30 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x58;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146657a10

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x80 + 0x58 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x80;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146657b40

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x58 + 0x30 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x58;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146657c70

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x40 + 0x18 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x40;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146657da0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x38 + 0x18 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146657ed0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x38 + 0x18 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658000

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    lVar7 = *(longlong *)this + (uVar6 * 9 + 5) * 8;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x48;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658130

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x50 + 0x30 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658260

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x50 + 0x30 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658390

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x78 + 0x58 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x78;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1466584c0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x78 + 0x58 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x78;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1466585f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x50 + 0x30 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658720

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TPreAnimatedPropertyValue<FString> *this_00;
  undefined1 *puVar7;
  uint uVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (TPreAnimatedPropertyValue<FString> *)(uVar6 * 0x40 + 0x10 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar7 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar7 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          UE::MovieScene::TPreAnimatedPropertyValue<FString>::~TPreAnimatedPropertyValue<FString>
                    (this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      this_00 = (TPreAnimatedPropertyValue<FString> *)&this_00[1].Binding._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 146658800

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TPreAnimatedPropertyValue<FText> *this_00;
  undefined1 *puVar7;
  uint uVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (TPreAnimatedPropertyValue<FText> *)(uVar6 * 0x40 + 0x10 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar7 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar7 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          UE::MovieScene::TPreAnimatedPropertyValue<FText>::~TPreAnimatedPropertyValue<FText>
                    (this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      this_00 = (TPreAnimatedPropertyValue<FText> *)&this_00[1].Binding._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1466588e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x40 + 0x18 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x40;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658a10

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x78 + 0x58 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x78;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658b40

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar6 * 0x38 + 0x18 + *(longlong *)this;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658c70

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x50 + 0x20 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146658da0

void __thiscall
TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146658e80

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146658f70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneAudioTriggerChannel *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneAudioTriggerChannel *)(uVar6 * 0x120 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneAudioTriggerChannel::~FMovieSceneAudioTriggerChannel(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneAudioTriggerChannel *)&this_00[1]._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 146659050

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneBoolChannel *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneBoolChannel *)(uVar6 * 0x130 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneBoolChannel::~FMovieSceneBoolChannel(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneBoolChannel *)&this_00[1]._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 146659130

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneFloatChannel *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneFloatChannel *)(uVar6 * 0x138 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneFloatChannel *)&this_00[1]._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 146659210

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneIntegerChannel *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneIntegerChannel *)(uVar6 * 0x130 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneIntegerChannel *)&this_00[1]._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1466592f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FMovieSceneStringChannel *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FMovieSceneStringChannel *)(uVar6 * 0x138 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FMovieSceneStringChannel::~FMovieSceneStringChannel(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FMovieSceneStringChannel *)&this_00[1]._padding_;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1466593d0

void __thiscall
TSparseArray<FString,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<FString,FDefaultSparseArrayAllocator> *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1466594b0

void __thiscall
TSparseArray<FText,FDefaultSparseArrayAllocator>::DestroyElements
          (TSparseArray<FText,FDefaultSparseArrayAllocator> *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    plVar10 = (longlong *)(uVar6 * 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((longlong *)*plVar10 != (longlong *)0x0)) {
          (**(code **)(*(longlong *)*plVar10 + 0x10))();
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      plVar10 = plVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 146667d20

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1466d50d0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5110

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<88,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<88,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5150

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<88,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<88,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5190

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x80 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x80 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x20;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1466d5320

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<88,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<88,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5360

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d53a0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d53e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5420

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5460

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d54a0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d54e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<120,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<120,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5520

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<120,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<120,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5560

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d55a0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d55e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5620

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d5660

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<120,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<120,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d56a0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// RemoveAt @ 1466d56e0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  DestroyElements(this,param_1,param_2);
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this,param_1,param_2);
  return;
}

// Emplace<> @ 14673f320

int __thiscall
TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
::Emplace<>(TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
            *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&this->field_0x34 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x188,8,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                       (int *)&this->field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,false);
  }
  else {
    iVar3 = *(int *)&this->field_0x30;
    iVar1 = *(int *)&this->field_0x34 + -1;
    iVar2 = *(int *)((longlong)iVar3 * 0x188 + 4 + *(longlong *)this);
    *(int *)&this->field_0x30 = iVar2;
    *(int *)&this->field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x188 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<392,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<392,8,FDefaultSparseArrayAllocator> *)this,&local_18,iVar3);
  if (local_18.Pointer != (void *)0x0) {
    memset(local_18.Pointer,0,0x188);
    *(byte *)((longlong)local_18.Pointer + 0x100) =
         *(byte *)((longlong)local_18.Pointer + 0x100) & 0xfe;
    *(byte *)((longlong)local_18.Pointer + 0x100) =
         *(byte *)((longlong)local_18.Pointer + 0x100) | 2;
    *(undefined4 *)((longlong)local_18.Pointer + 0x13c) = 0x180;
    *(undefined4 *)((longlong)local_18.Pointer + 0x138) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x170) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x178) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x180) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x174) = 0x180;
  }
  return local_18.Index;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>::FCachedData,FDefaultSparseArrayAllocator> @ 1467680f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator> @ 146768190

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 146768230

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 1467682d0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 146768370

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 146768410

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 1467684b0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 146768550

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 1467685f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator> @ 146768690

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator> @ 146768730

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::FOutput,FDefaultSparseArrayAllocator> @ 1467687d0

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768870

void __thiscall
TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768910

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1467689b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768a50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xfc0,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768af0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768b90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768c30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768cd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768d70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x168,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768e10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768eb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentMaterialKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768f50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FCustomPrimitiveDataEntryTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146768ff0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FCustomPrimitiveDataEntryTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FCustomPrimitiveDataEntryTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FCustomPrimitiveDataEntryTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedConstraintTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146769090

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedConstraintTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedConstraintTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedConstraintTraits::FKeyType,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146769130

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1467691d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 146787de0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x50 + 0x38 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146787ed0

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  for (; param_1 < iVar1; param_1 = param_1 + 1) {
  }
  return;
}

// DestroyElements @ 146787ef0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  TTuple<FPostProcessSettings,float> *pTVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    plVar11 = (longlong *)(uVar7 * 0xfc0 + 0xf90 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if ((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) {
          pTVar5 = (TTuple<FPostProcessSettings,float> *)*plVar11;
          if ((TTuple<FPostProcessSettings,float> *)*plVar11 ==
              (TTuple<FPostProcessSettings,float> *)0x0) {
            pTVar5 = (TTuple<FPostProcessSettings,float> *)(plVar11 + -0x1e0);
          }
          DestructItems<TTuple<FPostProcessSettings,float>,int>(pTVar5,(int)plVar11[2]);
          if ((void *)*plVar11 != (void *)0x0) {
            FMemory::Free((void *)*plVar11);
          }
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 0x1f8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 146788000

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FAudioComponentInputEvaluationData *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FAudioComponentInputEvaluationData *)(uVar6 * 0x168 + 0x10 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          UE::MovieScene::FAudioComponentInputEvaluationData::~FAudioComponentInputEvaluationData
                    (this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FAudioComponentInputEvaluationData *)&this_00[1].Inputs_Float.field_0x18;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1467880e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1467881d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(uVar6 * 0x60 + 0x48 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar8 + 1) = 0;
          if ((void *)*puVar8 != (void *)0x0) {
            FMemory::Free((void *)*puVar8);
          }
          TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar8 + -8));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// RemoveAt @ 1467b8880

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x50 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x50) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x14;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1467b8a10

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FCustomPrimitiveDataEntryTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x18);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x18) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 6;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1467b8b90

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x40 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x40 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x10;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EmplaceAt<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_> @ 1467e0cd0

int __thiscall
TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
::
EmplaceAt<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
          (TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
           *this,int param_1,
          TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSparseArrayAllocationInfo *pFVar5;
  void *pvVar6;
  undefined1 *puVar7;
  FSparseArrayAllocationInfo local_18;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x28)) {
    puVar7 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x10;
    }
    if ((*(uint *)(puVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      pvVar6 = (void *)((longlong)param_1 * 0x60 + *(longlong *)this);
      bVar1 = *(byte *)((longlong)pvVar6 + 0x10);
      if (2 < (ulonglong)bVar1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pvVar6);
      goto LAB_1467e0d99;
    }
  }
  pFVar5 = TSparseArrayBase<96,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<96,8,FDefaultSparseArrayAllocator> *)this,&local_18,param_1)
  ;
  param_1 = pFVar5->Index;
  pvVar6 = pFVar5->Pointer;
LAB_1467e0d99:
  if (pvVar6 != (void *)0x0) {
    bVar1 = param_2->TypeIndex;
    *(byte *)((longlong)pvVar6 + 0x10) = bVar1;
    if (2 < bVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar1])(pvVar6,param_2);
    *(undefined4 *)((longlong)pvVar6 + 0x44) = 0x20;
    *(undefined8 *)((longlong)pvVar6 + 0x18) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x20) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x28) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x30) = 0;
    *(undefined1 *)((longlong)pvVar6 + 0x38) = 0;
    *(undefined4 *)((longlong)pvVar6 + 0x40) = 0;
    *(undefined1 *)((longlong)pvVar6 + 0x58) = 0;
    *(undefined2 *)((longlong)pvVar6 + 0x5c) = 0;
    *(undefined4 *)((longlong)pvVar6 + 0x48) = 0xffffffff;
    *(undefined2 *)((longlong)pvVar6 + 0x4c) = 0xffff;
    *(byte *)((longlong)pvVar6 + 0x5e) = *(byte *)((longlong)pvVar6 + 0x5e) & 0xe2 | 2;
  }
  return param_1;
}

// ~TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> @ 14680d0f0

void __thiscall
TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>::
~TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d190

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d230

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d2d0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d370

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedDataLayerStorageTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d410

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedDataLayerStorageTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedDataLayerStorageTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedDataLayerStorageTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d4b0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d550

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14680d5f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator> @ 14680d690

void __thiscall
TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
::
~TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
          (TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator> @ 14680d730

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680d7d0

void __thiscall
TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680d870

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680d910

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680d9b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680da50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680daf0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680db90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680dc30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680dcd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680dd70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x420,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680de10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680deb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680df50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680dff0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMaterialParameterKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e090

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e130

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e1d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e270

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e310

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e3b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e450

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e4f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14680e590

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 146824b60

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x30 + 0x18 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146824c50

void __thiscall
TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar7 = uVar6 * 0x60 + *(longlong *)this;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x10);
          if ((2 < (ulonglong)bVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(lVar7);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar7 = lVar7 + 0x60;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146824d80

void __thiscall
TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  short *psVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    psVar7 = (short *)(uVar6 * 0x40 + 0x38 + *(longlong *)this);
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
             (UE::MovieScene::GMaterialParameterEntityLifetimeTracking != false)) &&
            ((psVar7[-2] != -1 || (*psVar7 != -1)))) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8875111272174059450>,true,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMaterialParameterSystem.cpp"
                               ,0x46,"!OutputEntityID.IsValid() && !BlendChannelID.IsValid()"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      psVar7 = psVar7 + 0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146824ec0

void __thiscall
TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146824fa0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x30 + 0x18 + *(longlong *)this);
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          DestructItems<FString,int>((FString *)*puVar9,*(int *)(puVar9 + 1));
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)puVar9[-1]);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 6;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1468250a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FBoundObjectActiveSkeletalAnimations *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FBoundObjectActiveSkeletalAnimations *)(uVar6 * 0x420 + 0x10 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          UE::MovieScene::FBoundObjectActiveSkeletalAnimations::
          ~FBoundObjectActiveSkeletalAnimations(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FBoundObjectActiveSkeletalAnimations *)
                (this_00[1].Animations.AllocatorInstance.InlineData + 0x20);
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 146825180

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          DestructItems<FMovieSceneEventTriggerData,int>
                    ((FMovieSceneEventTriggerData *)*puVar10,*(int *)(puVar10 + 1));
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 146825270

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(uVar6 * 0x60 + 0x48 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar8 + 1) = 0;
          if ((void *)*puVar8 != (void *)0x0) {
            FMemory::Free((void *)*puVar8);
          }
          TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar8 + -8));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 146825370

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 9 + 6) * 8);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 1468278d0

void __thiscall
TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>::Empty
          (TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *this,int param_1
          )

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146827970

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_*,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<UObject_*,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146827a10

void __thiscall
TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 14685e7f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x28);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x28) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 10;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14685e970

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x20 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x20 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 8;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14685eaf0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionScalarTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x20 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x20 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 8;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14685ec70

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FMaterialParameterCollectionVectorTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x2c + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x2c + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0xb;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14685edf0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x18);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x18) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 6;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14685ef70

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x30 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x30) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0xc;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 14685f100

void __thiscall
TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x60 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x60 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x18;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> @ 14689fac0

void __thiscall
TSparseArray<unsigned_short,FDefaultSparseArrayAllocator>::
~TSparseArray<unsigned_short,FDefaultSparseArrayAllocator>
          (TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14689fb60

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14689fc00

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::FCachedData,FDefaultSparseArrayAllocator> @ 14689fca0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14689fd40

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_char,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_char,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_char,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14689fde0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14689fe80

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14689ffc0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_> @ 1468a0060

void __thiscall
TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::
~TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          (TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x188);
  *(undefined4 *)&this->field_0x188 = 0;
  if (*(int *)&this->field_0x18c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
              (0x18,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                        this,0,(int *)&this->field_0x18c);
  }
  *(undefined4 *)&this->field_0x1a8 = 0xffffffff;
  *(undefined4 *)&this->field_0x1ac = 0;
  *(undefined4 *)&this->field_0x1a0 = 0;
  if ((*(int *)&this->field_0x1a4 < 0) || (0x20 < *(int *)&this->field_0x1a4)) {
    *(undefined4 *)&this->field_0x1a4 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &this->field_0x190,0);
  }
  if (*(void **)&this->field_0x198 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x198);
  }
  if (*(void **)&this->field_0x180 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x180);
  }
  return;
}

// DestroyElements @ 1468afd90

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(*(longlong *)this + uVar6 * 0x28);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[2] != (void *)0x0) {
            FMemory::Free((void *)puVar10[2]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1468afe80

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FHierarchicalBlendTarget *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FHierarchicalBlendTarget *)(*(longlong *)this + (uVar6 * 5 + 1) * 8);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FHierarchicalBlendTarget *)(this_00[2].Data + 8);
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 1468aff60

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x30 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 0x28))) {
        if ((*(int *)((longlong)this + 0x28) <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar9 = (longlong)this + 0x10;
        if (*(longlong *)((longlong)this + 0x20) != 0) {
          lVar9 = *(longlong *)((longlong)this + 0x20);
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[2] != (void *)0x0) {
            FMemory::Free((void *)puVar10[2]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1468b0050

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1468b0130

void __thiscall
TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::DestroyElements(TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  int iVar6;
  ulonglong uVar7;
  FHierarchicalBlendTarget *this_00;
  uint uVar8;
  undefined1 *puVar9;
  
  uVar7 = (ulonglong)param_1;
  pTVar5 = this;
  if (*(TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        **)&this->field_0x180 !=
      (TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    pTVar5 = *(TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
               **)&this->field_0x180;
  }
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FHierarchicalBlendTarget *)(&pTVar5->field_0x0 + uVar7 * 0x18);
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x1a0)) {
        if ((*(int *)&this->field_0x1a0 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x190;
        if (*(undefined1 **)&this->field_0x198 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x198;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(this_00);
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      this_00 = (FHierarchicalBlendTarget *)(this_00[1].Data + 8);
    } while ((int)(iVar6 + 1U) < param_1 + param_2);
  }
  return;
}

// RemoveAt @ 1468c9160

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x28);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x28) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 10;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1468c92f0

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0x28);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0x28) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 10;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAt @ 1468c9470

void __thiscall
TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::FCachedData,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)this;
    uVar10 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(lVar1 + uVar10 * 0xc);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)(lVar1 + (longlong)*(int *)&this->field_0x30 * 0xc) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 3;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

