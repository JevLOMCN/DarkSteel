// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FComponentTransformHandler @ 14660f140

FComponentTransformHandler * __thiscall
UE::MovieScene::FComponentTransformHandler::FComponentTransformHandler
          (FComponentTransformHandler *this)

{
  undefined4 local_res8;
  
  *(undefined ***)this =
       &
       ___7__TPropertyComponentHandlerImpl_U__TPropertyTraits_UFIntermediate3DTransform_MovieScene_UE__U123__00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_S__U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__NNNNNNNNN_MovieScene_UE__6B_
  ;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  *(undefined4 *)&this->field_0x8 = local_res8;
  *(undefined ***)this = &___7FComponentTransformHandler_MovieScene_UE__6B_;
  return this;
}

// GetPreAnimatedStateStorage @ 146695e50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
UE::MovieScene::FComponentTransformHandler::GetPreAnimatedStateStorage
          (FComponentTransformHandler *this,
          TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1,FPreAnimatedStateExtension *param_2)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentTransformStorage,1> local_18;
  
  FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentTransformStorage>
            (param_2,&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentTransformStorage>)
             FPreAnimatedComponentTransformStorage::StorageID);
  __return_storage_ptr__->Object = (IPreAnimatedStorage *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ScheduleSetterTasks @ 1466ed480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FComponentTransformHandler::ScheduleSetterTasks
          (FComponentTransformHandler *this,FPropertyDefinition *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          FPropertyStats *param_3,IEntitySystemScheduler *param_4,
          UMovieSceneEntitySystemLinker *param_5)

{
  FMovieSceneTracksComponentTypes *pFVar1;
  undefined1 auStackY_118 [32];
  FPropertyCompositeDefinition local_d8 [4];
  undefined1 local_c8 [16];
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  pFVar1 = FMovieSceneTracksComponentTypes::Get();
  local_d8[0].ComponentTypeID.Value = (pFVar1->Tags).AnimMixerPoseProducer.Value;
  local_c8._0_8_ = local_d8;
  local_c8._8_8_ = &local_d8[0].CompositeOffset;
  FComponentMask::SetAll
            (&local_b8.NoneMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_c8);
  local_c8._0_8_ = param_2->DataPtr;
  local_c8._8_8_ = *(undefined8 *)&param_2->ArrayNum;
  TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
  ::ScheduleSetterTasksImpl
            ((TPropertyComponentHandlerImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>
              *)this,param_1,
             (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *)local_c8,param_3
             ,param_4,param_5,&local_b8);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

