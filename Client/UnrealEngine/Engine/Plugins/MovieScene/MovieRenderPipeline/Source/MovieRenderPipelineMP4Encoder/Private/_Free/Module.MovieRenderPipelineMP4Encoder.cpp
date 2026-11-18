// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineMP4Encoder
// Functions: 58

// AllWriters'' @ 1413ff2b0

void __cdecl `dynamic_initializer_for_'UMovieGraphVideoOutputNode::AllWriters__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphVideoOutputNode::AllWriters__);
  return;
}

// CustomEntryName'' @ 1413ff2d0

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::CustomEntryName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::CustomEntryName,L"Custom");
  return;
}

// DefaultResolutionName'' @ 1413ff2f0

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::DefaultResolutionName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::DefaultResolutionName,L"1080p (FHD)");
  return;
}

// QuickRenderSettingsPackagePath'' @ 1413ff310

void __cdecl
`dynamic_initializer_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__(void)

{
  ::FString::FString(&UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath,
                     L"/Temp/MovieRenderPipeline/QuickRenderSettings");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::
         QuickRenderSettingsPackagePath__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMovieRenderPipelineMP4Encoder'' @ 1413ff340

void __cdecl _dynamic_initializer_for__ModuleRegistrantMovieRenderPipelineMP4Encoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MovieRenderPipelineMP4Encoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MovieRenderPipelineMP4Encoder",0x1d);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMovieRenderPipelineMP4EncoderModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1413ff390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Private_MoviePipelineMP4EncoderCommon_h__Script_MovieRenderPipelineMP4Encoder_1633105474'' @ 1413ff420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Private_MoviePipelineMP4EncoderCommon_h__Script_MovieRenderPipelineMP4Encoder_1633105474__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineMP4Encoder",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Private_MoviePipelineMP4EncoderCommon_h__Script_MovieRenderPipelineMP4Encoder_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h__Script_MovieRenderPipelineMP4Encoder_4060987201'' @ 1413ff470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h__Script_MovieRenderPipelineMP4Encoder_4060987201__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineMP4Encoder",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_Graph_MovieGraphMP4EncoderNode_h__Script_MovieRenderPipelineMP4Encoder_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_MoviePipelineMP4EncoderOutput_h__Script_MovieRenderPipelineMP4Encoder_1113322605'' @ 1413ff4b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_MoviePipelineMP4EncoderOutput_h__Script_MovieRenderPipelineMP4Encoder_1113322605__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineMP4Encoder",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineMP4Encoder_Public_MoviePipelineMP4EncoderOutput_h__Script_MovieRenderPipelineMP4Encoder_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MovieRenderPipelineMP4Encoder'' @ 1413ff4f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MovieRenderPipelineMP4Encoder__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbd36cec;
  local_res8[0].DeclarationsHash = 0x2103ed2b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder,
             L"/Script/MovieRenderPipelineMP4Encoder",
             &Z_Registration_Info_UPackage__Script_MovieRenderPipelineMP4Encoder,local_res8);
  return;
}

// Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeLevel @ 14de31060

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeLevel(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeLevel_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeProfile @ 14de310a0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeProfile(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeProfile_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeRateControlMode @ 14de310e0

UEnum * __cdecl
Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeRateControlMode(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeRateControlMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.InnerSingleton;
}

// Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder @ 14de31120

UPackage * __cdecl Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder(void)

{
  if (Z_Registration_Info_UPackage__Script_MovieRenderPipelineMP4Encoder.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MovieRenderPipelineMP4Encoder.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MovieRenderPipelineMP4Encoder.OuterSingleton;
}

// EMoviePipelineMP4EncodeProfile_StaticEnum @ 14de31160

UEnum * __cdecl EMoviePipelineMP4EncodeProfile_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder();
    Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeProfile
                       ,(UObject *)pUVar1,L"EMoviePipelineMP4EncodeProfile");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.OuterSingleton;
}

// EMoviePipelineMP4EncodeLevel_StaticEnum @ 14de311a0

UEnum * __cdecl EMoviePipelineMP4EncodeLevel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder();
    Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeLevel,
                       (UObject *)pUVar1,L"EMoviePipelineMP4EncodeLevel");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.OuterSingleton;
}

// EMoviePipelineMP4EncodeRateControlMode_StaticEnum @ 14de311e0

UEnum * __cdecl EMoviePipelineMP4EncodeRateControlMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder();
    Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeRateControlMode
                       ,(UObject *)pUVar1,L"EMoviePipelineMP4EncodeRateControlMode");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineMP4EncoderOutput @ 14de313a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineMP4EncoderOutput(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineMP4EncoderOutput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.OuterSingleton;
}

