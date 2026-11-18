// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 138

// `dynamic_initializer_for_'GRegisterAudioSynesthesiaCustomVersion'' @ 1413e06e0

void __cdecl _dynamic_initializer_for__GRegisterAudioSynesthesiaCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FAudioSynesthesiaCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0,L"AudioSynesthesiaVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterAudioSynesthesiaCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogAudioSynesthesiaCore'' @ 1413e0720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioSynesthesiaCore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioSynesthesiaCore,L"LogAudioSynesthesiaCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioSynesthesiaCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioSynesthesiaCore'' @ 1413e0760

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioSynesthesiaCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioSynesthesiaCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioSynesthesiaCore",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Audio::FAudioSynesthesiaCoreModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 1413e07b0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 1413e07d0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 1413e07f0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 1413e0810

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 1413e0830

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 1413e0850

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 1413e0870

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 1413e0890

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaCore_Public_LKFSFactory_h__Script_AudioSynesthesiaCore_804226717'' @ 1413e08b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaCore_Public_LKFSFactory_h__Script_AudioSynesthesiaCore_804226717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesiaCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaCore_Public_LKFSFactory_h__Script_AudioSynesthesiaCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaCore_Public_LKFSNRTFactory_h__Script_AudioSynesthesiaCore_3875706043'' @ 1413e08f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaCore_Public_LKFSNRTFactory_h__Script_AudioSynesthesiaCore_3875706043__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesiaCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaCore_Public_LKFSNRTFactory_h__Script_AudioSynesthesiaCore_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioSynesthesiaCore'' @ 1413e0930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioSynesthesiaCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x52bc8e9d;
  local_res8[0].DeclarationsHash = 0x2ddcff44;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioSynesthesiaCore,L"/Script/AudioSynesthesiaCore",
             &Z_Registration_Info_UPackage__Script_AudioSynesthesiaCore,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14d7eb140

void * __thiscall
Audio::IAnalyzerNRTFactory::_scalar_deleting_destructor_(IAnalyzerNRTFactory *this,uint param_1)

