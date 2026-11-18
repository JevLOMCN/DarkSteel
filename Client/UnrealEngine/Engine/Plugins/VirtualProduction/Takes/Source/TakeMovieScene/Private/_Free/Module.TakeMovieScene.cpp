// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 39

// `dynamic_initializer_for_'ModuleRegistrantTakeMovieScene'' @ 1413c6f80

void __cdecl _dynamic_initializer_for__ModuleRegistrantTakeMovieScene__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TakeMovieScene";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TakeMovieScene",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FTakeMovieSceneModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_Hitching_FrameHitchSceneDecoration_h__Script_TakeMovieScene_2463345157'' @ 1413c6fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_Hitching_FrameHitchSceneDecoration_h__Script_TakeMovieScene_2463345157__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TakeMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_Hitching_FrameHitchSceneDecoration_h__Script_TakeMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_Hitching_TimecodeHitchChannels_h__Script_TakeMovieScene_489949784'' @ 1413c7010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_Hitching_TimecodeHitchChannels_h__Script_TakeMovieScene_489949784__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TakeMovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_Hitching_TimecodeHitchChannels_h__Script_TakeMovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h__Script_TakeMovieScene_544708358'' @ 1413c7050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h__Script_TakeMovieScene_544708358__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TakeMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h__Script_TakeMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h__Script_TakeMovieScene_3830709380'' @ 1413c7090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h__Script_TakeMovieScene_3830709380__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TakeMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h__Script_TakeMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h__Script_TakeMovieScene_3373442137'' @ 1413c70d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h__Script_TakeMovieScene_3373442137__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TakeMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeTrack_h__Script_TakeMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TakeMovieScene'' @ 1413c7110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TakeMovieScene__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xdf010f76;
  local_res8[0].DeclarationsHash = 0x32db9c28;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TakeMovieScene,L"/Script/TakeMovieScene",
             &Z_Registration_Info_UPackage__Script_TakeMovieScene,local_res8);
  return;
}

// Z_Construct_UPackage__Script_TakeMovieScene @ 14d0b8af0

UPackage * __cdecl Z_Construct_UPackage__Script_TakeMovieScene(void)

{
  if (Z_Registration_Info_UPackage__Script_TakeMovieScene.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TakeMovieScene.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_TakeMovieScene.OuterSingleton;
}

// Z_Construct_UClass_UFrameHitchSceneDecoration @ 14d0b8c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFrameHitchSceneDecoration(void)

{
  if (Z_Registration_Info_UClass_UFrameHitchSceneDecoration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFrameHitchSceneDecoration.OuterSingleton,
               &Z_Construct_UClass_UFrameHitchSceneDecoration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFrameHitchSceneDecoration.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves @ 14d0b8c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.InnerSingleton,
               &Z_Construct_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d0b8da0

void * __cdecl
Z_Construct_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x480;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTakeMovieSceneHitchTimecodeCurves,&UE::CoreUObject::Private::Construct<FTakeMovieSceneHitchTimecodeCurves>,&UE::CoreUObject::Private::ConstructForTests<FTakeMovieSceneHitchTimecodeCurves>,&UE::CoreUObject::Private::Destruct<FTakeMovieSceneHitchTimecodeCurves>,&UE::CoreUObject::Private::Copy<FTakeMovieSceneHitchTimecodeCurves>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneTakeSection @ 14d0b8e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTakeSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTakeSettings @ 14d0b8ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTakeSettings(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTakeTrack @ 14d0b8f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTakeTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTakeTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTakeTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTakeTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeTrack.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d0b8f70

void * __thiscall
FTakeMovieSceneModule::_scalar_deleting_destructor_(FTakeMovieSceneModule *this,uint param_1)

{
  *this = (FTakeMovieSceneModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UFrameHitchSceneDecoration> @ 14d0b9070

void __cdecl InternalConstructor<UFrameHitchSceneDecoration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFrameHitchSceneDecoration__6B_;
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel((FMovieSceneIntegerChannel *)(this + 1));
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[8].field_0x8);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[0xf].field_0x10);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[0x16].field_0x18);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[0x1d].field_0x20);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel((FMovieSceneIntegerChannel *)(this + 0x25))
    ;
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[0x2c].field_0x8);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[0x33].field_0x10);
    *(undefined4 *)&this[0x3a].field_0x18 = 60000;
    *(undefined4 *)&this[0x3a].field_0x1c = 1;
    *(undefined4 *)&this[0x3a].field_0x20 = 60000;
    *(undefined4 *)&this[0x3a].field_0x24 = 1;
  }
  return;
}

// InternalConstructor<UMovieSceneTakeSection> @ 14d0b9140

void __cdecl InternalConstructor<UMovieSceneTakeSection>(FObjectInitializer *param_1)

{
  UMovieSceneTakeSection *this;
  
  this = (UMovieSceneTakeSection *)param_1->Obj;
  if (this != (UMovieSceneTakeSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneTakeSection__6B_;
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->HoursCurve);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->MinutesCurve);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->SecondsCurve);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->FramesCurve);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->SubFramesCurve);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RateCurve);
    FMovieSceneStringChannel::FMovieSceneStringChannel(&this->Slate);
    *(undefined1 *)&this->_padding_ = 1;
    UMovieSceneTakeSection::ReconstructChannelProxy(this);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneTakeSettings> @ 14d0b91e0