// NewProp_bIncludeAudio_SetBit @ 14de313e0

void __cdecl
Z_Construct_UClass_UMoviePipelineMP4EncoderOutput_Statics::NewProp_bIncludeAudio_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphMP4EncoderNode @ 14de313f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphMP4EncoderNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.OuterSingleton;
}

// NewProp_bOverride_EncodingRateControl_SetBit @ 14de31430

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_EncodingRateControl_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 1;
  return;
}

// NewProp_bOverride_AverageBitrateInMbps_SetBit @ 14de31440

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_AverageBitrateInMbps_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 2;
  return;
}

// NewProp_bOverride_MaxBitrateInMbps_SetBit @ 14de31450

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_MaxBitrateInMbps_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 4;
  return;
}

// NewProp_bOverride_ConstantRateFactor_SetBit @ 14de31460

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_ConstantRateFactor_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 8;
  return;
}

// NewProp_bOverride_EncodingProfile_SetBit @ 14de31470

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_EncodingProfile_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 0x10;
  return;
}

// NewProp_bOverride_EncodingLevel_SetBit @ 14de31480

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_EncodingLevel_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 0x20;
  return;
}

// NewProp_bOverride_bIncludeAudio_SetBit @ 14de31490

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_bIncludeAudio_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 0x40;
  return;
}

// NewProp_bOverride_OCIOConfiguration_SetBit @ 14de314a0

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_OCIOConfiguration_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe0) = *(byte *)((longlong)param_1 + 0xe0) | 0x80;
  return;
}

// NewProp_bOverride_OCIOContext_SetBit @ 14de314b0

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_OCIOContext_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe1) = *(byte *)((longlong)param_1 + 0xe1) | 1;
  return;
}

// NewProp_bOverride_bEnableBurnIn_SetBit @ 14de314c0

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_bEnableBurnIn_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe1) = *(byte *)((longlong)param_1 + 0xe1) | 2;
  return;
}

// NewProp_bOverride_BurnInClass_SetBit @ 14de314d0

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_BurnInClass_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe1) = *(byte *)((longlong)param_1 + 0xe1) | 4;
  return;
}

// NewProp_bOverride_bCompositeOntoFinalImage_SetBit @ 14de314e0

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::
NewProp_bOverride_bCompositeOntoFinalImage_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe1) = *(byte *)((longlong)param_1 + 0xe1) | 8;
  return;
}

// NewProp_bOverride_BurnInFileNameFormat_SetBit @ 14de314f0

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bOverride_BurnInFileNameFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe1) = *(byte *)((longlong)param_1 + 0xe1) | 0x10;
  return;
}

// NewProp_bIncludeAudio_SetBit @ 14de31500

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bIncludeAudio_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf2) = 1;
  return;
}

// NewProp_bEnableBurnIn_SetBit @ 14de31510

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bEnableBurnIn_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f0) = 1;
  return;
}

// NewProp_bCompositeOntoFinalImage_SetBit @ 14de31520

void __cdecl
Z_Construct_UClass_UMovieGraphMP4EncoderNode_Statics::NewProp_bCompositeOntoFinalImage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x218) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14de31550

void * __thiscall
FMovieRenderPipelineMP4EncoderModule::_scalar_deleting_destructor_
          (FMovieRenderPipelineMP4EncoderModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ClassesToUnregisterOnShutdown).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// InternalConstructor<UMovieGraphMP4EncoderNode> @ 14de315a0

void __cdecl InternalConstructor<UMovieGraphMP4EncoderNode>(FObjectInitializer *param_1)

{
  UMovieGraphVideoOutputNode *this;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  this = (UMovieGraphVideoOutputNode *)param_1->Obj;
  if (this != (UMovieGraphVideoOutputNode *)0x0) {
    UMovieGraphVideoOutputNode::UMovieGraphVideoOutputNode(this);
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 2;
    this->_padding_ =
         (longlong)&UMovieGraphMP4EncoderNode::_vftable__for__UMovieGraphVideoOutputNode__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41000000;
    this[1]._padding_ =
         (longlong)&UMovieGraphMP4EncoderNode::_vftable__for__IMovieGraphEvaluationNodeInjector__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x14;
    *(undefined2 *)&this[1]._padding_ = 2;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined1 *)&this[1]._padding_ = 0;
    FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
              ((FOpenColorIOColorConversionSettings *)&this[1]._padding_);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)&this[2]._padding_,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)&this[2]._padding_ = 1;
    FString::FString((FString *)&this[2]._padding_,L"{sequence_name}.{layer_name}.{renderer_name}");
    return;
  }
  return;
}

// InternalConstructor<UMoviePipelineMP4EncoderOutput> @ 14de31720