{
  *this = (IAnalyzerNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7eb340

void * __thiscall
Audio::FLoudnessFactory::_scalar_deleting_destructor_(FLoudnessFactory *this,uint param_1)

{
  *this = (FLoudnessFactory)&___7IAnalyzerFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7eb550

void * __thiscall
Audio::FLKFSNRTFactory::_scalar_deleting_destructor_(FLKFSNRTFactory *this,uint param_1)

{
  *this = (FLKFSNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7eb7a0

void * __thiscall
Audio::FOnsetNRTFactory::_scalar_deleting_destructor_(FOnsetNRTFactory *this,uint param_1)

{
  *this = (FOnsetNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14d7eb7e0

void * __cdecl Z_Construct_UScriptStruct_FLKFSResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLKFSResults,&UE::CoreUObject::Private::Construct<FLKFSResults>,&UE::CoreUObject::Private::ConstructForTests<FLKFSResults>,&UE::CoreUObject::Private::Destruct<FLKFSResults>,&UE::CoreUObject::Private::Copy<FLKFSResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_AudioSynesthesiaCore @ 14d7eb820

UPackage * __cdecl Z_Construct_UPackage__Script_AudioSynesthesiaCore(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioSynesthesiaCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioSynesthesiaCore.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioSynesthesiaCore.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d7eba70

void * __thiscall
Audio::FLoudnessNRTFactory::_scalar_deleting_destructor_(FLoudnessNRTFactory *this,uint param_1)

{
  *this = (FLoudnessNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ebab0

void * __thiscall
Audio::IAudioSynesthesiaCoreModule::_scalar_deleting_destructor_
          (IAudioSynesthesiaCoreModule *this,uint param_1)

{
  *this = (IAudioSynesthesiaCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ebb30

void * __thiscall
Audio::IAnalyzerFactory::_scalar_deleting_destructor_(IAnalyzerFactory *this,uint param_1)

{
  *this = (IAnalyzerFactory)&___7IAnalyzerFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FLKFSNRTAggregateStats @ 14d7ebb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLKFSNRTAggregateStats(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTAggregateStats.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLKFSNRTAggregateStats.InnerSingleton,
               &Z_Construct_UScriptStruct_FLKFSNRTAggregateStats_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTAggregateStats.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLKFSNRTAggregateStats.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLKFSNRTChannelData @ 14d7ebbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLKFSNRTChannelData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTChannelData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLKFSNRTChannelData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLKFSNRTChannelData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTChannelData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLKFSNRTChannelData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLKFSNRTResults @ 14d7ebc70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLKFSNRTResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTResults.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLKFSNRTResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FLKFSNRTResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTResults.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLKFSNRTResults.InnerSingleton;
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

// NewStructOps @ 14d7ebcf0

void * __cdecl Z_Construct_UScriptStruct_FLKFSNRTResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLKFSNRTResults,&UE::CoreUObject::Private::Construct<FLKFSNRTResults>,&UE::CoreUObject::Private::ConstructForTests<FLKFSNRTResults>,&UE::CoreUObject::Private::Destruct<FLKFSNRTResults>,&UE::CoreUObject::Private::Copy<FLKFSNRTResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d7ebd30

void * __cdecl Z_Construct_UScriptStruct_FLKFSNRTAggregateStats_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLKFSNRTAggregateStats,&UE::CoreUObject::Private::Construct<FLKFSNRTAggregateStats>,&UE::CoreUObject::Private::ConstructForTests<FLKFSNRTAggregateStats>,&UE::CoreUObject::Private::Destruct<FLKFSNRTAggregateStats>,&UE::CoreUObject::Private::Copy<FLKFSNRTAggregateStats>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d7ebd70

void * __cdecl Z_Construct_UScriptStruct_FLKFSNRTChannelData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLKFSNRTChannelData,&UE::CoreUObject::Private::Construct<FLKFSNRTChannelData>,&UE::CoreUObject::Private::ConstructForTests<FLKFSNRTChannelData>,&UE::CoreUObject::Private::Destruct<FLKFSNRTChannelData>,&UE::CoreUObject::Private::Copy<FLKFSNRTChannelData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSortedChronologically_SetBit @ 14d7ebdf0

void __cdecl
Z_Construct_UScriptStruct_FLKFSNRTWaveData_Statics::NewProp_bIsSortedChronologically_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14d7ebe80

void * __cdecl Z_Construct_UScriptStruct_FLKFSNRTWaveData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLKFSNRTWaveData,&UE::CoreUObject::Private::Construct<FLKFSNRTWaveData>,&UE::CoreUObject::Private::ConstructForTests<FLKFSNRTWaveData>,&UE::CoreUObject::Private::Destruct<FLKFSNRTWaveData>,&UE::CoreUObject::Private::Copy<FLKFSNRTWaveData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d7ec190

void * __thiscall
Audio::FSynesthesiaSpectrumAnalysisFactory::_scalar_deleting_destructor_
          (FSynesthesiaSpectrumAnalysisFactory *this,uint param_1)

{
  *this = (FSynesthesiaSpectrumAnalysisFactory)&___7IAnalyzerFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ecca0

void * __thiscall
Audio::FAudioSynesthesiaCoreModule::_scalar_deleting_destructor_
          (FAudioSynesthesiaCoreModule *this,uint param_1)

{
  this->SpectralAnalysisFactory =
       (FSynesthesiaSpectrumAnalysisFactory)&___7IAnalyzerFactory_Audio__6B_;
  this->LKFSFactory = (FLKFSFactory)&___7IAnalyzerFactory_Audio__6B_;
  this->MeterFactory = (FMeterFactory)&___7IAnalyzerFactory_Audio__6B_;
  this->ConstantQFactory = (FConstantQFactory)&___7IAnalyzerFactory_Audio__6B_;
  this->LoudnessFactory = (FLoudnessFactory)&___7IAnalyzerFactory_Audio__6B_;
  this->OnsetNRTFactory = (FOnsetNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->ConstantQNRTFactory = (FConstantQNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->LKFSNRTFactory = (FLKFSNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->LoudnessNRTFactory = (FLoudnessNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ed020

void * __thiscall
Audio::FConstantQNRTFactory::_scalar_deleting_destructor_(FConstantQNRTFactory *this,uint param_1)

{
  *this = (FConstantQNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ed2b0

void * __thiscall
Audio::FConstantQFactory::_scalar_deleting_destructor_(FConstantQFactory *this,uint param_1)

{
  *this = (FConstantQFactory)&___7IAnalyzerFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ed4b0

void * __thiscall
Audio::FMeterFactory::_scalar_deleting_destructor_(FMeterFactory *this,uint param_1)

{
  *this = (FMeterFactory)&___7IAnalyzerFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7ed720

void * __thiscall Audio::FLKFSFactory::_scalar_deleting_destructor_(FLKFSFactory *this,uint param_1)

{
  *this = (FLKFSFactory)&___7IAnalyzerFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<int,FFloatInterval> @ 14d7ed8b0

FArchive * __cdecl
operator<<<int,FFloatInterval>(FArchive *param_1,TTuple<int,FFloatInterval> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x4);
    }
  }
  else {
    *(undefined4 *)&param_2->field_0x4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x8;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// FConstantQFrame,TSizedDefaultAllocator<32>_>_> @ 14d7ed9d0

FArchive * __cdecl
operator<<<int,TArray<Audio::FConstantQFrame_TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *)
                     &param_2->field_0x8);
  return param_1;
}

// FLoudnessDatum,TSizedDefaultAllocator<32>_>_> @ 14d7eda40

FArchive * __cdecl
operator<<<int,TArray<Audio::FLoudnessDatum_TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *)
                     &param_2->field_0x8);
  return param_1;
}

// FOnset,TSizedDefaultAllocator<32>_>_> @ 14d7edab0

FArchive * __cdecl
operator<<<int,TArray<Audio::FOnset_TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *param_2
          )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<Audio::FOnset,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *)&param_2->field_0x8);
  return param_1;
}

// operator<<<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator> @ 14d7edb20

FArchive * __cdecl
operator<<<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14d7f39ae;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14d7f39ae:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14d7f3a8b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14d7f3a8b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        uVar7 = *piVar1 - 1U & *(uint *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14);
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14;
        *(uint *)(lVar3 + 0x10) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FConstantQFrame,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14d7edb30

FArchive * __cdecl
operator<<<TTuple<int,TArray<Audio::
FConstantQFrame,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::
FConstantQFrame_TSizedDefaultAllocator<32>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,TArray<Audio::
  FConstantQFrame_TSizedDefaultAllocator<32>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14d7f3c4e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_14d7f3c4e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14d7f3d2b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_14d7f3d2b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[7] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[6] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14d7edb40

FArchive * __cdecl
operator<<<TTuple<int,TArray<Audio::
FLoudnessDatum,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::
FLoudnessDatum_TSizedDefaultAllocator<32>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,TArray<Audio::
  FLoudnessDatum_TSizedDefaultAllocator<32>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14d7f3eee;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_14d7f3eee:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14d7f3fcb;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_14d7f3fcb:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[7] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[6] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FOnset,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14d7edb50

FArchive * __cdecl
operator<<<TTuple<int,TArray<Audio::
FOnset,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::
FOnset_TSizedDefaultAllocator<32>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,TArray<Audio::
  FOnset_TSizedDefaultAllocator<32>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14d7f418e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_14d7f418e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14d7f426b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_14d7f426b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[7] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[6] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FConstantQFrame,TSizedDefaultAllocator<32>_> @ 14d7edb60

FArchive * __cdecl
operator<<<Audio::FConstantQFrame_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FConstantQFrame *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<Audio::FConstantQFrame,int>
                ((FConstantQFrame *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              Audio::operator<<(param_1,(FConstantQFrame *)
                                        ((param_2->AllocatorInstance).Data +
                                        (longlong)(int)uVar10 * 0x18));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FConstantQFrame *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<Audio::FConstantQFrame,int>(pFVar2,1);
              Audio::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FLoudnessDatum,TSizedDefaultAllocator<32>_> @ 14d7edb70

FArchive * __cdecl
operator<<<Audio::FLoudnessDatum_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FLoudnessDatum *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              Audio::operator<<(param_1,(FLoudnessDatum *)
                                        ((param_2->AllocatorInstance).Data +
                                        (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FLoudnessDatum *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<Audio::FLoudnessDatum,int>(pFVar10,1);
              Audio::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FOnset,TSizedDefaultAllocator<32>_> @ 14d7edb80

FArchive * __cdecl
operator<<<Audio::FOnset_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FOnset *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              Audio::operator<<(param_1,(FOnset *)
                                        ((param_2->AllocatorInstance).Data +
                                        (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FOnset *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<Audio::FOnset,int>(pFVar2,1);
              Audio::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7edb90

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<int,FFloatInterval> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<int,FFloatInterval> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x14,(longlong)*(int *)&param_2->field_0xc * 0x14);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14d7ede8c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_14d7ede8c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<int,FFloatInterval>
                  (param_1,(TTuple<int,FFloatInterval> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x14));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<int,FFloatInterval> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x14,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x14);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x14) = 0xffffffff;
          }
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<int,FFloatInterval> *)0x0;
        if (local_78.Pointer != (TTuple<int,FFloatInterval> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 4) = 0x7f7fffff;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0xffffffffff7fffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<int,FFloatInterval>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<int,FFloatInterval> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7edf00

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,TArray<Audio::
FConstantQFrame_TSizedDefaultAllocator<32>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14d7ee1fc;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14d7ee1fc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<int,TArray<Audio::FConstantQFrame_TSizedDefaultAllocator<32>_>_>
                  (param_1,(TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>
                            *)((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *)0x0;
        if (local_78.Pointer !=
            (TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<int,TArray<Audio::FConstantQFrame_TSizedDefaultAllocator<32>_>_>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_> *)
                  (ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7ee270

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,TArray<Audio::
FLoudnessDatum_TSizedDefaultAllocator<32>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14d7ee56c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14d7ee56c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<int,TArray<Audio::FLoudnessDatum_TSizedDefaultAllocator<32>_>_>
                  (param_1,(TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *
                           )((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *)0x0;
        if (local_78.Pointer !=
            (TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<int,TArray<Audio::FLoudnessDatum_TSizedDefaultAllocator<32>_>_>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_> *)
                  (ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d7ee5e0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,TArray<Audio::
FOnset_TSizedDefaultAllocator<32>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14d7ee8dc;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14d7ee8dc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<int,TArray<Audio::FOnset_TSizedDefaultAllocator<32>_>_>
                  (param_1,(TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *)
                           ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *)0x0;
        if (local_78.Pointer !=
            (TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<int,TArray<Audio::FOnset_TSizedDefaultAllocator<32>_>_>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_> *)
                  (ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// BinarySearchBy<TArray<TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14d7ee950

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x10) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(int *)(pFVar2 + (longlong)iVar5 * 0x10) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14d7ee9d0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// DefaultConstructItems<Audio::FMeterAnalyzer::FClippingData,int> @ 14d7eea50

void __cdecl
DefaultConstructItems<Audio::FMeterAnalyzer::FClippingData,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<Audio::FConstantQFrame,int> @ 14d7eea80

void __cdecl DefaultConstructItems<Audio::FConstantQFrame,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FMeterAnalyzer::FEnvelopeData,int> @ 14d7eeab0

void __cdecl
DefaultConstructItems<Audio::FMeterAnalyzer::FEnvelopeData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FLoudnessDatum,int> @ 14d7eeae0

void __cdecl DefaultConstructItems<Audio::FLoudnessDatum,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FOnset,int> @ 14d7eeb10

void __cdecl DefaultConstructItems<Audio::FOnset,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,int> @ 14d7eeb40

void __cdecl
DestructItems<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FConstantQFrame,int> @ 14d7eeb80

void __cdecl DestructItems<Audio::FConstantQFrame,int>(FConstantQFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Spectrum).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FConstantQFrame *)(&param_1->Spectrum + 1);
  }
  return;
}

// DestructItems<Audio::FSynesthesiaSpectrumEntry,int> @ 14d7eebc0

void __cdecl
DestructItems<Audio::FSynesthesiaSpectrumEntry,int>(FSynesthesiaSpectrumEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SpectrumValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FSynesthesiaSpectrumEntry *)(&param_1->SpectrumValues + 1);
  }
  return;
}

// DestructItems<TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>,int> @ 14d7eec00

void __cdecl
DestructItems<TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>,int>
          (TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<Audio::FOnsetStrengthAnalyzer>::operator()
              ((TDefaultDelete<Audio::FOnsetStrengthAnalyzer> *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// GroupBy<Audio::FPitchInfo,`Audio::FMaxStrengthPitchTracker::Finalize'::__l2::<lambda_2>,`Audio::FMaxStrengthPitchTracker::Finalize'::__l2::<lambda_3>_> @ 14d7f1b70

void __cdecl
Audio::MaxStrengthPitchTrackIntrinsics::
GroupBy<Audio::FPitchInfo,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_2>,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_3>_>
          (TArrayView<Audio::FPitchInfo_const_,int> *param_1,<lambda_2> *param_2,<lambda_3> *param_3
          )

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FPitchInfo *pFVar7;
  TArrayView<Audio::FPitchInfo_const_,int> *pTVar8;
  int iVar9;
  FPitchInfo *pFVar10;
  int iVar11;
  int iVar12;
  FPitchInfo *pFVar13;
  longlong lVar14;
  double *pdVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  TArrayView<Audio::FPitchInfo_const_,int> local_78;
  TArrayView<Audio::FPitchInfo_const_,int> local_68 [3];
  
  iVar3 = param_1->ArrayNum;
  if (0 < iVar3) {
    iVar9 = 0;
    iVar11 = 1;
    dVar2 = param_1->DataPtr->Timestamp;
    uVar16 = SUB84(dVar2,0);
    uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (1 < (longlong)iVar3) {
      lVar14 = (longlong)iVar3 + -1;
      pdVar15 = &param_1->DataPtr[1].Timestamp;
      do {
        dVar2 = *pdVar15;
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if ((double)CONCAT44(uVar17,uVar16) != dVar2) {
          iVar12 = iVar11 - iVar9;
          if ((iVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15b,L"Invalid index (%lld)"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((iVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15c,L"Invalid count (%lld)"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((param_1->ArrayNum < iVar11) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index + InNum <= ArrayNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15d,
                                 L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = param_1->DataPtr + iVar9;
          if ((iVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar13 = (FPitchInfo *)0x0;
          pFVar7 = pFVar10 + iVar12;
          uVar16 = uVar18;
          uVar17 = uVar19;
          iVar9 = iVar11;
          if (pFVar10 != pFVar7) {
            do {
              if ((pFVar13 == (FPitchInfo *)0x0) ||
                 (pFVar13->Strength <= pFVar10->Strength && pFVar10->Strength != pFVar13->Strength))
              {
                pFVar13 = pFVar10;
              }
              pFVar10 = pFVar10 + 1;
            } while (pFVar10 != pFVar7);
            if (pFVar13 != (FPitchInfo *)0x0) {
              pTVar4 = param_3->MaxObservations;
              pFVar10 = (FPitchInfo *)(pTVar4->AllocatorInstance).Data;
              if (((pFVar10 <= pFVar13) && (pFVar13 < pFVar10 + pTVar4->ArrayMax)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar12 = pTVar4->ArrayNum;
              if (iVar12 == pTVar4->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar12 + 1;
              dVar2 = pFVar13->Timestamp;
              pFVar1 = (pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
              *(undefined8 *)pFVar1 = *(undefined8 *)pFVar13;
              *(double *)(pFVar1 + 8) = dVar2;
            }
          }
        }
        iVar11 = iVar11 + 1;
        pdVar15 = pdVar15 + 2;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    pTVar8 = TArrayView<Audio::FPitchInfo_const_,int>::Slice(param_1,local_68,iVar9,iVar3 - iVar9);
    local_78.DataPtr = pTVar8->DataPtr;
    local_78.ArrayNum = pTVar8->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    `Audio::FMaxStrengthPitchTracker::Finalize'::__l2::<lambda_3>::operator()
              (param_3,(float)(double)CONCAT44(uVar17,uVar16),&local_78);
  }
  return;
}

// HeapSortInternal<Audio::FConstantQFrame,int,FIdentityFunctor,TDereferenceWrapper<Audio::FConstantQFrame,`Audio::FConstantQNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f1e40

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FConstantQFrame,int,FIdentityFunctor,TDereferenceWrapper<Audio::FConstantQFrame,_Audio::FConstantQNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FConstantQFrame *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FConstantQFrame,_public:_void___cdecl_Audio::FConstantQNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  FConstantQFrame *pFVar1;
  FConstantQFrame *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FConstantQFrame *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d7f1f56:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar15 = param_1 + lVar16;
          do {
            fVar6 = pFVar15->Timestamp;
            pFVar4 = (pFVar15->Spectrum).AllocatorInstance.Data;
            iVar19 = (param_1->Spectrum).ArrayNum;
            iVar17 = (param_1->Spectrum).ArrayMax;
            iVar13 = param_1->Channel;
            fVar9 = param_1->Timestamp;
            pFVar5 = (param_1->Spectrum).AllocatorInstance.Data;
            param_1->Channel = pFVar15->Channel;
            param_1->Timestamp = fVar6;
            (param_1->Spectrum).AllocatorInstance.Data = pFVar4;
            iVar18 = (pFVar15->Spectrum).ArrayMax;
            (param_1->Spectrum).ArrayNum = (pFVar15->Spectrum).ArrayNum;
            (param_1->Spectrum).ArrayMax = iVar18;
            pFVar15->Channel = iVar13;
            pFVar15->Timestamp = fVar9;
            (pFVar15->Spectrum).AllocatorInstance.Data = pFVar5;
            (pFVar15->Spectrum).ArrayNum = iVar19;
            (pFVar15->Spectrum).ArrayMax = iVar17;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].Timestamp <= param_1[iVar13].Timestamp &&
                      param_1[iVar13].Timestamp != param_1[(longlong)iVar19 + 2].Timestamp) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].Timestamp < param_1[iVar18].Timestamp ||
                    param_1[iVar13].Timestamp == param_1[iVar18].Timestamp) break;
                pFVar1 = param_1 + iVar13;
                fVar6 = pFVar1->Timestamp;
                pFVar4 = (pFVar1->Spectrum).AllocatorInstance.Data;
                iVar7 = param_1[iVar18].Spectrum.ArrayNum;
                iVar8 = param_1[iVar18].Spectrum.ArrayMax;
                pFVar2 = param_1 + iVar18;
                iVar17 = pFVar2->Channel;
                fVar9 = pFVar2->Timestamp;
                pFVar5 = (pFVar2->Spectrum).AllocatorInstance.Data;
                pFVar2 = param_1 + iVar18;
                pFVar2->Channel = pFVar1->Channel;
                pFVar2->Timestamp = fVar6;
                (pFVar2->Spectrum).AllocatorInstance.Data = pFVar4;
                iVar19 = param_1[iVar13].Spectrum.ArrayMax;
                param_1[iVar18].Spectrum.ArrayNum = param_1[iVar13].Spectrum.ArrayNum;
                param_1[iVar18].Spectrum.ArrayMax = iVar19;
                pFVar1 = param_1 + iVar13;
                pFVar1->Channel = iVar17;
                pFVar1->Timestamp = fVar9;
                (pFVar1->Spectrum).AllocatorInstance.Data = pFVar5;
                param_1[iVar13].Spectrum.ArrayNum = iVar7;
                param_1[iVar13].Spectrum.ArrayMax = iVar8;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Timestamp <= param_1[iVar17].Timestamp &&
          param_1[iVar17].Timestamp != param_1[(longlong)iVar14 + 2].Timestamp) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].Timestamp < param_1[iVar13].Timestamp ||
        param_1[iVar17].Timestamp == param_1[iVar13].Timestamp) goto LAB_14d7f1f56;
    pFVar15 = param_1 + iVar17;
    fVar6 = pFVar15->Timestamp;
    pFVar4 = (pFVar15->Spectrum).AllocatorInstance.Data;
    iVar14 = iVar17 * 2 + 1;
    iVar10 = param_1[iVar13].Spectrum.ArrayNum;
    iVar11 = param_1[iVar13].Spectrum.ArrayMax;
    pFVar1 = param_1 + iVar13;
    iVar8 = pFVar1->Channel;
    fVar9 = pFVar1->Timestamp;
    pFVar5 = (pFVar1->Spectrum).AllocatorInstance.Data;
    pFVar1 = param_1 + iVar13;
    pFVar1->Channel = pFVar15->Channel;
    pFVar1->Timestamp = fVar6;
    (pFVar1->Spectrum).AllocatorInstance.Data = pFVar4;
    iVar7 = param_1[iVar17].Spectrum.ArrayMax;
    param_1[iVar13].Spectrum.ArrayNum = param_1[iVar17].Spectrum.ArrayNum;
    param_1[iVar13].Spectrum.ArrayMax = iVar7;
    pFVar15 = param_1 + iVar17;
    pFVar15->Channel = iVar8;
    pFVar15->Timestamp = fVar9;
    (pFVar15->Spectrum).AllocatorInstance.Data = pFVar5;
    param_1[iVar17].Spectrum.ArrayNum = iVar10;
    param_1[iVar17].Spectrum.ArrayMax = iVar11;
    iVar13 = iVar17;
  } while( true );
}

// HeapSortInternal<FLKFSNRTResults,int,FIdentityFunctor,TDereferenceWrapper<FLKFSNRTResults,`Audio::FLKFSNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f2070

void __cdecl
AlgoImpl::
HeapSortInternal<FLKFSNRTResults,int,FIdentityFunctor,TDereferenceWrapper<FLKFSNRTResults,_Audio::FLKFSNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FLKFSNRTResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLKFSNRTResults,_public:_void___cdecl_Audio::FLKFSNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  FLKFSNRTResults *pFVar1;
  FLKFSNRTResults *pFVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FLKFSNRTResults *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d7f217f:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar15 = param_1 + lVar16;
          do {
            fVar5 = pFVar15->Timestamp;
            fVar6 = pFVar15->Energy;
            fVar7 = pFVar15->Loudness;
            fVar3 = param_1->ShortTermLoudness;
            iVar13 = 0;
            iVar18 = param_1->Channel;
            fVar9 = param_1->Timestamp;
            fVar10 = param_1->Energy;
            fVar11 = param_1->Loudness;
            param_1->Channel = pFVar15->Channel;
            param_1->Timestamp = fVar5;
            param_1->Energy = fVar6;
            param_1->Loudness = fVar7;
            param_1->ShortTermLoudness = pFVar15->ShortTermLoudness;
            pFVar15->Channel = iVar18;
            pFVar15->Timestamp = fVar9;
            pFVar15->Energy = fVar10;
            pFVar15->Loudness = fVar11;
            pFVar15->ShortTermLoudness = fVar3;
            if (1 < iVar14) {
              do {
                iVar19 = iVar13 * 2;
                iVar18 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].Timestamp <= param_1[iVar18].Timestamp &&
                      param_1[iVar18].Timestamp != param_1[(longlong)iVar19 + 2].Timestamp) {
                    iVar18 = iVar19;
                  }
                  iVar18 = iVar18 + 1;
                }
                if (param_1[iVar18].Timestamp < param_1[iVar13].Timestamp ||
                    param_1[iVar18].Timestamp == param_1[iVar13].Timestamp) break;
                pFVar1 = param_1 + iVar18;
                fVar5 = pFVar1->Timestamp;
                fVar6 = pFVar1->Energy;
                fVar7 = pFVar1->Loudness;
                fVar3 = param_1[iVar13].ShortTermLoudness;
                pFVar2 = param_1 + iVar13;
                iVar19 = pFVar2->Channel;
                fVar9 = pFVar2->Timestamp;
                fVar10 = pFVar2->Energy;
                fVar11 = pFVar2->Loudness;
                pFVar2 = param_1 + iVar13;
                pFVar2->Channel = pFVar1->Channel;
                pFVar2->Timestamp = fVar5;
                pFVar2->Energy = fVar6;
                pFVar2->Loudness = fVar7;
                param_1[iVar13].ShortTermLoudness = param_1[iVar18].ShortTermLoudness;
                pFVar1 = param_1 + iVar18;
                pFVar1->Channel = iVar19;
                pFVar1->Timestamp = fVar9;
                pFVar1->Energy = fVar10;
                pFVar1->Loudness = fVar11;
                param_1[iVar18].ShortTermLoudness = fVar3;
                iVar13 = iVar18;
              } while (iVar18 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Timestamp <= param_1[iVar17].Timestamp &&
          param_1[iVar17].Timestamp != param_1[(longlong)iVar14 + 2].Timestamp) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].Timestamp < param_1[iVar13].Timestamp ||
        param_1[iVar17].Timestamp == param_1[iVar13].Timestamp) goto LAB_14d7f217f;
    pFVar15 = param_1 + iVar17;
    fVar5 = pFVar15->Timestamp;
    fVar6 = pFVar15->Energy;
    fVar7 = pFVar15->Loudness;
    fVar3 = param_1[iVar13].ShortTermLoudness;
    pFVar1 = param_1 + iVar13;
    iVar8 = pFVar1->Channel;
    fVar9 = pFVar1->Timestamp;
    fVar10 = pFVar1->Energy;
    fVar11 = pFVar1->Loudness;
    pFVar1 = param_1 + iVar13;
    pFVar1->Channel = pFVar15->Channel;
    pFVar1->Timestamp = fVar5;
    pFVar1->Energy = fVar6;
    pFVar1->Loudness = fVar7;
    param_1[iVar13].ShortTermLoudness = param_1[iVar17].ShortTermLoudness;
    iVar14 = iVar17 * 2 + 1;
    pFVar15 = param_1 + iVar17;
    pFVar15->Channel = iVar8;
    pFVar15->Timestamp = fVar9;
    pFVar15->Energy = fVar10;
    pFVar15->Loudness = fVar11;
    param_1[iVar17].ShortTermLoudness = fVar3;
    iVar13 = iVar17;
  } while( true );
}

// HeapSortInternal<Audio::FLoudnessDatum,int,FIdentityFunctor,TDereferenceWrapper<Audio::FLoudnessDatum,`Audio::FLoudnessNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f2290

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FLoudnessDatum,int,FIdentityFunctor,TDereferenceWrapper<Audio::FLoudnessDatum,_Audio::FLoudnessNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FLoudnessDatum *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FLoudnessDatum,_public:_void___cdecl_Audio::FLoudnessNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  FLoudnessDatum *pFVar1;
  FLoudnessDatum *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  FLoudnessDatum *pFVar18;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar15 = iVar13;
  iVar17 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_14d7f2383:
      if (iVar17 == 0) {
        iVar13 = param_2 + -1;
        lVar16 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar18 = param_1 + lVar16;
          do {
            fVar4 = pFVar18->Timestamp;
            fVar5 = pFVar18->Energy;
            fVar6 = pFVar18->Loudness;
            iVar12 = 0;
            iVar15 = param_1->Channel;
            fVar8 = param_1->Timestamp;
            fVar9 = param_1->Energy;
            fVar10 = param_1->Loudness;
            param_1->Channel = pFVar18->Channel;
            param_1->Timestamp = fVar4;
            param_1->Energy = fVar5;
            param_1->Loudness = fVar6;
            pFVar18->Channel = iVar15;
            pFVar18->Timestamp = fVar8;
            pFVar18->Energy = fVar9;
            pFVar18->Loudness = fVar10;
            if (1 < iVar13) {
              do {
                iVar17 = iVar12 * 2;
                iVar15 = iVar17 + 1;
                if (iVar17 + 2 < iVar13) {
                  if (param_1[(longlong)iVar17 + 2].Timestamp <= param_1[iVar15].Timestamp &&
                      param_1[iVar15].Timestamp != param_1[(longlong)iVar17 + 2].Timestamp) {
                    iVar15 = iVar17;
                  }
                  iVar15 = iVar15 + 1;
                }
                if (param_1[iVar15].Timestamp < param_1[iVar12].Timestamp ||
                    param_1[iVar15].Timestamp == param_1[iVar12].Timestamp) break;
                pFVar1 = param_1 + iVar12;
                iVar17 = pFVar1->Channel;
                fVar8 = pFVar1->Timestamp;
                fVar9 = pFVar1->Energy;
                fVar10 = pFVar1->Loudness;
                pFVar1 = param_1 + iVar15;
                fVar4 = pFVar1->Timestamp;
                fVar5 = pFVar1->Energy;
                fVar6 = pFVar1->Loudness;
                pFVar2 = param_1 + iVar12;
                pFVar2->Channel = pFVar1->Channel;
                pFVar2->Timestamp = fVar4;
                pFVar2->Energy = fVar5;
                pFVar2->Loudness = fVar6;
                pFVar1 = param_1 + iVar15;
                pFVar1->Channel = iVar17;
                pFVar1->Timestamp = fVar8;
                pFVar1->Energy = fVar9;
                pFVar1->Loudness = fVar10;
                iVar12 = iVar15;
              } while (iVar15 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar16 = lVar16 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar12 = iVar17 + -1;
      iVar13 = iVar15 + -2;
      iVar15 = iVar13;
      iVar17 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar14 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (param_1[(longlong)iVar13 + 2].Timestamp <= param_1[iVar14].Timestamp &&
          param_1[iVar14].Timestamp != param_1[(longlong)iVar13 + 2].Timestamp) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    if (param_1[iVar14].Timestamp < param_1[iVar12].Timestamp ||
        param_1[iVar14].Timestamp == param_1[iVar12].Timestamp) goto LAB_14d7f2383;
    pFVar18 = param_1 + iVar12;
    iVar7 = pFVar18->Channel;
    fVar8 = pFVar18->Timestamp;
    fVar9 = pFVar18->Energy;
    fVar10 = pFVar18->Loudness;
    pFVar18 = param_1 + iVar14;
    fVar4 = pFVar18->Timestamp;
    fVar5 = pFVar18->Energy;
    fVar6 = pFVar18->Loudness;
    pFVar1 = param_1 + iVar12;
    pFVar1->Channel = pFVar18->Channel;
    pFVar1->Timestamp = fVar4;
    pFVar1->Energy = fVar5;
    pFVar1->Loudness = fVar6;
    iVar13 = iVar14 * 2 + 1;
    pFVar18 = param_1 + iVar14;
    pFVar18->Channel = iVar7;
    pFVar18->Timestamp = fVar8;
    pFVar18->Energy = fVar9;
    pFVar18->Loudness = fVar10;
    iVar12 = iVar14;
  } while( true );
}

// HeapSortInternal<Audio::FOnset,int,FIdentityFunctor,TDereferenceWrapper<Audio::FOnset,`Audio::FOnsetNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f2460

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FOnset,int,FIdentityFunctor,TDereferenceWrapper<Audio::FOnset,_Audio::FOnsetNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FOnset *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FOnset,_public:_void___cdecl_Audio::FOnsetNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FOnset *pFVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar13 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_14d7f2577:
      if (iVar13 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar9 = param_1 + lVar10;
          do {
            fVar3 = pFVar9->Timestamp;
            iVar12 = param_1->Channel;
            fVar5 = param_1->Timestamp;
            fVar1 = param_1->Strength;
            param_1->Channel = pFVar9->Channel;
            param_1->Timestamp = fVar3;
            param_1->Strength = pFVar9->Strength;
            pFVar9->Channel = iVar12;
            pFVar9->Timestamp = fVar5;
            pFVar9->Strength = fVar1;
            iVar12 = 0;
            if (1 < iVar8) {
              do {
                iVar13 = iVar12 * 2;
                iVar7 = iVar13 + 1;
                if (iVar13 + 2 < iVar8) {
                  if (param_1[(longlong)iVar13 + 2].Timestamp <= param_1[iVar7].Timestamp &&
                      param_1[iVar7].Timestamp != param_1[(longlong)iVar13 + 2].Timestamp) {
                    iVar7 = iVar13;
                  }
                  iVar7 = iVar7 + 1;
                }
                if (param_1[iVar7].Timestamp < param_1[iVar12].Timestamp ||
                    param_1[iVar7].Timestamp == param_1[iVar12].Timestamp) break;
                fVar3 = param_1[iVar7].Timestamp;
                iVar13 = param_1[iVar12].Channel;
                fVar5 = param_1[iVar12].Timestamp;
                fVar1 = param_1[iVar12].Strength;
                param_1[iVar12].Channel = param_1[iVar7].Channel;
                param_1[iVar12].Timestamp = fVar3;
                param_1[iVar12].Strength = param_1[iVar7].Strength;
                param_1[iVar7].Channel = iVar13;
                param_1[iVar7].Timestamp = fVar5;
                param_1[iVar7].Strength = fVar1;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar10 = lVar10 + -1;
            pFVar9 = pFVar9 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar7 = iVar13 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar13 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (param_1[(longlong)iVar8 + 2].Timestamp <= param_1[iVar11].Timestamp &&
          param_1[iVar11].Timestamp != param_1[(longlong)iVar8 + 2].Timestamp) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    if (param_1[iVar11].Timestamp < param_1[iVar7].Timestamp ||
        param_1[iVar11].Timestamp == param_1[iVar7].Timestamp) goto LAB_14d7f2577;
    fVar3 = param_1[iVar11].Timestamp;
    iVar4 = param_1[iVar7].Channel;
    fVar5 = param_1[iVar7].Timestamp;
    fVar1 = param_1[iVar7].Strength;
    param_1[iVar7].Channel = param_1[iVar11].Channel;
    param_1[iVar7].Timestamp = fVar3;
    param_1[iVar7].Strength = param_1[iVar11].Strength;
    iVar8 = iVar11 * 2 + 1;
    param_1[iVar11].Channel = iVar4;
    param_1[iVar11].Timestamp = fVar5;
    param_1[iVar11].Strength = fVar1;
    iVar7 = iVar11;
  } while( true );
}

// HeapSortInternal<Audio::FPitchInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FPitchInfo,`Audio::FMaxStrengthPitchTracker::Finalize'::__l2::<lambda_1>_>_> @ 14d7f2690

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FPitchInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FPitchInfo,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_1>_>_>
          (FPitchInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FPitchInfo,_public:_virtual_void___cdecl_Audio::FMaxStrengthPitchTracker::Finalize(TArray<Audio::FPitchTrackInfo,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FPitchInfo *pFVar1;
  FPitchInfo *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  FPitchInfo *pFVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14d7f2785:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar16 = param_1 + lVar13;
          do {
            fVar6 = pFVar16->Strength;
            dVar4 = pFVar16->Timestamp;
            iVar14 = 0;
            fVar7 = param_1->Frequency;
            fVar8 = param_1->Strength;
            dVar5 = param_1->Timestamp;
            param_1->Frequency = pFVar16->Frequency;
            param_1->Strength = fVar6;
            param_1->Timestamp = dVar4;
            pFVar16->Frequency = fVar7;
            pFVar16->Strength = fVar8;
            pFVar16->Timestamp = dVar5;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].Timestamp <= param_1[iVar10].Timestamp &&
                      param_1[iVar10].Timestamp != param_1[(longlong)iVar15 + 2].Timestamp) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].Timestamp < param_1[iVar14].Timestamp ||
                    param_1[iVar10].Timestamp == param_1[iVar14].Timestamp) break;
                pFVar1 = param_1 + iVar14;
                fVar7 = pFVar1->Frequency;
                fVar8 = pFVar1->Strength;
                dVar4 = pFVar1->Timestamp;
                pFVar1 = param_1 + iVar10;
                fVar6 = pFVar1->Strength;
                dVar5 = pFVar1->Timestamp;
                pFVar2 = param_1 + iVar14;
                pFVar2->Frequency = pFVar1->Frequency;
                pFVar2->Strength = fVar6;
                pFVar2->Timestamp = dVar5;
                pFVar1 = param_1 + iVar10;
                pFVar1->Frequency = fVar7;
                pFVar1->Strength = fVar8;
                pFVar1->Timestamp = dVar4;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Timestamp <= param_1[iVar12].Timestamp &&
          param_1[iVar12].Timestamp != param_1[(longlong)iVar11 + 2].Timestamp) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].Timestamp < param_1[iVar10].Timestamp ||
        param_1[iVar12].Timestamp == param_1[iVar10].Timestamp) goto LAB_14d7f2785;
    pFVar16 = param_1 + iVar10;
    fVar7 = pFVar16->Frequency;
    fVar8 = pFVar16->Strength;
    dVar4 = pFVar16->Timestamp;
    pFVar16 = param_1 + iVar12;
    fVar6 = pFVar16->Strength;
    dVar5 = pFVar16->Timestamp;
    pFVar1 = param_1 + iVar10;
    pFVar1->Frequency = pFVar16->Frequency;
    pFVar1->Strength = fVar6;
    pFVar1->Timestamp = dVar5;
    iVar11 = iVar12 * 2 + 1;
    pFVar16 = param_1 + iVar12;
    pFVar16->Frequency = fVar7;
    pFVar16->Strength = fVar8;
    pFVar16->Timestamp = dVar4;
    iVar10 = iVar12;
  } while( true );
}

// IntroSortInternal<Audio::FConstantQFrame,int,FIdentityFunctor,TDereferenceWrapper<Audio::FConstantQFrame,`Audio::FConstantQNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f2860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FConstantQFrame,int,FIdentityFunctor,TDereferenceWrapper<Audio::FConstantQFrame,_Audio::FConstantQNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FConstantQFrame *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FConstantQFrame,_public:_void___cdecl_Audio::FConstantQNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  FConstantQFrame *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FConstantQFrame *pFVar12;
  int iVar13;
  FConstantQFrame *pFVar14;
  FConstantQFrame *pFVar15;
  FConstantQFrame *pFVar16;
  FConstantQFrame *pFVar17;
  FConstantQFrame *pFVar18;
  FConstantQFrame **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FConstantQFrame *local_348;
  FConstantQFrame *local_338;
  FConstantQFrame *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar15 = ppFVar19[1];
      pFVar14 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar14) / 0x18) + 1;
      pFVar18 = pFVar14;
      if ((int)local_348 != 0) {
LAB_14d7f2930:
        if (8 < iVar13) {
          fVar20 = pFVar18->Timestamp;
          pFVar2 = (pFVar18->Spectrum).AllocatorInstance.Data;
          pFVar12 = pFVar15 + 1;
          iVar13 = iVar13 / 2;
          pFVar14 = pFVar18 + iVar13;
          iVar7 = pFVar14->Channel;
          fVar8 = pFVar14->Timestamp;
          pFVar3 = (pFVar14->Spectrum).AllocatorInstance.Data;
          iVar9 = pFVar18[iVar13].Spectrum.ArrayNum;
          iVar10 = pFVar18[iVar13].Spectrum.ArrayMax;
          pFVar14 = pFVar18 + iVar13;
          pFVar14->Channel = pFVar18->Channel;
          pFVar14->Timestamp = fVar20;
          (pFVar14->Spectrum).AllocatorInstance.Data = pFVar2;
          iVar6 = (pFVar18->Spectrum).ArrayMax;
          pFVar18[iVar13].Spectrum.ArrayNum = (pFVar18->Spectrum).ArrayNum;
          pFVar18[iVar13].Spectrum.ArrayMax = iVar6;
          pFVar18->Channel = iVar7;
          pFVar18->Timestamp = fVar8;
          (pFVar18->Spectrum).AllocatorInstance.Data = pFVar3;
          (pFVar18->Spectrum).ArrayNum = iVar9;
          (pFVar18->Spectrum).ArrayMax = iVar10;
          pFVar14 = pFVar18;
LAB_14d7f2980:
          pFVar16 = pFVar14;
          pFVar14 = pFVar16 + 1;
          if (pFVar14 <= pFVar15) goto code_r0x00014d7f2989;
          goto LAB_14d7f2996;
        }
        if (pFVar18 < pFVar15) {
          pFVar1 = pFVar18 + 1;
          do {
            pFVar14 = pFVar18;
            if (pFVar1 <= pFVar15) {
              pFVar12 = pFVar1;
              if (0x5f < (ulonglong)((longlong)pFVar15 + (0x18 - (longlong)pFVar1))) {
                do {
                  if (pFVar14->Timestamp < pFVar12->Timestamp) {
                    pFVar14 = pFVar12;
                  }
                  if (pFVar14->Timestamp <= pFVar12[1].Timestamp &&
                      pFVar12[1].Timestamp != pFVar14->Timestamp) {
                    pFVar14 = pFVar12 + 1;
                  }
                  if (pFVar14->Timestamp <= pFVar12[2].Timestamp &&
                      pFVar12[2].Timestamp != pFVar14->Timestamp) {
                    pFVar14 = pFVar12 + 2;
                  }
                  if (pFVar14->Timestamp <= pFVar12[3].Timestamp &&
                      pFVar12[3].Timestamp != pFVar14->Timestamp) {
                    pFVar14 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar15 + -3);
              }
              for (; pFVar12 <= pFVar15; pFVar12 = pFVar12 + 1) {
                if (pFVar14->Timestamp < pFVar12->Timestamp) {
                  pFVar14 = pFVar12;
                }
              }
            }
            iVar6 = pFVar14->Channel;
            fVar8 = pFVar14->Timestamp;
            pFVar2 = (pFVar14->Spectrum).AllocatorInstance.Data;
            pFVar12 = pFVar15 + -1;
            iVar7 = (pFVar14->Spectrum).ArrayNum;
            iVar9 = (pFVar14->Spectrum).ArrayMax;
            fVar20 = pFVar15->Timestamp;
            pFVar3 = (pFVar15->Spectrum).AllocatorInstance.Data;
            pFVar14->Channel = pFVar15->Channel;
            pFVar14->Timestamp = fVar20;
            (pFVar14->Spectrum).AllocatorInstance.Data = pFVar3;
            iVar13 = (pFVar15->Spectrum).ArrayMax;
            (pFVar14->Spectrum).ArrayNum = (pFVar15->Spectrum).ArrayNum;
            (pFVar14->Spectrum).ArrayMax = iVar13;
            pFVar15->Channel = iVar6;
            pFVar15->Timestamp = fVar8;
            (pFVar15->Spectrum).AllocatorInstance.Data = pFVar2;
            (pFVar15->Spectrum).ArrayNum = iVar7;
            (pFVar15->Spectrum).ArrayMax = iVar9;
            pFVar15 = pFVar12;
          } while (pFVar18 < pFVar12);
        }
        goto LAB_14d7f2abb;
      }
LAB_14d7f2aac:
      local_348 = pFVar1;
      HeapSortInternal<Audio::FConstantQFrame,int,FIdentityFunctor,TDereferenceWrapper<Audio::FConstantQFrame,_Audio::FConstantQNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
                (pFVar14,iVar13,param_3,param_4);
LAB_14d7f2abb:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x00014d7f2989:
  if (pFVar16[1].Timestamp < pFVar18->Timestamp || pFVar16[1].Timestamp == pFVar18->Timestamp)
  goto LAB_14d7f2980;
LAB_14d7f2996:
  do {
    pFVar17 = pFVar12;
    pFVar12 = pFVar17 + -1;
    if (pFVar12 <= pFVar18) break;
  } while (pFVar18->Timestamp < pFVar17[-1].Timestamp || pFVar18->Timestamp == pFVar17[-1].Timestamp
          );
  uVar4 = pFVar12->Channel;
  uVar5 = pFVar12->Timestamp;
  pFVar2 = pFVar17[-1].Spectrum.AllocatorInstance.Data;
  if (pFVar14 <= pFVar12) {
    iVar6 = pFVar14->Channel;
    fVar20 = pFVar14->Timestamp;
    pFVar3 = pFVar16[1].Spectrum.AllocatorInstance.Data;
    iVar7 = pFVar16[1].Spectrum.ArrayNum;
    iVar9 = pFVar16[1].Spectrum.ArrayMax;
    pFVar14->Channel = uVar4;
    pFVar14->Timestamp = (float)uVar5;
    pFVar16[1].Spectrum.AllocatorInstance.Data = pFVar2;
    iVar13 = pFVar17[-1].Spectrum.ArrayMax;
    pFVar16[1].Spectrum.ArrayNum = pFVar17[-1].Spectrum.ArrayNum;
    pFVar16[1].Spectrum.ArrayMax = iVar13;
    pFVar12->Channel = iVar6;
    pFVar12->Timestamp = fVar20;
    pFVar17[-1].Spectrum.AllocatorInstance.Data = pFVar3;
    pFVar17[-1].Spectrum.ArrayNum = iVar7;
    pFVar17[-1].Spectrum.ArrayMax = iVar9;
    goto LAB_14d7f2980;
  }
  iVar6 = pFVar18->Channel;
  fVar20 = pFVar18->Timestamp;
  pFVar3 = (pFVar18->Spectrum).AllocatorInstance.Data;
  iVar7 = (pFVar18->Spectrum).ArrayNum;
  iVar9 = (pFVar18->Spectrum).ArrayMax;
  lVar11 = (longlong)pFVar12 + (-0x18 - (longlong)pFVar18);
  local_348._0_4_ = (int)local_348 + -1;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  pFVar18->Channel = uVar4;
  pFVar18->Timestamp = (float)uVar5;
  (pFVar18->Spectrum).AllocatorInstance.Data = pFVar2;
  iVar13 = pFVar17[-1].Spectrum.ArrayMax;
  (pFVar18->Spectrum).ArrayNum = pFVar17[-1].Spectrum.ArrayNum;
  (pFVar18->Spectrum).ArrayMax = iVar13;
  pFVar12->Channel = iVar6;
  pFVar12->Timestamp = fVar20;
  pFVar17[-1].Spectrum.AllocatorInstance.Data = pFVar3;
  pFVar17[-1].Spectrum.ArrayNum = iVar7;
  pFVar17[-1].Spectrum.ArrayMax = iVar9;
  if ((lVar11 >> 2) - (lVar11 >> 0x3f) < ((longlong)pFVar15 - (longlong)pFVar14) / 0x18) {
    if (pFVar14 < pFVar15) {
      *ppFVar19 = pFVar14;
      ppFVar19[1] = pFVar15;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar12 <= pFVar18 + 1) goto LAB_14d7f2abb;
    pFVar15 = pFVar17 + -2;
    pFVar14 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar12) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar17 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar14) goto LAB_14d7f2abb;
  }
  iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar14) / 0x18) + 1;
  pFVar18 = pFVar14;
  if ((int)local_348 == 0) goto LAB_14d7f2aac;
  goto LAB_14d7f2930;
}

// IntroSortInternal<FLKFSNRTResults,int,FIdentityFunctor,TDereferenceWrapper<FLKFSNRTResults,`Audio::FLKFSNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f2bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FLKFSNRTResults,int,FIdentityFunctor,TDereferenceWrapper<FLKFSNRTResults,_Audio::FLKFSNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FLKFSNRTResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLKFSNRTResults,_public:_void___cdecl_Audio::FLKFSNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  FLKFSNRTResults *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FLKFSNRTResults *pFVar13;
  int iVar14;
  FLKFSNRTResults *pFVar15;
  FLKFSNRTResults *pFVar16;
  FLKFSNRTResults *pFVar17;
  FLKFSNRTResults *pFVar18;
  FLKFSNRTResults *pFVar19;
  FLKFSNRTResults **ppFVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  FLKFSNRTResults *local_348;
  FLKFSNRTResults *local_338;
  FLKFSNRTResults *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar21;
    memset(local_320,0,0x2e8);
    ppFVar20 = &local_338;
    do {
      pFVar15 = ppFVar20[1];
      pFVar16 = *ppFVar20;
      pFVar1 = ppFVar20[2];
      local_348._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar16) / 0x14) + 1;
      pFVar19 = pFVar16;
      if ((int)local_348 != 0) {
LAB_14d7f2ca0:
        if (8 < iVar14) {
          fVar6 = pFVar19->Timestamp;
          fVar7 = pFVar19->Energy;
          fVar8 = pFVar19->Loudness;
          pFVar13 = pFVar15 + 1;
          iVar14 = iVar14 / 2;
          pFVar16 = pFVar19 + iVar14;
          iVar9 = pFVar16->Channel;
          fVar10 = pFVar16->Timestamp;
          fVar11 = pFVar16->Energy;
          fVar12 = pFVar16->Loudness;
          fVar21 = pFVar19[iVar14].ShortTermLoudness;
          pFVar16 = pFVar19 + iVar14;
          pFVar16->Channel = pFVar19->Channel;
          pFVar16->Timestamp = fVar6;
          pFVar16->Energy = fVar7;
          pFVar16->Loudness = fVar8;
          pFVar19[iVar14].ShortTermLoudness = pFVar19->ShortTermLoudness;
          pFVar19->Channel = iVar9;
          pFVar19->Timestamp = fVar10;
          pFVar19->Energy = fVar11;
          pFVar19->Loudness = fVar12;
          pFVar19->ShortTermLoudness = fVar21;
          pFVar16 = pFVar19;
LAB_14d7f2ce2:
          pFVar17 = pFVar16;
          pFVar16 = pFVar17 + 1;
          if (pFVar16 <= pFVar15) goto code_r0x00014d7f2ceb;
          goto LAB_14d7f2d00;
        }
        if (pFVar19 < pFVar15) {
          pFVar1 = pFVar19 + 1;
          do {
            pFVar16 = pFVar19;
            if (pFVar1 <= pFVar15) {
              pFVar13 = pFVar1;
              if (0x4f < (ulonglong)((longlong)pFVar15 + (0x14 - (longlong)pFVar1))) {
                do {
                  if (pFVar16->Timestamp < pFVar13->Timestamp) {
                    pFVar16 = pFVar13;
                  }
                  if (pFVar16->Timestamp <= pFVar13[1].Timestamp &&
                      pFVar13[1].Timestamp != pFVar16->Timestamp) {
                    pFVar16 = pFVar13 + 1;
                  }
                  if (pFVar16->Timestamp <= pFVar13[2].Timestamp &&
                      pFVar13[2].Timestamp != pFVar16->Timestamp) {
                    pFVar16 = pFVar13 + 2;
                  }
                  if (pFVar16->Timestamp <= pFVar13[3].Timestamp &&
                      pFVar13[3].Timestamp != pFVar16->Timestamp) {
                    pFVar16 = pFVar13 + 3;
                  }
                  pFVar13 = pFVar13 + 4;
                } while (pFVar13 <= pFVar15 + -3);
              }
              for (; pFVar13 <= pFVar15; pFVar13 = pFVar13 + 1) {
                if (pFVar16->Timestamp < pFVar13->Timestamp) {
                  pFVar16 = pFVar13;
                }
              }
            }
            iVar14 = pFVar16->Channel;
            fVar10 = pFVar16->Timestamp;
            fVar11 = pFVar16->Energy;
            fVar12 = pFVar16->Loudness;
            fVar21 = pFVar16->ShortTermLoudness;
            pFVar13 = pFVar15 + -1;
            fVar6 = pFVar15->Timestamp;
            fVar7 = pFVar15->Energy;
            fVar8 = pFVar15->Loudness;
            pFVar16->Channel = pFVar15->Channel;
            pFVar16->Timestamp = fVar6;
            pFVar16->Energy = fVar7;
            pFVar16->Loudness = fVar8;
            pFVar16->ShortTermLoudness = pFVar15->ShortTermLoudness;
            pFVar15->Channel = iVar14;
            pFVar15->Timestamp = fVar10;
            pFVar15->Energy = fVar11;
            pFVar15->Loudness = fVar12;
            pFVar15->ShortTermLoudness = fVar21;
            pFVar15 = pFVar13;
          } while (pFVar19 < pFVar13);
        }
        goto LAB_14d7f2e15;
      }
LAB_14d7f2e06:
      local_348 = pFVar1;
      HeapSortInternal<FLKFSNRTResults,int,FIdentityFunctor,TDereferenceWrapper<FLKFSNRTResults,_Audio::FLKFSNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
                (pFVar16,iVar14,param_3,param_4);
LAB_14d7f2e15:
      ppFVar20 = ppFVar20 + -3;
    } while (&local_338 <= ppFVar20);
  }
  return;
code_r0x00014d7f2ceb:
  if (pFVar17[1].Timestamp < pFVar19->Timestamp || pFVar17[1].Timestamp == pFVar19->Timestamp)
  goto LAB_14d7f2ce2;
LAB_14d7f2d00:
  do {
    pFVar18 = pFVar13;
    pFVar13 = pFVar18 + -1;
    if (pFVar13 <= pFVar19) break;
  } while (pFVar19->Timestamp < pFVar18[-1].Timestamp || pFVar19->Timestamp == pFVar18[-1].Timestamp
          );
  uVar2 = pFVar13->Channel;
  uVar3 = pFVar13->Timestamp;
  uVar4 = pFVar18[-1].Energy;
  uVar5 = pFVar18[-1].Loudness;
  if (pFVar16 <= pFVar13) {
    iVar14 = pFVar16->Channel;
    fVar6 = pFVar16->Timestamp;
    fVar7 = pFVar17[1].Energy;
    fVar8 = pFVar17[1].Loudness;
    fVar21 = pFVar17[1].ShortTermLoudness;
    pFVar16->Channel = uVar2;
    pFVar16->Timestamp = (float)uVar3;
    pFVar17[1].Energy = (float)uVar4;
    pFVar17[1].Loudness = (float)uVar5;
    pFVar17[1].ShortTermLoudness = pFVar18[-1].ShortTermLoudness;
    pFVar13->Channel = iVar14;
    pFVar13->Timestamp = fVar6;
    pFVar18[-1].Energy = fVar7;
    pFVar18[-1].Loudness = fVar8;
    pFVar18[-1].ShortTermLoudness = fVar21;
    goto LAB_14d7f2ce2;
  }
  fVar21 = pFVar19->ShortTermLoudness;
  local_348._0_4_ = (int)local_348 + -1;
  iVar14 = pFVar19->Channel;
  fVar6 = pFVar19->Timestamp;
  fVar7 = pFVar19->Energy;
  fVar8 = pFVar19->Loudness;
  pFVar19->Channel = uVar2;
  pFVar19->Timestamp = (float)uVar3;
  pFVar19->Energy = (float)uVar4;
  pFVar19->Loudness = (float)uVar5;
  pFVar19->ShortTermLoudness = pFVar18[-1].ShortTermLoudness;
  pFVar13->Channel = iVar14;
  pFVar13->Timestamp = fVar6;
  pFVar18[-1].Energy = fVar7;
  pFVar18[-1].Loudness = fVar8;
  pFVar18[-1].ShortTermLoudness = fVar21;
  if (((longlong)pFVar13 + (-0x14 - (longlong)pFVar19)) / 0x14 <
      ((longlong)pFVar15 - (longlong)pFVar16) / 0x14) {
    if (pFVar16 < pFVar15) {
      *ppFVar20 = pFVar16;
      ppFVar20[1] = pFVar15;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar13 <= pFVar19 + 1) goto LAB_14d7f2e15;
    pFVar15 = pFVar18 + -2;
    pFVar16 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar13) {
      *ppFVar20 = pFVar19;
      ppFVar20[1] = pFVar18 + -2;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar15 <= pFVar16) goto LAB_14d7f2e15;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar16) / 0x14) + 1;
  pFVar19 = pFVar16;
  if ((int)local_348 == 0) goto LAB_14d7f2e06;
  goto LAB_14d7f2ca0;
}

// IntroSortInternal<Audio::FLoudnessDatum,int,FIdentityFunctor,TDereferenceWrapper<Audio::FLoudnessDatum,`Audio::FLoudnessNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FLoudnessDatum,int,FIdentityFunctor,TDereferenceWrapper<Audio::FLoudnessDatum,_Audio::FLoudnessNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FLoudnessDatum *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FLoudnessDatum,_public:_void___cdecl_Audio::FLoudnessNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  FLoudnessDatum *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  FLoudnessDatum *pFVar13;
  FLoudnessDatum *pFVar14;
  FLoudnessDatum *pFVar15;
  FLoudnessDatum **ppFVar16;
  FLoudnessDatum *pFVar17;
  FLoudnessDatum *pFVar18;
  FLoudnessDatum *pFVar19;
  float fVar20;
  undefined1 auStack_368 [48];
  FLoudnessDatum *local_338;
  FLoudnessDatum *local_328;
  FLoudnessDatum *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar20;
    memset(local_310,0,0x2e8);
    ppFVar16 = &local_328;
    do {
      pFVar18 = ppFVar16[1];
      pFVar15 = *ppFVar16;
      pFVar1 = ppFVar16[2];
      iVar12 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar19 = pFVar15;
      if ((int)local_338 != 0) {
LAB_14d7f2fe0:
        if (8 < iVar12) {
          fVar20 = pFVar19->Timestamp;
          fVar6 = pFVar19->Energy;
          fVar7 = pFVar19->Loudness;
          pFVar13 = pFVar18 + 1;
          pFVar15 = pFVar19 + iVar12 / 2;
          iVar8 = pFVar15->Channel;
          fVar9 = pFVar15->Timestamp;
          fVar10 = pFVar15->Energy;
          fVar11 = pFVar15->Loudness;
          pFVar15 = pFVar19 + iVar12 / 2;
          pFVar15->Channel = pFVar19->Channel;
          pFVar15->Timestamp = fVar20;
          pFVar15->Energy = fVar6;
          pFVar15->Loudness = fVar7;
          pFVar19->Channel = iVar8;
          pFVar19->Timestamp = fVar9;
          pFVar19->Energy = fVar10;
          pFVar19->Loudness = fVar11;
          pFVar15 = pFVar19;
LAB_14d7f3010:
          pFVar14 = pFVar15;
          pFVar15 = pFVar14 + 1;
          if (pFVar15 <= pFVar18) goto code_r0x00014d7f3019;
          goto LAB_14d7f3025;
        }
        if (pFVar19 < pFVar18) {
          pFVar1 = pFVar19 + 1;
          do {
            pFVar15 = pFVar19;
            if (pFVar1 <= pFVar18) {
              pFVar13 = pFVar1;
              if (0x3f < ((longlong)pFVar18 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (pFVar15->Timestamp < pFVar13->Timestamp) {
                    pFVar15 = pFVar13;
                  }
                  if (pFVar15->Timestamp <= pFVar13[1].Timestamp &&
                      pFVar13[1].Timestamp != pFVar15->Timestamp) {
                    pFVar15 = pFVar13 + 1;
                  }
                  if (pFVar15->Timestamp <= pFVar13[2].Timestamp &&
                      pFVar13[2].Timestamp != pFVar15->Timestamp) {
                    pFVar15 = pFVar13 + 2;
                  }
                  if (pFVar15->Timestamp <= pFVar13[3].Timestamp &&
                      pFVar13[3].Timestamp != pFVar15->Timestamp) {
                    pFVar15 = pFVar13 + 3;
                  }
                  pFVar13 = pFVar13 + 4;
                } while (pFVar13 <= pFVar18 + -3);
              }
              for (; pFVar13 <= pFVar18; pFVar13 = pFVar13 + 1) {
                if (pFVar15->Timestamp < pFVar13->Timestamp) {
                  pFVar15 = pFVar13;
                }
              }
            }
            iVar12 = pFVar15->Channel;
            fVar9 = pFVar15->Timestamp;
            fVar10 = pFVar15->Energy;
            fVar11 = pFVar15->Loudness;
            pFVar13 = pFVar18 + -1;
            fVar20 = pFVar18->Timestamp;
            fVar6 = pFVar18->Energy;
            fVar7 = pFVar18->Loudness;
            pFVar15->Channel = pFVar18->Channel;
            pFVar15->Timestamp = fVar20;
            pFVar15->Energy = fVar6;
            pFVar15->Loudness = fVar7;
            pFVar18->Channel = iVar12;
            pFVar18->Timestamp = fVar9;
            pFVar18->Energy = fVar10;
            pFVar18->Loudness = fVar11;
            pFVar18 = pFVar13;
          } while (pFVar19 < pFVar13);
        }
        goto LAB_14d7f30e9;
      }
LAB_14d7f30d8:
      local_338 = pFVar1;
      HeapSortInternal<Audio::FLoudnessDatum,int,FIdentityFunctor,TDereferenceWrapper<Audio::FLoudnessDatum,_Audio::FLoudnessNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
                (pFVar15,iVar12,param_3,param_4);
LAB_14d7f30e9:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_328 <= ppFVar16);
  }
  return;
code_r0x00014d7f3019:
  if (pFVar14[1].Timestamp < pFVar19->Timestamp || pFVar14[1].Timestamp == pFVar19->Timestamp)
  goto LAB_14d7f3010;
LAB_14d7f3025:
  do {
    pFVar17 = pFVar13;
    pFVar13 = pFVar17 + -1;
    if (pFVar13 <= pFVar19) break;
  } while (pFVar19->Timestamp < pFVar17[-1].Timestamp || pFVar19->Timestamp == pFVar17[-1].Timestamp
          );
  uVar2 = pFVar13->Channel;
  uVar3 = pFVar13->Timestamp;
  uVar4 = pFVar17[-1].Energy;
  uVar5 = pFVar17[-1].Loudness;
  if (pFVar15 <= pFVar13) {
    iVar12 = pFVar15->Channel;
    fVar20 = pFVar15->Timestamp;
    fVar6 = pFVar14[1].Energy;
    fVar7 = pFVar14[1].Loudness;
    pFVar15->Channel = uVar2;
    pFVar15->Timestamp = (float)uVar3;
    pFVar14[1].Energy = (float)uVar4;
    pFVar14[1].Loudness = (float)uVar5;
    pFVar13->Channel = iVar12;
    pFVar13->Timestamp = fVar20;
    pFVar17[-1].Energy = fVar6;
    pFVar17[-1].Loudness = fVar7;
    goto LAB_14d7f3010;
  }
  iVar12 = pFVar19->Channel;
  fVar20 = pFVar19->Timestamp;
  fVar6 = pFVar19->Energy;
  fVar7 = pFVar19->Loudness;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar19->Channel = uVar2;
  pFVar19->Timestamp = (float)uVar3;
  pFVar19->Energy = (float)uVar4;
  pFVar19->Loudness = (float)uVar5;
  pFVar13->Channel = iVar12;
  pFVar13->Timestamp = fVar20;
  pFVar17[-1].Energy = fVar6;
  pFVar17[-1].Loudness = fVar7;
  if ((longlong)((longlong)pFVar13 + (-0x10 - (longlong)pFVar19) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar18 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar18) {
      *ppFVar16 = pFVar15;
      ppFVar16[1] = pFVar18;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar13 <= pFVar19 + 1) goto LAB_14d7f30e9;
    pFVar18 = pFVar17 + -2;
    pFVar15 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar13) {
      *ppFVar16 = pFVar19;
      ppFVar16[1] = pFVar17 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar18 <= pFVar15) goto LAB_14d7f30e9;
  }
  iVar12 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4) + 1;
  pFVar19 = pFVar15;
  if ((int)local_338 == 0) goto LAB_14d7f30d8;
  goto LAB_14d7f2fe0;
}

// IntroSortInternal<Audio::FOnset,int,FIdentityFunctor,TDereferenceWrapper<Audio::FOnset,`Audio::FOnsetNRTResult::SortChronologically'::__l6::<lambda_1>_>_> @ 14d7f31e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FOnset,int,FIdentityFunctor,TDereferenceWrapper<Audio::FOnset,_Audio::FOnsetNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
          (FOnset *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FOnset,_public:_void___cdecl_Audio::FOnsetNRTResult::SortChronologically(void)_::_6_::<lambda_1>_>
          param_4)

{
  undefined4 uVar1;
  FOnset *pFVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  FOnset *pFVar8;
  int iVar9;
  FOnset *pFVar10;
  FOnset *pFVar11;
  FOnset *pFVar12;
  FOnset *pFVar13;
  FOnset *pFVar14;
  FOnset **ppFVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  FOnset *local_348;
  FOnset *local_338;
  FOnset *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar16;
    memset(local_320,0,0x2e8);
    ppFVar15 = &local_338;
    do {
      pFVar10 = ppFVar15[1];
      pFVar11 = *ppFVar15;
      pFVar2 = ppFVar15[2];
      local_348._0_4_ = (int)pFVar2;
      iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar11) / 0xc) + 1;
      pFVar14 = pFVar11;
      if ((int)local_348 != 0) {
LAB_14d7f32b0:
        if (8 < iVar9) {
          fVar4 = pFVar14->Timestamp;
          pFVar8 = pFVar10 + 1;
          iVar9 = iVar9 / 2;
          iVar5 = pFVar14[iVar9].Channel;
          fVar6 = pFVar14[iVar9].Timestamp;
          fVar16 = pFVar14[iVar9].Strength;
          pFVar14[iVar9].Channel = pFVar14->Channel;
          pFVar14[iVar9].Timestamp = fVar4;
          pFVar14[iVar9].Strength = pFVar14->Strength;
          pFVar14->Channel = iVar5;
          pFVar14->Timestamp = fVar6;
          pFVar14->Strength = fVar16;
          pFVar11 = pFVar14;
LAB_14d7f32f6:
          pFVar12 = pFVar11;
          pFVar11 = pFVar12 + 1;
          if (pFVar11 <= pFVar10) goto code_r0x00014d7f32ff;
          goto LAB_14d7f3310;
        }
        if (pFVar14 < pFVar10) {
          pFVar2 = pFVar14 + 1;
          do {
            pFVar11 = pFVar14;
            if (pFVar2 <= pFVar10) {
              pFVar8 = pFVar2;
              if (0x2f < (ulonglong)((longlong)pFVar10 + (0xc - (longlong)pFVar2))) {
                do {
                  if (pFVar11->Timestamp < pFVar8->Timestamp) {
                    pFVar11 = pFVar8;
                  }
                  if (pFVar11->Timestamp <= pFVar8[1].Timestamp &&
                      pFVar8[1].Timestamp != pFVar11->Timestamp) {
                    pFVar11 = pFVar8 + 1;
                  }
                  if (pFVar11->Timestamp <= pFVar8[2].Timestamp &&
                      pFVar8[2].Timestamp != pFVar11->Timestamp) {
                    pFVar11 = pFVar8 + 2;
                  }
                  if (pFVar11->Timestamp <= pFVar8[3].Timestamp &&
                      pFVar8[3].Timestamp != pFVar11->Timestamp) {
                    pFVar11 = pFVar8 + 3;
                  }
                  pFVar8 = pFVar8 + 4;
                } while (pFVar8 <= pFVar10 + -3);
              }
              for (; pFVar8 <= pFVar10; pFVar8 = pFVar8 + 1) {
                if (pFVar11->Timestamp < pFVar8->Timestamp) {
                  pFVar11 = pFVar8;
                }
              }
            }
            iVar9 = pFVar11->Channel;
            fVar6 = pFVar11->Timestamp;
            fVar16 = pFVar11->Strength;
            pFVar8 = pFVar10 + -1;
            fVar4 = pFVar10->Timestamp;
            pFVar11->Channel = pFVar10->Channel;
            pFVar11->Timestamp = fVar4;
            pFVar11->Strength = pFVar10->Strength;
            pFVar10->Channel = iVar9;
            pFVar10->Timestamp = fVar6;
            pFVar10->Strength = fVar16;
            pFVar10 = pFVar8;
          } while (pFVar14 < pFVar8);
        }
        goto LAB_14d7f3429;
      }
LAB_14d7f341a:
      local_348 = pFVar2;
      HeapSortInternal<Audio::FOnset,int,FIdentityFunctor,TDereferenceWrapper<Audio::FOnset,_Audio::FOnsetNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
                (pFVar11,iVar9,param_3,param_4);
LAB_14d7f3429:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_338 <= ppFVar15);
  }
  return;
code_r0x00014d7f32ff:
  if (pFVar12[1].Timestamp < pFVar14->Timestamp || pFVar12[1].Timestamp == pFVar14->Timestamp)
  goto LAB_14d7f32f6;
LAB_14d7f3310:
  do {
    pFVar13 = pFVar8;
    pFVar8 = pFVar13 + -1;
    if (pFVar8 <= pFVar14) break;
  } while (pFVar14->Timestamp < pFVar13[-1].Timestamp || pFVar14->Timestamp == pFVar13[-1].Timestamp
          );
  uVar1 = pFVar8->Channel;
  uVar3 = pFVar8->Timestamp;
  if (pFVar11 <= pFVar8) {
    iVar9 = pFVar11->Channel;
    fVar4 = pFVar11->Timestamp;
    fVar16 = pFVar12[1].Strength;
    pFVar11->Channel = uVar1;
    pFVar11->Timestamp = (float)uVar3;
    pFVar12[1].Strength = pFVar13[-1].Strength;
    pFVar8->Channel = iVar9;
    pFVar8->Timestamp = fVar4;
    pFVar13[-1].Strength = fVar16;
    goto LAB_14d7f32f6;
  }
  fVar16 = pFVar14->Strength;
  local_348._0_4_ = (int)local_348 + -1;
  iVar9 = pFVar14->Channel;
  fVar4 = pFVar14->Timestamp;
  pFVar14->Channel = uVar1;
  pFVar14->Timestamp = (float)uVar3;
  pFVar14->Strength = pFVar13[-1].Strength;
  pFVar8->Channel = iVar9;
  pFVar8->Timestamp = fVar4;
  pFVar13[-1].Strength = fVar16;
  lVar7 = (longlong)pFVar8 + (-0xc - (longlong)pFVar14);
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  if ((lVar7 >> 1) - (lVar7 >> 0x3f) < ((longlong)pFVar10 - (longlong)pFVar11) / 0xc) {
    if (pFVar11 < pFVar10) {
      *ppFVar15 = pFVar11;
      ppFVar15[1] = pFVar10;
      *(int *)(ppFVar15 + 2) = (int)local_348;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar8 <= pFVar14 + 1) goto LAB_14d7f3429;
    pFVar10 = pFVar13 + -2;
    pFVar11 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar8) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar13 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_348;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar10 <= pFVar11) goto LAB_14d7f3429;
  }
  iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar11) / 0xc) + 1;
  pFVar14 = pFVar11;
  if ((int)local_348 == 0) goto LAB_14d7f341a;
  goto LAB_14d7f32b0;
}

// IntroSortInternal<Audio::FPitchInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FPitchInfo,`Audio::FMaxStrengthPitchTracker::Finalize'::__l2::<lambda_1>_>_> @ 14d7f3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FPitchInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FPitchInfo,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_1>_>_>
          (FPitchInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FPitchInfo,_public:_virtual_void___cdecl_Audio::FMaxStrengthPitchTracker::Finalize(TArray<Audio::FPitchTrackInfo,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FPitchInfo *pFVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  FPitchInfo *pFVar9;
  FPitchInfo *pFVar10;
  FPitchInfo *pFVar11;
  FPitchInfo **ppFVar12;
  FPitchInfo *pFVar13;
  FPitchInfo *pFVar14;
  FPitchInfo *pFVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  FPitchInfo *local_338;
  FPitchInfo *local_328;
  FPitchInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar16;
    memset(local_310,0,0x2e8);
    ppFVar12 = &local_328;
    do {
      pFVar14 = ppFVar12[1];
      pFVar11 = *ppFVar12;
      pFVar1 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar14 - (longlong)pFVar11 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar11;
      if ((int)local_338 != 0) {
LAB_14d7f3600:
        if (8 < iVar8) {
          fVar16 = pFVar15->Strength;
          dVar2 = pFVar15->Timestamp;
          pFVar9 = pFVar14 + 1;
          pFVar11 = pFVar15 + iVar8 / 2;
          fVar6 = pFVar11->Frequency;
          fVar7 = pFVar11->Strength;
          dVar3 = pFVar11->Timestamp;
          pFVar11 = pFVar15 + iVar8 / 2;
          pFVar11->Frequency = pFVar15->Frequency;
          pFVar11->Strength = fVar16;
          pFVar11->Timestamp = dVar2;
          pFVar15->Frequency = fVar6;
          pFVar15->Strength = fVar7;
          pFVar15->Timestamp = dVar3;
          pFVar11 = pFVar15;
LAB_14d7f3630:
          pFVar10 = pFVar11;
          pFVar11 = pFVar10 + 1;
          if (pFVar11 <= pFVar14) goto code_r0x00014d7f3639;
          goto LAB_14d7f3646;
        }
        if (pFVar15 < pFVar14) {
          pFVar1 = pFVar15 + 1;
          do {
            pFVar11 = pFVar15;
            if (pFVar1 <= pFVar14) {
              pFVar9 = pFVar1;
              if (0x3f < ((longlong)pFVar14 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (pFVar11->Timestamp < pFVar9->Timestamp) {
                    pFVar11 = pFVar9;
                  }
                  if (pFVar11->Timestamp <= pFVar9[1].Timestamp &&
                      pFVar9[1].Timestamp != pFVar11->Timestamp) {
                    pFVar11 = pFVar9 + 1;
                  }
                  if (pFVar11->Timestamp <= pFVar9[2].Timestamp &&
                      pFVar9[2].Timestamp != pFVar11->Timestamp) {
                    pFVar11 = pFVar9 + 2;
                  }
                  if (pFVar11->Timestamp <= pFVar9[3].Timestamp &&
                      pFVar9[3].Timestamp != pFVar11->Timestamp) {
                    pFVar11 = pFVar9 + 3;
                  }
                  pFVar9 = pFVar9 + 4;
                } while (pFVar9 <= pFVar14 + -3);
              }
              for (; pFVar9 <= pFVar14; pFVar9 = pFVar9 + 1) {
                if (pFVar11->Timestamp < pFVar9->Timestamp) {
                  pFVar11 = pFVar9;
                }
              }
            }
            fVar6 = pFVar11->Frequency;
            fVar7 = pFVar11->Strength;
            dVar2 = pFVar11->Timestamp;
            pFVar9 = pFVar14 + -1;
            fVar16 = pFVar14->Strength;
            dVar3 = pFVar14->Timestamp;
            pFVar11->Frequency = pFVar14->Frequency;
            pFVar11->Strength = fVar16;
            pFVar11->Timestamp = dVar3;
            pFVar14->Frequency = fVar6;
            pFVar14->Strength = fVar7;
            pFVar14->Timestamp = dVar2;
            pFVar14 = pFVar9;
          } while (pFVar15 < pFVar9);
        }
        goto LAB_14d7f370b;
      }
LAB_14d7f36fa:
      local_338 = pFVar1;
      HeapSortInternal<Audio::FPitchInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FPitchInfo,_Audio::FMaxStrengthPitchTracker::Finalize_::__l2::<lambda_1>_>_>
                (pFVar11,iVar8,param_3,param_4);
LAB_14d7f370b:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_328 <= ppFVar12);
  }
  return;
code_r0x00014d7f3639:
  if (pFVar10[1].Timestamp < pFVar15->Timestamp || pFVar10[1].Timestamp == pFVar15->Timestamp)
  goto LAB_14d7f3630;
LAB_14d7f3646:
  do {
    pFVar13 = pFVar9;
    pFVar9 = pFVar13 + -1;
    if (pFVar9 <= pFVar15) break;
  } while (pFVar15->Timestamp < pFVar13[-1].Timestamp || pFVar15->Timestamp == pFVar13[-1].Timestamp
          );
  uVar4 = pFVar9->Frequency;
  uVar5 = pFVar9->Strength;
  dVar2 = pFVar13[-1].Timestamp;
  if (pFVar11 <= pFVar9) {
    fVar16 = pFVar11->Frequency;
    fVar6 = pFVar11->Strength;
    dVar3 = pFVar10[1].Timestamp;
    pFVar11->Frequency = (float)uVar4;
    pFVar11->Strength = (float)uVar5;
    pFVar10[1].Timestamp = dVar2;
    pFVar9->Frequency = fVar16;
    pFVar9->Strength = fVar6;
    pFVar13[-1].Timestamp = dVar3;
    goto LAB_14d7f3630;
  }
  fVar16 = pFVar15->Frequency;
  fVar6 = pFVar15->Strength;
  dVar3 = pFVar15->Timestamp;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar15->Frequency = (float)uVar4;
  pFVar15->Strength = (float)uVar5;
  pFVar15->Timestamp = dVar2;
  pFVar9->Frequency = fVar16;
  pFVar9->Strength = fVar6;
  pFVar13[-1].Timestamp = dVar3;
  if ((longlong)((longlong)pFVar9 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar11 & 0xfffffffffffffff0U)) {
    if (pFVar11 < pFVar14) {
      *ppFVar12 = pFVar11;
      ppFVar12[1] = pFVar14;
      *(int *)(ppFVar12 + 2) = (int)local_338;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar9 <= pFVar15 + 1) goto LAB_14d7f370b;
    pFVar14 = pFVar13 + -2;
    pFVar11 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar9) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar13 + -2;
      *(int *)(ppFVar12 + 2) = (int)local_338;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar14 <= pFVar11) goto LAB_14d7f370b;
  }
  iVar8 = (int)((longlong)pFVar14 - (longlong)pFVar11 >> 4) + 1;
  pFVar15 = pFVar11;
  if ((int)local_338 == 0) goto LAB_14d7f36fa;
  goto LAB_14d7f3600;
}

