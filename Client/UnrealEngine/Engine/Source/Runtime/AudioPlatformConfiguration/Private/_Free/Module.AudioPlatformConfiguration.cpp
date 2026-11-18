// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 19

// `dynamic_initializer_for_'LogAudioResampler'' @ 140f8efc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioResampler__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioResampler,L"LogAudioResampler",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioResampler__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioPlatformConfiguration'' @ 140f8f000

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioPlatformConfiguration__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioPlatformConfiguration";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioPlatformConfiguration",0x1a);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAudioPlatformConfigurationModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h__Script_AudioPlatformConfiguration_3333863207'' @ 140f8f050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h__Script_AudioPlatformConfiguration_3333863207__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioPlatformConfiguration",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h__Script_AudioPlatformConfiguration_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h__Script_AudioPlatformConfiguration_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioPlatformConfiguration'' @ 140f8f0a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioPlatformConfiguration__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcc10ae96;
  local_res8[0].DeclarationsHash = 0xbca64ab5;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioPlatformConfiguration,
             L"/Script/AudioPlatformConfiguration",
             &Z_Registration_Info_UPackage__Script_AudioPlatformConfiguration,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AudioPlatformConfiguration @ 1445399e0

UPackage * __cdecl Z_Construct_UPackage__Script_AudioPlatformConfiguration(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioPlatformConfiguration.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioPlatformConfiguration.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioPlatformConfiguration.OuterSingleton;
}

// ESoundwaveSampleRateSettings_StaticEnum @ 144539a60

UEnum * __cdecl ESoundwaveSampleRateSettings_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioPlatformConfiguration();
    Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings,
                       (UObject *)pUVar1,L"ESoundwaveSampleRateSettings");
  }
  return Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton;
}

// NewProp_bOverrideCompressionTimes_SetBit @ 144539aa0

void __cdecl
Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::
NewProp_bOverrideCompressionTimes_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 144539ab0

void * __cdecl
Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlatformRuntimeAudioCompressionOverrides,&UE::CoreUObject::Private::Construct<FPlatformRuntimeAudioCompressionOverrides>,&UE::CoreUObject::Private::ConstructForTests<FPlatformRuntimeAudioCompressionOverrides>,&UE::CoreUObject::Private::Destruct<FPlatformRuntimeAudioCompressionOverrides>,&UE::CoreUObject::Private::Copy<FPlatformRuntimeAudioCompressionOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 144539b00

void * __thiscall
FAudioPlatformConfigurationModule::_scalar_deleting_destructor_
          (FAudioPlatformConfigurationModule *this,uint param_1)

{
  *this = (FAudioPlatformConfigurationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// StaticEnum<enum_ESoundwaveSampleRateSettings> @ 144539f90

UEnum * __cdecl StaticEnum<enum_ESoundwaveSampleRateSettings>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioPlatformConfiguration();
    Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings,
                       (UObject *)pUVar1,L"ESoundwaveSampleRateSettings");
  }
  return Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton;
}

