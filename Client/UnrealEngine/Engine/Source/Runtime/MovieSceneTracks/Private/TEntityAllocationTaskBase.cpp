// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 93

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_> @ 14660ce00

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_> @ 14660cf80

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_> @ 14660d040

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 14660d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 14660d1b0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_> @ 14660d270

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_> @ 14660d320

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_> @ 14660d3d0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_> @ 14660d560

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_> @ 14660d620

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_> @ 14660d6e0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 14660d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_> @ 14660d910

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_> @ 14660d9d0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_> @ 14660da90

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_> @ 14660db50

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 1466e8700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e88b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e8a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e8c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x1a,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x1c,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x1e,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x20,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e8ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e9080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e9230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e93d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e9570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e9730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e98e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e9aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
            *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 1466e9c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
            *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 1466e9de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466e9fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ea150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ea2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ea4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1c,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ea680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1c,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ea860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1c,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x20,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x24,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x28,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x2c,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x30,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eaa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1c,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eae20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eafc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eb160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eb320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eb4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466eb690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
            *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 1466eb830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
            *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 1466eb9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1a,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ebba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ebd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ebee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
      *this,TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits> *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>::Run(UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ec090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits> *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1466ec230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
      *this,TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits> *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>::Run(UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_> @ 14675dfb0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_> @ 14675e060

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x2,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x4,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x6,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x8,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0xa,
                      &(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_> @ 14675e150

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x2,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x4,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x6,
                      &(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_> @ 14675e230

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&param_2->field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x48;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x40 =
       *(undefined8 *)&param_2->field_0x40;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x48 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x50 =
       *(undefined8 *)&param_2->field_0x50;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x2,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x4,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
            ((TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
              *)&(this->ComponentFilter).Components.field_0x6,&(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_> @ 14675e330

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x2,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x4,
                      &(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 1467be020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
      *this,FApplyCustomPrimitiveDataParameters *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  FEntityManager *pFVar5;
  code *pcVar6;
  EEntityThreadingModel EVar7;
  bool bVar8;
  FComponentHeader *pFVar9;
  FEntityAllocation *pFVar10;
  FComponentHeader *pFVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FString local_d8;
  FEntityAllocationProxy local_c8;
  TRead<double> local_b8;
  TRead<FName> local_b0;
  FEntityAllocationIteratorProxy local_a8;
  FEntityAllocationIterator local_98;
  FEntityAllocationProxy local_78;
  FEntityAllocationIterator local_68;
  FEntityAllocationProxy local_48;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar5 = this->EntityManager;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar5,&local_d8);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar5,&local_d8);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar5,&local_d8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::FApplyCustomPrimitiveDataParameters&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  EVar7 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_a8,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_98,local_a8.Manager,local_a8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_a8.Manager);
  bVar8 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
  if (bVar8) {
    do {
      pFVar14 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_98,&local_78);
      pFVar9 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_78);
      pFVar12 = pFVar14;
      if (EVar7 == NoThreading) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar9->Size + 4) = LockFree;
        pFVar12 = pFVar9;
      }
      uVar1 = *(ushort *)&(this->ComponentFilter).Components.field_0x4;
      local_c8.Manager = local_78.Manager;
      local_c8.AllocationIndex = local_78.AllocationIndex;
      local_c8._12_4_ = local_78._12_4_;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar9 = pFVar10->ComponentHeaders;
      pFVar13 = pFVar9 + pFVar10->NumComponents;
      for (; pFVar9 != pFVar13; pFVar9 = pFVar9 + 1) {
        if ((pFVar9->ComponentType).Value == uVar1) goto LAB_1467be1bd;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar9 = pFVar14;
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_1467be1bd:
      EVar2 = pFVar10->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar9->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar9->ScheduledAccessCount).field_0x0 + 1;
      UNLOCK();
      local_b8 = (TRead<double>)pFVar9->Components;
      uVar1 = *(ushort *)&(this->ComponentFilter).Components.field_0x2;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar13 = pFVar10->ComponentHeaders;
      pFVar11 = pFVar13 + pFVar10->NumComponents;
      for (; pFVar13 != pFVar11; pFVar13 = pFVar13 + 1) {
        if ((pFVar13->ComponentType).Value == uVar1) goto LAB_1467be23d;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar13 = pFVar14;
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_1467be23d:
      EVar3 = pFVar10->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar13->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar13->ScheduledAccessCount).field_0x0 + 1;
      UNLOCK();
      local_b0 = (TRead<FName>)pFVar13->Components;
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar14 = pFVar10->ComponentHeaders;
      pFVar11 = pFVar14 + pFVar10->NumComponents;
      for (; pFVar14 != pFVar11; pFVar14 = pFVar14 + 1) {
        if ((pFVar14->ComponentType).Value == uVar1) goto LAB_1467be2bb;
      }
      pFVar14 = (FComponentHeader *)0x0;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_1467be2bb:
      EVar4 = pFVar10->LockMode;
      if (EVar4 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
      UNLOCK();
      local_48.Manager = local_c8.Manager;
      local_48.AllocationIndex = local_c8.AllocationIndex;
      local_48._12_4_ = local_c8._12_4_;
      FApplyCustomPrimitiveDataParameters::ForEachAllocation
                (&local_48,(TRead<UObject_*>)pFVar14->Components,local_b0,local_b8);
      LOCK();
      *(int *)&(pFVar9->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar9->ScheduledAccessCount).field_0x0 + -1;
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar13->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar13->ScheduledAccessCount).field_0x0 + -1;
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar4 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      if (pFVar12 != (FComponentHeader *)0x0) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar12->Size + 4) = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_98);
      bVar8 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
    } while (bVar8);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  return;
}