// LowerBoundInternal<TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats>_const_,int,int,TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14d7f3800

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats>_const_,int,int,TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,Audio::FLKFSWorker::FAggregateLoudnessStats> *param_1,int param_2,int *param_3
          ,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14d7f3860

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> *param_1,int param_2,
          int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// operator<< @ 14d7f9990

FArchive * __cdecl Audio::operator<<(FArchive *param_1,FConstantQFrame *param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAudioSynesthesiaCustomVersion::GUID);
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Channel = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Timestamp;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->Spectrum);
  return param_1;
}

// operator<< @ 14d7f9a60

FArchive * __cdecl Audio::operator<<(FArchive *param_1,FLoudnessDatum *param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  int *piVar3;
  float *pfVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAudioSynesthesiaCustomVersion::GUID);
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Channel = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Timestamp;
  puVar2 = &param_1->field_0x2a;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Energy;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Loudness;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar4 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 14d7f9be0

FArchive * __cdecl Audio::operator<<(FArchive *param_1,FOnset *param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAudioSynesthesiaCustomVersion::GUID);
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Channel = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Timestamp;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Strength;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// `scalar_deleting_destructor' @ 14d7fa050

void * __thiscall
Audio::TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_>::_scalar_deleting_destructor_
          (TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = (float *)this->_padding_;
  local_18._8_8_ = this->_padding_;
  this->_padding_ = (longlong)&___7__TScopedSlidingWindow_M_Audio__6B_;
  TSlidingBuffer<float>::StoreForFutureWindows((TSlidingBuffer<float> *)this->_padding_,&local_18);
  this->_padding_ = (longlong)&___7__TSlidingWindow_M_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa0b0

void * __thiscall
Audio::FAutoCorrelationPitchDetector::_scalar_deleting_destructor_
          (FAutoCorrelationPitchDetector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAutoCorrelationPitchDetector_Audio__6B_;
  ::operator_delete((this->PeakPicker).Ptr,0x18);
  pFVar1 = (this->PeakIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<Audio::FBlockCorrelator>::operator()
            ((TDefaultDelete<Audio::FBlockCorrelator> *)&this->Correlator,(this->Correlator).Ptr);
  pFVar1 = (this->AutoCorrBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IPitchDetector_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa150

void * __thiscall
Audio::FConstantQNRTResult::_scalar_deleting_destructor_(FConstantQNRTResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelCQTIntervals).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelCQTIntervals).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelCQTIntervals);
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelCQTFrames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelCQTFrames);
  this->_padding_ = (longlong)&___7IAnalyzerNRTResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa1e0

void * __thiscall
Audio::FConstantQNRTWorker::_scalar_deleting_destructor_(FConstantQNRTWorker *this,uint param_1)

{
  FConstantQAnalyzer *pFVar1;
  FContiguousSparse2DKernelTransform *pFVar2;
  IFFTAlgorithm *pIVar3;
  FScriptContainerElement *pFVar4;
  TSlidingBuffer<float> *pTVar5;
  
  pFVar1 = (this->ConstantQAnalyzer).Ptr;
  if (pFVar1 != (FConstantQAnalyzer *)0x0) {
    pFVar2 = (pFVar1->CQTTransform).Ptr;
    if (pFVar2 != (FContiguousSparse2DKernelTransform *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    pIVar3 = (pFVar1->FFT).Ptr;
    if (pIVar3 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    pFVar4 = (pFVar1->RealSpectrum).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar1->ComplexSpectrum).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar1->WindowedSamples).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar1->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar1,0x88);
  }
  pTVar5 = (this->SlidingBuffer).Ptr;
  if (pTVar5 != (TSlidingBuffer<float> *)0x0) {
    pFVar4 = (pTVar5->StorageBuffer).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pTVar5,0x20);
  }
  pFVar4 = (this->CQTSpectrum).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->MonoBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ChannelBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->HopBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7IAnalyzerNRTWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa300

void * __thiscall
Audio::FConstantQResult::_scalar_deleting_destructor_(FConstantQResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelCQTFrames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelCQTFrames);
  this->_padding_ = (longlong)&___7IAnalyzerResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa370

void * __thiscall
Audio::FConstantQWorker::_scalar_deleting_destructor_(FConstantQWorker *this,uint param_1)

{
  FConstantQAnalyzer *pFVar1;
  FContiguousSparse2DKernelTransform *pFVar2;
  IFFTAlgorithm *pIVar3;
  FScriptContainerElement *pFVar4;
  TSlidingBuffer<float> *pTVar5;
  
  pFVar1 = (this->ConstantQAnalyzer).Ptr;
  if (pFVar1 != (FConstantQAnalyzer *)0x0) {
    pFVar2 = (pFVar1->CQTTransform).Ptr;
    if (pFVar2 != (FContiguousSparse2DKernelTransform *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    pIVar3 = (pFVar1->FFT).Ptr;
    if (pIVar3 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    pFVar4 = (pFVar1->RealSpectrum).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar1->ComplexSpectrum).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar1->WindowedSamples).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar1->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar1,0x88);
  }
  pTVar5 = (this->SlidingBuffer).Ptr;
  if (pTVar5 != (TSlidingBuffer<float> *)0x0) {
    pFVar4 = (pTVar5->StorageBuffer).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pTVar5,0x20);
  }
  pFVar4 = (this->CQTSpectrum).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->MonoBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ChannelBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->HopBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7IAnalyzerWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa490

void * __thiscall
Audio::FFFTPeakPitchDetector::_scalar_deleting_destructor_(FFFTPeakPitchDetector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IFFTAlgorithm *pIVar2;
  
  this->_padding_ = (longlong)&___7FFFTPeakPitchDetector_Audio__6B_;
  pFVar1 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComplexSpectrumBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ZeroPaddedAnalysisBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::operator_delete((this->PeakPicker).Ptr,0x18);
  pIVar2 = (this->FFTAlgorithm).Ptr;
  if (pIVar2 != (IFFTAlgorithm *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)&___7IPitchDetector_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa550

void * __thiscall
Audio::FLKFSAnalyzerResult::_scalar_deleting_destructor_(FLKFSAnalyzerResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_> *)
             (this->ChannelResults).Pairs.AllocatorInstance.Data,
             (this->ChannelResults).Pairs.ArrayNum);
  pFVar1 = (this->ChannelResults).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAnalyzerResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa5b0

void * __thiscall
Audio::FLKFSNRTResult::_scalar_deleting_destructor_(FLKFSNRTResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Data).ChannelData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Data).ChannelData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data).ChannelData);
  this->_padding_ = (longlong)&___7IAnalyzerNRTResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa620