void __cdecl InternalConstructor<UMoviePipelineMP4EncoderOutput>(FObjectInitializer *param_1)

{
  UMoviePipelineVideoOutputBase *this;
  
  this = (UMoviePipelineVideoOutputBase *)param_1->Obj;
  if (this != (UMoviePipelineVideoOutputBase *)0x0) {
    UMoviePipelineVideoOutputBase::UMoviePipelineVideoOutputBase(this);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMoviePipelineMP4EncoderOutput__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41000000;
    *(undefined4 *)&this[1]._padding_ = 0x41800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x14;
    *(undefined2 *)&this[1]._padding_ = 2;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieGraphMP4EncoderNode> @ 14de31790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphMP4EncoderNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphVideoOutputNode *this;
  UMovieGraphVideoOutputNode *pUVar3;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pUVar3 = (UMovieGraphVideoOutputNode *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphMP4EncoderNode::GetPrivateStaticClass();
  this = (UMovieGraphVideoOutputNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphVideoOutputNode *)0x0) {
    UMovieGraphVideoOutputNode::UMovieGraphVideoOutputNode(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieGraphMP4EncoderNode::_vftable__for__UMovieGraphVideoOutputNode__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 2;
    this[1]._padding_ =
         (longlong)&UMovieGraphMP4EncoderNode::_vftable__for__IMovieGraphEvaluationNodeInjector__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41000000;
    *(undefined4 *)&this[1]._padding_ = 0x41800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x14;
    *(undefined2 *)&this[1]._padding_ = 2;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined1 *)&this[1]._padding_ = 0;
    FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
              ((FOpenColorIOColorConversionSettings *)&this[1]._padding_);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)&this[2]._padding_,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)&this[2]._padding_ = 1;
    FString::FString((FString *)&this[2]._padding_,L"{sequence_name}.{layer_name}.{renderer_name}");
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UMoviePipelineMP4EncoderOutput> @ 14de31980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineMP4EncoderOutput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineVideoOutputBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineMP4EncoderOutput::GetPrivateStaticClass();
  this = (UMoviePipelineVideoOutputBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineVideoOutputBase *)0x0) {
    UMoviePipelineVideoOutputBase::UMoviePipelineVideoOutputBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMoviePipelineMP4EncoderOutput__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41000000;
    *(undefined4 *)&this[1]._padding_ = 0x41800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x14;
    *(undefined2 *)&this[1]._padding_ = 2;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EMoviePipelineMP4EncodeLevel> @ 14de31a60

UEnum * __cdecl StaticEnum<enum_EMoviePipelineMP4EncodeLevel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder();
    Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeLevel,
                       (UObject *)pUVar1,L"EMoviePipelineMP4EncodeLevel");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeLevel.OuterSingleton;
}

// StaticEnum<enum_EMoviePipelineMP4EncodeProfile> @ 14de31aa0

UEnum * __cdecl StaticEnum<enum_EMoviePipelineMP4EncodeProfile>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder();
    Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeProfile
                       ,(UObject *)pUVar1,L"EMoviePipelineMP4EncodeProfile");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeProfile.OuterSingleton;
}

// StaticEnum<enum_EMoviePipelineMP4EncodeRateControlMode> @ 14de31ae0