// Run @ 1467be3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
      *this,FEvaluateAudio *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FEntityIDAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xa,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xc,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject*___ptr64>_>::Run(UE::MovieScene::FEvaluateAudio&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1467be590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
      *this,FEvaluateCameraShake *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>::Run(UE::MovieScene::FEvaluateCameraShake&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  FEvaluateCameraShake::PostTask(param_1);
  return;
}

// Run @ 1467be740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
      *this,FGatherAudioInputs *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>::Run(UE::MovieScene::FGatherAudioInputs&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 1467be8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
      *this,FGatherAudioTriggers *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  FEntityManager *pFVar5;
  TRead<UE::MovieScene::FInstanceHandle> TVar6;
  code *pcVar7;
  EEntityThreadingModel EVar8;
  bool bVar9;
  FComponentHeader *pFVar10;
  FEntityAllocation *pFVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  FString local_d8;
  FEntityAllocationProxy local_c8;
  TRead<FName> local_b8;
  TRead<FMovieSceneAudioComponentData> local_b0;
  FEntityAllocationIteratorProxy local_a8;
  FEntityAllocationIterator local_98;
  FEntityAllocationProxy local_78;
  FEntityAllocationIterator local_68;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar5 = this->EntityManager;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar5,&local_d8);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar5,&local_d8);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar5,&local_d8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>::Run(UE::MovieScene::FGatherAudioTriggers&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  EVar8 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_a8,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_98,local_a8.Manager,local_a8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_a8.Manager);
  bVar9 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
  if (bVar9) {
    do {
      pFVar14 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_98,&local_78);
      pFVar10 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_78);
      pFVar13 = pFVar14;
      if (EVar8 == NoThreading) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar10->Size + 4) = LockFree;
        pFVar13 = pFVar10;
      }
      uVar1 = *(ushort *)&(this->ComponentFilter).Components.field_0x4;
      local_c8.Manager = local_78.Manager;
      local_c8.AllocationIndex = local_78.AllocationIndex;
      local_c8._12_4_ = local_78._12_4_;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar10 = pFVar11->ComponentHeaders;
      pFVar15 = pFVar10 + pFVar11->NumComponents;
      for (; pFVar10 != pFVar15; pFVar10 = pFVar10 + 1) {
        if ((pFVar10->ComponentType).Value == uVar1) goto LAB_1467bea8d;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar10 = pFVar14;
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467bea8d:
      EVar2 = pFVar11->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 + 1;
      UNLOCK();
      local_b8 = (TRead<FName>)pFVar10->Components;
      uVar1 = *(ushort *)&(this->ComponentFilter).Components.field_0x2;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar15 = pFVar11->ComponentHeaders;
      pFVar12 = pFVar15 + pFVar11->NumComponents;
      for (; pFVar15 != pFVar12; pFVar15 = pFVar15 + 1) {
        if ((pFVar15->ComponentType).Value == uVar1) goto LAB_1467beb0e;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar15 = pFVar14;
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467beb0e:
      EVar3 = pFVar11->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 + 1;
      UNLOCK();
      local_b0 = (TRead<FMovieSceneAudioComponentData>)pFVar15->Components;
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar14 = pFVar11->ComponentHeaders;
      pFVar12 = pFVar14 + pFVar11->NumComponents;
      for (; pFVar14 != pFVar12; pFVar14 = pFVar14 + 1) {
        if ((pFVar14->ComponentType).Value == uVar1) goto LAB_1467beb8d;
      }
      pFVar14 = (FComponentHeader *)0x0;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467beb8d:
      EVar4 = pFVar11->LockMode;
      if (EVar4 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
      UNLOCK();
      TVar6 = (TRead<UE::MovieScene::FInstanceHandle>)pFVar14->Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      FGatherAudioTriggers::ForEachAllocation(param_1,pFVar11,TVar6,local_b0,local_b8);
      LOCK();
      *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 + -1;
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 + -1;
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar4 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      if (pFVar13 != (FComponentHeader *)0x0) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar13->Size + 4) = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_98);
      bVar9 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
    } while (bVar9);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  return;
}

// TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_> @ 146806220

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_> @ 1468062d0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_> @ 146806380

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x40 =
       *(undefined8 *)&(param_2->Components).field_0x40;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_> @ 146806440

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_> @ 146806670

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x2,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x4,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x6,
                      &(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_> @ 146806740

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&param_2->field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->ComponentFilter).Filter);
  AddAccessorToFilter<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
            ((TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
              *)&(this->ComponentFilter).Components.field_0x2,&(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_> @ 146806810

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468068c0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_> @ 146806980

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_> @ 146806a30

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_> @ 146806ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 146864260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FAccumulationTask *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FAccumulationTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachAllocationImpl<UE::MovieScene::FAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468643f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FAdditiveAndOverridesTask *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FAdditiveAndOverridesTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146864590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FAdditiveFromBaseBlendTask *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  FEntityManager *pFVar3;
  code *pcVar4;
  TReadOptional<double> TVar5;
  EEntityThreadingModel EVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  FEntityAllocation *pFVar11;
  FComponentHeader *pFVar12;
  FEntityAllocation *pFVar13;
  FString local_e8;
  FComponentHeader *local_d8;
  undefined8 local_d0;
  TReadOptional<double> local_c8;
  FEntityAllocationIteratorProxy local_c0;
  FEntityAllocationProxy local_a8;
  FEntityAllocationIterator local_98;
  FEntityAllocationProxy local_78;
  FEntityAllocationIterator local_68;
  FEntityAllocationProxy local_48;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar3 = this->EntityManager;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar3,&local_e8);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar3,
                     &local_e8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FAdditiveFromBaseBlendTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  EVar6 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_c0,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_98,local_c0.Manager,local_c0.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_c0.Manager);
  bVar7 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
  if (bVar7) {
    do {
      pFVar13 = (FEntityAllocation *)0x0;
      FEntityAllocationIterator::operator*(&local_98,&local_78);
      pFVar8 = FEntityAllocationProxy::GetAllocation(&local_78);
      pFVar11 = pFVar13;
      if (EVar6 == NoThreading) {
        pFVar8->LockMode = LockFree;
        pFVar11 = pFVar8;
      }
      uVar1 = *(ushort *)&(this->ComponentFilter).Components.field_0x2;
      local_a8.Manager = local_78.Manager;
      local_a8.AllocationIndex = local_78.AllocationIndex;
      local_a8._12_4_ = local_78._12_4_;
      pFVar8 = FEntityAllocationProxy::GetAllocation(&local_a8);
      pFVar12 = pFVar8->ComponentHeaders;
      pFVar9 = pFVar12 + pFVar8->NumComponents;
      for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
        if ((pFVar12->ComponentType).Value == uVar1) {
          EVar2 = pFVar8->LockMode;
          pFVar13 = (FEntityAllocation *)(ulonglong)EVar2;
          if (EVar2 == Mutex) {
            AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
          }
          LOCK();
          pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
          UNLOCK();
          local_c8 = (TReadOptional<double>)pFVar12->Components;
          local_d0 = CONCAT44(local_d0._4_4_,EVar2);
          local_d8 = pFVar12;
          goto LAB_146864707;
        }
      }
      local_d0 = 0;
      local_d8 = (FComponentHeader *)0x0;
      local_c8 = (TReadOptional<double>)0x0;
LAB_146864707:
      TVar5 = local_c8;
      pFVar9 = local_d8;
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      pFVar8 = FEntityAllocationProxy::GetAllocation(&local_a8);
      pFVar12 = pFVar8->ComponentHeaders;
      pFVar10 = pFVar12 + pFVar8->NumComponents;
      for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
        if ((pFVar12->ComponentType).Value == uVar1) goto LAB_146864774;
      }
      pFVar12 = (FComponentHeader *)0x0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_146864774:
      EVar2 = pFVar8->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
      }
      LOCK();
      pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
      UNLOCK();
      local_48.Manager = local_a8.Manager;
      local_48.AllocationIndex = local_a8.AllocationIndex;
      local_48._12_4_ = local_a8._12_4_;
      FAdditiveFromBaseBlendTask::ForEachAllocation
                (param_1,&local_48,(TRead<FMovieSceneBlendChannelID>)pFVar12->Components,TVar5);
      if (pFVar9 != (FComponentHeader *)0x0) {
        LOCK();
        pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
        UNLOCK();
        if ((int)pFVar13 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
        }
      }
      LOCK();
      pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
      }
      if (pFVar11 != (FEntityAllocation *)0x0) {
        pFVar11->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_98);
      bVar7 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
    } while (bVar7);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  return;
}