void * __thiscall
Audio::FLKFSNRTWorker::_scalar_deleting_destructor_(FLKFSNRTWorker *this,uint param_1)

{
  FMultichannelLoudnessAnalyzer *pFVar1;
  FScriptContainerElement *pFVar2;
  TSlidingBuffer<float> *pTVar3;
  
  pFVar1 = (this->Analyzer).Ptr;
  if (pFVar1 != (FMultichannelLoudnessAnalyzer *)0x0) {
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar1->Analyzer);
    pFVar2 = (pFVar1->ChannelWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->MonoBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xa8);
  }
  pTVar3 = (this->InternalBuffer).Ptr;
  if (pTVar3 != (TSlidingBuffer<float> *)0x0) {
    pFVar2 = (pTVar3->StorageBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar3,0x20);
  }
  pFVar2 = (this->InternalWindow).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OverallPerceptualEnergy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChannelPerceptualEnergy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IAnalyzerNRTWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa700

void * __thiscall Audio::FLKFSWorker::_scalar_deleting_destructor_(FLKFSWorker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FLoudnessAnalyzer::~FLoudnessAnalyzer(&(this->Analyzer).Analyzer);
  pFVar1 = (this->Analyzer).ChannelWeights.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Analyzer).MonoBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InternalBuffer).StorageBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverallEnergyHistory).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelEnergyHistory).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AggregateLoudnessStats).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InternalWindow).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverallPerceptualEnergy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelPerceptualEnergy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAnalyzerWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa7e0

