// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 32

// FilterAll @ 1466701a0

TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(__return_storage_ptr__->Components).field_0x2,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterAll @ 146670290

TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(__return_storage_ptr__->Components).field_0x2,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x14,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterAll @ 146670390

TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x38 = uVar1;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(__return_storage_ptr__->Components).field_0x2,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x14,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x16,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x18,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x1a,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x1c,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x1e,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterAll @ 1466704d0

TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(__return_storage_ptr__->Components).field_0x2,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x14,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x16,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterAll @ 1466705e0

TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x38 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x40 = *(undefined8 *)&this->field_0x40
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&(__return_storage_ptr__->Components).field_0x2,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x14,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x16,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x18,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x1a,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x1c,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x1e,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x20,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterAll @ 146670740

TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x2,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x4,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x6,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x8,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xa,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xc,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// Dispatch_PerAllocation<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*> @ 14673a340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::Dispatch_PerAllocation<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*>
          (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneAudioSystem **param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EEntityThreadingModel EVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  FTaskBase *pFVar7;
  FTaskBase *this_02;
  longlong *in_stack_00000030;
  undefined1 auStackY_298 [32];
  EExtendedTaskPriority local_268;
  ETaskPriority local_267 [3];
  FComponentTypeID local_264;
  FComponentTypeID local_262;
  FComponentTypeID local_260;
  FComponentTypeID local_25e;
  FComponentTypeID local_25c;
  FComponentTypeID local_25a;
  FComponentTypeID local_258;
  FComponentTypeID local_256;
  FComponentTypeID local_254;
  FComponentTypeID local_252;
  FComponentTypeID local_250;
  FComponentTypeID local_24e;
  FComponentTypeID local_24c;
  FComponentTypeID local_24a;
  FTaskBase *local_248;
  FEvaluateAudio local_240;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [208];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)&this->field_0x2 == -1 ||
       ((*(short *)&this->field_0x6 == -1 ||
        (*(short *)&this->field_0xa == -1 || *(short *)&this->field_0x8 == -1)) ||
       *(short *)&this->field_0x4 == -1)) ||
     (bVar3 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                            *)this,(FEntityManager *)param_2), !bVar3)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar4 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar4 != NoThreading) {
        local_228._First = &local_264;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_228._Last = &local_262;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_264.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_228);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        local_260.Value = *(ushort *)&this->field_0x2;
        local_218._First = &local_260;
        local_218._Last = &local_25e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_218);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        local_25c.Value = *(ushort *)&this->field_0x4;
        local_208._First = &local_25c;
        local_208._Last = &local_25a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_208);
        if ((*(short *)&this->field_0x6 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        local_258.Value = *(ushort *)&this->field_0x6;
        local_1f8._First = &local_258;
        local_1f8._Last = &local_256;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)&this->field_0x8 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        local_254.Value = *(ushort *)&this->field_0x8;
        local_1e8._First = &local_254;
        local_1e8._Last = &local_252;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        if ((*(short *)&this->field_0xa == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        local_250.Value = *(ushort *)&this->field_0xa;
        local_1d8._First = &local_250;
        local_1d8._Last = &local_24e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1d8);
        if (*(ushort *)&this->field_0xc != 0xffff) {
          local_1c8._First = &local_24c;
          local_1c8._Last = &local_24a;
          local_24c.Value = *(ushort *)&this->field_0xc;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1c8);
        }
        pFVar7 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar7 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x218,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar7);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFEvaluateAudio_MovieScene_UE__UFEntityIDAccess_23_U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_N_23_U823_U__TOptionalReadAccess_PEAVUObject___23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        lVar1 = *in_stack_00000030;
        *(longlong *)this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData = lVar1;
        lVar1 = *(longlong *)(lVar1 + 0x28);
        if ((*(longlong *)(lVar1 + 0x580) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InstanceRegistry.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                               ,0x96,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        this_02[2].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
             *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar1 + 0x580);
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_267,&local_268);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_267[0],local_268,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x218);
        if (param_4 != (UMovieSceneAudioSystem **)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_248 = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_248);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar6,local_1b8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1b8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820987>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x185,"EntityManager->IsLockedDown()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
        return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
      }
    }
    local_240.AudioSystem = (UMovieSceneAudioSystem *)*in_stack_00000030;
    lVar1 = (local_240.AudioSystem)->_padding_;
    if ((*(longlong *)(lVar1 + 0x580) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
    }
    local_240.InstanceRegistry = *(FInstanceRegistry **)(lVar1 + 0x580);
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
    ::Run(this_00,&local_240);
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FEvaluateCameraShake,TObjectPtr<UMovieSceneEntitySystemLinker>_&> @ 14673a830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
::
Dispatch_PerAllocation<UE::MovieScene::FEvaluateCameraShake,TObjectPtr<UMovieSceneEntitySystemLinker>_&>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,TObjectPtr<UMovieSceneEntitySystemLinker> *param_4)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  EEntityThreadingModel EVar8;
  FComponentMask *pFVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  FTaskBase *pFVar12;
  FTaskBase *this_02;
  undefined8 *in_stack_00000030;
  undefined1 auStackY_2c8 [32];
  EExtendedTaskPriority local_298;
  ETaskPriority local_297 [3];
  FComponentTypeID local_294;
  FComponentTypeID local_292;
  FComponentTypeID local_290;
  FComponentTypeID local_28e;
  FComponentTypeID local_28c;
  FComponentTypeID local_28a;
  FComponentTypeID local_288;
  FComponentTypeID local_286;
  FComponentTypeID local_284;
  FComponentTypeID local_282;
  undefined8 *local_280;
  FSystemSubsequentTasks *local_278;
  FTaskBase *local_270;
  initializer_list<UE::MovieScene::FComponentTypeID> local_268;
  initializer_list<UE::MovieScene::FComponentTypeID> local_258;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  initializer_list<UE::MovieScene::FComponentTypeID> local_238;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  undefined1 local_218 [56];
  TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e0;
  void *local_1a0;
  undefined4 local_198;
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
  local_188;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar1 = *(ushort *)this;
  local_278 = (FSystemSubsequentTasks *)param_4;
  local_280 = in_stack_00000030;
  if (uVar1 != 0xffff &&
      (*(short *)&this->field_0x2 != -1 &&
      (*(short *)&this->field_0x6 != -1 && *(short *)&this->field_0x4 != -1))) {
    pFVar9 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    uVar1 = *(ushort *)&this->field_0x2;
    pFVar9 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        == 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    uVar1 = *(ushort *)&this->field_0x4;
    pFVar9 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        == 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    uVar1 = *(ushort *)&this->field_0x6;
    pFVar9 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar1 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar1)) ||
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        == 0)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    if ((bool)(bVar6 & bVar5 & bVar4 & bVar3)) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        EVar8 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
        if (EVar8 != NoThreading) {
          local_268._First = &local_294;
          local_218._44_4_ = 4;
          local_268._Last = &local_292;
          this_02 = (FTaskBase *)0x0;
          local_218._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_218._40_4_ = 0;
          local_294.Value = 0xffff;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_218,&local_268);
          if ((*(short *)this == -1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            TVar10.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
          }
          local_290.Value = *(ushort *)this;
          local_258._First = &local_290;
          local_258._Last = &local_28e;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_218,&local_258);
          if ((*(short *)&this->field_0x2 == -1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            TVar10.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
          }
          local_28c.Value = *(ushort *)&this->field_0x2;
          local_248._First = &local_28c;
          local_248._Last = &local_28a;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_218,&local_248);
          if ((*(short *)&this->field_0x4 == -1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            TVar10.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
          }
          local_288.Value = *(ushort *)&this->field_0x4;
          local_238._First = &local_288;
          local_238._Last = &local_286;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_218,&local_238);
          if ((*(short *)&this->field_0x6 == -1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            TVar10.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
          }
          local_284.Value = *(ushort *)&this->field_0x6;
          local_228._First = &local_284;
          local_228._Last = &local_282;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_218,&local_228);
          pFVar12 = (FTaskBase *)local_218;
          if (local_218._40_4_ == 0) {
            pFVar12 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(600,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar12);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityAllocationTask_UFEvaluateCameraShake_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_PEAVUObject___23_U__TReadAccess_UFMovieSceneCameraShakeComponentData___23_U__TReadAccess_UFMovieSceneCameraShakeInstanceData___23__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
          ::
          TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
                    ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          FEvaluateCameraShake::FEvaluateCameraShake
                    ((FEvaluateCameraShake *)&this_02[2].TraceId,
                     (UMovieSceneEntitySystemLinker *)*local_280);
          Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_297,&local_298);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_297[0],local_298,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,600);
          if (local_278 != (FSystemSubsequentTasks *)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_270 = this_02;
            FSystemSubsequentTasks::AddRootTask(local_278,(FBaseGraphTask *)&local_270);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_218;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_218._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_218._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_218._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_218._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_218._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2331281323118820987>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                           ,0x185,"EntityManager->IsLockedDown()");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          TVar10.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
        }
      }
      FEvaluateCameraShake::FEvaluateCameraShake
                ((FEvaluateCameraShake *)(local_218 + 0x30),
                 (UMovieSceneEntitySystemLinker *)*local_280);
      this_00 = TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
                ::
                TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
                          (&local_188,(FEntityManager *)param_2,this);
      TEntityAllocationTaskBase<UE::MovieScene::FEvaluateCameraShake,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
      ::Run(this_00,(FEvaluateCameraShake *)(local_218 + 0x30));
      if (local_188.ComponentFilter.Filter.ComplexMasks.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.ComponentFilter.Filter.ComplexMasks.AllocatorInstance.Data);
      }
      param_1->_padding_ = 0;
      local_198 = 0;
      if (local_1a0 != (void *)0x0) {
        FMemory::Free(local_1a0);
      }
      TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1e0);
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
  }
  param_1->_padding_ = 0;
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*> @ 14673ad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::Dispatch_PerAllocation<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneAudioSystem **param_4)

{
  code *pcVar1;
  bool bVar2;
  EEntityThreadingModel EVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  uint uVar6;
  FTaskBase *this_02;
  ushort *puVar8;
  undefined8 *in_stack_00000030;
  undefined1 auStackY_298 [32];
  EExtendedTaskPriority local_268;
  ETaskPriority local_267 [3];
  FComponentTypeID local_264;
  FComponentTypeID local_262;
  FComponentTypeID local_260;
  FComponentTypeID local_25e;
  FComponentTypeID local_25c;
  FComponentTypeID local_25a;
  FComponentTypeID local_258;
  FComponentTypeID local_256;
  FComponentTypeID local_254;
  FComponentTypeID local_252;
  FSystemSubsequentTasks *local_250;
  FTaskBase *local_248;
  FGatherAudioInputs local_240;
  initializer_list<UE::MovieScene::FComponentTypeID> local_238;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  undefined1 local_1e8 [248];
  void *local_f0;
  ulonglong local_58;
  FTaskBase *pFVar7;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_250 = (FSystemSubsequentTasks *)param_4;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar2 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                            *)this,(FEntityManager *)param_2), !bVar2)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar3 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar3 != NoThreading) {
        local_238._First = &local_264;
        local_238._Last = &local_262;
        local_1e8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_1e8._40_4_ = 0;
        local_1e8._44_4_ = 4;
        local_264.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1e8,&local_238);
        if ((*(short *)this == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_260.Value = *(ushort *)this;
        local_228._First = &local_260;
        local_228._Last = &local_25e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1e8,&local_228);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_25c.Value = *(ushort *)&this->field_0x2;
        local_218._First = &local_25c;
        local_218._Last = &local_25a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1e8,&local_218);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_258.Value = *(ushort *)&this->field_0x4;
        local_208._First = &local_258;
        local_208._Last = &local_256;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1e8,&local_208);
        puVar8 = (ushort *)&this->field_0x6;
        pFVar7 = this_02;
        do {
          if (*puVar8 != 0xffff) {
            local_1f8._First = &local_254;
            local_1f8._Last = &local_252;
            local_254.Value = *puVar8;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1e8,&local_1f8);
          }
          uVar6 = (int)pFVar7 + 1;
          pFVar7 = (FTaskBase *)(ulonglong)uVar6;
          puVar8 = puVar8 + 2;
        } while (uVar6 < 0xc);
        pFVar7 = (FTaskBase *)local_1e8;
        if (local_1e8._40_4_ == 0) {
          pFVar7 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x238,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar7);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFGatherAudioInputs_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_UFMovieSceneAudioInputData___23_U__TReadOneOrMoreOfAccessor_NNNNNNNNNVFString___J_N_23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        *(undefined8 *)&this_02[2].LowLevelTask.field_0x8 = *in_stack_00000030;
        Tasks::Private::TranslatePriority(*(Type *)&this_02[1].TraceId,local_267,&local_268);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_267[0],local_268,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x238);
        if (local_250 != (FSystemSubsequentTasks *)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_248 = this_02;
          FSystemSubsequentTasks::AddRootTask(local_250,(FBaseGraphTask *)&local_248);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1e8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1e8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1e8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar5,local_1e8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1e8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1e8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820987>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x185,"EntityManager->IsLockedDown()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
        return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
      }
    }
    local_240.AudioSystem = (UMovieSceneAudioSystem *)*in_stack_00000030;
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                          *)(local_1e8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
    ::Run(this_00,&local_240);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*> @ 14673b0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::Dispatch_PerAllocation<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneAudioSystem **param_4)

