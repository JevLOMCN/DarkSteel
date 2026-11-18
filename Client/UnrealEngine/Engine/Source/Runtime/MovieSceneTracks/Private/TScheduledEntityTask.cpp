// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 80

// ScheduledRun_PerAllocation @ 1466f72d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f73d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f74d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f75d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f76d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f77d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f78d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f79d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
            ((TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits> *)(param_3 + 1),&local_18,
             &local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
            ((TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits> *)(param_3 + 1),&local_18,
             &local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1466f7b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
            ((TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits> *)(param_3 + 1),&local_18,
             &local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1467c0c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FApplyCustomPrimitiveDataParameters,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FApplyCustomPrimitiveDataParameters_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
            ((FApplyCustomPrimitiveDataParameters *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 1467c0cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::FEvaluateAudio_const_,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
            ((FEvaluateAudio *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
              *)(param_3 + 3));
  return;
}

// ScheduledRun_PerAllocation @ 1467c0d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::FGatherAudioInputs_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
            ((FGatherAudioInputs *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 1467c0d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FGatherAudioTriggers_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
            ((FGatherAudioTriggers *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateBoolChannels_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
            ((FEvaluateBoolChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateByteChannels_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
            ((FEvaluateByteChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateConstraintChannels_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
            ((FEvaluateConstraintChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
              *)(param_3 + 4));
  return;
}

// ScheduledRun_PerEntity @ 1467c0e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateDoubleChannels_Cached_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
            ((FEvaluateDoubleChannels_Cached *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels_const_,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
            ((FEvaluateDoublePerlinNoiseChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateFloatChannels_Cached_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
            ((FEvaluateFloatChannels_Cached *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels_const_,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
            ((FEvaluateFloatPerlinNoiseChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1467c0f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateIntegerChannels_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
            ((FEvaluateIntegerChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAdditiveAndOverridesTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FAdditiveAndOverridesTask_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FAdditiveAndOverridesTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686a710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  uint uVar1;
  code *pcVar2;
  TRelativePtr<void,unsigned_int> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  TRead<FMovieSceneBlendChannelID> TVar7;
  int iVar8;
  TReadOptional<double> TVar9;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28 [2];
  
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar3 = param_2->DataPtr;
  uVar4 = *(undefined8 *)&param_2->ArrayNum;
  FEntityAllocationProxy::GetAllocation(&local_38);
  iVar8 = (int)uVar4;
  if ((iVar8 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
  TVar7 = (TRead<FMovieSceneBlendChannelID>)0x0;
  uVar1 = pTVar3[1].Offset;
  TVar9 = (TReadOptional<double>)TVar7;
  if (uVar1 != 0xffffffff) {
    TVar9 = (TReadOptional<double>)((ulonglong)uVar1 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar8 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
  uVar1 = pTVar3->Offset;
  if (uVar1 != 0xffffffff) {
    TVar7 = (TRead<FMovieSceneBlendChannelID>)((ulonglong)uVar1 + (longlong)pFVar6->ComponentData);
  }
  local_28[0].Manager = local_38.Manager;
  local_28[0].AllocationIndex = local_38.AllocationIndex;
  local_28[0]._12_4_ = local_38._12_4_;
  FAdditiveFromBaseBlendTask::ForEachAllocation
            ((FAdditiveFromBaseBlendTask *)(param_3 + 1),local_28,TVar7,TVar9);
  return;
}

// ScheduledRun_PerAllocation @ 14686a850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FApplyScalarParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FApplyScalarParameters_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
            ((FApplyScalarParameters *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686a890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FApplyVectorParameters,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FApplyVectorParameters_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
            ((FApplyVectorParameters *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686a8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7>_>::
  ForEachAllocationImpl<UE::MovieScene::FAssignTransformOrigin_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
            ((FAssignTransformOrigin *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686a910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  uint uVar1;
  code *pcVar2;
  TRelativePtr<void,unsigned_int> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  TRead<FMovieSceneBlendChannelID> TVar7;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28 [2];
  
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar3 = param_2->DataPtr;
  uVar4 = *(undefined8 *)&param_2->ArrayNum;
  FEntityAllocationProxy::GetAllocation(&local_38);
  TVar7 = (TRead<FMovieSceneBlendChannelID>)0x0;
  if ((int)uVar4 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
  uVar1 = pTVar3->Offset;
  if (uVar1 != 0xffffffff) {
    TVar7 = (TRead<FMovieSceneBlendChannelID>)((ulonglong)uVar1 + (longlong)pFVar6->ComponentData);
  }
  local_28[0].Manager = local_38.Manager;
  local_28[0].AllocationIndex = local_38.AllocationIndex;
  local_28[0]._12_4_ = local_38._12_4_;
  FCombineBlends::ForEachAllocation((FCombineBlends *)(param_3 + 1),local_28,TVar7);
  return;
}

// ScheduledRun_PerAllocation @ 14686a9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::FEvaluateFade_const_,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
            ((FEvaluateFade *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 4));
  return;
}

// ScheduledRun_PerAllocation @ 14686aa10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4>_>::
  ForEachAllocationImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels_const_,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
            ((FEvaluateQuaternionInterpolationRotationChannels *)(param_3 + 1),&local_18,&local_28,
             param_4,(TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                      *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686aa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  code *pcVar1;
  TRelativePtr<void,unsigned_int> *pTVar2;
  int iVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  TRead<UE::MovieScene::FRootInstanceHandle> TVar6;
  TRead<double> TVar7;
  FEntityAllocationProxy local_28;
  TRelativePtr<void,unsigned_int> *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->ArrayNum;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FEntityAllocationProxy::GetAllocation(&local_28);
  iVar3 = (int)uStack_10;
  if (((int)uStack_10 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  pTVar2 = local_18;
  TVar6 = (TRead<UE::MovieScene::FRootInstanceHandle>)0x0;
  TVar7 = (TRead<double>)TVar6;
  if (local_18[1].Offset != 0xffffffff) {
    TVar7 = (TRead<double>)((ulonglong)local_18[1].Offset + (longlong)pFVar5->ComponentData);
  }
  if ((iVar3 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  if (pTVar2->Offset != 0xffffffff) {
    TVar6 = (TRead<UE::MovieScene::FRootInstanceHandle>)
            ((ulonglong)pTVar2->Offset + (longlong)pFVar5->ComponentData);
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  FEvaluateSlomo::ForEachAllocation((FEvaluateSlomo *)(param_3 + 1),pFVar5,TVar6,TVar7);
  return;
}

// ScheduledRun_PerAllocation @ 14686ab80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FForkedAccumulationTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FForkedAccumulationTask_const_,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FForkedAccumulationTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686abc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachAllocationImpl<UE::MovieScene::FGatherSkeletalAnimations_const_,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FGatherSkeletalAnimations *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 3));
  return;
}

// ScheduledRun_PerAllocation @ 14686ac00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherTransformOriginsFromSubscenes,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7>_>::
  ForEachAllocationImpl<UE::MovieScene::FGatherTransformOriginsFromSubscenes_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FGatherTransformOriginsFromSubscenes *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 4));
  return;
}

// ScheduledRun_PerAllocation @ 14686ac40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FIntegerAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FIntegerAccumulationTask_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FIntegerAccumulationTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686ac80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FIntegerAdditiveFromBaseBlendTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686acc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachAllocationImpl<UE::MovieScene::FIntegerCombineBlends_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
            ((FIntegerCombineBlends *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686ad00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FScheduleCombineBlendsForProperties,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  uint uVar1;
  code *pcVar2;
  TRelativePtr<void,unsigned_int> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  longlong lVar7;
  FMovieSceneBlendChannelID *pFVar8;
  int iVar9;
  FEntityAllocationProxy local_58;
  FMovieSceneBlendChannelID *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  FMovieSceneBlendChannelID *local_38 [2];
  FEntityAllocationProxy local_28 [2];
  
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar3 = param_2->DataPtr;
  uVar4 = *(undefined8 *)&param_2->ArrayNum;
  FEntityAllocationProxy::GetAllocation(&local_58);
  iVar9 = (int)uVar4;
  if (iVar9 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
  pFVar8 = (FMovieSceneBlendChannelID *)0x0;
  uVar1 = pTVar3[1].Offset;
  if ((uVar1 == 0xffffffff) ||
     (lVar7 = (longlong)&pFVar6->SerialNumber + (ulonglong)uVar1, lVar7 == 0)) {
    uStack_40 = 0;
    local_48 = pFVar8;
  }
  else {
    uStack_40 = (uint)*(byte *)(lVar7 + 0x34);
    local_48 = *(FMovieSceneBlendChannelID **)(lVar7 + 0x18);
  }
  uStack_3c = local_28[0]._12_4_;
  if (iVar9 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
  uVar1 = pTVar3->Offset;
  if (uVar1 != 0xffffffff) {
    pFVar8 = (FMovieSceneBlendChannelID *)(pFVar6->ComponentData + uVar1);
  }
  local_38[1]._4_4_ = uStack_3c;
  local_38[1]._0_4_ = uStack_40;
  local_38[0] = local_48;
  local_28[0].Manager = local_58.Manager;
  local_28[0].AllocationIndex = local_58.AllocationIndex;
  local_28[0]._12_4_ = local_58._12_4_;
  FScheduleCombineBlendsForProperties::ForEachAllocation
            ((FScheduleCombineBlendsForProperties *)(param_3 + 1),local_28,pFVar8,
             (FReadErasedOptional *)local_38);
  return;
}

// ScheduledRun_PerAllocation @ 14686ae60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FTransformDependencyTask,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
  ForEachAllocationImpl<_UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks_::__l2::FTransformDependencyTask_const_,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
            ((FTransformDependencyTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14686aea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FWriteObjectResultNoop,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  code *pcVar1;
  bool bVar2;
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FEntityAllocationProxy::GetAllocation(&local_18);
  if (param_2->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FEntityAllocationProxy::GetAllocation(&local_18);
  return;
}

// ScheduledRun_PerEntity @ 14686af10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
            ((TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *)
             (param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
              *)(param_3 + 3));
  return;
}

// ScheduledRun_PerEntity @ 14686af50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
            ((TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *)
             (param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
              *)(param_3 + 3));
  return;
}

// ScheduledRun_PerEntity @ 14686af90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachEntityImpl<UE::MovieScene::FAbsoluteAccumulationTask_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FAbsoluteAccumulationTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 14686afd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<UE::MovieScene::FAccumulateAbsoluteWeights_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
            ((FAccumulateAbsoluteWeights *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 14686b010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachEntityImpl<UE::MovieScene::FAdditiveAccumulationTask_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FAdditiveAccumulationTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 14686b050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks'::__l2::FCacheDeferredUpdates,UE::MovieScene::TReadAccess<UObject_*>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  ushort uVar1;
  int iVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  UClass *pUVar7;
  uchar *puVar8;
  uchar *puVar9;
  FEntityAllocationProxy local_28;
  TRelativePtr<void,unsigned_int> *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->ArrayNum;
  puVar8 = (uchar *)0x0;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
  puVar9 = puVar8;
  if (local_18->Offset != 0xffffffff) {
    puVar9 = pFVar6->ComponentData + local_18->Offset;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_28);
  uVar1 = pFVar6->Size;
  if ((ulonglong)uVar1 != 0) {
    do {
      pUVar3 = *(USceneComponent **)(puVar9 + (longlong)puVar8 * 8);
      if (pUVar3 != (USceneComponent *)0x0) {
        pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) {
          UMovieSceneDeferredComponentMovementSystem::DeferMovementUpdates
                    ((UMovieSceneDeferredComponentMovementSystem *)param_3[1],pUVar3);
        }
      }
      puVar8 = puVar8 + 1;
    } while ((longlong)puVar8 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ScheduledRun_PerEntity @ 14686b160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
  ForEachEntityImpl<UE::MovieScene::FCombineTask_const_,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
            ((FCombineTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 1468cd5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  uint uVar1;
  code *pcVar2;
  TRelativePtr<void,unsigned_int> *pTVar3;
  int iVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  FEntityAllocationProxy local_58;
  TRelativePtr<void,unsigned_int> *local_48;
  undefined8 uStack_40;
  double *local_38;
  double *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48 = param_2->DataPtr;
  uStack_40 = *(undefined8 *)&param_2->ArrayNum;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FEntityAllocationProxy::GetAllocation(&local_58);
  iVar4 = (int)uStack_40;
  if ((int)uStack_40 < 3) {
    local_60 = (longlong)(int)uStack_40;
    local_68 = 2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
  pTVar3 = local_48;
  pdVar7 = (double *)0x0;
  pdVar8 = pdVar7;
  if (local_48[2].Offset != 0xffffffff) {
    pdVar8 = (double *)(pFVar6->ComponentData + local_48[2].Offset);
  }
  if (iVar4 < 1) {
    local_60 = (longlong)iVar4;
    local_68 = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
  uVar1 = pTVar3[1].Offset;
  local_30 = pdVar7;
  if (uVar1 != 0xffffffff) {
    local_30 = (double *)(pFVar6->ComponentData + uVar1);
  }
  uVar1 = pTVar3->Offset;
  if (uVar1 != 0xffffffff) {
    pdVar7 = (double *)(pFVar6->ComponentData + uVar1);
  }
  local_38 = pdVar7;
  pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
  FAccumulateManualWeights::ForEachAllocation
            (pFVar6,(TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>_>
                     *)&local_38,pdVar8);
  return;
}

// ScheduledRun_PerAllocation @ 1468cd700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  code *pcVar1;
  TRelativePtr<void,unsigned_int> *pTVar2;
  int iVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  TRead<unsigned_short> TVar6;
  TWrite<double> TVar7;
  FEntityAllocationProxy local_28;
  TRelativePtr<void,unsigned_int> *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->ArrayNum;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FEntityAllocationProxy::GetAllocation(&local_28);
  iVar3 = (int)uStack_10;
  if (((int)uStack_10 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  pTVar2 = local_18;
  TVar6 = (TRead<unsigned_short>)0x0;
  TVar7 = (TWrite<double>)TVar6;
  if (local_18[1].Offset != 0xffffffff) {
    TVar7 = (TWrite<double>)((ulonglong)local_18[1].Offset + (longlong)pFVar5->ComponentData);
  }
  if ((iVar3 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  if (pTVar2->Offset != 0xffffffff) {
    TVar6 = (TRead<unsigned_short>)((ulonglong)pTVar2->Offset + (longlong)pFVar5->ComponentData);
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  FPropagateHierarchicalEasings::ForEachAllocation
            ((FPropagateHierarchicalEasings *)(param_3 + 1),pFVar5,TVar6,TVar7);
  return;
}

// ScheduledRun_PerEntity @ 1468cd830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateEasings_const_,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
            ((FEvaluateEasings *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1468cd870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateObjectPathChannels_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
            ((FEvaluateObjectPathChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1468cd8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateStringChannels_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
            ((FEvaluateStringChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1468cd8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::Private::FEvaluateTextChannels_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
            ((FEvaluateTextChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1468cd930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TRelativePtr<void,unsigned_int> *pTVar7;
  bool bVar8;
  FEntityAllocation *pFVar9;
  FHierarchicalEasingChannelData *pFVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  FEntityAllocationProxy local_38 [2];
  
  local_38[0].Manager = param_1->Manager;
  local_38[0].AllocationIndex = param_1->AllocationIndex;
  local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar4 = param_2->ArrayNum;
  pTVar7 = param_2->DataPtr;
  if ((iVar4 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = FEntityAllocationProxy::GetAllocation(local_38);
  puVar13 = (ushort *)0x0;
  uVar5 = pTVar7[1].Offset;
  puVar12 = puVar13;
  if (uVar5 != 0xffffffff) {
    puVar12 = (ushort *)(pFVar9->ComponentData + uVar5);
  }
  if ((iVar4 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = FEntityAllocationProxy::GetAllocation(local_38);
  uVar5 = pTVar7->Offset;
  puVar11 = puVar13;
  if (uVar5 != 0xffffffff) {
    puVar11 = (ushort *)(pFVar9->ComponentData + uVar5);
  }
  pFVar9 = FEntityAllocationProxy::GetAllocation(local_38);
  uVar2 = pFVar9->Size;
  if (uVar2 != 0) {
    do {
      uVar3 = *puVar12;
      dVar1 = *(double *)(puVar11 + (longlong)puVar13 * 4);
      pFVar10 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                          ((TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int> *)
                           (param_3 + 1),(uint)uVar3);
      pFVar10->FinalResult = dVar1 * pFVar10->FinalResult;
      pFVar10 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                          ((TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int> *)
                           (param_3 + 1),(uint)uVar3);
      puVar13 = (ushort *)((longlong)puVar13 + 1);
      puVar12 = puVar12 + 1;
      pFVar10->UnaccumulatedResult = dVar1 * pFVar10->UnaccumulatedResult;
    } while ((longlong)puVar13 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// ScheduledRun_PerEntity @ 1468cdaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  uchar *puVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  uchar *puVar6;
  uchar *puVar7;
  FEntityAllocationProxy local_28;
  TRelativePtr<void,unsigned_int> *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->ArrayNum;
  puVar6 = (uchar *)0x0;
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  puVar7 = puVar6;
  if (local_18->Offset != 0xffffffff) {
    puVar7 = pFVar5->ComponentData + local_18->Offset;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(&local_28);
  uVar2 = pFVar5->Size;
  if ((ulonglong)uVar2 != 0) {
    do {
      puVar1 = puVar7 + (longlong)puVar6 * 8;
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      puVar1[4] = '\0';
      puVar1[5] = '\0';
      puVar1[6] = 0xf0;
      puVar1[7] = '?';
      puVar6 = puVar6 + 1;
    } while ((longlong)puVar6 < (longlong)(ulonglong)uVar2);
  }
  return;
}