void * __thiscall
Audio::FLoudnessNRTResult::_scalar_deleting_destructor_(FLoudnessNRTResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelLoudnessIntervals).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelLoudnessIntervals).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelLoudnessIntervals);
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelLoudnessArrays).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelLoudnessArrays);
  this->_padding_ = (longlong)&___7IAnalyzerNRTResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa870

void * __thiscall
Audio::FLoudnessNRTWorker::_scalar_deleting_destructor_(FLoudnessNRTWorker *this,uint param_1)

{
  FMultichannelLoudnessAnalyzer *pFVar1;
  FScriptContainerElement *pFVar2;
  TSlidingBuffer<float> *pTVar3;
  
  pFVar1 = (this->Analyzer).Ptr;
  if (pFVar1 != (FMultichannelLoudnessAnalyzer *)0x0) {
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar1->Analyzer);
    pFVar2 = (pFVar1->ChannelWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->MonoBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xa8);
  }
  pTVar3 = (this->InternalBuffer).Ptr;
  if (pTVar3 != (TSlidingBuffer<float> *)0x0) {
    pFVar2 = (pTVar3->StorageBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar3,0x20);
  }
  pFVar2 = (this->InternalWindow).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IAnalyzerNRTWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa930

void * __thiscall
Audio::FLoudnessResult::_scalar_deleting_destructor_(FLoudnessResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelLoudnessArrays).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelLoudnessArrays);
  this->_padding_ = (longlong)&___7IAnalyzerResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fa9a0

