// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// ScheduledRun_PerAllocation @ 146941850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 146941890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            ((TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 5));
  return;
}

// ScheduledRun_PerAllocation @ 1469418d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

// ScheduledRun_PerAllocation @ 146941910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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
  ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
              *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 7));
  return;
}

