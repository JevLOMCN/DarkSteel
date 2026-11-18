// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 91

// Call @ 14664ba30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneAudioTriggerChannel,bool>'::__l2::<lambda_1>,void,FName,FMovieSceneAudioTriggerChannel_const_&>
::Call(void *param_1,FName *param_2,FMovieSceneAudioTriggerChannel *param_3)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneAudioTriggerChannel>
            (*(FMovieSceneChannelProxyData **)param_1,param_3);
  return;
}

// Call @ 14664ba50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneBoolChannel,bool>'::__l2::<lambda_1>,void,FName,FMovieSceneBoolChannel_const_&>
::Call(void *param_1,FName *param_2,FMovieSceneBoolChannel *param_3)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneBoolChannel>
            (*(FMovieSceneChannelProxyData **)param_1,param_3);
  return;
}

// Call @ 14664ba70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneFloatChannel,float>'::__l2::<lambda_1>,void,FName,FMovieSceneFloatChannel_const_&>
::Call(void *param_1,FName *param_2,FMovieSceneFloatChannel *param_3)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
            (*(FMovieSceneChannelProxyData **)param_1,param_3);
  return;
}

// Call @ 14664ba90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneIntegerChannel,int>'::__l2::<lambda_1>,void,FName,FMovieSceneIntegerChannel_const_&>
::Call(void *param_1,FName *param_2,FMovieSceneIntegerChannel *param_3)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>
            (*(FMovieSceneChannelProxyData **)param_1,param_3);
  return;
}

// Call @ 14664bab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneStringChannel,FString>'::__l2::<lambda_1>,void,FName,FMovieSceneStringChannel_const_&>
::Call(void *param_1,FName *param_2,FMovieSceneStringChannel *param_3)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneStringChannel>
            (*(FMovieSceneChannelProxyData **)param_1,param_3);
  return;
}

// Call @ 14664bad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double>,UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,__int64>,UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TReadAccess<__int64>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,unsigned_char>,UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<unsigned_char>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,double>,UE::MovieScene::TPropertyTraits<float,double,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double>,UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double>,UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
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

// Call @ 14664bd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,FString>,UE::MovieScene::TPropertyTraits<FString,FString,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FString>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,FText>,UE::MovieScene::TPropertyTraits<FText,FText,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<FText>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,double>,UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664be30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664be60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664be90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>,TIntegerSequence<int,0>,__int64>,UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FVariantPropertyTypeIndex>,UE::MovieScene::TOptionalReadAccess<__int64>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,unsigned_char>,UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<unsigned_char>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<float,double,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,double>,UE::MovieScene::TPropertyTraits<float,double,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1>,double,double>,UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2>,double,double,double>,UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664bfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664c010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,double,double,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664c040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
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

// Call @ 14664c070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FString>,UE::MovieScene::TPropertyTraits<FString,FString,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FString>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664c0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0>,FText>,UE::MovieScene::TPropertyTraits<FText,FText,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<FText>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664c0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>::ScheduleImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FBoolPropertyTraits>,UE::MovieScene::FBoolPropertyTraits_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,UE::MovieScene::TReadAccess<bool>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664c100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::FFloatPropertyTraits_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 14664c130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>::ScheduleImpl<UE::MovieScene::TSetPropertyValues<UE::MovieScene::FObjectPropertyTraits>,UE::MovieScene::FObjectPropertyTraits_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1467808e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FApplyCustomPrimitiveDataParameters>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>::ScheduleImpl<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>::ScheduleImpl<UE::MovieScene::FEvaluateBoolChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>::ScheduleImpl<UE::MovieScene::FEvaluateByteChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1467809a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>::ScheduleImpl<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1467809d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateDoubleChannels_Cached>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateFloatChannels_Cached>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>::ScheduleImpl<UE::MovieScene::FEvaluateIntegerChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>::ScheduleImpl<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>::ScheduleImpl<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146780b20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMovieSceneComponentAttachmentSystem::SavePreAnimatedState'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = *(undefined8 *)(*(longlong *)param_1 + 0x10 + (longlong)*param_2 * 0x18);
  local_18 = (char)uVar1;
  if ((((local_18 == '\0') && ((char)((ulonglong)uVar1 >> 8) == '\0')) &&
      ((char)((ulonglong)uVar1 >> 0x10) == '\0')) &&
     ((((char)((ulonglong)uVar1 >> 0x18) == '\0' && ((char)((ulonglong)uVar1 >> 0x20) == '\0')) &&
      ((char)((ulonglong)uVar1 >> 0x28) == '\0')))) {
    return false;
  }
  return true;
}