void * __thiscall
Audio::FLoudnessWorker::_scalar_deleting_destructor_(FLoudnessWorker *this,uint param_1)

{
  FMultichannelLoudnessAnalyzer *pFVar1;
  FScriptContainerElement *pFVar2;
  TSlidingBuffer<float> *pTVar3;
  
  pFVar1 = (this->Analyzer).Ptr;
  if (pFVar1 != (FMultichannelLoudnessAnalyzer *)0x0) {
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar1->Analyzer);
    pFVar2 = (pFVar1->ChannelWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->MonoBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xa8);
  }
  pTVar3 = (this->InternalBuffer).Ptr;
  if (pTVar3 != (TSlidingBuffer<float> *)0x0) {
    pFVar2 = (pTVar3->StorageBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar3,0x20);
  }
  pFVar2 = (this->InternalWindow).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IAnalyzerWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7faa60

void * __thiscall
Audio::FMaxStrengthPitchTracker::_scalar_deleting_destructor_
          (FMaxStrengthPitchTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IPitchDetector *pIVar2;
  
  this->_padding_ = (longlong)&___7FMaxStrengthPitchTracker_Audio__6B_;
  pFVar1 = (this->Observations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->PitchDetector).Ptr;
  if (pIVar2 != (IPitchDetector *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)&___7IPitchTracker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7faad0

void * __thiscall Audio::FMeterResult::_scalar_deleting_destructor_(FMeterResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelMeterArrays).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelMeterArrays).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelMeterArrays);
  this->_padding_ = (longlong)&___7IAnalyzerResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fab40