// CheckBufferValidity @ 14453a1e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Audio::CheckBufferValidity(FResamplingParameters *param_1,FResamplerResults *param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_2->OutBuffer == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    if (1 < (byte)LogAudioResampler._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
      return false;
    }
  }
  else if ((param_1->SourceSampleRate <= 0.0) ||
          (fVar1 = param_1->DestinationSampleRate, fVar1 <= 0.0)) {
    if (1 < (byte)LogAudioResampler._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
    }
  }
  else {
    iVar2 = param_1->NumChannels;
    if (param_1->NumChannels < 1) {
      iVar2 = 1;
    }
    if (-(((int)ROUND(__real_bf000000 -
                      (float)(param_1->InputBuffer->ArrayNum / iVar2) *
                      ((fVar1 + fVar1) / param_1->SourceSampleRate)) >> 1) * iVar2) <=
        param_2->OutBuffer->ArrayNum) {
      return true;
    }
    if (1 < (byte)LogAudioResampler._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
      return false;
    }
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodeAudioCompressionSettings @ 14453a320

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCompressionSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioPlatformConfiguration_init @ 14453a330

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioPlatformConfiguration_init(void)

{
  return;
}

// GetOutputBufferSize @ 14453a650

int __cdecl Audio::GetOutputBufferSize(FResamplingParameters *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = param_1->NumChannels;
  if (param_1->NumChannels < 1) {
    iVar1 = 1;
  }
  fVar2 = (float)(param_1->InputBuffer->ArrayNum / iVar1);
  return -(((int)ROUND(__real_bf000000 -
                       (param_1->DestinationSampleRate / param_1->SourceSampleRate) *
                       (fVar2 + fVar2)) >> 1) * iVar1);
}

// Resample @ 14453ab20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Audio::Resample(FResamplingParameters *param_1,FResamplerResults *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SRC_STATE_tag *pSVar4;
  FStaticBasicLogRecord *pFVar5;
  int local_res10 [2];
  SRC_DATA local_38;
  
  if (param_2->OutBuffer == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    if ((byte)LogAudioResampler._0_1_ < 2) {
      return false;
    }
    pFVar5 = &::LOG_Static;
  }
  else {
    if ((0.0 < param_1->SourceSampleRate) && (fVar1 = param_1->DestinationSampleRate, 0.0 < fVar1))
    {
      iVar2 = param_1->NumChannels;
      iVar3 = iVar2;
      if (iVar2 < 1) {
        iVar3 = 1;
      }
      if (param_2->OutBuffer->ArrayNum <
          -(((int)ROUND(__real_bf000000 -
                        (float)(param_1->InputBuffer->ArrayNum / iVar3) *
                        ((fVar1 + fVar1) / param_1->SourceSampleRate)) >> 1) * iVar3)) {
        if ((byte)LogAudioResampler._0_1_ < 2) {
          return false;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
        return false;
      }
      local_res10[0] = 0;
      pSVar4 = src_new(0,iVar2,local_res10);
      if ((pSVar4 == (SRC_STATE_tag *)0x0) || (local_res10[0] != 0)) {
        if ((byte)LogTemp._0_1_ < 2) {
          return false;
        }
        src_strerror(local_res10[0]);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        return false;
      }
      local_38.data_in = (float *)(param_1->InputBuffer->AllocatorInstance).Data;
      local_38.data_out = (float *)(param_2->OutBuffer->AllocatorInstance).Data;
      local_38.input_frames = param_1->InputBuffer->ArrayNum / param_1->NumChannels;
      local_38.src_ratio = (double)(param_1->DestinationSampleRate / param_1->SourceSampleRate);
      local_38.end_of_input = 1;
      local_38.output_frames = param_2->OutBuffer->ArrayNum / param_1->NumChannels;
      local_res10[0] = src_process(pSVar4,&local_38);
      if (local_res10[0] == 0) {
        param_2->InputFramesUsed = local_38.input_frames_used;
        param_2->OutputFramesGenerated = local_38.output_frames_gen;
        src_delete(pSVar4);
        return true;
      }
      if ((byte)LogTemp._0_1_ < 2) {
        return false;
      }
      src_strerror(local_res10[0]);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      return false;
    }
    if ((byte)LogAudioResampler._0_1_ < 2) {
      return false;
    }
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogAudioResampler);
  return false;
}

// Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings @ 14453ad60

UEnum * __cdecl Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings(void)

{
  if (Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.InnerSingleton,
               &Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides @ 14453ada0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.
           InnerSingleton;
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

// IMPLEMENT_MODULE_AudioPlatformConfiguration @ 14453ae20

void __cdecl IMPLEMENT_MODULE_AudioPlatformConfiguration(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioResampler'' @ 15036c800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioResampler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioResampler);
  return;
}