{
  code *pcVar1;
  bool bVar2;
  EEntityThreadingModel EVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  FTaskBase *pFVar6;
  FTaskBase *this_02;
  atomic<unsigned___int64> *in_stack_00000030;
  undefined1 auStackY_258 [32];
  EExtendedTaskPriority local_228;
  ETaskPriority local_227 [3];
  FComponentTypeID local_224;
  FComponentTypeID local_222;
  FComponentTypeID local_220;
  FComponentTypeID local_21e;
  FComponentTypeID local_21c;
  FComponentTypeID local_21a;
  FComponentTypeID local_218;
  FComponentTypeID local_216 [3];
  FGatherAudioTriggers local_210;
  FTaskBase *local_208 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar2 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                            *)this,(FEntityManager *)param_2), !bVar2)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar3 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar3 != NoThreading) {
        local_1f8._First = &local_224;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_1f8._Last = &local_222;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_224.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)this == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_220.Value = *(ushort *)this;
        local_1e8._First = &local_220;
        local_1e8._Last = &local_21e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_21c.Value = *(ushort *)&this->field_0x2;
        local_1d8._First = &local_21c;
        local_1d8._Last = &local_21a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1d8);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_218.Value = *(ushort *)&this->field_0x4;
        local_1c8._First = &local_218;
        local_1c8._Last = local_216;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1c8);
        pFVar6 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar6 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x208,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar6);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFGatherAudioTriggers_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_VFName___23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        this_02[2].TraceId = *in_stack_00000030;
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_227,&local_228);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_227[0],local_228,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x208);
        if (param_4 != (UMovieSceneAudioSystem **)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_208[0] = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)local_208);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar5,local_1b8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1b8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820987>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x185,"EntityManager->IsLockedDown()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
        return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
      }
    }
    local_210.AudioSystem = *(UMovieSceneAudioSystem **)in_stack_00000030;
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
    ::Run(this_00,&local_210);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerEntity<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*> @ 14673bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::
Dispatch_PerEntity<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UWorld **param_4,FInstanceRegistry **param_5,
          UMovieSceneConstraintSystem **param_6)

{
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar1;
  UMovieSceneConstraintSystem *pUVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  bool bVar5;
  EEntityThreadingModel EVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  FTaskBase *pFVar9;
  FTaskBase *this_02;
  ForElementType<UE::Tasks::Private::FTaskBase_*> *in_stack_00000040;
  undefined1 auStackY_288 [32];
  EExtendedTaskPriority local_258;
  ETaskPriority local_257 [3];
  FComponentTypeID local_254;
  FComponentTypeID local_252;
  FComponentTypeID local_250;
  FComponentTypeID local_24e;
  FComponentTypeID local_24c;
  FComponentTypeID local_24a;
  FComponentTypeID local_248;
  FComponentTypeID local_246;
  FComponentTypeID local_244;
  FComponentTypeID local_242;
  FTaskBase *local_240;
  FTaskBase *local_238 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  FEvaluateConstraintChannels local_1d8;
  undefined1 local_1c0 [208];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x2 == -1 ||
       (*(short *)&this->field_0x6 == -1 || *(short *)&this->field_0x4 == -1))) ||
     (bVar5 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                            *)this,(FEntityManager *)param_2), !bVar5)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar6 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar6 != NoThreading) {
        local_228._First = &local_254;
        local_1c0._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_228._Last = &local_252;
        local_1c0._40_4_ = 0;
        local_1c0._44_4_ = 4;
        local_254.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c0,&local_228);
        if ((*(short *)this == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_250.Value = *(ushort *)this;
        local_218._First = &local_250;
        local_218._Last = &local_24e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c0,&local_218);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_24c.Value = *(ushort *)&this->field_0x2;
        local_208._First = &local_24c;
        local_208._Last = &local_24a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c0,&local_208);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_248.Value = *(ushort *)&this->field_0x4;
        local_1f8._First = &local_248;
        local_1f8._Last = &local_246;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c0,&local_1f8);
        if ((*(short *)&this->field_0x6 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_244.Value = *(ushort *)&this->field_0x6;
        local_1e8._First = &local_244;
        local_1e8._Last = &local_242;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c0,&local_1e8);
        pFVar9 = (FTaskBase *)local_1c0;
        if (local_1c0._40_4_ == 0) {
          pFVar9 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x218,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar9);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityTask_UFEvaluateConstraintChannels_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFConstraintComponentData___23_U__TReadAccess_UFFrameTime___23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
        ::
        TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                  ((TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        FVar1 = *in_stack_00000040;
        pUVar2 = *param_6;
        aVar3 = (atomic<unsigned___int64>)*param_5;
        this_02[2].TraceId = aVar3;
        *(UMovieSceneConstraintSystem **)
         this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData = pUVar2;
        this_02[2].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = FVar1;
        if ((((aVar3 == (atomic<unsigned___int64>)0x0) ||
             (pUVar2 == (UMovieSceneConstraintSystem *)0x0)) ||
            (FVar1 == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("World && InstanceRegistry && System",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneConstraintSystem.cpp"
                               ,0x91,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_257,&local_258);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_257[0],local_258,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x218);
        if (param_4 != (UWorld **)0x0) {
          local_240 = this_02;
          if (this_02 == (FTaskBase *)0x0) {
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_240);
          }
          else {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_240);
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_238[0] = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)local_238);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c0;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c0._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c0._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar8,local_1c0._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c0._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1c0._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820909>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x1d3,"EntityManager->IsLockedDown()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
        return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
      }
    }
    local_1d8.World = (UWorld *)*param_5;
    local_1d8.InstanceRegistry = (FInstanceRegistry *)*param_6;
    local_1d8.System = *(UMovieSceneConstraintSystem **)in_stack_00000040;
    if ((((local_1d8.World == (UWorld *)0x0) ||
         (local_1d8.InstanceRegistry == (FInstanceRegistry *)0x0)) ||
        ((ForElementType<UE::Tasks::Private::FTaskBase_*>)local_1d8.System ==
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("World && InstanceRegistry && System",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneConstraintSystem.cpp"
                           ,0x91,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar7.Reference = (FBaseGraphTask *)(*pcVar4)();
      return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    }
    this_00 = TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
              ::
              TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                        ((TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                          *)(local_1c0 + 0x38),(FEntityManager *)param_2,this);
    TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
    ::Run(this_00,&local_1d8);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// RunInline_PerEntity<UE::MovieScene::FAssignBaseValueEvalSeconds> @ 146757bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
::RunInline_PerEntity<UE::MovieScene::FAssignBaseValueEvalSeconds>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,FAssignBaseValueEvalSeconds *param_2)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  undefined1 auStack_1e8 [32];
  FEntityAllocationIteratorProxy local_1c8;
  FEntityAllocationIterator local_1b8;
  FEntityAllocationProxy local_198;
  FEntityAllocationIterator local_188;
  FEntityAllocationProxy local_168;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [18];
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  FEntityManager *local_40;
  FEntityAllocationWriteContext local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (*(short *)this != -1 && (*(short *)&this->field_0x4 != -1 && *(short *)&this->field_0x2 != -1)
     ) {
    _local_158 = *(undefined8 *)this;
    aFStack_154._4_8_ = *(undefined8 *)&this->field_0x8;
    aFStack_154._12_8_ = *(undefined8 *)&this->field_0x10;
    aFStack_154._20_8_ = *(undefined8 *)&this->field_0x18;
    local_130.AllMask.Bits.NumBits = 0;
    aFStack_154._28_8_ = *(undefined8 *)&this->field_0x20;
    local_130.AllMask.Bits.MaxBits = 0x180;
    local_130.NoneMask.Bits.NumBits = 0;
    local_130.NoneMask.Bits.MaxBits = 0x180;
    local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ComplexMasks.ArrayNum = 0;
    local_130.ComplexMasks.ArrayMax = 0;
    local_80 = 0;
    local_7c = 0x180;
    local_48 = 0;
    local_44 = 0x180;
    AddAccessorToFilter((FComponentAccess *)local_158,&local_130);
    AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
    AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
    local_40 = param_1;
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_38,param_1);
    pFVar1 = local_40;
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      local_1c8.Manager = (FEntityManager *)0x0;
      local_1c8.Filter = (FEntityComponentFilter *)0x0;
      AccessorToString((FReadAccess *)local_158,local_40,(FString *)&local_1c8);
      AccessorToString((FReadAccess *)(local_158 + 2),pFVar1,(FString *)&local_1c8);
      AccessorToString((FWriteAccess *)(local_158 + 4),pFVar1,(FString *)&local_1c8);
      Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FAssignBaseValueEvalSeconds,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FAssignBaseValueEvalSeconds&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_1c8.Manager != (FEntityManager *)0x0) {
        FMemory::Free(local_1c8.Manager);
      }
    }
    EVar2 = FEntityManager::GetThreadingModel(local_40);
    FEntityManager::Iterate(local_40,&local_1c8,&local_130);
    FEntityAllocationIterator::FEntityAllocationIterator
              (&local_1b8,local_1c8.Manager,local_1c8.Filter);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_188,local_1c8.Manager);
    bVar3 = FEntityAllocationIterator::operator!=(&local_1b8,&local_188);
    if (bVar3) {
      do {
        FEntityAllocationIterator::operator*(&local_1b8,&local_198);
        pFVar4 = FEntityAllocationProxy::GetAllocation(&local_198);
        pFVar5 = (FEntityAllocation *)0x0;
        if (EVar2 == NoThreading) {
          pFVar4->LockMode = LockFree;
          pFVar5 = pFVar4;
        }
        local_168.Manager = local_198.Manager;
        local_168.AllocationIndex = local_198.AllocationIndex;
        local_168._12_4_ = local_198._12_4_;
        TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
        ForEachEntityImpl<UE::MovieScene::FAssignBaseValueEvalSeconds,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
                  (param_2,&local_168,local_38[0],
                   (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
                    *)local_158);
        if (pFVar5 != (FEntityAllocation *)0x0) {
          pFVar5->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_1b8);
        bVar3 = FEntityAllocationIterator::operator!=(&local_1b8,&local_188);
      } while (bVar3);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_188);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_1b8);
    if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// ScheduleImpl<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*> @ 146758b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