void * __thiscall Audio::FMeterWorker::_scalar_deleting_destructor_(FMeterWorker *this,uint param_1)

{
  FMeterAnalyzer *pFVar1;
  FScriptContainerElement *pFVar2;
  TSlidingBuffer<float> *pTVar3;
  
  pFVar1 = (this->MeterAnalyzer).Ptr;
  if (pFVar1 != (FMeterAnalyzer *)0x0) {
    pFVar2 = (pFVar1->EnvelopeDataPerChannel).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->ClippingDataPerChannel).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->EnvelopeBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xc0);
  }
  pTVar3 = (this->InternalBuffer).Ptr;
  if (pTVar3 != (TSlidingBuffer<float> *)0x0) {
    pFVar2 = (pTVar3->StorageBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar3,0x20);
  }
  pFVar2 = (this->InternalWindow).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IAnalyzerWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fac30

void * __thiscall
Audio::FOnsetNRTResult::_scalar_deleting_destructor_(FOnsetNRTResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelOnsetStrengthIntervals).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelOnsetStrengthIntervals).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFloatInterval>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelOnsetStrengthIntervals);
  *(undefined4 *)&(this->ChannelOnsets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelOnsets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelOnsets);
  this->_padding_ = (longlong)&___7IAnalyzerNRTResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7facc0