UEnum * __cdecl StaticEnum<enum_EMoviePipelineMP4EncodeRateControlMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineMP4Encoder();
    Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineMP4Encoder_EMoviePipelineMP4EncodeRateControlMode
                       ,(UObject *)pUVar1,L"EMoviePipelineMP4EncodeRateControlMode");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineMP4EncodeRateControlMode.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14de32278

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieGraphMP4EncoderNode::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UMovieGraphMP4EncoderNode::_vector_deleting_destructor__adjustor_208__
          (UMovieGraphMP4EncoderNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieGraphMP4EncoderNode *)
                      &this[-1].OCIOConfiguration.ColorConfiguration.DestinationColorSpace.
                       Description.Data.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14de32290

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void * __thiscall
UMovieGraphMP4EncoderNode::_scalar_deleting_destructor_
          (UMovieGraphMP4EncoderNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphVideoOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  pFVar1 = (this->BurnInFileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OCIOContext).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OCIOContext);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UMovieGraphVideoOutputNode::~UMovieGraphVideoOutputNode((UMovieGraphVideoOutputNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de32380

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void * __thiscall
UMoviePipelineMP4EncoderOutput::_scalar_deleting_destructor_
          (UMoviePipelineMP4EncoderOutput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMoviePipelineMP4EncoderOutput__6B_;
  UMoviePipelineVideoOutputBase::~UMoviePipelineVideoOutputBase
            ((UMoviePipelineVideoOutputBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphMP4EncoderNode @ 14de32dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphMP4EncoderNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineMP4EncoderCommon @ 14de32dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineMP4EncoderCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineMP4EncoderOutput @ 14de32de0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineMP4EncoderOutput(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineMP4Encoder_init @ 14de32df0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineMP4Encoder_init(void)

{
  return;
}

// GetCodecApiDllPath @ 14de32ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
`anonymous_namespace'::GetCodecApiDllPath(FString *__return_storage_ptr__,ICodecAPI *param_1)

{
  int *piVar1;
  LPCVOID lpAddress;
  ForAnyElementType _Src;
  DWORD DVar2;
  HANDLE hProcess;
  SIZE_T SVar3;
  int iVar4;
  undefined1 auStackY_298 [32];
  _MEMORY_BASIC_INFORMATION local_258;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `GetCodecApiDllPath'::`2'::_TSS0) &&
     (_Init_thread_header(&`GetCodecApiDllPath'::`2'::_TSS0), `GetCodecApiDllPath'::`2'::_TSS0 == -1
     )) {
    ::FString::FString(&`GetCodecApiDllPath'::`2'::UnknownDLL,L"Unknown");
    atexit(``anonymous_namespace'::GetCodecApiDllPath'::__l2::
           _dynamic_atexit_destructor_for__UnknownDLL__);
    _Init_thread_footer(&`GetCodecApiDllPath'::`2'::_TSS0);
  }
  if (param_1 != (ICodecAPI *)0x0) {
    lpAddress = *(LPCVOID *)*param_1;
    hProcess = GetCurrentProcess();
    SVar3 = VirtualQueryEx(hProcess,lpAddress,&local_258,0x30);
    if (SVar3 != 0) {
      memset(local_228,0,0x208);
      DVar2 = GetModuleFileNameW(local_258.AllocationBase,local_228,0x104);
      if (DVar2 != 0) {
        ::FString::FString(__return_storage_ptr__,local_228);
        return __return_storage_ptr__;
      }
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = `GetCodecApiDllPath'::`2'::UnknownDLL.Data.AllocatorInstance;
  iVar4 = `GetCodecApiDllPath'::`2'::UnknownDLL.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)__return_storage_ptr__,iVar4,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UMovieGraphMP4EncoderNode_NoRegister @ 14de35fe0

UClass * __cdecl Z_Construct_UClass_UMovieGraphMP4EncoderNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineMP4Encoder",L"MovieGraphMP4EncoderNode",
               &Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton,
               UMovieGraphMP4EncoderNode::StaticRegisterNativesUMovieGraphMP4EncoderNode,0x230,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMP4EncoderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphMP4EncoderNode>,local_res8,
               UMovieGraphVideoOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineMP4EncoderOutput_NoRegister @ 14de360a0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineMP4EncoderOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineMP4Encoder",L"MoviePipelineMP4EncoderOutput",
               &Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton,
               UMoviePipelineMP4EncoderOutput::StaticRegisterNativesUMoviePipelineMP4EncoderOutput,
               0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineMP4EncoderOutput>,
               InternalVTableHelperCtorCaller<UMoviePipelineMP4EncoderOutput>,local_res8,
               UMoviePipelineVideoOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton;
}

// IMPLEMENT_MODULE_MovieRenderPipelineMP4Encoder @ 14de36170

void __cdecl IMPLEMENT_MODULE_MovieRenderPipelineMP4Encoder(void)

{
  return;
}

// AllWriters'' @ 15045f490

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphVideoOutputNode::AllWriters__(void)

{
  DestructItems<UMovieGraphVideoOutputNode::FMovieGraphCodecWriterWithPromise,int>
            ((FMovieGraphCodecWriterWithPromise *)
             UMovieGraphVideoOutputNode::AllWriters.AllocatorInstance.Data,
             UMovieGraphVideoOutputNode::AllWriters.ArrayNum);
  if (UMovieGraphVideoOutputNode::AllWriters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UMovieGraphVideoOutputNode::AllWriters.AllocatorInstance.Data);
    return;
  }
  return;
}

// QuickRenderSettingsPackagePath'' @ 15045f4d0

void __cdecl
`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance
               .Data;
  if (UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'UnknownDLL'' @ 15045f4f0

void __cdecl
``anonymous_namespace'::GetCodecApiDllPath'::__l2::_dynamic_atexit_destructor_for__UnknownDLL__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `GetCodecApiDllPath'::`2'::UnknownDLL.Data.AllocatorInstance.Data;
  if (`GetCodecApiDllPath'::`2'::UnknownDLL.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (`GetCodecApiDllPath'::`2'::UnknownDLL.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