::ScheduleImpl<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*>
          (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UMovieSceneAudioSystem **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskID FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar11;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar12;
  longlong *in_stack_00000038;
  undefined1 auStackY_258 [32];
  FComponentTypeID local_208;
  FComponentTypeID local_206;
  FComponentTypeID local_204;
  FComponentTypeID local_202;
  FComponentTypeID local_200;
  FComponentTypeID local_1fe;
  FComponentTypeID local_1fc;
  FComponentTypeID local_1fa;
  FComponentTypeID local_1f8;
  FComponentTypeID local_1f6;
  FTaskID local_1f4;
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
  *local_1e8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1e0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1d8 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1e0 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)&this->field_0x2 == -1 ||
       ((*(short *)&this->field_0x6 == -1 ||
        (*(short *)&this->field_0xa == -1 || *(short *)&this->field_0x8 == -1)) ||
       *(short *)&this->field_0x4 == -1)) ||
     (bVar7 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                            *)this,(FEntityManager *)param_2), !bVar7)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_146759299;
  }
  pTVar10 = ::operator_new(0x58);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateAudio_MovieScene_UE__UFEntityIDAccess_23_U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_N_23_U823_U__TOptionalReadAccess_PEAVUObject___23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFEvaluateAudio_MovieScene_UE__UFEntityIDAccess_23_U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_N_23_U823_U__TOptionalReadAccess_PEAVUObject___23__MovieScene_UE__6B_
    ;
    lVar3 = *in_stack_00000038;
    pTVar10[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
    pTVar10[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
    lVar3 = *(longlong *)(lVar3 + 0x28);
    if ((*(longlong *)(lVar3 + 0x580) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return (FTaskID)iVar8;
    }
    pTVar12 = pTVar10 + 1;
    pTVar10[2]._padding_ = *(longlong *)(lVar3 + 0x580);
    uVar5 = *(undefined4 *)&this->field_0x4;
    lVar3 = *(longlong *)&this->field_0x8;
    pTVar10[2].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->field_0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)uVar5;
    pTVar10[3]._padding_ = lVar3;
    uVar5 = *(undefined4 *)&this->field_0x14;
    lVar3 = *(longlong *)&this->field_0x18;
    pTVar10[3].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->field_0x10;
    pTVar10[3].WeakReferenceCount = (atomic<int>)uVar5;
    pTVar10[4]._padding_ = lVar3;
    uVar5 = *(undefined4 *)&this->field_0x24;
    lVar3 = *(longlong *)&this->field_0x28;
    pTVar10[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->field_0x20;
    pTVar10[4].WeakReferenceCount = (atomic<int>)uVar5;
    pTVar10[5]._padding_ = lVar3;
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return (FTaskID)iVar8;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  uVar2 = *(ushort *)&this->field_0x2;
  local_148.MaxBits._0_1_ = 0x80;
  local_148.MaxBits._1_1_ = '\x01';
  local_148.MaxBits._2_1_ = '\0';
  local_148.MaxBits._3_1_ = '\0';
  local_148.NumBits._0_1_ = '\0';
  local_148.NumBits._1_1_ = '\0';
  local_148.NumBits._2_1_ = '\0';
  local_148.NumBits._3_1_ = '\0';
  local_58 = 0;
  local_54 = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x6;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x8;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0xa;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0xc;
  if (uVar2 != 0xffff) {
    iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
    }
    if ((local_148.NumBits <= (int)(uint)uVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return (FTaskID)iVar8;
    }
    pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  local_108.Bits.NumBits = 0;
  local_108.Bits.MaxBits = 0x180;
  local_a0 = 0;
  local_9c = 0x180;
  local_98 = (void *)0x0;
  local_90 = 0;
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_208.Value = *(ushort *)&this->field_0x2;
  local_1c8._First = &local_208;
  local_1c8._Last = &local_206;
  FComponentMask::SetAll(&local_108,&local_1c8);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_204.Value = *(ushort *)&this->field_0x4;
  local_1b8._First = &local_204;
  local_1b8._Last = &local_202;
  FComponentMask::SetAll(&local_108,&local_1b8);
  if ((*(short *)&this->field_0x6 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_200.Value = *(ushort *)&this->field_0x6;
  local_1a8._First = &local_200;
  local_1a8._Last = &local_1fe;
  FComponentMask::SetAll(&local_108,&local_1a8);
  if ((*(short *)&this->field_0x8 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_1fc.Value = *(ushort *)&this->field_0x8;
  local_198._First = &local_1fc;
  local_198._Last = &local_1fa;
  FComponentMask::SetAll(&local_108,&local_198);
  if ((*(short *)&this->field_0xa == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_1f8.Value = *(ushort *)&this->field_0xa;
  local_188._First = &local_1f8;
  local_188._Last = &local_1f6;
  FComponentMask::SetAll(&local_108,&local_188);
  local_170 = &local_1e8;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>::ScheduleImpl<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1e8 = this;
  pTVar11 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1e0);
  pTVar6 = local_1d8;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168._0_8_ = pTVar12;
  local_168._8_8_ = pTVar10;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1f4,local_1d8,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_168,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar11,(FEntityComponentFilter *)&local_178,&local_108,(FComponentMask *)&local_148
            );
  if (local_1f4.Index == -1) {
    if (((ulonglong)pTVar6[1].Object & 4) != 0) {
      FVar9 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_1f4.Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
      if (local_1f4.Index != -1) goto LAB_146759246;
    }
  }
  else {
LAB_146759246:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_1f4,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_1f4,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1f4.Index;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_146759299:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*> @ 146759a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::
ScheduleImpl<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UWorld **param_5,FInstanceRegistry **param_6,
          UMovieSceneConstraintSystem **param_7)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  longlong lVar3;
  UMovieSceneConstraintSystem *pUVar4;
  FInstanceRegistry *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar9;
  bool bVar10;
  int iVar11;
  FTaskID FVar12;
  TReferenceControllerBase<1> *pTVar13;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar14;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar15;
  longlong *in_stack_00000048;
  undefined1 auStackY_268 [32];
  FComponentTypeID local_218;
  FComponentTypeID local_216;
  FComponentTypeID local_214;
  FComponentTypeID local_212;
  FComponentTypeID local_210;
  FComponentTypeID local_20e;
  FComponentTypeID local_20c;
  FComponentTypeID local_20a;
  FTaskID local_208;
  FTaskID local_204;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
  *local_1f8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1f0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  code *local_198;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
  **local_190;
  undefined1 local_188 [16];
  code *local_178;
  uchar local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1f0 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x2 == -1 ||
       (*(short *)&this->field_0x6 == -1 || *(short *)&this->field_0x4 == -1))) ||
     (bVar10 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
               ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                             *)this,(FEntityManager *)param_2), !bVar10)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14675a064;
  }
  pTVar13 = ::operator_new(0x58);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateConstraintChannels_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFConstraintComponentData___23_U__TReadAccess_UFFrameTime___23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFEvaluateConstraintChannels_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFConstraintComponentData___23_U__TReadAccess_UFFrameTime___23__MovieScene_UE__6B_
    ;
    lVar3 = *in_stack_00000048;
    pUVar4 = *param_7;
    pFVar5 = *param_6;
    *(FInstanceRegistry **)&pTVar13[1].SharedReferenceCount = pFVar5;
    pTVar13[2]._padding_ = (longlong)pUVar4;
    pTVar13[2].SharedReferenceCount = (atomic<int>)(int)lVar3;
    pTVar13[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
    if ((((pFVar5 == (FInstanceRegistry *)0x0) || (pUVar4 == (UMovieSceneConstraintSystem *)0x0)) ||
        (lVar3 == 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("World && InstanceRegistry && System",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneConstraintSystem.cpp"
                            ,0x91,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return (FTaskID)iVar11;
    }
    uVar7 = *(undefined4 *)&this->field_0x8;
    uVar8 = *(undefined4 *)&this->field_0xc;
    pTVar15 = pTVar13 + 1;
    pTVar13[3]._padding_ = *(longlong *)this;
    pTVar13[3].SharedReferenceCount = (atomic<int>)uVar7;
    pTVar13[3].WeakReferenceCount = (atomic<int>)uVar8;
    uVar7 = *(undefined4 *)&this->field_0x18;
    uVar8 = *(undefined4 *)&this->field_0x1c;
    pTVar13[4]._padding_ = *(longlong *)&this->field_0x10;
    pTVar13[4].SharedReferenceCount = (atomic<int>)uVar7;
    pTVar13[4].WeakReferenceCount = (atomic<int>)uVar8;
    pTVar13[5]._padding_ = *(longlong *)&this->field_0x20;
    if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return (FTaskID)iVar11;
    }
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  uVar2 = *(ushort *)this;
  local_148.MaxBits = 0x180;
  local_148.NumBits = 0;
  local_58 = 0;
  local_54 = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x2;
  iVar11 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar11) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar11);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar11 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar11) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar11);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x6;
  iVar11 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar11) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar11);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_108.Bits.NumBits = 0;
  local_108.Bits.MaxBits = 0x180;
  local_a0 = 0;
  local_9c = 0x180;
  local_98 = (void *)0x0;
  local_90 = 0;
  if ((*(short *)this == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("In->ComponentType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                          ,0x1a8,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  local_218.Value = *(ushort *)this;
  local_1d8._First = &local_218;
  local_1d8._Last = &local_216;
  FComponentMask::SetAll(&local_108,&local_1d8);
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("In->ComponentType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                          ,0x1a8,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  local_214.Value = *(ushort *)&this->field_0x2;
  local_1c8._First = &local_214;
  local_1c8._Last = &local_212;
  FComponentMask::SetAll(&local_108,&local_1c8);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("In->ComponentType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                          ,0x1a8,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  local_210.Value = *(ushort *)&this->field_0x4;
  local_1b8._First = &local_210;
  local_1b8._Last = &local_20e;
  FComponentMask::SetAll(&local_108,&local_1b8);
  if ((*(short *)&this->field_0x6 == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("In->ComponentType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                          ,0x1a8,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar11 = (*pcVar6)();
    return (FTaskID)iVar11;
  }
  local_20c.Value = *(ushort *)&this->field_0x6;
  local_1a8._First = &local_20c;
  local_1a8._Last = &local_20a;
  FComponentMask::SetAll(&local_108,&local_1a8);
  local_190 = &local_1f8;
  local_198 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>::ScheduleImpl<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1f8 = this;
  pTVar14 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1f0);
  pTVar9 = local_1e8;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188._0_8_ = pTVar15;
  local_188._8_8_ = pTVar13;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_208,local_1e8,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_188,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar14,(FEntityComponentFilter *)&local_198,&local_108,(FComponentMask *)&local_148
            );
  if (local_208.Index == -1) {
    if (((ulonglong)pTVar9[1].Object & 4) != 0) {
      FVar12 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_208.Index = *(int *)CONCAT44(extraout_var,FVar12.Index);
      if (local_208.Index != -1) goto LAB_146759fc3;
    }
  }
  else {
LAB_146759fc3:
    local_170 = '\0';
    local_178 = `UE::MovieScene::
                SchedulePreTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>,UE::MovieScene::FEvaluateConstraintChannels>'
                ::__l2::FCallPreTask::Run;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168._0_8_ = pTVar15;
    local_168._8_8_ = pTVar13;
    IEntitySystemScheduler::AddTask
              ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_204,pTVar9,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_168);
    IEntitySystemScheduler::AddChildFront((IEntitySystemScheduler *)param_3,local_208,local_204);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_208,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_208.Index;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_14675a064:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*> @ 14675b430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
::ScheduleImpl<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UMovieSceneAudioSystem **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar7;
  FTaskParams *this_00;
  bool bVar8;
  int iVar9;
  FTaskID FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  ushort *puVar14;
  uint uVar15;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_238 [32];
  FComponentTypeID local_1e8;
  FComponentTypeID local_1e6;
  FComponentTypeID local_1e4;
  FComponentTypeID local_1e2;
  FComponentTypeID local_1e0;
  FComponentTypeID local_1de;
  FTaskID local_1dc;
  TReferenceControllerBase<1> *local_1d8;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
  *local_1c8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1c0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1b8;
  FTaskParams *local_1b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FEntityComponentFilter local_108;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1b8 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1c0 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (local_1b0 = param_3,
     bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
             ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                           *)this,(FEntityManager *)param_2), !bVar8)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14675b9f0;
  }
  pTVar11 = ::operator_new(0x78);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_1d8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar11 = pTVar13;
  }
  else {
    local_1d8 = pTVar11 + 1;
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFGatherAudioInputs_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_UFMovieSceneAudioInputData___23_U__TReadOneOrMoreOfAccessor_NNNNNNNNNVFString___J_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFGatherAudioInputs_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_UFMovieSceneAudioInputData___23_U__TReadOneOrMoreOfAccessor_NNNNNNNNNVFString___J_N_23__MovieScene_UE__6B_
    ;
    uVar3 = *in_stack_00000038;
    pTVar11[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    uVar5 = *(undefined4 *)&this->field_0x8;
    uVar6 = *(undefined4 *)&this->field_0xc;
    pTVar11[2]._padding_ = *(longlong *)this;
    pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x18;
    uVar6 = *(undefined4 *)&this->field_0x1c;
    pTVar11[3]._padding_ = *(longlong *)&this->field_0x10;
    pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x28;
    uVar6 = *(undefined4 *)&this->field_0x2c;
    pTVar11[4]._padding_ = *(longlong *)&this->field_0x20;
    pTVar11[4].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[4].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x38;
    uVar6 = *(undefined4 *)&this->field_0x3c;
    pTVar11[5]._padding_ = *(longlong *)&this->field_0x30;
    pTVar11[5].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[5].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x48;
    uVar6 = *(undefined4 *)&this->field_0x4c;
    pTVar11[6]._padding_ = *(longlong *)&this->field_0x40;
    pTVar11[6].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[6].WeakReferenceCount = (atomic<int>)uVar6;
    pTVar11[7]._padding_ = *(longlong *)&this->field_0x50;
    if ((local_1d8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  uVar2 = *(ushort *)this;
  local_148.NumBits._0_1_ = '\0';
  local_148.NumBits._1_1_ = '\0';
  local_148.NumBits._2_1_ = '\0';
  local_148.NumBits._3_1_ = '\0';
  local_148.MaxBits._0_1_ = 0x80;
  local_148.MaxBits._1_1_ = '\x01';
  local_148.MaxBits._2_1_ = '\0';
  local_148.MaxBits._3_1_ = '\0';
  local_58 = 0;
  local_54 = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x2;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  puVar14 = (ushort *)&this->field_0x6;
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  do {
    uVar2 = *puVar14;
    if (uVar2 != 0xffff) {
      iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
      if (0 < iVar9) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
      }
      if ((local_148.NumBits <= (int)(uint)uVar2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return (FTaskID)iVar9;
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
    }
    uVar15 = (int)pTVar13 + 1;
    pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)uVar15;
    puVar14 = puVar14 + 2;
  } while (uVar15 < 0xc);
  local_108.AllMask.Bits.NumBits = 0;
  local_108.AllMask.Bits.MaxBits = 0x180;
  local_108.NoneMask.Bits.NumBits = 0;
  local_108.NoneMask.Bits.MaxBits = 0x180;
  local_108.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ComplexMasks.ArrayNum = 0;
  local_108.ComplexMasks.ArrayMax = 0;
  if ((*(short *)this == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1e8.Value = *(ushort *)this;
  local_1a8._First = &local_1e8;
  local_1a8._Last = &local_1e6;
  FComponentMask::SetAll(&local_108.AllMask,&local_1a8);
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1e4.Value = *(ushort *)&this->field_0x2;
  local_198._First = &local_1e4;
  local_198._Last = &local_1e2;
  FComponentMask::SetAll(&local_108.AllMask,&local_198);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1e0.Value = *(ushort *)&this->field_0x4;
  local_188._First = &local_1e0;
  local_188._Last = &local_1de;
  FComponentMask::SetAll(&local_108.AllMask,&local_188);
  AddAccessorToFilter<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
            ((TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
              *)&this->field_0x6,&local_108);
  local_170 = &local_1c8;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>::ScheduleImpl<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1c8 = this;
  pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1c0);
  this_00 = local_1b0;
  pTVar7 = local_1b8;
  local_168._0_8_ = local_1d8;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168._8_8_ = pTVar11;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)local_1b0,(FTaskParams *)&local_1dc,local_1b8,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_168,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar12,(FEntityComponentFilter *)&local_178,&local_108.AllMask,
             (FComponentMask *)&local_148);
  if (local_1dc.Index == -1) {
    if (((ulonglong)pTVar7[1].Object & 4) != 0) {
      FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
      local_1dc.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
      if (local_1dc.Index != -1) goto LAB_14675b98b;
    }
  }
  else {
LAB_14675b98b:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)this_00,local_1dc,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)this_00,local_1dc,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1dc.Index;
  if (local_108.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ComplexMasks.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14675b9f0:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*> @ 14675ba20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
::ScheduleImpl<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UMovieSceneAudioSystem **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar7;
  bool bVar8;
  int iVar9;
  FTaskID FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_228 [32];
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6;
  FComponentTypeID local_1d4;
  FComponentTypeID local_1d2;
  FComponentTypeID local_1d0;
  FComponentTypeID local_1ce;
  FTaskID local_1cc;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
  *local_1c0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1b8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1b0 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1b8 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                            *)this,(FEntityManager *)param_2), !bVar8)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14675bee8;
  }
  pTVar11 = ::operator_new(0x48);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar13 = pTVar11 + 1;
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFGatherAudioTriggers_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_VFName___23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFGatherAudioTriggers_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneAudioComponentData___23_U__TReadAccess_VFName___23__MovieScene_UE__6B_
    ;
    uVar3 = *in_stack_00000038;
    pTVar11[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    uVar5 = *(undefined4 *)&this->field_0x8;
    uVar6 = *(undefined4 *)&this->field_0xc;
    pTVar11[2]._padding_ = *(longlong *)this;
    pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x18;
    uVar6 = *(undefined4 *)&this->field_0x1c;
    pTVar11[3]._padding_ = *(longlong *)&this->field_0x10;
    pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
    pTVar11[4]._padding_ = *(longlong *)&this->field_0x20;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  uVar2 = *(ushort *)this;
  local_148.MaxBits._0_1_ = 0x80;
  local_148.MaxBits._1_1_ = '\x01';
  local_148.MaxBits._2_1_ = '\0';
  local_148.MaxBits._3_1_ = '\0';
  local_148.NumBits._0_1_ = '\0';
  local_148.NumBits._1_1_ = '\0';
  local_148.NumBits._2_1_ = '\0';
  local_148.NumBits._3_1_ = '\0';
  local_58 = 0;
  local_54 = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x2;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_108.Bits.NumBits = 0;
  local_108.Bits.MaxBits = 0x180;
  local_a0 = 0;
  local_9c = 0x180;
  local_98 = (void *)0x0;
  local_90 = 0;
  if ((*(short *)this == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1d8.Value = *(ushort *)this;
  local_1a8._First = &local_1d8;
  local_1a8._Last = &local_1d6;
  FComponentMask::SetAll(&local_108,&local_1a8);
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1d4.Value = *(ushort *)&this->field_0x2;
  local_198._First = &local_1d4;
  local_198._Last = &local_1d2;
  FComponentMask::SetAll(&local_108,&local_198);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1d0.Value = *(ushort *)&this->field_0x4;
  local_188._First = &local_1d0;
  local_188._Last = &local_1ce;
  FComponentMask::SetAll(&local_108,&local_188);
  local_170 = &local_1c0;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>::ScheduleImpl<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1c0 = this;
  pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1b8);
  pTVar7 = local_1b0;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168._0_8_ = pTVar13;
  local_168._8_8_ = pTVar11;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1cc,local_1b0,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_168,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar12,(FEntityComponentFilter *)&local_178,&local_108,(FComponentMask *)&local_148
            );
  if (local_1cc.Index == -1) {
    if (((ulonglong)pTVar7[1].Object & 4) != 0) {
      FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_1cc.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
      if (local_1cc.Index != -1) goto LAB_14675be8d;
    }
  }
  else {
LAB_14675be8d:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1cc.Index;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14675bee8:
  return (FTaskID)(int)param_1;
}

// Dispatch<UE::MovieScene::FEvaluateSkeletalAnimations,TObjectPtr<UMovieSceneEntitySystemLinker>_&,UE::MovieScene::FSkeletalAnimationSystemData_*> @ 1467d76f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::TEntityTaskComponents<>::
Dispatch<UE::MovieScene::FEvaluateSkeletalAnimations,TObjectPtr<UMovieSceneEntitySystemLinker>_&,UE::MovieScene::FSkeletalAnimationSystemData_*>
          (TEntityTaskComponents<> *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,TObjectPtr<UMovieSceneEntitySystemLinker> *param_4,
          FSkeletalAnimationSystemData **param_5)

{
  code *pcVar1;
  FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pFVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  bool bVar14;
  EEntityThreadingModel EVar15;
  TRefCountPtr<FBaseGraphTask> TVar16;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  FTaskBase *pFVar18;
  FTaskBase *this_01;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_108 [32];
  EExtendedTaskPriority local_d8;
  ETaskPriority local_d7 [3];
  FComponentTypeID local_d4;
  FComponentTypeID local_d2;
  FTaskBase *local_d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_c8;
  FEvaluateSkeletalAnimations local_b8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
    EVar15 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
    if (EVar15 != NoThreading) {
      local_d4.Value = 0xffff;
      local_c8._First = &local_d4;
      local_4c = 4;
      local_c8._Last = &local_d2;
      this_01 = (FTaskBase *)0x0;
      local_58 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_50 = 0;
      FSystemTaskPrerequisites::FilterByComponent
                ((FSystemTaskPrerequisites *)param_3,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&stack0xffffffffffffff88,&local_c8);
      pFVar18 = (FTaskBase *)&stack0xffffffffffffff88;
      if (local_50 == 0) {
        pFVar18 = this_01;
      }
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x138,8);
      if (this_00 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)pFVar18);
        this_00->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_U__TUnstructuredTask_UFEvaluateSkeletalAnimations_MovieScene_UE___MovieScene_UE____6B_
        ;
        this_01 = this_00;
      }
      FEvaluateSkeletalAnimations::FEvaluateSkeletalAnimations
                ((FEvaluateSkeletalAnimations *)(this_01 + 1),
                 (UMovieSceneEntitySystemLinker *)*param_5,
                 (FSkeletalAnimationSystemData *)*in_stack_00000038);
      uVar3 = this->field_0xc;
      uVar4 = this->field_0xd;
      uVar5 = *(undefined2 *)&this->field_0xe;
      uVar6 = *(undefined4 *)&this->field_0x10;
      uVar7 = *(undefined4 *)&this->field_0x14;
      this_01[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&this->field_0x8;
      this_01[1].ExtendedPriority = uVar3;
      this_01[1].TaskTriggered = (atomic<bool>)uVar4;
      this_01[1]._padding_ = uVar5;
      this_01[1].ExecutingThreadId = (atomic<unsigned_int>)uVar6;
      this_01[1]._padding_ = uVar7;
      uVar3 = this->field_0x20;
      uVar4 = this->field_0x21;
      uVar8 = this->field_0x22;
      uVar9 = this->field_0x23;
      uVar10 = this->field_0x24;
      uVar11 = this->field_0x25;
      uVar12 = this->field_0x26;
      uVar13 = this->field_0x27;
      this_01[1].TraceId = *(atomic<unsigned___int64> *)&this->field_0x18;
      pFVar2 = &this_01[1].Prerequisites;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[0] = uVar3;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[1] = uVar4;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[2] = uVar8;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[3] = uVar9;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[4] = uVar10;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[5] = uVar11;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[6] = uVar12;
      (pFVar2->Prerequisites).AllocatorInstance.InlineData[7] = uVar13;
      Tasks::Private::TranslatePriority
                (*(Type *)this_01[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData,
                 local_d7,&local_d8);
      Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_d7[0],local_d8,None);
      if (this_01 != (FTaskBase *)0x0) {
        LOCK();
        this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
        UNLOCK();
      }
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x138);
      if (param_4 != (TObjectPtr<UMovieSceneEntitySystemLinker> *)0x0) {
        if (this_01 != (FTaskBase *)0x0) {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
        }
        local_d0 = this_01;
        FSystemSubsequentTasks::AddRootTask
                  ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_d0);
      }
      param_1->_padding_ = (longlong)this_01;
      FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&stack0xffffffffffffff88;
      if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar17 = local_58;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar17,local_50);
      if (local_58 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
      FMemory::Free((void *)local_58);
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
  }
  else {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2331281323118821058>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x13e,"EntityManager->IsLockedDown()");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      TVar16.Reference = (FBaseGraphTask *)(*pcVar1)();
      return (TRefCountPtr<FBaseGraphTask>)TVar16.Reference;
    }
  }
  FEvaluateSkeletalAnimations::FEvaluateSkeletalAnimations
            (&local_b8,(UMovieSceneEntitySystemLinker *)*param_5,
             (FSkeletalAnimationSystemData *)*in_stack_00000038);
  FEvaluateSkeletalAnimations::Run(&local_b8);
  param_1->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.PreAnimatedAnimInstanceStorage.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.PreAnimatedMontageStorage.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.PreAnimatedStorage.SharedReferenceCount.ReferenceController);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&> @ 1467d98a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&>
          (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,FInstanceRegistry **param_4,
          TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *param_5)

{
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  FTaskBase *pFVar8;
  FTaskBase *this_02;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_268 [32];
  EExtendedTaskPriority local_238;
  ETaskPriority local_237 [3];
  FComponentTypeID local_234;
  FComponentTypeID local_232;
  FComponentTypeID local_230;
  FComponentTypeID local_22e;
  FComponentTypeID local_22c;
  FComponentTypeID local_22a;
  FComponentTypeID local_228;
  FComponentTypeID local_226 [3];
  FEvaluateFade local_220;
  FSystemSubsequentTasks *local_208;
  FTaskBase *local_200;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_208 = (FSystemSubsequentTasks *)param_4;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)&this->field_0x2 == -1 ||
       (*(short *)&this->field_0x6 == -1 || *(short *)&this->field_0x4 == -1)) ||
     (bVar4 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar4)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar5 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar5 != NoThreading) {
        local_1f8._First = &local_234;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_1f8._Last = &local_232;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_234.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_230.Value = *(ushort *)&this->field_0x2;
        local_1e8._First = &local_230;
        local_1e8._Last = &local_22e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_22c.Value = *(ushort *)&this->field_0x4;
        local_1d8._First = &local_22c;
        local_1d8._Last = &local_22a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1d8);
        if ((*(short *)&this->field_0x6 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_228.Value = *(ushort *)&this->field_0x6;
        local_1c8._First = &local_228;
        local_1c8._Last = local_226;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1c8);
        pFVar8 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar8 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x218,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar8);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFEvaluateFade_MovieScene_UE__UFEntityIDAccess_23_U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFFadeComponentData_MovieScene_UE___23_U__TReadAccess_N_23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        FVar1 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)(in_stack_00000038 + 1);
        uVar2 = *in_stack_00000038;
        if (FVar1 == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          this_02[2].TraceId = (atomic<unsigned___int64>)param_5->Object;
          *(undefined8 *)this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData = uVar2
          ;
          this_02[2].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
               (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
        }
        else {
          LOCK();
          *(atomic<int> *)((longlong)FVar1 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar1 + 8) + 1);
          UNLOCK();
          this_02[2].TraceId = (atomic<unsigned___int64>)param_5->Object;
          *(undefined8 *)this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData = uVar2
          ;
          this_02[2].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = FVar1;
          LOCK();
          *(atomic<int> *)((longlong)FVar1 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar1 + 8) + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar1);
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_237,&local_238);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_237[0],local_238,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x218);
        if (local_208 != (FSystemSubsequentTasks *)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_200 = this_02;
          FSystemSubsequentTasks::AddRootTask(local_208,(FBaseGraphTask *)&local_200);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_1b8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1b8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820987>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x185,"EntityManager->IsLockedDown()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
        return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
      }
    }
    local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)in_stack_00000038[1];
    local_220.PreAnimatedStorage.Object = (FPreAnimatedFadeStateStorage *)*in_stack_00000038;
    if (local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      local_220.InstanceRegistry = (FInstanceRegistry *)param_5->Object;
    }
    else {
      LOCK();
      (local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           = (atomic<int>)
             ((int)(local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
      UNLOCK();
      local_220.InstanceRegistry = (FInstanceRegistry *)param_5->Object;
      LOCK();
      (local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           = (atomic<int>)
             ((int)(local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController);
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
    ::Run(this_00,&local_220);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.PreAnimatedStorage.SharedReferenceCount.ReferenceController);
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels> @ 1467d9c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::Dispatch_PerAllocation<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  EEntityThreadingModel EVar4;
  FComponentMask *pFVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  FTaskBase *pFVar8;
  FTaskBase *this_02;
  FSystemSubsequentTasks *in_stack_00000028;
  undefined1 auStackY_298 [32];
  FComponentTypeID local_268;
  FComponentTypeID local_266;
  EExtendedTaskPriority local_264;
  ETaskPriority local_263 [3];
  FComponentTypeID local_260;
  FComponentTypeID local_25e;
  FComponentTypeID local_25c;
  FComponentTypeID local_25a;
  FComponentTypeID local_258;
  FComponentTypeID local_256;
  FComponentTypeID local_254;
  FComponentTypeID local_252;
  FComponentTypeID local_250;
  FComponentTypeID local_24e;
  FEvaluateQuaternionInterpolationRotationChannels local_24c [4];
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  FTaskBase *local_238;
  FTaskBase *local_230;
  FTaskBase *local_228;
  FTaskBase *local_220;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  undefined1 local_1c8 [224];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar1 = *(ushort *)this;
  if (uVar1 == 0xffff) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar5 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar5->Bits).NumBits) &&
       ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        EVar4 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
        if (EVar4 != NoThreading) {
          local_218._First = &local_260;
          local_1c8._44_4_ = 4;
          local_218._Last = &local_25e;
          this_02 = (FTaskBase *)0x0;
          local_1c8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1c8._40_4_ = 0;
          local_260.Value = 0xffff;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1c8,&local_218);
          if ((*(short *)this == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
          }
          local_25c.Value = *(ushort *)this;
          local_208._First = &local_25c;
          local_208._Last = &local_25a;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1c8,&local_208);
          if (*(ushort *)&this->field_0x2 != 0xffff) {
            local_248._First = &local_268;
            local_248._Last = &local_266;
            local_268.Value = *(ushort *)&this->field_0x2;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_248);
          }
          if (*(ushort *)&this->field_0x6 != 0xffff) {
            local_248._First = &local_268;
            local_248._Last = &local_266;
            local_268.Value = *(ushort *)&this->field_0x6;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_248);
          }
          if (*(ushort *)&this->field_0xa != 0xffff) {
            local_248._First = &local_268;
            local_248._Last = &local_266;
            local_268.Value = *(ushort *)&this->field_0xa;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_248);
          }
          if (*(ushort *)&this->field_0xe != 0xffff) {
            local_1f8._First = &local_258;
            local_1f8._Last = &local_256;
            local_258.Value = *(ushort *)&this->field_0xe;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_1f8);
          }
          if (*(ushort *)&this->field_0x12 != 0xffff) {
            local_1e8._First = &local_254;
            local_1e8._Last = &local_252;
            local_254.Value = *(ushort *)&this->field_0x12;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_1e8);
          }
          if (*(ushort *)&this->field_0x16 != 0xffff) {
            local_1d8._First = &local_250;
            local_1d8._Last = &local_24e;
            local_250.Value = *(ushort *)&this->field_0x16;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_1d8);
          }
          pFVar8 = (FTaskBase *)local_1c8;
          if (local_1c8._40_4_ == 0) {
            pFVar8 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x220,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar8);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityAllocationTask_UFEvaluateQuaternionInterpolationRotationChannels_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadOneOrMoreOfAccessor_UFSourceDoubleChannel_MovieScene_UE__U123_U123__23_U__TOptionalWriteAccess_N_23_U623_U623__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          ::
          TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                    ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          *(undefined1 *)&this_02[2].Prerequisites.Prerequisites.ArrayNum = 0;
          Tasks::Private::TranslatePriority(*(Type *)&this_02[1].Pipe,local_263,&local_264);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_263[0],local_264,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,0x220);
          if (in_stack_00000028 != (FSystemSubsequentTasks *)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_238 = this_02;
            FSystemSubsequentTasks::AddRootTask(in_stack_00000028,(FBaseGraphTask *)&local_238);
            if (*(short *)&this->field_0xe != -1) {
              if (this_02 != (FTaskBase *)0x0) {
                LOCK();
                this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
                UNLOCK();
              }
              local_230 = this_02;
              FSystemSubsequentTasks::AddComponentTask
                        (in_stack_00000028,(FComponentTypeID)*(ushort *)&this->field_0xe,
                         (FBaseGraphTask *)&local_230);
            }
            if (*(short *)&this->field_0x12 != -1) {
              if (this_02 != (FTaskBase *)0x0) {
                LOCK();
                this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
                UNLOCK();
              }
              local_228 = this_02;
              FSystemSubsequentTasks::AddComponentTask
                        (in_stack_00000028,(FComponentTypeID)*(ushort *)&this->field_0x12,
                         (FBaseGraphTask *)&local_228);
            }
            if (*(short *)&this->field_0x16 != -1) {
              if (this_02 != (FTaskBase *)0x0) {
                LOCK();
                this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
                UNLOCK();
              }
              local_220 = this_02;
              FSystemSubsequentTasks::AddComponentTask
                        (in_stack_00000028,(FComponentTypeID)*(ushort *)&this->field_0x16,
                         (FBaseGraphTask *)&local_220);
            }
          }
          param_1->_padding_ = (longlong)this_02;
          FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_1c8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1c8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2331281323118820987>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                           ,0x185,"EntityManager->IsLockedDown()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
      }
      this_00 = TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                ::
                TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                          ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                            *)(local_1c8 + 0x30),(FEntityManager *)param_2,this);
      TEntityAllocationTaskBase<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
      ::Run(this_00,local_24c);
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      param_1->_padding_ = 0;
    }
    else {
      param_1->_padding_ = 0;
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ScheduleImpl<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&> @ 146801880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&>
          (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,FInstanceRegistry **param_5,
          TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *param_6)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar7;
  bool bVar8;
  int iVar9;
  FTaskID FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  longlong *in_stack_00000040;
  undefined1 auStackY_228 [32];
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6;
  FComponentTypeID local_1d4;
  FComponentTypeID local_1d2;
  FComponentTypeID local_1d0;
  FComponentTypeID local_1ce;
  FTaskID local_1cc;
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  *local_1c0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1b8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1b0 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1b8 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)&this->field_0x2 == -1 ||
       (*(short *)&this->field_0x6 == -1 || *(short *)&this->field_0x4 == -1)) ||
     (bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar8)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_146801d77;
  }
  pTVar11 = ::operator_new(0x58);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateFade_MovieScene_UE__UFEntityIDAccess_23_U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFFadeComponentData_MovieScene_UE___23_U__TReadAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFEvaluateFade_MovieScene_UE__UFEntityIDAccess_23_U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFFadeComponentData_MovieScene_UE___23_U__TReadAccess_N_23__MovieScene_UE__6B_
    ;
    pTVar13 = (TReferenceControllerBase<1> *)in_stack_00000040[1];
    lVar3 = *in_stack_00000040;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      *(FPreAnimatedFadeStateStorage **)&pTVar11[1].SharedReferenceCount = param_6->Object;
      pTVar11[2]._padding_ = lVar3;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      *(FPreAnimatedFadeStateStorage **)&pTVar11[1].SharedReferenceCount = param_6->Object;
      pTVar11[2]._padding_ = lVar3;
      *(TReferenceControllerBase<1> **)&pTVar11[2].SharedReferenceCount = pTVar13;
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    uVar5 = *(undefined4 *)&this->field_0x8;
    uVar6 = *(undefined4 *)&this->field_0xc;
    pTVar13 = pTVar11 + 1;
    pTVar11[3]._padding_ = *(longlong *)this;
    pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x18;
    uVar6 = *(undefined4 *)&this->field_0x1c;
    pTVar11[4]._padding_ = *(longlong *)&this->field_0x10;
    pTVar11[4].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[4].WeakReferenceCount = (atomic<int>)uVar6;
    pTVar11[5]._padding_ = *(longlong *)&this->field_0x20;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  uVar2 = *(ushort *)&this->field_0x2;
  local_148.MaxBits._0_1_ = 0x80;
  local_148.MaxBits._1_1_ = '\x01';
  local_148.MaxBits._2_1_ = '\0';
  local_148.MaxBits._3_1_ = '\0';
  local_148.NumBits._0_1_ = '\0';
  local_148.NumBits._1_1_ = '\0';
  local_148.NumBits._2_1_ = '\0';
  local_148.NumBits._3_1_ = '\0';
  local_58 = 0;
  local_54 = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x6;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_108.Bits.NumBits = 0;
  local_108.Bits.MaxBits = 0x180;
  local_a0 = 0;
  local_9c = 0x180;
  local_98 = (void *)0x0;
  local_90 = 0;
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1d8.Value = *(ushort *)&this->field_0x2;
  local_1a8._First = &local_1d8;
  local_1a8._Last = &local_1d6;
  FComponentMask::SetAll(&local_108,&local_1a8);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1d4.Value = *(ushort *)&this->field_0x4;
  local_198._First = &local_1d4;
  local_198._Last = &local_1d2;
  FComponentMask::SetAll(&local_108,&local_198);
  if ((*(short *)&this->field_0x6 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1d0.Value = *(ushort *)&this->field_0x6;
  local_188._First = &local_1d0;
  local_188._Last = &local_1ce;
  FComponentMask::SetAll(&local_108,&local_188);
  local_170 = &local_1c0;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1c0 = this;
  pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1b8);
  pTVar7 = local_1b0;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168._0_8_ = pTVar13;
  local_168._8_8_ = pTVar11;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1cc,local_1b0,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_168,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar12,(FEntityComponentFilter *)&local_178,&local_108,(FComponentMask *)&local_148
            );
  if (local_1cc.Index == -1) {
    if (((ulonglong)pTVar7[1].Object & 4) != 0) {
      FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_1cc.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
      if (local_1cc.Index != -1) goto LAB_146801d24;
    }
  }
  else {
LAB_146801d24:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1cc.Index;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_146801d77:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels> @ 146801da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::ScheduleImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar6;
  FTaskParams *this_00;
  bool bVar7;
  int iVar8;
  FTaskID FVar9;
  FComponentMask *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  ushort *puVar14;
  uint uVar15;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000030;
  undefined1 auStackY_218 [32];
  FComponentTypeID local_1c8;
  FComponentTypeID local_1c6;
  FTaskID local_1c4;
  TReferenceControllerBase<1> *local_1c0;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  *local_1b0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1a8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1a0;
  FTaskParams *local_198;
  FEntityManager *local_190;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  FEntityComponentFilter local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar2 = *(ushort *)this;
  local_1a0 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1a8 = in_stack_00000030;
  if (uVar2 != 0xffff) {
    local_198 = param_3;
    local_190 = param_1;
    pFVar10 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar2 < (pFVar10->Bits).NumBits) &&
       ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) != 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      pTVar11 = ::operator_new(0x60);
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        local_1c0 = (TReferenceControllerBase<1> *)&DAT_00000010;
        pTVar11 = pTVar13;
      }
      else {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        local_1c0 = pTVar11 + 1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateQuaternionInterpolationRotationChannels_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadOneOrMoreOfAccessor_UFSourceDoubleChannel_MovieScene_UE__U123_U123__23_U__TOptionalWriteAccess_N_23_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar11[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFEvaluateQuaternionInterpolationRotationChannels_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadOneOrMoreOfAccessor_UFSourceDoubleChannel_MovieScene_UE__U123_U123__23_U__TOptionalWriteAccess_N_23_U623_U623__MovieScene_UE__6B_
        ;
        *(undefined1 *)&pTVar11[1].SharedReferenceCount = 0;
        uVar4 = *(undefined4 *)&this->field_0x8;
        uVar5 = *(undefined4 *)&this->field_0xc;
        pTVar11[2]._padding_ = *(longlong *)this;
        pTVar11[2].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[2].WeakReferenceCount = (atomic<int>)uVar5;
        uVar4 = *(undefined4 *)&this->field_0x18;
        uVar5 = *(undefined4 *)&this->field_0x1c;
        pTVar11[3]._padding_ = *(longlong *)&this->field_0x10;
        pTVar11[3].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[3].WeakReferenceCount = (atomic<int>)uVar5;
        uVar4 = *(undefined4 *)&this->field_0x28;
        uVar5 = *(undefined4 *)&this->field_0x2c;
        pTVar11[4]._padding_ = *(longlong *)&this->field_0x20;
        pTVar11[4].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[4].WeakReferenceCount = (atomic<int>)uVar5;
        uVar4 = *(undefined4 *)&this->field_0x38;
        uVar5 = *(undefined4 *)&this->field_0x3c;
        pTVar11[5]._padding_ = *(longlong *)&this->field_0x30;
        pTVar11[5].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[5].WeakReferenceCount = (atomic<int>)uVar5;
        if (local_1c0 == (TReferenceControllerBase<1> *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return (FTaskID)iVar8;
          }
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      uVar2 = *(ushort *)this;
      local_110.NumBits = 0;
      local_110.MaxBits = 0x180;
      local_148.NumBits._0_1_ = '\0';
      local_148.NumBits._1_1_ = '\0';
      local_148.NumBits._2_1_ = '\0';
      local_148.NumBits._3_1_ = '\0';
      local_148.MaxBits._0_1_ = 0x80;
      local_148.MaxBits._1_1_ = '\x01';
      local_148.MaxBits._2_1_ = '\0';
      local_148.MaxBits._3_1_ = '\0';
      TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,uVar2 + 1);
      if (local_110.NumBits <= (int)(uint)uVar2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return (FTaskID)iVar8;
        }
      }
      puVar14 = (ushort *)&this->field_0x2;
      pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      do {
        uVar2 = *puVar14;
        if (uVar2 != 0xffff) {
          iVar8 = ((uint)uVar2 - local_110.NumBits) + 1;
          if (0 < iVar8) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar8);
          }
          if (local_110.NumBits <= (int)(uint)uVar2) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              iVar8 = (*pcVar3)();
              return (FTaskID)iVar8;
            }
          }
          pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
          *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
        }
        uVar15 = (int)pTVar13 + 1;
        pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)uVar15;
        puVar14 = puVar14 + 2;
      } while (uVar15 < 3);
      uVar2 = *(ushort *)&this->field_0xe;
      if (uVar2 != 0xffff) {
        iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
        if (0 < iVar8) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
        }
        if (local_148.NumBits <= (int)(uint)uVar2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return (FTaskID)iVar8;
          }
        }
        pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&this->field_0x12;
      if (uVar2 != 0xffff) {
        iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
        if (0 < iVar8) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
        }
        if (local_148.NumBits <= (int)(uint)uVar2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return (FTaskID)iVar8;
          }
        }
        pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&this->field_0x16;
      if (uVar2 != 0xffff) {
        iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
        if (0 < iVar8) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
        }
        if (local_148.NumBits <= (int)(uint)uVar2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return (FTaskID)iVar8;
          }
        }
        pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      local_d8.AllMask.Bits.NumBits = 0;
      local_d8.AllMask.Bits.MaxBits = 0x180;
      local_d8.NoneMask.Bits.NumBits = 0;
      local_d8.NoneMask.Bits.MaxBits = 0x180;
      local_d8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ComplexMasks.ArrayNum = 0;
      local_d8.ComplexMasks.ArrayMax = 0;
      if (*(short *)this == -1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return (FTaskID)iVar8;
        }
      }
      local_1c8.Value = *(ushort *)this;
      local_188._First = &local_1c8;
      local_188._Last = &local_1c6;
      FComponentMask::SetAll(&local_d8.AllMask,&local_188);
      AddAccessorToFilter<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
                ((TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
                  *)&this->field_0x2,&local_d8);
      local_170 = &local_1b0;
      local_178 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_1b0 = this;
      pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_158,local_1a8);
      this_00 = local_198;
      pTVar6 = local_1a0;
      local_168._0_8_ = local_1c0;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168._8_8_ = pTVar11;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)local_198,(FTaskParams *)&local_1c4,local_1a0,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_168,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar12,(FEntityComponentFilter *)&local_178,&local_d8.AllMask,
                 (FComponentMask *)&local_110);
      if (local_1c4.Index == -1) {
        if (((ulonglong)pTVar6[1].Object & 4) != 0) {
          FVar9 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
          local_1c4.Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
          if (local_1c4.Index != -1) goto LAB_1468022a6;
        }
      }
      else {
LAB_1468022a6:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)this_00,local_1c4,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)this_00,local_1c4,(FTaskID)0xffffffff);
      }
      param_1 = local_190;
      *(int *)&local_190->_padding_ = local_1c4.Index;
      if (local_d8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.ComplexMasks.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      goto LAB_146802301;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_146802301:
  return (FTaskID)(int)param_1;
}

// operator() @ 146812830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::
ScheduleImpl<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FWriteObjectResultNoop>'
::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FEntityAllocation *pFVar8;
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar2 = *piVar1;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4,1);
  uVar7 = 0;
  if ((int)uVar2 < *piVar1) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar8 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_18);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar8,(TRelativePtr<void,unsigned_int> *)(pFVar3 + (longlong)(int)uVar2 * 4));
  return;
}

// FilterAll @ 14682d010

TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x2,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x4,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterAll @ 14682d0e0

TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x2,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x4,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x6,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x8,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xa,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xc,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0xe,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x10,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x12,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

// FilterNone @ 14682d210

TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
::FilterNone(TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
             *this,TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
                   *__return_storage_ptr__,
            initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  undefined8 uVar1;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x2,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x4,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x6,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x8,
                      &__return_storage_ptr__->Filter);
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).NoneMask,&local_18);
  return __return_storage_ptr__;
}

// Dispatch_PerAllocation<UE::MovieScene::FAccumulateManualWeights> @ 146886a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::Dispatch_PerAllocation<UE::MovieScene::FAccumulateManualWeights>
          (TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  EEntityThreadingModel EVar4;
  FComponentMask *pFVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  FTaskBase *pFVar8;
  FTaskBase *this_02;
  FSystemSubsequentTasks *in_stack_00000028;
  undefined1 auStackY_248 [32];
  FComponentTypeID local_218;
  FComponentTypeID local_216;
  EExtendedTaskPriority local_214;
  ETaskPriority local_213 [3];
  FComponentTypeID local_210;
  FComponentTypeID local_20e;
  FComponentTypeID local_20c;
  FComponentTypeID local_20a;
  FAccumulateManualWeights local_208 [16];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  FTaskBase *local_1e8;
  FTaskBase *local_1e0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [208];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar1 = *(ushort *)&this->field_0x8;
  if (uVar1 == 0xffff) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar5 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar5->Bits).NumBits) &&
       ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        != 0)) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        EVar4 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
        if (EVar4 != NoThreading) {
          local_1d8._First = &local_210;
          local_1b8._44_4_ = 4;
          local_1d8._Last = &local_20e;
          this_02 = (FTaskBase *)0x0;
          local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1b8._40_4_ = 0;
          local_210.Value = 0xffff;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1d8);
          if (*(ushort *)this != 0xffff) {
            local_1f8._First = &local_218;
            local_1f8._Last = &local_216;
            local_218.Value = *(ushort *)this;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1b8,&local_1f8);
          }
          if (*(ushort *)&this->field_0x4 != 0xffff) {
            local_1f8._First = &local_218;
            local_1f8._Last = &local_216;
            local_218.Value = *(ushort *)&this->field_0x4;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1b8,&local_1f8);
          }
          if ((*(short *)&this->field_0x8 == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
          }
          local_20c.Value = *(ushort *)&this->field_0x8;
          local_1c8._First = &local_20c;
          local_1c8._Last = &local_20a;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1c8);
          pFVar8 = (FTaskBase *)local_1b8;
          if (local_1b8._40_4_ == 0) {
            pFVar8 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x210,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar8);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityAllocationTask_UFAccumulateManualWeights_MovieScene_UE__U__TReadOneOrMoreOfAccessor_NN_23_U__TWriteAccess_N_23__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
          ::
          TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                    ((TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData[0] = '\0';
          Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_213,&local_214);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_213[0],local_214,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,0x210);
          if (in_stack_00000028 != (FSystemSubsequentTasks *)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_1e8 = this_02;
            FSystemSubsequentTasks::AddRootTask(in_stack_00000028,(FBaseGraphTask *)&local_1e8);
            if ((*(short *)&this->field_0x8 == -1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("In->ComponentType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                   ,0x1f5,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
              return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
            }
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_1e0 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      (in_stack_00000028,(FComponentTypeID)*(ushort *)&this->field_0x8,
                       (FBaseGraphTask *)&local_1e0);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_1b8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1b8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2331281323118820987>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                           ,0x185,"EntityManager->IsLockedDown()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
      }
      this_00 = TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                ::
                TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                          ((TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                            *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
      TEntityAllocationTaskBase<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
      ::Run(this_00,local_208);
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      param_1->_padding_ = 0;
    }
    else {
      param_1->_padding_ = 0;
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerEntity<UE::MovieScene::FEvaluateEasings> @ 146887160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::Dispatch_PerEntity<UE::MovieScene::FEvaluateEasings>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3)

{
  code *pcVar1;
  bool bVar2;
  EEntityThreadingModel EVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  FTaskBase *pFVar6;
  atomic<unsigned_int> *paVar7;
  FTaskBase *this_02;
  FSystemSubsequentTasks *in_stack_00000028;
  undefined1 auStackY_258 [32];
  EExtendedTaskPriority local_228;
  ETaskPriority local_227 [3];
  FComponentTypeID local_224;
  FComponentTypeID local_222;
  FComponentTypeID local_220;
  FComponentTypeID local_21e;
  FComponentTypeID local_21c;
  FComponentTypeID local_21a;
  FComponentTypeID local_218;
  FComponentTypeID local_216;
  FEvaluateEasings local_214 [4];
  FTaskBase *local_210;
  FTaskBase *local_208;
  FTaskBase *local_200;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar2 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar2)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar3 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar3 != NoThreading) {
        local_1f8._First = &local_224;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_1f8._Last = &local_222;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_224.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)this == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_220.Value = *(ushort *)this;
        local_1e8._First = &local_220;
        local_1e8._Last = &local_21e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_21c.Value = *(ushort *)&this->field_0x2;
        local_1d8._First = &local_21c;
        local_1d8._Last = &local_21a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1d8);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_218.Value = *(ushort *)&this->field_0x4;
        local_1c8._First = &local_218;
        local_1c8._Last = &local_216;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1c8);
        pFVar6 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar6 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x208,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar6);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityTask_UFEvaluateEasings_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadAccess_UFEasingComponentData___23_U__TWriteAccess_N_23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
        ::
        TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                  ((TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        *(undefined1 *)&this_02[2].TraceId = 0;
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_227,&local_228);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_227[0],local_228,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x208);
        if (in_stack_00000028 != (FSystemSubsequentTasks *)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_210 = this_02;
          FSystemSubsequentTasks::AddRootTask(in_stack_00000028,(FBaseGraphTask *)&local_210);
          if ((*(short *)&this->field_0x4 == -1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1f5,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
            return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
          }
          if (this_02 == (FTaskBase *)0x0) {
            paVar7 = (atomic<unsigned_int> *)&DAT_00000030;
          }
          else {
            paVar7 = &this_02->RefCount;
            LOCK();
            *paVar7 = (atomic<unsigned_int>)((int)*paVar7 + 1);
            UNLOCK();
          }
          local_208 = this_02;
          FSystemSubsequentTasks::AddComponentTask
                    (in_stack_00000028,(FComponentTypeID)*(ushort *)&this->field_0x4,
                     (FBaseGraphTask *)&local_208);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            *paVar7 = (atomic<unsigned_int>)((int)*paVar7 + 1);
            UNLOCK();
          }
          local_200 = this_02;
          FSystemSubsequentTasks::AddRootTask(in_stack_00000028,(FBaseGraphTask *)&local_200);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar5,local_1b8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1b8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820909>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x1d3,"EntityManager->IsLockedDown()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
        return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
      }
    }
    this_00 = TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              ::
              TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                        ((TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
    ::Run(this_00,local_214);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerEntity<UE::MovieScene::FResetFinalWeightResults> @ 1468883c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::
Dispatch_PerEntity<UE::MovieScene::FResetFinalWeightResults>
          (TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> *this,
          FEntityManager *param_1,FSystemTaskPrerequisites *param_2,FSystemSubsequentTasks *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  EEntityThreadingModel EVar4;
  FComponentMask *pFVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  FTaskBase *pFVar8;
  atomic<unsigned_int> *paVar9;
  FTaskBase *this_02;
  FSystemSubsequentTasks *in_stack_00000028;
  undefined1 auStackY_238 [32];
  EExtendedTaskPriority local_208;
  ETaskPriority local_207 [3];
  FComponentTypeID local_204;
  FComponentTypeID local_202;
  FComponentTypeID local_200;
  FComponentTypeID local_1fe;
  FResetFinalWeightResults local_1fc [4];
  FTaskBase *local_1f8;
  FTaskBase *local_1f0;
  FTaskBase *local_1e8 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar1 = *(ushort *)this;
  if (uVar1 == 0xffff) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar5 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar5->Bits).NumBits) &&
       ((*(uint *)(pFVar5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        != 0)) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        EVar4 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
        if (EVar4 != NoThreading) {
          local_1d8._First = &local_204;
          local_1b8._44_4_ = 4;
          local_1d8._Last = &local_202;
          this_02 = (FTaskBase *)0x0;
          local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1b8._40_4_ = 0;
          local_204.Value = 0xffff;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1d8);
          if ((*(short *)this == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
          }
          local_200.Value = *(ushort *)this;
          local_1c8._First = &local_200;
          local_1c8._Last = &local_1fe;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1c8);
          pFVar8 = (FTaskBase *)local_1b8;
          if (local_1b8._40_4_ == 0) {
            pFVar8 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x208,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar8);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityTask_UFResetFinalWeightResults_MovieScene_UE__U__TWriteAccess_N_23__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
          ::
          TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
                    ((TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          *(undefined1 *)&this_02[2].TraceId = 0;
          Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_207,&local_208);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_207[0],local_208,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,0x208);
          if (in_stack_00000028 != (FSystemSubsequentTasks *)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_1f8 = this_02;
            FSystemSubsequentTasks::AddRootTask(in_stack_00000028,(FBaseGraphTask *)&local_1f8);
            if ((*(short *)this == -1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("In->ComponentType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                   ,0x1f5,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
              return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
            }
            if (this_02 == (FTaskBase *)0x0) {
              paVar9 = (atomic<unsigned_int> *)&DAT_00000030;
            }
            else {
              paVar9 = &this_02->RefCount;
              LOCK();
              *paVar9 = (atomic<unsigned_int>)((int)*paVar9 + 1);
              UNLOCK();
            }
            local_1f0 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      (in_stack_00000028,(FComponentTypeID)*(ushort *)this,
                       (FBaseGraphTask *)&local_1f0);
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              *paVar9 = (atomic<unsigned_int>)((int)*paVar9 + 1);
              UNLOCK();
            }
            local_1e8[0] = this_02;
            FSystemSubsequentTasks::AddRootTask(in_stack_00000028,(FBaseGraphTask *)local_1e8);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_1b8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1b8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2331281323118820909>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                           ,0x1d3,"EntityManager->IsLockedDown()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
      }
      this_00 = TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
                ::
                TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
                          ((TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
                            *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
      TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
      ::Run(this_00,local_1fc);
      if (local_f0 != (void *)0x0) {
        FMemory::Free(local_f0);
      }
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ScheduleImpl<UE::MovieScene::FAccumulateManualWeights> @ 146899420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::ScheduleImpl<UE::MovieScene::FAccumulateManualWeights>
          (TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar6;
  FTaskParams *this_00;
  bool bVar7;
  int iVar8;
  FTaskID FVar9;
  FComponentMask *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  int iVar13;
  TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  *pTVar14;
  uint uVar15;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000030;
  undefined1 auStackY_218 [32];
  FComponentTypeID local_1c8;
  FComponentTypeID local_1c6;
  FTaskID local_1c4;
  TReferenceControllerBase<1> *local_1c0;
  FEntityManager *local_1b0;
  TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  *local_1a8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1a0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_198;
  FTaskParams *local_190;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  FEntityComponentFilter local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar2 = *(ushort *)&this->field_0x8;
  local_198 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1a0 = in_stack_00000030;
  if (uVar2 != 0xffff) {
    local_1b0 = param_1;
    local_190 = param_3;
    pFVar10 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar2 < (pFVar10->Bits).NumBits) &&
       ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) != 0)) {
      pTVar11 = ::operator_new(0x50);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        local_1c0 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        local_1c0 = pTVar11 + 1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFAccumulateManualWeights_MovieScene_UE__U__TReadOneOrMoreOfAccessor_NN_23_U__TWriteAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar11[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFAccumulateManualWeights_MovieScene_UE__U__TReadOneOrMoreOfAccessor_NN_23_U__TWriteAccess_N_23__MovieScene_UE__6B_
        ;
        *(undefined1 *)&pTVar11[1].SharedReferenceCount = 0;
        uVar4 = *(undefined4 *)&this->field_0x8;
        uVar5 = *(undefined4 *)&this->field_0xc;
        pTVar11[2]._padding_ = *(longlong *)this;
        pTVar11[2].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[2].WeakReferenceCount = (atomic<int>)uVar5;
        uVar4 = *(undefined4 *)&this->field_0x18;
        uVar5 = *(undefined4 *)&this->field_0x1c;
        pTVar11[3]._padding_ = *(longlong *)&this->field_0x10;
        pTVar11[3].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[3].WeakReferenceCount = (atomic<int>)uVar5;
        uVar4 = *(undefined4 *)&this->field_0x28;
        uVar5 = *(undefined4 *)&this->field_0x2c;
        pTVar11[4]._padding_ = *(longlong *)&this->field_0x20;
        pTVar11[4].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar11[4].WeakReferenceCount = (atomic<int>)uVar5;
        if (local_1c0 == (TReferenceControllerBase<1> *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return (FTaskID)iVar8;
          }
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      iVar8 = 0;
      local_110.MaxBits = 0x180;
      local_110.NumBits = 0;
      uVar15 = 0;
      local_148.NumBits._0_1_ = '\0';
      local_148.NumBits._1_1_ = '\0';
      local_148.NumBits._2_1_ = '\0';
      local_148.NumBits._3_1_ = '\0';
      local_148.MaxBits._0_1_ = 0x80;
      local_148.MaxBits._1_1_ = '\x01';
      local_148.MaxBits._2_1_ = '\0';
      local_148.MaxBits._3_1_ = '\0';
      pTVar14 = this;
      do {
        uVar2 = *(ushort *)pTVar14;
        if (uVar2 != 0xffff) {
          iVar13 = ((uint)uVar2 - iVar8) + 1;
          if (0 < iVar13) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar13);
            iVar8 = local_110.NumBits;
          }
          if (iVar8 <= (int)(uint)uVar2) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              iVar8 = (*pcVar3)();
              return (FTaskID)iVar8;
            }
          }
          pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
          *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
          iVar8 = local_110.NumBits;
        }
        param_1 = local_1b0;
        uVar15 = uVar15 + 1;
        pTVar14 = (TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
                   *)&pTVar14->field_0x4;
      } while (uVar15 < 2);
      uVar2 = *(ushort *)&this->field_0x8;
      iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
      if (0 < iVar8) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
      }
      if (local_148.NumBits <= (int)(uint)uVar2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return (FTaskID)iVar8;
        }
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      local_d8.AllMask.Bits.NumBits = 0;
      local_d8.NoneMask.Bits.NumBits = 0;
      local_d8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ComplexMasks.ArrayNum = 0;
      local_d8.ComplexMasks.ArrayMax = 0;
      local_d8.AllMask.Bits.MaxBits = 0x180;
      local_d8.NoneMask.Bits.MaxBits = 0x180;
      AddAccessorToFilter<double,double>((TReadOneOrMoreOfAccessor<double,double> *)this,&local_d8);
      if (*(short *)&this->field_0x8 == -1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          iVar8 = (*pcVar3)();
          return (FTaskID)iVar8;
        }
      }
      local_1c8.Value = *(ushort *)&this->field_0x8;
      local_188._First = &local_1c8;
      local_188._Last = &local_1c6;
      FComponentMask::SetAll(&local_d8.AllMask,&local_188);
      local_170 = &local_1a8;
      local_178 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FAccumulateManualWeights>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_1a8 = this;
      pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_158,local_1a0);
      this_00 = local_190;
      pTVar6 = local_198;
      local_168._0_8_ = local_1c0;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168._8_8_ = pTVar11;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)local_190,(FTaskParams *)&local_1c4,local_198,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_168,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar12,(FEntityComponentFilter *)&local_178,&local_d8.AllMask,
                 (FComponentMask *)&local_110);
      if (local_1c4.Index == -1) {
        if (((ulonglong)pTVar6[1].Object & 4) != 0) {
          FVar9 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
          local_1c4.Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
          if (local_1c4.Index != -1) goto LAB_1468997ce;
        }
      }
      else {
LAB_1468997ce:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)this_00,local_1c4,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)this_00,local_1c4,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_1c4.Index;
      if (local_d8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.ComplexMasks.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      goto LAB_14689982b;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14689982b:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FEvaluateEasings> @ 146899860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::ScheduleImpl<UE::MovieScene::FEvaluateEasings>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskID FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar11;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar12;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000030;
  undefined1 auStackY_228 [32];
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6;
  FComponentTypeID local_1d4;
  FComponentTypeID local_1d2;
  FComponentTypeID local_1d0;
  FComponentTypeID local_1ce;
  FTaskID local_1cc;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  *local_1c0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1b8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  FComponentMask local_d8;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1b0 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1b8 = in_stack_00000030;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar7 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar7)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_146899d1c;
  }
  pTVar10 = ::operator_new(0x48);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12 = pTVar10 + 1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateEasings_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadAccess_UFEasingComponentData___23_U__TWriteAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFEvaluateEasings_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadAccess_UFEasingComponentData___23_U__TWriteAccess_N_23__MovieScene_UE__6B_
    ;
    *(undefined1 *)&pTVar10[1].SharedReferenceCount = 0;
    uVar4 = *(undefined4 *)&this->field_0x8;
    uVar5 = *(undefined4 *)&this->field_0xc;
    pTVar10[2]._padding_ = *(longlong *)this;
    pTVar10[2].SharedReferenceCount = (atomic<int>)uVar4;
    pTVar10[2].WeakReferenceCount = (atomic<int>)uVar5;
    uVar4 = *(undefined4 *)&this->field_0x18;
    uVar5 = *(undefined4 *)&this->field_0x1c;
    pTVar10[3]._padding_ = *(longlong *)&this->field_0x10;
    pTVar10[3].SharedReferenceCount = (atomic<int>)uVar4;
    pTVar10[3].WeakReferenceCount = (atomic<int>)uVar5;
    pTVar10[4]._padding_ = *(longlong *)&this->field_0x20;
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return (FTaskID)iVar8;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  uVar2 = *(ushort *)this;
  local_148.MaxBits._0_1_ = 0x80;
  local_148.MaxBits._1_1_ = '\x01';
  local_148.MaxBits._2_1_ = '\0';
  local_148.MaxBits._3_1_ = '\0';
  local_148.NumBits._0_1_ = '\0';
  local_148.NumBits._1_1_ = '\0';
  local_148.NumBits._2_1_ = '\0';
  local_148.NumBits._3_1_ = '\0';
  local_110.NumBits = 0;
  local_110.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x2;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar8 = ((uint)uVar2 - local_110.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar8);
  }
  if ((local_110.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_d8.Bits.NumBits = 0;
  local_d8.Bits.MaxBits = 0x180;
  local_70 = 0;
  local_6c = 0x180;
  local_68 = (void *)0x0;
  local_60 = 0;
  if ((*(short *)this == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return (FTaskID)iVar8;
  }
  local_1d8.Value = *(ushort *)this;
  local_1a8._First = &local_1d8;
  local_1a8._Last = &local_1d6;
  FComponentMask::SetAll(&local_d8,&local_1a8);
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return (FTaskID)iVar8;
  }
  local_1d4.Value = *(ushort *)&this->field_0x2;
  local_198._First = &local_1d4;
  local_198._Last = &local_1d2;
  FComponentMask::SetAll(&local_d8,&local_198);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return (FTaskID)iVar8;
  }
  local_1d0.Value = *(ushort *)&this->field_0x4;
  local_188._First = &local_1d0;
  local_188._Last = &local_1ce;
  FComponentMask::SetAll(&local_d8,&local_188);
  local_170 = &local_1c0;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateEasings>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1c0 = this;
  pTVar11 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1b8);
  pTVar6 = local_1b0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168._0_8_ = pTVar12;
  local_168._8_8_ = pTVar10;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1cc,local_1b0,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_168,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar11,(FEntityComponentFilter *)&local_178,&local_d8,(FComponentMask *)&local_148)
  ;
  if (local_1cc.Index == -1) {
    if (((ulonglong)pTVar6[1].Object & 4) != 0) {
      FVar9 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_1cc.Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
      if (local_1cc.Index != -1) goto LAB_146899cc1;
    }
  }
  else {
LAB_146899cc1:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1cc.Index;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_146899d1c:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FResetFinalWeightResults> @ 14689b030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::
ScheduleImpl<UE::MovieScene::FResetFinalWeightResults>
          (TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> *this,
          FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FTaskID FVar8;
  FComponentMask *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar11;
  undefined4 extraout_var;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000030;
  undefined1 auStackY_208 [32];
  FComponentTypeID local_1b8;
  FComponentTypeID local_1b6;
  FTaskID local_1b4;
  TReferenceControllerBase<1> *local_1b0;
  TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> *local_1a0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  FComponentMask local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar2 = *(ushort *)this;
  local_198 = in_stack_00000030;
  if (uVar2 != 0xffff) {
    pFVar9 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar2 < (pFVar9->Bits).NumBits) &&
       ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
        != 0)) {
      pTVar10 = ::operator_new(0x48);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        local_1b0 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFResetFinalWeightResults_MovieScene_UE__U__TWriteAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar10[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFResetFinalWeightResults_MovieScene_UE__U__TWriteAccess_N_23__MovieScene_UE__6B_
        ;
        *(undefined1 *)&pTVar10[1].SharedReferenceCount = 0;
        local_1b0 = pTVar10 + 1;
        uVar4 = *(undefined4 *)&this->field_0x8;
        uVar5 = *(undefined4 *)&this->field_0xc;
        pTVar10[2]._padding_ = *(longlong *)this;
        pTVar10[2].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar10[2].WeakReferenceCount = (atomic<int>)uVar5;
        uVar4 = *(undefined4 *)&this->field_0x18;
        uVar5 = *(undefined4 *)&this->field_0x1c;
        pTVar10[3]._padding_ = *(longlong *)&this->field_0x10;
        pTVar10[3].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar10[3].WeakReferenceCount = (atomic<int>)uVar5;
        pTVar10[4]._padding_ = *(longlong *)&this->field_0x20;
        if (local_1b0 == (TReferenceControllerBase<1> *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return (FTaskID)iVar7;
          }
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      uVar2 = *(ushort *)this;
      local_88.Bits.MaxBits = 0x180;
      local_88.Bits.NumBits = 0;
      local_148.NumBits._0_1_ = '\0';
      local_148.NumBits._1_1_ = '\0';
      local_148.NumBits._2_1_ = '\0';
      local_148.NumBits._3_1_ = '\0';
      local_148.MaxBits._0_1_ = 0x80;
      local_148.MaxBits._1_1_ = '\x01';
      local_148.MaxBits._2_1_ = '\0';
      local_148.MaxBits._3_1_ = '\0';
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
      if (local_148.NumBits <= (int)(uint)uVar2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return (FTaskID)iVar7;
        }
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      local_108.Bits.NumBits = 0;
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_108.Bits.MaxBits = 0x180;
      local_9c = 0x180;
      if (*(short *)this == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return (FTaskID)iVar7;
        }
      }
      local_1b8.Value = *(ushort *)this;
      local_188._First = &local_1b8;
      local_188._Last = &local_1b6;
      FComponentMask::SetAll(&local_108,&local_188);
      local_170 = &local_1a0;
      local_178 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FResetFinalWeightResults>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_1a0 = this;
      pTVar11 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_158,local_198);
      local_168._0_8_ = local_1b0;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168._8_8_ = pTVar10;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1b4,
                 (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_168,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar11,(FEntityComponentFilter *)&local_178,&local_108,&local_88);
      if (local_1b4.Index == -1) {
        if ((param_4[1]._padding_ & 4) != 0) {
          FVar8 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
          local_1b4.Index = *(int *)CONCAT44(extraout_var,FVar8.Index);
          if (local_1b4.Index != -1) goto LAB_14689b304;
        }
      }
      else {
LAB_14689b304:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)param_3,local_1b4,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)param_3,local_1b4,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_1b4.Index;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      goto LAB_14689b34a;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14689b34a:
  return (FTaskID)(int)param_1;
}

// operator() @ 1468a1750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::
ScheduleImpl<UE::MovieScene::FResetFinalWeightResults>'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FEntityAllocation *pFVar8;
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar2 = *piVar1;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4,1);
  uVar7 = 0;
  if ((int)uVar2 < *piVar1) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar8 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_18);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar8,(TRelativePtr<void,unsigned_int> *)(pFVar3 + (longlong)(int)uVar2 * 4));
  return;
}