void * __thiscall
Audio::FOnsetNRTSettings::_scalar_deleting_destructor_(FOnsetNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerNRTSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fad00

void * __thiscall
Audio::FOnsetNRTWorker::_scalar_deleting_destructor_(FOnsetNRTWorker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  TSlidingBuffer<float> *pTVar2;
  
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->OnsetStrengths).AllocatorInstance.Data,(this->OnsetStrengths).ArrayNum);
  pFVar1 = (this->OnsetStrengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>,int>
            ((TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>
              *)(this->OnsetStrengthAnalyzers).AllocatorInstance.Data,
             (this->OnsetStrengthAnalyzers).ArrayNum);
  pFVar1 = (this->OnsetStrengthAnalyzers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->SlidingBuffer).Ptr;
  if (pTVar2 != (TSlidingBuffer<float> *)0x0) {
    pFVar1 = (pTVar2->StorageBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pTVar2,0x20);
  }
  pFVar1 = (this->MonoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HopBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7IAnalyzerNRTSettings_Audio__6B_;
  this->_padding_ = (longlong)&___7IAnalyzerNRTWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fae00

void * __thiscall
Audio::FSynesthesiaSpectrumAnalysisWorker::_scalar_deleting_destructor_
          (FSynesthesiaSpectrumAnalysisWorker *this,uint param_1)

{
  FSynesthesiaSpectrumAnalyzer *pFVar1;
  IFFTAlgorithm *pIVar2;
  FScriptContainerElement *pFVar3;
  TSlidingBuffer<float> *pTVar4;
  
  pFVar1 = (this->SpectrumAnalyzer).Ptr;
  if (pFVar1 != (FSynesthesiaSpectrumAnalyzer *)0x0) {
    pIVar2 = (pFVar1->FFT).Ptr;
    if (pIVar2 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    pFVar3 = (pFVar1->FFTOutput).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar1->WindowedBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar1->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x58);
  }
  pTVar4 = (this->InternalBuffer).Ptr;
  if (pTVar4 != (TSlidingBuffer<float> *)0x0) {
    pFVar3 = (pTVar4->StorageBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar4,0x20);
  }
  pFVar3 = (this->InternalWindow).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ChannelBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MonoBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAnalyzerWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7faef0

void * __thiscall
Audio::FSynesthesiaSpectrumResult::_scalar_deleting_destructor_
          (FSynesthesiaSpectrumResult *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ChannelSpectrumArrays).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelSpectrumArrays).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelSpectrumArrays);
  this->_padding_ = (longlong)&___7IAnalyzerResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7faf60

void * __thiscall
Audio::IAnalyzerNRTResult::_scalar_deleting_destructor_(IAnalyzerNRTResult *this,uint param_1)

{
  *this = (IAnalyzerNRTResult)&___7IAnalyzerNRTResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fafa0

void * __thiscall
Audio::IAnalyzerNRTSettings::_scalar_deleting_destructor_(IAnalyzerNRTSettings *this,uint param_1)

{
  *this = (IAnalyzerNRTSettings)&___7IAnalyzerNRTSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fafe0

void * __thiscall
Audio::IAnalyzerNRTWorker::_scalar_deleting_destructor_(IAnalyzerNRTWorker *this,uint param_1)

{
  *this = (IAnalyzerNRTWorker)&___7IAnalyzerNRTWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fb020

void * __thiscall
Audio::IAnalyzerResult::_scalar_deleting_destructor_(IAnalyzerResult *this,uint param_1)

{
  *this = (IAnalyzerResult)&___7IAnalyzerResult_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fb060

void * __thiscall
Audio::IAnalyzerWorker::_scalar_deleting_destructor_(IAnalyzerWorker *this,uint param_1)

{
  *this = (IAnalyzerWorker)&___7IAnalyzerWorker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fb0a0

void * __thiscall
Audio::IPitchDetector::_scalar_deleting_destructor_(IPitchDetector *this,uint param_1)

{
  *this = (IPitchDetector)&___7IPitchDetector_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7fb0e0

void * __thiscall
Audio::IPitchTracker::_scalar_deleting_destructor_(IPitchTracker *this,uint param_1)

{
  *this = (IPitchTracker)&___7IPitchTracker_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CalculateAggregateLoudnessStats @ 14d801820

void __cdecl
Audio::LKFSNRTFactoryPrivate::CalculateAggregateLoudnessStats
          (float param_1,TArrayView<FLKFSNRTResults,int> *param_2,FLKFSNRTAggregateStats *param_3)

{
  int iVar1;
  FLKFSNRTResults *pFVar2;
  float fVar3;
  float *pfVar4;
  FLKFSNRTResults *pFVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  TArrayView<FLKFSNRTResults,int> local_28 [2];
  
  local_28[0].DataPtr = param_2->DataPtr;
  local_28[0].ArrayNum = param_2->ArrayNum;
  local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
  CalculateShortTermAndIntegratedLoudness(param_1,local_28,param_3);
  iVar1 = param_2->ArrayNum;
  pFVar2 = param_2->DataPtr;
  if (iVar1 < 1) {
    param_3->GatedLoudness = __real_00800000;
  }
  else {
    iVar6 = 0;
    fVar3 = 0.0;
    fVar8 = 0.0;
    iVar7 = 0;
    pFVar5 = pFVar2;
    fVar9 = __real_c28c0000;
    if (pFVar2 != pFVar2 + iVar1) {
      do {
        if (__real_c28c0000 < pFVar5->Loudness) {
          iVar7 = iVar7 + 1;
          fVar8 = fVar8 + pFVar5->Energy;
        }
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar2 + iVar1);
      if (0 < iVar7) {
        fVar8 = logf(fVar8 / (float)iVar7);
        fVar9 = fVar8 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
      }
    }
    fVar9 = fVar9 - __real_41200000;
    if (pFVar2 != pFVar2 + iVar1) {
      pfVar4 = &pFVar2->Energy;
      do {
        if (fVar9 < pfVar4[1]) {
          iVar6 = iVar6 + 1;
          fVar3 = fVar3 + *pfVar4;
        }
        pFVar5 = (FLKFSNRTResults *)(pfVar4 + 3);
        pfVar4 = pfVar4 + 5;
      } while (pFVar5 != pFVar2 + iVar1);
      if (0 < iVar6) {
        fVar8 = logf(fVar3 / (float)iVar6);
        fVar9 = fVar8 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
      }
    }
    param_3->GatedLoudness = fVar9;
  }
  return;
}

// CalculateAverageFromHistory @ 14d8019a0

float __cdecl
Audio::LKFSFactoryPrivate::CalculateAverageFromHistory
          (TCircularBuffer<float> *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  fVar7 = 0.0;
  uVar5 = param_2;
  while( true ) {
    if (param_3 <= (int)uVar5) {
      iVar4 = (param_3 - param_2) / param_4;
      if (0 < iVar4) {
        return fVar7 / (float)iVar4;
      }
      return 0.0;
    }
    uVar6 = uVar5 & param_1->IndexMask;
    uVar3 = 0;
    if ((int)uVar6 < (param_1->Elements).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    uVar5 = uVar5 + param_4;
    fVar7 = fVar7 + *(float *)((param_1->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 4
                              );
  }
  pcVar1 = (code *)swi(3);
  fVar7 = (float)(*pcVar1)();
  return fVar7;
}

// CalculateGatedAverageFromHistory @ 14d801ff0

float __cdecl
Audio::LKFSFactoryPrivate::CalculateGatedAverageFromHistory
          (TCircularBuffer<float> *param_1,int param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = 0;
  fVar7 = 0.0;
  if (param_2 < param_3) {
    do {
      uVar5 = param_2 & param_1->IndexMask;
      uVar4 = 0;
      if ((int)uVar5 < (param_1->Elements).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
      fVar1 = *(float *)((param_1->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      if (param_5 < fVar1) {
        fVar7 = fVar7 + fVar1;
        iVar6 = iVar6 + 1;
      }
      param_2 = param_2 + param_4;
    } while (param_2 < param_3);
    if (0 < iVar6) {
      param_5 = fVar7 / (float)iVar6;
    }
  }
  return param_5;
}

// CalculateGatedLoudness @ 14d802100

float __cdecl
Audio::LKFSNRTFactoryPrivate::CalculateGatedLoudness
          (TArrayView<FLKFSNRTResults_const_,int> *param_1)

{
  FLKFSNRTResults *pFVar1;
  FLKFSNRTResults *pFVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if (param_1->ArrayNum < 1) {
    return __real_00800000;
  }
  fVar7 = 0.0;
  iVar6 = 0;
  iVar5 = 0;
  fVar3 = 0.0;
  pFVar2 = param_1->DataPtr;
  fVar8 = __real_c28c0000;
  if (pFVar2 != pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum) {
    pfVar4 = &pFVar2->Energy;
    do {
      if (__real_c28c0000 < pfVar4[1]) {
        iVar5 = iVar5 + 1;
        fVar7 = fVar7 + *pfVar4;
      }
      pFVar1 = (FLKFSNRTResults *)(pfVar4 + 3);
      pfVar4 = pfVar4 + 5;
    } while (pFVar1 != pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum);
    if (0 < iVar5) {
      fVar7 = logf(fVar7 / (float)iVar5);
      fVar8 = fVar7 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
    }
  }
  fVar8 = fVar8 - __real_41200000;
  pFVar2 = param_1->DataPtr;
  if (pFVar2 != pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum) {
    pfVar4 = &pFVar2->Energy;
    do {
      if (fVar8 < pfVar4[1]) {
        iVar6 = iVar6 + 1;
        fVar3 = fVar3 + *pfVar4;
      }
      pFVar1 = (FLKFSNRTResults *)(pfVar4 + 3);
      pfVar4 = pfVar4 + 5;
    } while (pFVar1 != pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum);
    if (0 < iVar6) {
      fVar7 = logf(fVar3 / (float)iVar6);
      fVar8 = fVar7 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
    }
  }
  return fVar8;
}

// CalculateGatedLoudnessFromHistory @ 14d802240

float __cdecl
Audio::LKFSFactoryPrivate::CalculateGatedLoudnessFromHistory
          (TCircularBuffer<float> *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  
  fVar1 = CalculateGatedAverageFromHistory(param_1,param_2,param_3,param_4,__real_33fbc8f3);
  fVar1 = CalculateGatedAverageFromHistory(param_1,param_2,param_3,param_4,fVar1 * __real_3dcccccd);
  fVar1 = logf(fVar1);
  return fVar1 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
}

// CalculateGatedLoudnessPass @ 14d8022d0

float __cdecl
Audio::LKFSNRTFactoryPrivate::CalculateGatedLoudnessPass
          (TArrayView<FLKFSNRTResults_const_,int> *param_1,float param_2)

{
  FLKFSNRTResults *pFVar1;
  FLKFSNRTResults *pFVar2;
  int iVar3;
  float fVar4;
  
  pFVar2 = param_1->DataPtr;
  iVar3 = 0;
  fVar4 = 0.0;
  pFVar1 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (param_2 < pFVar2->Loudness) {
        iVar3 = iVar3 + 1;
        fVar4 = fVar4 + pFVar2->Energy;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
    if (0 < iVar3) {
      fVar4 = logf(fVar4 / (float)iVar3);
      return fVar4 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
    }
  }
  return param_2;
}

// CalculatePolynomial @ 14d802e40

float __cdecl Audio::CalculatePolynomial(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = cosf(param_1);
  return ((param_3 + param_3) * (param_2 + param_4) + param_2 * __real_40800000 * param_4 * fVar1) *
         fVar1 + (param_2 - param_4) * (param_2 - param_4) + param_3 * param_3;
}

// CalculateShortTermAndIntegratedLoudness @ 14d802ef0

void __cdecl
Audio::LKFSNRTFactoryPrivate::CalculateShortTermAndIntegratedLoudness
          (float param_1,TArrayView<FLKFSNRTResults,int> *param_2,FLKFSNRTAggregateStats *param_3)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  FLKFSNRTResults *pFVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_1 <= 0.0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShortTermLoudnessDuration > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                       ,0x40,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar11 = param_2->ArrayNum;
  if (iVar11 < 1) {
    param_3->IntegratedLoudness = __real_00800000;
  }
  else {
    fVar5 = 0.0;
    fVar4 = 0.0;
    pFVar10 = TArrayView<FLKFSNRTResults,int>::operator[](param_2,0);
    fVar3 = 0.0;
    fVar16 = pFVar10->Timestamp;
    pFVar10 = TArrayView<FLKFSNRTResults,int>::operator[](param_2,0);
    fVar7 = __real_3f30e560;
    fVar6 = __real_41200000;
    uVar14 = 0;
    fVar17 = param_1 + __real_38d1b717;
    pfVar13 = &pFVar10->Timestamp;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < iVar11) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar10 = param_2->DataPtr;
      fVar15 = *(float *)((longlong)&pFVar10->Timestamp + lVar12);
      fVar5 = fVar5 + *(float *)((longlong)&pFVar10->Energy + lVar12);
      if (fVar16 <= fVar15 - param_1) {
        pfVar1 = pfVar13 + 1;
        pfVar13 = pfVar13 + 5;
        fVar4 = fVar4 + *pfVar1;
      }
      else {
        fVar3 = (float)(int)(uVar14 + 1);
      }
      if (fVar17 < fVar15 - *pfVar13) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LoudnessDatum.Timestamp - ShortTermLoudnessDatumBegin->Timestamp) <= (InShortTermLoudnessDuration + (1.e-4f))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                           ,0x6a,
                           L"Invalid short term loudness window. The algorithm for integrated and short term loudness assumes a data to be regularly spaced in time"
                          );
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      fVar15 = logf((fVar5 - fVar4) / fVar3);
      uVar14 = uVar14 + 1;
      *(float *)((longlong)&pFVar10->ShortTermLoudness + lVar12) =
           fVar15 * fVar6 * LoudnessAnalyzerPrivate::Log10Scale - fVar7;
      lVar12 = lVar12 + 0x14;
      iVar11 = param_2->ArrayNum;
    } while ((int)uVar14 < iVar11);
    fVar16 = logf(fVar5 / (float)iVar11);
    param_3->IntegratedLoudness = fVar16 * fVar6 * LoudnessAnalyzerPrivate::Log10Scale - fVar7;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaCore_init @ 14d804ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLKFSFactory @ 14d804cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeLKFSFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLKFSNRTFactory @ 14d804d00

void __cdecl EmptyLinkFunctionForGeneratedCodeLKFSNRTFactory(void)

{
  return;
}

// GetChannelWeight @ 14d806c40

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl LoudnessAnalyzerPrivate::GetChannelWeight(Type param_1)

{
  switch(param_1) {
  default:
    return __real_3f800000;
  case LowFrequency:
    return 0.0;
  case BackLeft:
  case BackRight:
  case SideLeft:
  case SideRight:
    return __real_3fb504f3;
  }
}

// GetEqualLoudnessAWeightForFrequency @ 14d806d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::GetEqualLoudnessAWeightForFrequency(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * param_1;
  return ((fVar1 * ___real_4d0df1e4 * fVar1) /
         (SQRT((fVar1 + ___real_4904ef07) * (fVar1 + ___real_46353d29)) *
         (fVar1 + ___real_43d42e14) * (fVar1 + ___real_4d0df1e4))) * ___real_3fa12478;
}

// GetEqualLoudnessBWeightForFrequency @ 14d806d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::GetEqualLoudnessBWeightForFrequency(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * param_1;
  return ((param_1 * ___real_4d0df1e4 * fVar1) /
         (SQRT(fVar1 + ___real_46c44480) * (fVar1 + ___real_43d42e14) * (fVar1 + ___real_4d0df1e4)))
         * ___real_3f8287a7;
}

// GetEqualLoudnessCWeightForFrequency @ 14d806df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::GetEqualLoudnessCWeightForFrequency(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * param_1;
  return (fVar1 * ___real_4d0eedc6) / ((fVar1 + ___real_43d42e14) * (fVar1 + ___real_4d0df1e4));
}

// GetEqualLoudnessDWeightForFrequency @ 14d806e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::GetEqualLoudnessDWeightForFrequency(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * param_1;
  return SQRT(((__real_497d65e8 - fVar1) + fVar1 * ___real_4983ee01) /
              (((__real_4b161b10 - fVar1) + fVar1 * ___real_4b32e400) *
              (fVar1 + ___real_479c17a5) * (fVar1 + ___real_49a44200))) * param_1 * ___real_46628ed9
  ;
}

// GetEqualLoudnessKWeightForFrequency @ 14d806eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::GetEqualLoudnessKWeightForFrequency(float param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  if ((param_1 <= __real_46bb8000) && (0.0 <= param_1)) {
    fVar1 = cosf(param_1 * ___real_3909421f);
    dVar2 = (double)fVar1;
    fVar1 = (float)((__real_4007706d00000000 - dVar2 * ___real_40176ea9c0000000) +
                   dVar2 * ___real_4007707b80000000 * dVar2);
    if (fVar1 == 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)((__real_401d6f3940000000 - dVar2 * ___real_402d6e62e0000000) +
                     dVar2 * ___real_401d6f5720000000 * dVar2) / fVar1;
    }
    fVar4 = (float)((__real_400faedf80000000 - dVar2 * ___real_401faec5c0000000) +
                   dVar2 * ___real_400faeac00000000 * dVar2);
    if (fVar4 != 0.0) {
      fVar3 = (float)((__real_4010000000000000 - dVar2 * __real_4020000000000000) +
                     dVar2 * __real_4010000000000000 * dVar2) / fVar4;
    }
    return SQRT((float)((uint)(fVar3 * fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff));
  }
  return 0.0;
}

// GetEqualLoudnessNoneWeightForFrequency @ 14d806ff0

float __cdecl Audio::GetEqualLoudnessNoneWeightForFrequency(float param_1)

{
  return __real_3f800000;
}

// LKFSToEnergy @ 14d808040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::LKFSFactoryPrivate::LKFSToEnergy(float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3dcccccd + ___real_3d8d844d);
  return fVar1;
}

// OnsetBacktrackIndices @ 14d808070

void __cdecl
Audio::OnsetBacktrackIndices
          (TArrayView<float_const_,int> *param_1,TArrayView<int_const_,int> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  ulonglong uVar12;
  
  iVar3 = param_1->ArrayNum;
  piVar1 = &param_3->ArrayMax;
  iVar4 = param_2->ArrayNum;
  lVar13 = (longlong)iVar4;
  param_3->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  if (0 < iVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,&param_3->AllocatorInstance,&param_3->ArrayNum,piVar1);
    pFVar15 = (param_3->AllocatorInstance).Data;
    pfVar5 = param_1->DataPtr;
    if (0 < lVar13) {
      lVar14 = (longlong)param_2->DataPtr - (longlong)pFVar15;
      do {
        uVar10 = *(uint *)(pFVar15 + lVar14);
        uVar11 = (ulonglong)(int)uVar10;
        if ((iVar3 <= (int)uVar10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OnsetStartIndex < NumOnsetStrength",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                               ,0xe2,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar11;
        if (3 < (int)uVar10) {
          lVar9 = uVar11 * 4 + -4;
          do {
            uVar10 = (uint)uVar12;
            if ((pfVar5[uVar11] <= 0.0) || (pfVar5[uVar11] < pfVar5[uVar11 - 1]))
            goto LAB_14d8081ef;
            if ((pfVar5[uVar11 - 1] <= 0.0) || (pfVar5[uVar11 - 1] < pfVar5[uVar11 - 2])) {
              uVar10 = uVar10 - 1;
              goto LAB_14d8081ef;
            }
            fVar16 = *(float *)(lVar9 + -4 + (longlong)pfVar5);
            if ((fVar16 <= 0.0) || (fVar16 < pfVar5[uVar11 - 3])) {
              uVar10 = uVar10 - 2;
              goto LAB_14d8081ef;
            }
            fVar16 = *(float *)(lVar9 + -8 + (longlong)pfVar5);
            if ((fVar16 <= 0.0) || (fVar16 < pfVar5[uVar11 - 4])) {
              uVar10 = uVar10 - 3;
              goto LAB_14d8081ef;
            }
            uVar11 = uVar11 - 4;
            lVar9 = lVar9 + -0x10;
            uVar10 = uVar10 - 4;
            uVar12 = (ulonglong)uVar10;
          } while (3 < (int)uVar10);
        }
        if (0 < (int)uVar10) {
          pfVar8 = pfVar5 + uVar11;
          fVar16 = pfVar5[uVar11];
          do {
            uVar10 = (uint)uVar12;
            if (fVar16 <= 0.0) break;
            pfVar2 = pfVar8 + -1;
            pfVar8 = pfVar8 + -1;
            if (fVar16 < *pfVar2) break;
            uVar10 = uVar10 - 1;
            uVar12 = (ulonglong)uVar10;
            fVar16 = *pfVar2;
          } while (0 < (int)uVar10);
        }
LAB_14d8081ef:
        *(uint *)pFVar15 = uVar10;
        pFVar15 = pFVar15 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}

// OnsetExtractIndices @ 14d808230

void __cdecl
Audio::OnsetExtractIndices
          (FPeakPickerSettings *param_1,TArrayView<float_const_,int> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  FPeakPicker local_38;
  
  iVar1 = param_2->ArrayNum;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (0 < iVar1) {
    local_58.DataPtr = param_2->DataPtr;
    local_58.ArrayNum = param_2->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    ArrayMinMaxNormalize(&local_58,&local_78);
    local_38.Settings.NumPreMax = param_1->NumPreMax;
    local_38.Settings.NumPreMean = param_1->NumPreMean;
    local_38.Settings.NumPostMean = param_1->NumPostMean;
    iStack_60 = local_78.ArrayNum;
    iVar1 = param_1->NumWait;
    fVar2 = param_1->MeanDelta;
    if (__real_7f800000 <= fVar2) {
      fVar2 = __real_7f800000;
    }
    if (fVar2 <= __real_358637bd) {
      fVar2 = __real_358637bd;
    }
    if (local_38.Settings.NumPreMax < 1) {
      local_38.Settings.NumPreMax = 1;
    }
    local_38.Settings.NumPostMax = param_1->NumPostMax;
    if (param_1->NumPostMax < 1) {
      local_38.Settings.NumPostMax = 1;
    }
    if (local_38.Settings.NumPreMean < 1) {
      local_38.Settings.NumPreMean = 1;
    }
    if (local_38.Settings.NumPostMean < 1) {
      local_38.Settings.NumPostMean = 1;
    }
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    local_38.Settings.MeanDelta = fVar2;
    local_38.Settings.NumWait = iVar1;
    local_68 = local_78.AllocatorInstance.Data;
    if (local_78.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_48._12_4_ = uStack_5c;
    local_48.ArrayNum = iStack_60;
    local_48.DataPtr = (float *)local_68;
    FPeakPicker::PickPeaks(&local_38,&local_48,param_3);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// PowerScalePeakPickerValue @ 14d8085b0

int __cdecl
Audio::AutoCorrelationPitchDetectorIntrinsics::PowerScalePeakPickerValue
          (float param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float _X;
  
  if (param_2 < 2) {
    param_2 = 2;
  }
  if (param_3 < 2) {
    param_3 = 2;
  }
  fVar2 = logf((float)param_3);
  fVar3 = logf((float)param_2);
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  _X = fVar2 / fVar3;
  if (fVar2 / fVar3 <= __real_322bcc77) {
    _X = __real_322bcc77;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar3 = powf(_X,param_1);
  fVar2 = _X - __real_3f800000;
  if (_X - __real_3f800000 <= __real_322bcc77) {
    fVar2 = __real_322bcc77;
  }
  iVar1 = ((int)ROUND(((fVar3 - __real_3f800000) / fVar2) *
                      ((float)(param_3 - param_2) + (float)(param_3 - param_2)) + __real_3f000000)
          >> 1) + param_2;
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  return param_2;
}

// TuneSlidingWindwoHopSize @ 14d80b480

void __cdecl
Audio::LKFSPrivate::TuneSlidingWindwoHopSize(int param_1,int param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = -1;
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
  iVar5 = -1;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  iVar10 = param_1 + 2;
  if (param_1 < iVar3) {
    iVar3 = param_1;
  }
  iVar4 = (int)(param_2 * 3 + (param_2 * 3 >> 0x1f & 3U)) >> 2;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (param_1 < iVar4) {
    iVar4 = param_1;
  }
  iVar8 = -1;
  iVar9 = -1;
  if (iVar3 <= iVar4) {
    do {
      iVar5 = param_1 / iVar3;
      iVar7 = -(param_1 % iVar3);
      if (iVar7 < 0) {
        iVar7 = param_1 % iVar3;
      }
      iVar6 = iVar3;
      if (iVar10 <= iVar7) {
        iVar6 = iVar9;
        iVar5 = iVar8;
        iVar7 = iVar10;
      }
      iVar10 = iVar7;
      iVar3 = iVar3 + 1;
      iVar8 = iVar5;
      iVar9 = iVar6;
    } while (iVar3 <= iVar4);
    if (iVar6 != -1) {
      *param_3 = iVar6;
      goto LAB_14d80b559;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("BestWindowHopFrames != -1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSPrivate.cpp"
                     ,0x30,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_3 = iVar6;
LAB_14d80b559:
  *param_4 = iVar5;
  return;
}

// Z_Construct_UScriptStruct_FLKFSNRTWaveData @ 14d80b8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLKFSNRTWaveData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLKFSNRTWaveData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLKFSResults @ 14d80b960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLKFSResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLKFSResults.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLKFSResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FLKFSResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLKFSResults.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLKFSResults.InnerSingleton;
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

// IMPLEMENT_MODULE_AudioSynesthesiaCore @ 14d80b9e0

void __cdecl IMPLEMENT_MODULE_AudioSynesthesiaCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15045a460

void __cdecl
`Audio::FLKFSAnalyzerResult::GetChannelLoudnessResults'::__l7::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyArray.AllocatorInstance.Data;
  if (::EmptyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GRegisterAudioSynesthesiaCustomVersion'' @ 15045a480

void __cdecl _dynamic_atexit_destructor_for__GRegisterAudioSynesthesiaCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterAudioSynesthesiaCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioSynesthesiaCore'' @ 15045a4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioSynesthesiaCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioSynesthesiaCore);
  return;
}

