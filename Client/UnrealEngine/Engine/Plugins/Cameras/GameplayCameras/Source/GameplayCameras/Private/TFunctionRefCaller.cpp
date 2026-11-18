// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// Call @ 14d54fd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterface'::__l5::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UCameraNode *local_res10;
  UObject *local_res18 [2];
  
  pUVar2 = *param_2;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UCameraNode::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      local_res18[0] = pUVar2;
      TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator>::
      Emplace<UCameraNode_*_const_&>
                (*(TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator> **)
                  param_1,&local_res10,(bool *)local_res18);
    }
  }
  return;
}

// Call @ 14d59bc70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::String::
  ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 14d60ded0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14d60df00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14d65d420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),void,USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*>
::Call(void *param_1,USingleCameraDirector **param_2,FNamedObjectRegistry **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014d65d42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 14d65d440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,void,UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*>
::Call(void *param_1,UCameraRigCameraNode **param_2,FNamedObjectRegistry **param_3)

{
  `FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14d65d460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,void,UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*>
::Call(void *param_1,UCameraRigCameraNode **param_2,FNamedObjectRegistry **param_3)

{
  `FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>::operator()
            (param_1,*param_2,*param_3);
  return;
}

