// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// FilterAll @ 146919830

TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::FilterAll(TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  local_18._First = param_1->_First;
  local_18._Last = param_1->_Last;
  FComponentMask::SetAll(&(__return_storage_ptr__->Filter).AllMask,&local_18);
  return __return_storage_ptr__;
}