// Call @ 146780b90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneSkeletalAnimationSection::GetSnapTimes'::__l2::<lambda_1>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieSceneSkeletalAnimationSection::GetSnapTimes'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 146780ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying'::__l277::<lambda_3>,void,FActiveSound_&>
::Call(void *param_1,FActiveSound *param_2)

{
  double dVar1;
  
  param_2->bLocationDefined = '\x01';
  dVar1 = *(double *)((longlong)param_1 + 8);
  (param_2->Transform).Rotation.XY.m128d_f64[0] = *(double *)param_1;
  (param_2->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x18);
  (param_2->Transform).Rotation.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x10);
  (param_2->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x28);
  (param_2->Transform).Translation.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x20);
  (param_2->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x38);
  (param_2->Transform).Translation.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x30);
  (param_2->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x48);
  (param_2->Transform).Scale3D.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x40);
  (param_2->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x58);
  (param_2->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x50);
  (param_2->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

// Call @ 1468209f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>::ScheduleImpl<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
  ::
  ScheduleImpl<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>::ScheduleImpl<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
  ::
  ScheduleImpl<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FAdditiveAndOverridesTask,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FAdditiveFromBaseBlendTask,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FApplyScalarParameters>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>::ScheduleImpl<UE::MovieScene::FApplyVectorParameters>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FAssignTransformOrigin,TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>_>::ScheduleImpl<`UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks'::__l2::FCacheDeferredUpdates,UMovieSceneDeferredComponentMovementSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>_>::
  ScheduleImpl<`UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks'::__l2::FCacheDeferredUpdates,UMovieSceneDeferredComponentMovementSystem_*>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>::ScheduleImpl<UE::MovieScene::FCombineBlends,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FEntityAllocationWriteContext>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>_>::
  ScheduleImpl<UE::MovieScene::FCombineBlends,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FEntityAllocationWriteContext>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>::ScheduleImpl<UE::MovieScene::FCombineTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::FInstanceRegistry_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::FInstanceRegistry_*>'::__l2::
  <lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FForkedAccumulationTask,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FInstanceRegistry_*,UE::MovieScene::FSkeletalAnimationSystemData_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FGatherTransformOriginsFromSubscenes,TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_>_*,TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>_*,UE::MovieScene::FInstanceRegistry_*_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FIntegerAccumulationTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>::ScheduleImpl<UE::MovieScene::FIntegerCombineBlends,UE::MovieScene::FIntegerAccumulationBuffers_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TWriteAccess<__int64>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>::ScheduleImpl<UE::MovieScene::FScheduleCombineBlendsForProperties,UE::MovieScene::FEntityManager_*,UE::MovieScene::FAccumulationBuffers_*,UE::MovieScene::FPropertyDefinition_const_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::FErasedOptionalReadAccess>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::ScheduleImpl<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FTransformDependencyTask>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146820e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::ScheduleImpl<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FWriteObjectResultNoop>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::
  ScheduleImpl<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FWriteObjectResultNoop>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 146820ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneAsyncAction_SequencePrediction::ImportTransformEntities'::__l2::<lambda_1>,bool,FMovieSceneEvaluationFieldEntityQuery_const_&>
::Call(void *param_1,FMovieSceneEvaluationFieldEntityQuery *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UMovieSceneSection *this;
  UClass *pUVar8;
  UObject *this_00;
  IMovieSceneEntityProvider *this_01;
  uint uVar9;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar10;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar11;
  undefined1 auStack_128 [32];
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  FInterrogationKey FStack_b4;
  FInterrogationInstance FStack_a8;
  FEntityImportSequenceParams FStack_a0;
  FImportedEntity FStack_88;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStack_128;
  this = (UMovieSceneSection *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  if (this != (UMovieSceneSection *)0x0) {
    pUVar8 = Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if (((iVar7 <= *(int *)(this->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar7 * 8)
         == &pUVar8->_padding_)) && (bVar5 = MovieSceneHelpers::IsSectionKeyable(this), bVar5)) {
      uVar1 = (param_2->Entity).SharedMetaDataIndex;
      if (uVar1 != 0xffffffff) {
        lVar2 = *(longlong *)((longlong)param_1 + 0x38);
        iVar7 = *(int *)(lVar2 + 0xe8);
        uVar9 = 0;
        if ((int)uVar1 < iVar7) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (puStack_108 = (undefined1 *)(longlong)(int)uVar1,
           puStack_100 = (undefined1 *)(longlong)iVar7,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar11 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)
                  ((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0xe0));
        if (((pFVar11 != (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0) &&
            (((*(uint *)((longlong)param_1 + 0x30) == (pFVar11->ObjectBindingID).D &&
              *(uint *)((longlong)param_1 + 0x2c) == (pFVar11->ObjectBindingID).C) &&
             *(uint *)((longlong)param_1 + 0x28) == (pFVar11->ObjectBindingID).B) &&
             *(uint *)((longlong)param_1 + 0x24) == (pFVar11->ObjectBindingID).A)) &&
           (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2), this_00 != (UObject *)0x0)) {
          pUVar8 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
          this_01 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar8);
          if (this_01 != (IMovieSceneEntityProvider *)0x0) {
            FStack_a0._16_4_ = *(undefined4 *)((longlong)param_1 + 0x20);
            FStack_a0._0_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
            FStack_a0._8_8_ = *(undefined8 *)((longlong)param_1 + 0x18);
            uStack_b8 = (param_2->Entity).Key.EntityID;
            uVar1 = param_2->MetaDataIndex;
            FStack_a8.Sequence = (UMovieSceneSequence *)0x0;
            if (uVar1 == 0xffffffff) {
              auStack_c8._0_8_ = (FMovieSceneEvaluationFieldEntityMetaData *)0x0;
            }
            else {
              lVar2 = *(longlong *)((longlong)param_1 + 0x38);
              iVar7 = *(int *)(lVar2 + 0xd8);
              uVar9 = 0;
              if ((int)uVar1 < iVar7) {
                uVar9 = ~uVar1 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (puStack_108 = (undefined1 *)(longlong)(int)uVar1,
                 puStack_100 = (undefined1 *)(longlong)iVar7,
                 bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              auStack_c8._0_8_ = *(longlong *)(lVar2 + 0xd0) + (longlong)(int)uVar1 * 0x48;
            }
            FStack_b4 = *(FInterrogationKey *)((longlong)param_1 + 0x40);
            FStack_88.Builders.AllocatorInstance.SecondaryData =
                 (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0;
            FStack_88.Builders.ArrayNum = 0;
            FStack_88.Builders.ArrayMax = 1;
            auStack_c8._8_8_ = pFVar11;
            IMovieSceneEntityProvider::InterrogateEntity
                      (this_01,*(UMovieSceneEntitySystemLinker **)((longlong)param_1 + 8),
                       (FEntityImportParams *)auStack_c8,&FStack_88);
            if (FStack_88.Builders.ArrayNum != 0) {
              UMovieSceneSection::BuildDefaultComponents
                        (this,*(UMovieSceneEntitySystemLinker **)((longlong)param_1 + 8),
                         (FEntityImportParams *)auStack_c8,&FStack_88);
              MovieScene::FImportedEntity::Manufacture
                        (&FStack_88,(FEntityImportParams *)auStack_d8,(FEntityManager *)auStack_c8);
              lVar2 = *(longlong *)param_1;
              puVar3 = *(undefined1 **)(lVar2 + 0x60);
              if ((puVar3 <= auStack_d8) &&
                 (auStack_d8 < puVar3 + (longlong)*(int *)(lVar2 + 0x6c) * 2)) {
                lStack_f0 = (longlong)*(int *)(lVar2 + 0x68);
                uStack_e8 = 2;
                puStack_108 = auStack_d8;
                puStack_100 = puVar3;
                lStack_f8 = (longlong)*(int *)(lVar2 + 0x6c);
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              iVar7 = *(int *)(lVar2 + 0x68);
              if (iVar7 == *(int *)(lVar2 + 0x6c)) {
                iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,(ForAnyElementType *)(lVar2 + 0x60),(int *)(lVar2 + 0x6c));
              }
              *(int *)(lVar2 + 0x68) = iVar7 + 1;
              *(undefined2 *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar7 * 2) = auStack_d8._0_2_;
              **(int **)((longlong)param_1 + 0x48) = **(int **)((longlong)param_1 + 0x48) + 1;
            }
            FVar10 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)&FStack_88;
            if (FStack_88.Builders.AllocatorInstance.SecondaryData !=
                (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
              FVar10 = FStack_88.Builders.AllocatorInstance.SecondaryData;
            }
            DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
                      ((TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)FVar10,
                       FStack_88.Builders.ArrayNum);
            if (FStack_88.Builders.AllocatorInstance.SecondaryData !=
                (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
              FMemory::Free((void *)FStack_88.Builders.AllocatorInstance.SecondaryData);
            }
          }
        }
      }
    }
  }
  return true;
}

// Call @ 1468acaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FAccumulateManualWeights>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1468acad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FEvaluateEasings>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1468acb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::ScheduleImpl<UE::MovieScene::FEvaluateObjectPathChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1468acb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>::ScheduleImpl<UE::MovieScene::FEvaluateStringChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1468acb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>::ScheduleImpl<UE::MovieScene::Private::FEvaluateTextChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 1468acb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>::ScheduleImpl<UE::MovieScene::FHarvestHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
  ::
  ScheduleImpl<UE::MovieScene::FHarvestHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_*>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1468acbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FPropagateHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FPropagateHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_&>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1468acbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FResetFinalWeightResults>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::
  ScheduleImpl<UE::MovieScene::FResetFinalWeightResults>'::__l2::<lambda_1>::operator()
            (param_1,&local_18,param_3);
  return;
}

// Call @ 1468acc20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::AddIfEmpty'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
::Call(void *param_1,FMovieSceneEvaluationTreeNodeHandle *param_2)

{
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar1;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_38;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_28;
  
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
            (&local_28,*(TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **)param_1,
             *param_2);
  if (local_28.CurrentNode != (FMovieSceneEvaluationTreeNode *)0x0) {
    pTVar1 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                       (local_28.Tree,&local_38,local_28.CurrentNode);
    if ((-1 < local_28.DataIndex) && (local_28.DataIndex < pTVar1->ArrayNum)) {
      return false;
    }
  }
  return true;
}

// Call @ 1468acc70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneSkeletalAnimationTrack::PopulateEvaluationTree'::__l7::<lambda_1>,bool,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&>
::Call(void *param_1,FSortedSection *param_2,FSortedSection *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3->Section->RowIndex;
  iVar2 = param_2->Section->RowIndex;
  if (iVar2 == iVar1) {
    return param_3->Index < param_2->Index;
  }
  return iVar2 < iVar1;
}