// Run @ 146864880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
      *this,FApplyScalarParameters *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<FMaterialParameterInfo,FName>
              ((TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName> *)
               &(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xa,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::FApplyScalarParameters&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146864a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
      *this,FApplyVectorParameters *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
              ((TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString<double,double,double,double>
              ((TReadOneOrMoreOfAccessor<double,double,double,double> *)
               &(this->ComponentFilter).Components.field_0x12,pFVar1,(FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>::Run(UE::MovieScene::FApplyVectorParameters&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146864bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
      *this,FAssignTransformOrigin *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0xc,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::Run(UE::MovieScene::FAssignTransformOrigin&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7>_>::
      ForEachAllocationImpl<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146864db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(void *this,FChannelResultTask *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = *(FEntityManager **)((longlong)this + 0x128);
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString(this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)((longlong)this + 2),pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)((longlong)this + 4),pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)((longlong)this + 6),pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)((longlong)this + 10),pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)((longlong)this + 0xe),pFVar1,(FString *)&local_78);
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(*(FEntityManager **)((longlong)this + 0x128));
  FEntityManager::Iterate
            (*(FEntityManager **)((longlong)this + 0x128),&local_78,
             (FEntityComponentFilter *)((longlong)this + 0x38));
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
      ForEachAllocationImpl<_UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask_::__l2::FChannelResultTask,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,
                 (FEntityAllocationWriteContext)*(ulong64 *)((longlong)this + 0x130),this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146864f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<`UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask'::__l2::FChannelResultTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(void *this,FChannelResultTask *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = *(FEntityManager **)((longlong)this + 0x128);
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString(this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)((longlong)this + 2),pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)((longlong)this + 4),pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)((longlong)this + 6),pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)((longlong)this + 10),pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)((longlong)this + 0xe),pFVar1,(FString *)&local_78);
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(*(FEntityManager **)((longlong)this + 0x128));
  FEntityManager::Iterate
            (*(FEntityManager **)((longlong)this + 0x128),&local_78,
             (FEntityComponentFilter *)((longlong)this + 0x38));
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
      ForEachAllocationImpl<_UMovieScenePiecewiseDoubleBlenderSystem::DispatchDecomposeTask_::__l2::FChannelResultTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,
                 (FEntityAllocationWriteContext)*(ulong64 *)((longlong)this + 0x130),this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146865150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
      *this,FCombineBlends *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  EEntityThreadingModel EVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  FComponentHeader *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  FString local_b8;
  FEntityAllocationIteratorProxy local_a8;
  FEntityAllocationIterator local_98;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  FEntityAllocationProxy local_38;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,this->EntityManager,&local_b8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>::Run(UE::MovieScene::FCombineBlends&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  EVar4 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_a8,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_98,local_a8.Manager,local_a8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_a8.Manager);
  bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_58);
  if (bVar5) {
    do {
      pFVar8 = (FEntityAllocation *)0x0;
      FEntityAllocationIterator::operator*(&local_98,&local_78);
      pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
      if (EVar4 == NoThreading) {
        pFVar6->LockMode = LockFree;
        pFVar8 = pFVar6;
      }
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      local_68.Manager = local_78.Manager;
      local_68.AllocationIndex = local_78.AllocationIndex;
      local_68._12_4_ = local_78._12_4_;
      pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar9 = pFVar6->ComponentHeaders;
      pFVar7 = pFVar9 + pFVar6->NumComponents;
      for (; pFVar9 != pFVar7; pFVar9 = pFVar9 + 1) {
        if ((pFVar9->ComponentType).Value == uVar1) {
          if (pFVar9 != (FComponentHeader *)0x0) goto LAB_1468652be;
          goto LAB_146865298;
        }
      }
      pFVar9 = (FComponentHeader *)0x0;
LAB_146865298:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_1468652be:
      EVar2 = pFVar6->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
      }
      LOCK();
      pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
      UNLOCK();
      local_38.Manager = local_68.Manager;
      local_38.AllocationIndex = local_68.AllocationIndex;
      local_38._12_4_ = local_68._12_4_;
      FCombineBlends::ForEachAllocation
                (param_1,&local_38,(TRead<FMovieSceneBlendChannelID>)pFVar9->Components);
      LOCK();
      pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
      }
      if (pFVar8 != (FEntityAllocation *)0x0) {
        pFVar8->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_98);
      bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_58);
    } while (bVar5);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  return;
}

// Run @ 146865380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
      *this,FEvaluateFade *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FEntityIDAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::FEvaluateFade&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146865530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
      *this,FEvaluateQuaternionInterpolationRotationChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
              ((TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
      ForEachAllocationImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468656f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
      *this,FEvaluateSlomo *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  FEntityManager *pFVar4;
  TRead<double> TVar5;
  TRead<UE::MovieScene::FRootInstanceHandle> TVar6;
  code *pcVar7;
  EEntityThreadingModel EVar8;
  bool bVar9;
  FComponentHeader *pFVar10;
  FEntityAllocation *pFVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FString local_b8;
  FEntityAllocationIteratorProxy local_a8;
  FEntityAllocationProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationIterator local_78;
  FEntityAllocationIterator local_60;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar4 = this->EntityManager;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar4,&local_b8);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar4,&local_b8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::FEvaluateSlomo&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  EVar8 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_a8,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_78,local_a8.Manager,local_a8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_60,local_a8.Manager);
  bVar9 = FEntityAllocationIterator::operator!=(&local_78,&local_60);
  if (bVar9) {
    do {
      FEntityAllocationIterator::operator*(&local_78,&local_88);
      pFVar10 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_88);
      pFVar13 = (FComponentHeader *)0x0;
      if (EVar8 == NoThreading) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar10->Size + 4) = LockFree;
        pFVar13 = pFVar10;
      }
      uVar1 = *(ushort *)&(this->ComponentFilter).Components.field_0x2;
      local_98.Manager = local_88.Manager;
      local_98.AllocationIndex = local_88.AllocationIndex;
      local_98._12_4_ = local_88._12_4_;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_98);
      pFVar10 = pFVar11->ComponentHeaders;
      pFVar14 = pFVar10 + pFVar11->NumComponents;
      for (; pFVar10 != pFVar14; pFVar10 = pFVar10 + 1) {
        if ((pFVar10->ComponentType).Value == uVar1) goto LAB_14686587d;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar10 = (FComponentHeader *)0x0;
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14686587d:
      EVar2 = pFVar11->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 + 1;
      UNLOCK();
      TVar5 = (TRead<double>)pFVar10->Components;
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_98);
      pFVar14 = pFVar11->ComponentHeaders;
      pFVar12 = pFVar14 + pFVar11->NumComponents;
      for (; pFVar14 != pFVar12; pFVar14 = pFVar14 + 1) {
        if ((pFVar14->ComponentType).Value == uVar1) goto LAB_1468658fa;
      }
      pFVar14 = (FComponentHeader *)0x0;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1468658fa:
      EVar3 = pFVar11->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
      UNLOCK();
      TVar6 = (TRead<UE::MovieScene::FRootInstanceHandle>)pFVar14->Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_98);
      FEvaluateSlomo::ForEachAllocation(param_1,pFVar11,TVar6,TVar5);
      LOCK();
      *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 + -1;
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      if (pFVar13 != (FComponentHeader *)0x0) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar13->Size + 4) = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_78);
      bVar9 = FEntityAllocationIterator::operator!=(&local_78,&local_60);
    } while (bVar9);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_60);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_78);
  return;
}

// Run @ 1468659e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FGatherSkeletalAnimations *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FEntityIDAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xa,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FGatherSkeletalAnimations&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  FSkeletalAnimationSystemData::ResetSkeletalAnimations(param_1->SystemData);
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
      ForEachAllocationImpl<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146865bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FIntegerAccumulationTask *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FIntegerAccumulationTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146865d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FIntegerAdditiveFromBaseBlendTask *param_1)

{
  int iVar1;
  FEntityManager *pFVar2;
  EEntityThreadingModel EVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocation *pFVar6;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar2 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar2,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar2,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar2,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar2,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FIntegerAdditiveFromBaseBlendTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  iVar1 = param_1->AccumulationBuffer->ArrayNum;
  if (0 < iVar1) {
    memset((param_1->AccumulationBuffer->AllocatorInstance).Data,0,(longlong)iVar1 << 4);
  }
  EVar3 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar4 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar4) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar5 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar6 = (FEntityAllocation *)0x0;
      if (EVar3 == NoThreading) {
        pFVar5->LockMode = LockFree;
        pFVar6 = pFVar5;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar6 != (FEntityAllocation *)0x0) {
        pFVar6->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar4 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar4);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146865f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
      *this,FIntegerCombineBlends *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>::Run(UE::MovieScene::FIntegerCombineBlends&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachAllocationImpl<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468660e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
      *this,FLegacyCombineBlendsForProperties *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  EEntityThreadingModel EVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  FComponentHeader *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  FString local_b8;
  FEntityAllocationIteratorProxy local_a8;
  FEntityAllocationIterator local_98;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  FEntityAllocationProxy local_38;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,this->EntityManager,&local_b8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FLegacyCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>::Run(UE::MovieScene::FLegacyCombineBlendsForProperties&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  EVar4 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_a8,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_98,local_a8.Manager,local_a8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_a8.Manager);
  bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_58);
  if (bVar5) {
    do {
      pFVar8 = (FEntityAllocation *)0x0;
      FEntityAllocationIterator::operator*(&local_98,&local_78);
      pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
      if (EVar4 == NoThreading) {
        pFVar6->LockMode = LockFree;
        pFVar8 = pFVar6;
      }
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      local_68.Manager = local_78.Manager;
      local_68.AllocationIndex = local_78.AllocationIndex;
      local_68._12_4_ = local_78._12_4_;
      pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar9 = pFVar6->ComponentHeaders;
      pFVar7 = pFVar9 + pFVar6->NumComponents;
      for (; pFVar9 != pFVar7; pFVar9 = pFVar9 + 1) {
        if ((pFVar9->ComponentType).Value == uVar1) {
          if (pFVar9 != (FComponentHeader *)0x0) goto LAB_14686624e;
          goto LAB_146866228;
        }
      }
      pFVar9 = (FComponentHeader *)0x0;
LAB_146866228:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_14686624e:
      EVar2 = pFVar6->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
      }
      LOCK();
      pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
      UNLOCK();
      local_38.Manager = local_68.Manager;
      local_38.AllocationIndex = local_68.AllocationIndex;
      local_38._12_4_ = local_68._12_4_;
      FLegacyCombineBlendsForProperties::ForEachAllocation
                (param_1,&local_38,(TRead<FMovieSceneBlendChannelID>)pFVar9->Components);
      LOCK();
      pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
      }
      if (pFVar8 != (FEntityAllocation *)0x0) {
        pFVar8->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_98);
      bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_58);
    } while (bVar5);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  return;
}

// TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_> @ 14689b830

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter<double,double>
            ((TReadOneOrMoreOfAccessor<double,double> *)this,&(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x8,
                      &(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_> @ 14689b8f0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 1468cc350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
      *this,FAccumulateManualWeights *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString<double,double>
              ((TReadOneOrMoreOfAccessor<double,double> *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->ComponentFilter).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FAccumulateManualWeights&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachAllocationImpl<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468cc4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
      *this,FPropagateHierarchicalEasings *param_1)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  FEntityManager *pFVar4;
  FEntityAllocationWriteContext FVar5;
  longlong lVar6;
  code *pcVar7;
  EEntityThreadingModel EVar8;
  bool bVar9;
  FComponentHeader *pFVar10;
  FEntityAllocation *pFVar11;
  TComponentLock<UE::MovieScene::TWrite<double>_> *pTVar12;
  ulonglong uVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  ulonglong uVar16;
  TWrite<double> local_res20;
  FString local_f8;
  TRead<unsigned_short> local_e8;
  FEntityAllocationIteratorProxy local_e0;
  FEntityAllocationProxy local_c8;
  FEntityAllocationIterator local_b8;
  FEntityAllocationProxy local_98;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_88;
  FEntityAllocationIterator local_68;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar4 = this->EntityManager;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar4,&local_f8);
    AccessorToString((FWriteAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar4,&local_f8)
    ;
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FPropagateHierarchicalEasings&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  EVar8 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_e0,&(this->ComponentFilter).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_b8,local_e0.Manager,local_e0.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_e0.Manager);
  bVar9 = FEntityAllocationIterator::operator!=(&local_b8,&local_68);
  if (bVar9) {
    do {
      FEntityAllocationIterator::operator*(&local_b8,&local_98);
      pFVar10 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_98);
      pFVar15 = (FComponentHeader *)0x0;
      if (EVar8 == NoThreading) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar10->Size + 4) = LockFree;
        pFVar15 = pFVar10;
      }
      FVar5.SystemSerial = (this->WriteContext).SystemSerial;
      local_c8.Manager = local_98.Manager;
      local_c8.AllocationIndex = local_98.AllocationIndex;
      local_c8._12_4_ = local_98._12_4_;
      local_res20._0_2_ = *(undefined2 *)&(this->ComponentFilter).Components.field_0x2;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pTVar12 = TWriteAccess<double>::LockComponentData
                          ((TWriteAccess<double> *)&local_res20,&local_88,pFVar11,FVar5);
      uVar1 = *(ushort *)&(this->ComponentFilter).Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar10 = pFVar11->ComponentHeaders;
      pFVar14 = pFVar10 + pFVar11->NumComponents;
      for (; pFVar10 != pFVar14; pFVar10 = pFVar10 + 1) {
        if ((pFVar10->ComponentType).Value == uVar1) goto LAB_1468cc6a8;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar10 = (FComponentHeader *)0x0;
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1468cc6a8:
      EVar2 = pFVar11->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
      }
      LOCK();
      *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 + 1;
      UNLOCK();
      local_e8 = (TRead<unsigned_short>)pFVar10->Components;
      lVar6 = *(longlong *)pTVar12;
      uVar16 = *(ulonglong *)&pTVar12->field_0x8;
      iVar3 = *(int *)&pTVar12->field_0x10;
      *(undefined8 *)pTVar12 = 0;
      local_res20 = *(TWrite<double> *)&pTVar12->field_0x18;
      *(undefined8 *)&pTVar12->field_0x18 = 0;
      if (local_88._0_8_ != 0) {
        uVar13 = local_88._8_8_;
        if ((ulonglong)local_88._8_8_ < *(ulonglong *)(local_88._0_8_ + 0x28)) {
          uVar13 = *(ulonglong *)(local_88._0_8_ + 0x28);
        }
        *(ulonglong *)(local_88._0_8_ + 0x28) = uVar13;
        LOCK();
        *(int *)(local_88._0_8_ + 0x30) = *(int *)(local_88._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_88._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_88._0_8_ + 0x20));
        }
      }
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c8);
      FPropagateHierarchicalEasings::ForEachAllocation(param_1,pFVar11,local_e8,local_res20);
      if (lVar6 != 0) {
        if (uVar16 < *(ulonglong *)(lVar6 + 0x28)) {
          uVar16 = *(ulonglong *)(lVar6 + 0x28);
        }
        *(ulonglong *)(lVar6 + 0x28) = uVar16;
        LOCK();
        *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
        UNLOCK();
        if (iVar3 == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x20));
        }
      }
      LOCK();
      *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 =
           *(int *)&(pFVar10->ScheduledAccessCount).field_0x0 + -1;
      UNLOCK();
      if (EVar2 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
      }
      if (pFVar15 != (FComponentHeader *)0x0) {
        *(EComponentHeaderLockMode *)((longlong)&pFVar15->Size + 4) = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_b8);
      bVar9 = FEntityAllocationIterator::operator!=(&local_b8,&local_68);
    } while (bVar9);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_b8);
  return;
}