void __cdecl InternalConstructor<UMovieSceneTakeSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieSceneTakeSettings__6B_;
    FString::FString((FString *)(this + 1),L"TCHour");
    FString::FString((FString *)&this[1].field_0x10,L"TCMinute");
    FString::FString((FString *)&this[1].field_0x20,L"TCSecond");
    FString::FString((FString *)&this[2].field_0x8,L"TCFrame");
    FString::FString((FString *)&this[2].field_0x18,L"TCSubframe");
    FString::FString((FString *)(this + 3),L"TCRate");
    FString::FString((FString *)&this[3].field_0x10,L"TCSlate");
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneTakeTrack> @ 14d0b9290

void __cdecl InternalConstructor<UMovieSceneTakeTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneTakeTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneTakeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UFrameHitchSceneDecoration> @ 14d0b92e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFrameHitchSceneDecoration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFrameHitchSceneDecoration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFrameHitchSceneDecoration__6B_;
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel((FMovieSceneIntegerChannel *)(pUVar1 + 1));
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&pUVar1[8].field_0x8);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&pUVar1[0xf].field_0x10);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&pUVar1[0x16].field_0x18);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&pUVar1[0x1d].field_0x20);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)(pUVar1 + 0x25));
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&pUVar1[0x2c].field_0x8);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&pUVar1[0x33].field_0x10);
    *(undefined4 *)&pUVar1[0x3a].field_0x18 = 60000;
    *(undefined4 *)&pUVar1[0x3a].field_0x1c = 1;
    *(undefined4 *)&pUVar1[0x3a].field_0x20 = 60000;
    *(undefined4 *)&pUVar1[0x3a].field_0x24 = 1;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UMovieSceneTakeSection> @ 14d0b9410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTakeSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTakeSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneTakeSection__6B_;
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel((FMovieSceneIntegerChannel *)(this + 1));
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[2]._padding_);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[3]._padding_);
    FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
              ((FMovieSceneIntegerChannel *)&this[4]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[5]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[6]._padding_);
    FMovieSceneStringChannel::FMovieSceneStringChannel
              ((FMovieSceneStringChannel *)&this[7].EvalOptions);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTakeSettings> @ 14d0b9510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTakeSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTakeSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneTakeSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTakeTrack> @ 14d0b9600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTakeTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTakeTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneTakeTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneTakeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UMovieSceneTakeSection> @ 14d0b96d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneTakeSection * __cdecl
NewObject<UMovieSceneTakeSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneTakeSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UMovieSceneTakeSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneTakeSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `scalar_deleting_destructor' @ 14d0b9f70

void * __thiscall
UFrameHitchSceneDecoration::_scalar_deleting_destructor_
          (UFrameHitchSceneDecoration *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UFrameHitchSceneDecoration__6B_;
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).FramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).HoursCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).FramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).HoursCurve);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x938);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0ba040

void * __thiscall
UMovieSceneTakeSection::_scalar_deleting_destructor_(UMovieSceneTakeSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneTakeSection__6B_;
  FMovieSceneStringChannel::~FMovieSceneStringChannel(&this->Slate);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->RateCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->SubFramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->FramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->SecondsCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->MinutesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->HoursCurve);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x908);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0ba100

void * __thiscall
UMovieSceneTakeSettings::_scalar_deleting_destructor_(UMovieSceneTakeSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneTakeSettings__6B_;
  pFVar1 = (this->SlateName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RateName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubFramesName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FramesName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SecondsName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MinutesName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HoursName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0ba1d0

void * __thiscall
UMovieSceneTakeTrack::_scalar_deleting_destructor_(UMovieSceneTakeTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeFrameHitchSceneDecoration @ 14d0ba420

void __cdecl EmptyLinkFunctionForGeneratedCodeFrameHitchSceneDecoration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSection @ 14d0ba430

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSettings @ 14d0ba440

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTakeTrack @ 14d0ba450

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTakeTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTakeMovieScene_init @ 14d0ba460

void __cdecl EmptyLinkFunctionForGeneratedCodeTakeMovieScene_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTimecodeHitchChannels @ 14d0ba470

void __cdecl EmptyLinkFunctionForGeneratedCodeTimecodeHitchChannels(void)

{
  return;
}

// Z_Construct_UClass_UFrameHitchSceneDecoration_NoRegister @ 14d0bb840

UClass * __cdecl Z_Construct_UClass_UFrameHitchSceneDecoration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"FrameHitchSceneDecoration",
               &Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton,
               UFrameHitchSceneDecoration::StaticRegisterNativesUFrameHitchSceneDecoration,0x938,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFrameHitchSceneDecoration>,
               InternalVTableHelperCtorCaller<UFrameHitchSceneDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTakeSection_NoRegister @ 14d0bb8f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTakeSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeSection",
               &Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton,
               UMovieSceneTakeSection::StaticRegisterNativesUMovieSceneTakeSection,0x908,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister @ 14d0bb9b0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeSettings",
               &Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton,
               UMovieSceneTakeSettings::StaticRegisterNativesUMovieSceneTakeSettings,0x98,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorSettings",
               InternalConstructor<UMovieSceneTakeSettings>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister @ 14d0bba60

UClass * __cdecl Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneTakeTrack.InnerSingleton,
               UMovieSceneTakeTrack::StaticRegisterNativesUMovieSceneTakeTrack,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeTrack.InnerSingleton;
}

// IMPLEMENT_MODULE_TakeMovieScene @ 14d0bbb20

void __cdecl IMPLEMENT_MODULE_TakeMovieScene(void)

{
  return;
}

