// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 125

// OnPreSampleRender_RenderThread'' @ 1410aa230

void __cdecl `dynamic_initializer_for_'FMediaDelegates::OnPreSampleRender_RenderThread__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMediaDelegates::OnPreSampleRender_RenderThread__);
  return;
}

// OnSampleDiscarded_RenderThread'' @ 1410aa250

void __cdecl `dynamic_initializer_for_'FMediaDelegates::OnSampleDiscarded_RenderThread__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMediaDelegates::OnSampleDiscarded_RenderThread__);
  return;
}

// `dynamic_initializer_for_'AudioPreroll'' @ 1410aa270

void __cdecl MediaPlayerFacade::_dynamic_initializer_for__AudioPreroll__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_416312d010000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  AudioPreroll.Ticks = (longlong)auVar1._0_8_;
  return;
}

// `dynamic_initializer_for_'CVarMediaUtilsBlockOnFetchTimeout'' @ 1410aa2a0

void __cdecl
UE::MediaUtils::Private::_dynamic_initializer_for__CVarMediaUtilsBlockOnFetchTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMediaUtilsBlockOnFetchTimeout,L"MediaUtils.BlockOnFetchTimeout",
             &GBlockOnFetchTimeout,
             L"Maximum time that TickInput/Fetch will block waiting for samples (in seconds).\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMediaUtilsBlockOnFetchTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarTestForcePlayerCreateFailed'' @ 1410aa2f0

void __cdecl
UE::MediaUtils::Private::_dynamic_initializer_for__CVarTestForcePlayerCreateFailed__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarTestForcePlayerCreateFailed,L"m.Test.ForcePlayerCreateFailed",local_res8,
             L"Whether force media player creation to fail.",4);
  atexit(_dynamic_atexit_destructor_for__CVarTestForcePlayerCreateFailed__);
  return;
}

// `dynamic_initializer_for_'LogMediaTimeSource'' @ 1410aa340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaTimeSource__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMediaTimeSource,L"LogMediaTimeSource",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaTimeSource__);
  return;
}

// `dynamic_initializer_for_'LogMediaUtils'' @ 1410aa380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaUtils__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMediaUtils,L"LogMediaUtils",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaUtils__);
  return;
}

// `dynamic_initializer_for_'MetadataPreroll'' @ 1410aa3c0

void __cdecl MediaPlayerFacade::_dynamic_initializer_for__MetadataPreroll__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_416312d010000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  MetadataPreroll.Ticks = (longlong)auVar1._0_8_;
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMediaUtils'' @ 1410aa3f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMediaUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MediaUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MediaUtils",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMediaUtilsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeClose'' @ 1410aa440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeClose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeClose ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeClose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeClose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeClose,*pFVar1,
               L"MediaUtils MediaPlayerFacade Close","STATGROUP_Media","STATCAT_Advanced",L"Media",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeNumAudioSamples'' @ 1410aa4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeNumAudioSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeNumAudioSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumAudioSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeNumAudioSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeNumAudioSamples,*pFVar1,
               L"MediaPlayerFacade NumAudioSamples","STATGROUP_Media","STATCAT_Advanced",L"Media",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples'' @ 1410aa560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedCaptionSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeNumPurgedCaptionSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeNumPurgedCaptionSamples,
               *pFVar1,L"MediaPlayerFacade NumPurgedCaptionSamples","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples'' @ 1410aa5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeNumPurgedSubtitleSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeNumPurgedSubtitleSamples,
               *pFVar1,L"MediaPlayerFacade NumPurgedSubtitleSamples","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples'' @ 1410aa680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumPurgedVideoSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeNumPurgedVideoSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeNumPurgedVideoSamples,
               *pFVar1,L"MediaPlayerFacade NumPurgedVideoSamples","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeNumVideoSamples'' @ 1410aa710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeNumVideoSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeNumVideoSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeNumVideoSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeNumVideoSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeNumVideoSamples,*pFVar1,
               L"MediaPlayerFacade NumVideoSamples","STATGROUP_Media","STATCAT_Advanced",L"Media",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeOpen'' @ 1410aa7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeOpen__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeOpen ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeOpen>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeOpen");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeOpen,*pFVar1,
               L"MediaUtils MediaPlayerFacade Open","STATGROUP_Media","STATCAT_Advanced",L"Media",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeProcessEvent'' @ 1410aa830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeProcessEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeProcessEvent ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeProcessEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeProcessEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeProcessEvent,*pFVar1,
               L"MediaUtils MediaPlayerFacade ProcessEvent","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTickFetch'' @ 1410aa8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTickFetch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTickFetch ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickFetch>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTickFetch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickFetch,*pFVar1,
               L"MediaUtils MediaPlayerFacade TickFetch","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTickInput'' @ 1410aa950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTickInput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTickInput ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickInput>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTickInput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickInput,*pFVar1,
               L"MediaUtils MediaPlayerFacade TickInput","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTickOutput'' @ 1410aa9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTickOutput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTickOutput ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickOutput>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTickOutput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickOutput,*pFVar1,
               L"MediaUtils MediaPlayerFacade TickOutput","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTickTickable'' @ 1410aaa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTickTickable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTickTickable ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTickTickable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTickTickable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTickTickable,*pFVar1,
               L"MediaUtils MediaPlayerFacade TickTickable","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTime'' @ 1410aab00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTime ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTime,*pFVar1,
               L"MediaPlayerFacade PlaybackTime","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
               true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples'' @ 1410aab90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTotalPurgedCaptionSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTotalPurgedCaptionSamples
               ,*pFVar1,L"MediaPlayerFacade TotalPurgedCaptionSamples","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples'' @ 1410aac20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_MediaUtils_FacadeTotalPurgedSubtitleSamples,*pFVar1,
               L"MediaPlayerFacade TotalPurgedSubtitleSamples","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples'' @ 1410aacb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_FacadeTotalPurgedVideoSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_FacadeTotalPurgedVideoSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_FacadeTotalPurgedVideoSamples,
               *pFVar1,L"MediaPlayerFacade TotalPurgedVideoSamples","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h__Script_MediaUtils_3762763432'' @ 1410aad40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h__Script_MediaUtils_3762763432__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaUtils",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h__Script_MediaUtils_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h__Script_MediaUtils_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MediaUtils'' @ 1410aad90

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MediaUtils__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x9d5779e0;
  local_res8[0].DeclarationsHash = 0x44f87e24;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MediaUtils,L"/Script/MediaUtils",
             &Z_Registration_Info_UPackage__Script_MediaUtils,local_res8);
  return;
}

// NewStructOps @ 146befdc0

void * __cdecl
Z_Construct_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaPlayerInitialTrackLanguageSelection,&UE::CoreUObject::Private::Construct<FMediaPlayerInitialTrackLanguageSelection>,&UE::CoreUObject::Private::ConstructForTests<FMediaPlayerInitialTrackLanguageSelection>,&UE::CoreUObject::Private::Destruct<FMediaPlayerInitialTrackLanguageSelection>,&UE::CoreUObject::Private::Copy<FMediaPlayerInitialTrackLanguageSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146befe00

void * __cdecl Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaPlayerOptions,&UE::CoreUObject::Private::Construct<FMediaPlayerOptions>,&UE::CoreUObject::Private::ConstructForTests<FMediaPlayerOptions>,&UE::CoreUObject::Private::Destruct<FMediaPlayerOptions>,&UE::CoreUObject::Private::Copy<FMediaPlayerOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146bf03b0

void * __thiscall
FMediaUtilsModule::_scalar_deleting_destructor_(FMediaUtilsModule *this,uint param_1)

{
  *this = (FMediaUtilsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride @ 146bf03f0

UEnum * __cdecl Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride(void)

{
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton,
               &Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton;
}

// Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType @ 146bf0430

UEnum * __cdecl Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType(void)

{
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.InnerSingleton,
               &Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.InnerSingleton;
}

// Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode @ 146bf0470

UEnum * __cdecl Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode(void)

{
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.InnerSingleton,
               &Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection @ 146bf04b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaPlayerInitialTrackLanguageSelection.
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

// Z_Construct_UScriptStruct_FMediaPlayerTrackOptions @ 146bf0530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaPlayerTrackOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerTrackOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaPlayerTrackOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerTrackOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaPlayerTrackOptions.InnerSingleton;
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

// Z_Construct_UPackage__Script_MediaUtils @ 146bf05b0

UPackage * __cdecl Z_Construct_UPackage__Script_MediaUtils(void)

{
  if (Z_Registration_Info_UPackage__Script_MediaUtils.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MediaUtils.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MediaUtils.OuterSingleton;
}

// EMediaPlayerOptionBooleanOverride_StaticEnum @ 146bf05f0

UEnum * __cdecl EMediaPlayerOptionBooleanOverride_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride,
                       (UObject *)pUVar1,L"EMediaPlayerOptionBooleanOverride");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton;
}

// EMediaPlayerOptionSeekTimeType_StaticEnum @ 146bf0630

UEnum * __cdecl EMediaPlayerOptionSeekTimeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType,(UObject *)pUVar1
                       ,L"EMediaPlayerOptionSeekTimeType");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton;
}

// EMediaPlayerOptionTrackSelectMode_StaticEnum @ 146bf0670

UEnum * __cdecl EMediaPlayerOptionTrackSelectMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode,
                       (UObject *)pUVar1,L"EMediaPlayerOptionTrackSelectMode");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton;
}

// NewStructOps @ 146bf06b0

void * __cdecl Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaPlayerTrackOptions,&UE::CoreUObject::Private::Construct<FMediaPlayerTrackOptions>,&UE::CoreUObject::Private::ConstructForTests<FMediaPlayerTrackOptions>,&UE::CoreUObject::Private::Destruct<FMediaPlayerTrackOptions>,&UE::CoreUObject::Private::Copy<FMediaPlayerTrackOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// CreatePixelData<FColor> @ 146bf0760

TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_> __cdecl
MediaRecorderHelpers::CreatePixelData<FColor>
          (TSharedPtr<IMediaTextureSample,1> *param_1,TIntPoint<int> param_2,int param_3)

{
  IMediaTextureSample *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IMediaTextureSample *pIVar6;
  TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_> TVar7;
  void *_Src;
  long64 lVar8;
  longlong lVar9;
  ulong64 uVar10;
  IMediaTextureSample *pIVar11;
  int in_register_00000084;
  IMediaTextureSample IVar12;
  int in_R9D;
  longlong lVar13;
  
  IVar12._4_4_ = in_register_00000084;
  IVar12._0_4_ = param_3;
  uVar10 = (ulong64)(in_register_00000084 * param_3);
  pIVar6 = ::operator_new(0x40);
  pIVar11 = (IMediaTextureSample *)0x0;
  if (pIVar6 != (IMediaTextureSample *)0x0) {
    pIVar6[1] = IVar12;
    *pIVar6 = (IMediaTextureSample)&___7FImagePixelData__6B_;
    pIVar6[3] = (IMediaTextureSample)0x0;
    *(undefined4 *)(pIVar6 + 2) = 0;
    *(undefined4 *)&pIVar6[2].field_0x4 = 0x1040801;
    pIVar6[4] = (IMediaTextureSample)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *pIVar6 = (IMediaTextureSample)&___7__TImagePixelData_UFColor____6B_;
    pIVar6[5] = (IMediaTextureSample)0x0;
    pIVar6[6] = (IMediaTextureSample)0x0;
    pIVar6[7] = (IMediaTextureSample)0x0;
    pIVar11 = pIVar6;
  }
  if ((longlong)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  pIVar6 = pIVar11 + 7;
  pIVar1 = pIVar11 + 6;
  *pIVar1 = (IMediaTextureSample)0x0;
  if ((longlong)pIVar11[7] < (longlong)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,uVar10,(ForAnyElementType *)(pIVar11 + 5),0,(long64 *)pIVar6);
  }
  if ((*(longlong *)param_2.field0_0x0 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (TImagePixelData<FColor> *)(*pcVar3)();
    return (TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>)TVar7.Ptr;
  }
  _Src = (void *)(**(code **)**(undefined8 **)param_2.field0_0x0)();
  if ((*(longlong *)param_2.field0_0x0 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (TImagePixelData<FColor> *)(*pcVar3)();
    return (TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>)TVar7.Ptr;
  }
  uVar5 = (**(code **)(**(longlong **)param_2.field0_0x0 + 0x38))();
  lVar13 = (longlong)in_register_00000084;
  if (uVar10 == (lVar13 * (ulonglong)uVar5) / (ulonglong)(longlong)in_R9D) {
    if (((_Src == (void *)0x0) && (uVar10 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (TImagePixelData<FColor> *)(*pcVar3)();
      return (TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>)
             TVar7.Ptr;
    }
    lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (4,4,uVar10,(ForAnyElementType *)(pIVar11 + 5),(long64 *)pIVar1,
                       (long64 *)pIVar6);
    if (uVar10 != 0) {
      memcpy((void *)((longlong)pIVar11[5] + lVar8 * 4),_Src,uVar10 * 4);
    }
  }
  else if (0 < lVar13) {
    lVar9 = (longlong)param_3;
    do {
      if (((_Src == (void *)0x0) && (lVar9 != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (TImagePixelData<FColor> *)(*pcVar3)();
        return (TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>)
               TVar7.Ptr;
      }
      lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (4,4,lVar9,(ForAnyElementType *)(pIVar11 + 5),(long64 *)pIVar1,
                         (long64 *)pIVar6);
      if (lVar9 != 0) {
        memcpy((void *)((longlong)pIVar11[5] + lVar8 * 4),_Src,lVar9 * 4);
      }
      _Src = (void *)((longlong)_Src + (ulonglong)uVar5);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_2.field0_0x0 + 8);
  param_1->Object = pIVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>)
         (TImagePixelData<FColor> *)param_1;
}

// CreatePixelData<FFloat16Color> @ 146bf0a60

TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_> __cdecl
MediaRecorderHelpers::CreatePixelData<FFloat16Color>
          (TSharedPtr<IMediaTextureSample,1> *param_1,TIntPoint<int> param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IMediaTextureSample *pIVar5;
  TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_> TVar6;
  FFloat16Color *pFVar7;
  long64 lVar8;
  longlong lVar9;
  ulong64 uVar10;
  IMediaTextureSample *pIVar11;
  int in_register_00000084;
  IMediaTextureSample IVar12;
  int in_R9D;
  longlong lVar13;
  
  IVar12._4_4_ = in_register_00000084;
  IVar12._0_4_ = param_3;
  uVar10 = (ulong64)(in_register_00000084 * param_3);
  pIVar5 = ::operator_new(0x40);
  pIVar11 = (IMediaTextureSample *)0x0;
  if (pIVar5 != (IMediaTextureSample *)0x0) {
    pIVar5[1] = IVar12;
    *pIVar5 = (IMediaTextureSample)&___7FImagePixelData__6B_;
    pIVar5[3] = (IMediaTextureSample)0x0;
    *(undefined4 *)(pIVar5 + 2) = 1;
    *(undefined4 *)&pIVar5[2].field_0x4 = 0x41003;
    pIVar5[4] = (IMediaTextureSample)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *pIVar5 = (IMediaTextureSample)&___7__TImagePixelData_VFFloat16Color____6B_;
    pIVar5[5] = (IMediaTextureSample)0x0;
    pIVar5[6] = (IMediaTextureSample)0x0;
    pIVar5[7] = (IMediaTextureSample)0x0;
    pIVar11 = pIVar5;
  }
  if ((longlong)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  pIVar5 = pIVar11 + 7;
  pIVar11[6] = (IMediaTextureSample)0x0;
  if ((longlong)pIVar11[7] < (longlong)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (8,2,uVar10,(ForAnyElementType *)(pIVar11 + 5),0,(long64 *)pIVar5);
  }
  if ((*(longlong *)param_2.field0_0x0 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar6.Ptr = (TImagePixelData<FFloat16Color> *)(*pcVar2)();
    return (TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
            )TVar6.Ptr;
  }
  pFVar7 = (FFloat16Color *)(**(code **)**(undefined8 **)param_2.field0_0x0)();
  if ((*(longlong *)param_2.field0_0x0 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar6.Ptr = (TImagePixelData<FFloat16Color> *)(*pcVar2)();
    return (TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
            )TVar6.Ptr;
  }
  uVar4 = (**(code **)(**(longlong **)param_2.field0_0x0 + 0x38))();
  lVar13 = (longlong)in_register_00000084;
  if (uVar10 == (lVar13 * (ulonglong)uVar4) / (ulonglong)(longlong)in_R9D) {
    if (((pFVar7 == (FFloat16Color *)0x0) && (uVar10 != 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar6.Ptr = (TImagePixelData<FFloat16Color> *)(*pcVar2)();
      return (TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
              )TVar6.Ptr;
    }
    lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (8,2,uVar10,(ForAnyElementType *)(pIVar11 + 5),(long64 *)(pIVar11 + 6),
                       (long64 *)pIVar5);
    ConstructItems<FFloat16Color,FFloat16Color,__int64>
              ((void *)((longlong)pIVar11[5] + lVar8 * 8),pFVar7,uVar10);
  }
  else if (0 < lVar13) {
    lVar9 = (longlong)param_3;
    do {
      if (((pFVar7 == (FFloat16Color *)0x0) && (lVar9 != 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        TVar6.Ptr = (TImagePixelData<FFloat16Color> *)(*pcVar2)();
        return (TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
                )TVar6.Ptr;
      }
      lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (8,2,lVar9,(ForAnyElementType *)(pIVar11 + 5),(long64 *)(pIVar11 + 6),
                         (long64 *)pIVar5);
      ConstructItems<FFloat16Color,FFloat16Color,__int64>
                ((void *)((longlong)pIVar11[5] + lVar8 * 8),pFVar7,lVar9);
      pFVar7 = (FFloat16Color *)((longlong)&(pFVar7->R).Encoded + (ulonglong)uVar4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_2.field0_0x0 + 8);
  param_1->Object = pIVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
          )(TImagePixelData<FFloat16Color> *)param_1;
}

// DestructItems<TSharedPtr<IMediaAudioSample,1>,int> @ 146bf0d10

void __cdecl
DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
          (TSharedPtr<IMediaAudioSample,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IMediaBinarySample,1>,int> @ 146bf0d50

void __cdecl
DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
          (TSharedPtr<IMediaBinarySample,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IMediaOverlaySample,1>,int> @ 146bf0d90

void __cdecl
DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
          (TSharedPtr<IMediaOverlaySample,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IMediaTextureSample,1>,int> @ 146bf0dd0

void __cdecl
DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
          (TSharedPtr<IMediaTextureSample,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<TMediaSampleSink<IMediaBinarySample>,1>,int> @ 146bf0e10

void __cdecl
DestructItems<TWeakPtr<TMediaSampleSink<IMediaBinarySample>,1>,int>
          (TWeakPtr<TMediaSampleSink<IMediaBinarySample>,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1>,int> @ 146bf0e60

void __cdecl
DestructItems<TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1>,int>
          (TWeakPtr<TMediaSampleSink<IMediaOverlaySample>,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<TMediaSampleSink<IMediaTextureSample>,1>,int> @ 146bf0eb0

void __cdecl
DestructItems<TWeakPtr<TMediaSampleSink<IMediaTextureSample>,1>,int>
          (TWeakPtr<TMediaSampleSink<IMediaTextureSample>,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<FMediaAudioSampleSink,1>,int> @ 146bf0f00

void __cdecl
DestructItems<TWeakPtr<FMediaAudioSampleSink,1>,int>
          (TWeakPtr<FMediaAudioSampleSink,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FetchSample<IMediaAudioSample,FMediaAudioSampleSink> @ 146bf0f50

bool __cdecl
FetchSample<IMediaAudioSample,FMediaAudioSampleSink>
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *param_1,
          TRange<FTimespan> *param_2,TSharedPtr<IMediaAudioSample,1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaAudioSample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  IMediaAudioSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38 [16];
  TRange<FTimespan> local_28;
  
  plVar1 = &param_1->_padding_;
  local_58 = (IMediaAudioSample *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_58);
  if (cVar4 != '\0') {
    if ((local_58 == (IMediaAudioSample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 0x30))(local_58,local_38);
    lVar2 = *plVar7;
    if ((local_58 == (IMediaAudioSample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 0x10))(local_58,local_res8);
    local_28.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_28.LowerBound.Type.Value = '\x01';
    local_28.UpperBound.Type.Value = '\0';
    local_28.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(param_2,&local_28);
    if (bVar5) {
      if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_58;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_50;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar5 = true;
      goto LAB_146bf107a;
    }
  }
  bVar5 = false;
LAB_146bf107a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return bVar5;
}

// FetchSample<IMediaAudioSample,FMediaAudioSampleSink> @ 146bf10b0

bool __cdecl
FetchSample<IMediaAudioSample,FMediaAudioSampleSink>
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *param_1,
          TRange<FMediaTimeStamp> *param_2,TSharedPtr<IMediaAudioSample,1> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaAudioSample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaAudioSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  plVar1 = &param_1->_padding_;
  local_68 = (IMediaAudioSample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaAudioSample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x30))(local_68,&local_58);
    if ((local_68 == (IMediaAudioSample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_68 + 0x10))(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.LowerBound.Type.Value = '\x01';
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_2,&local_38);
    if (bVar4) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_68;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar4 = true;
      goto LAB_146bf11e6;
    }
  }
  bVar4 = false;
LAB_146bf11e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// FetchSample<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> @ 146bf1220

bool __cdecl
FetchSample<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *param_1,
          TRange<FTimespan> *param_2,TSharedPtr<IMediaBinarySample,1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaBinarySample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  IMediaBinarySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38 [16];
  TRange<FTimespan> local_28;
  
  plVar1 = &param_1->_padding_;
  local_58 = (IMediaBinarySample *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_58);
  if (cVar4 != '\0') {
    if ((local_58 == (IMediaBinarySample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 0x18))(local_58,local_38);
    lVar2 = *plVar7;
    if ((local_58 == (IMediaBinarySample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 8))(local_58,local_res8);
    local_28.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_28.LowerBound.Type.Value = '\x01';
    local_28.UpperBound.Type.Value = '\0';
    local_28.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(param_2,&local_28);
    if (bVar5) {
      if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_58;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_50;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar5 = true;
      goto LAB_146bf134a;
    }
  }
  bVar5 = false;
LAB_146bf134a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return bVar5;
}

// FetchSample<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> @ 146bf1380

bool __cdecl
FetchSample<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *param_1,
          TRange<FMediaTimeStamp> *param_2,TSharedPtr<IMediaBinarySample,1> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaBinarySample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaBinarySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  plVar1 = &param_1->_padding_;
  local_68 = (IMediaBinarySample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaBinarySample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x18))(local_68,&local_58);
    if ((local_68 == (IMediaBinarySample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_68 + 8))(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.LowerBound.Type.Value = '\x01';
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_2,&local_38);
    if (bVar4) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_68;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar4 = true;
      goto LAB_146bf14b6;
    }
  }
  bVar4 = false;
LAB_146bf14b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> @ 146bf14f0

bool __cdecl
FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *param_1,
          TRange<FTimespan> *param_2,TSharedPtr<IMediaOverlaySample,1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaOverlaySample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  IMediaOverlaySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38 [16];
  TRange<FTimespan> local_28;
  
  plVar1 = &param_1->_padding_;
  local_58 = (IMediaOverlaySample *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_58);
  if (cVar4 != '\0') {
    if ((local_58 == (IMediaOverlaySample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 0x18))(local_58,local_38);
    lVar2 = *plVar7;
    if ((local_58 == (IMediaOverlaySample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)*local_58)(local_58,local_res8);
    local_28.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_28.LowerBound.Type.Value = '\x01';
    local_28.UpperBound.Type.Value = '\0';
    local_28.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(param_2,&local_28);
    if (bVar5) {
      if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_58;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_50;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar5 = true;
      goto LAB_146bf1619;
    }
  }
  bVar5 = false;
LAB_146bf1619:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return bVar5;
}

// FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> @ 146bf1650

bool __cdecl
FetchSample<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *param_1,
          TRange<FMediaTimeStamp> *param_2,TSharedPtr<IMediaOverlaySample,1> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaOverlaySample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaOverlaySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  plVar1 = &param_1->_padding_;
  local_68 = (IMediaOverlaySample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaOverlaySample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x18))(local_68,&local_58);
    if ((local_68 == (IMediaOverlaySample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)*local_68)(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.LowerBound.Type.Value = '\x01';
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_2,&local_38);
    if (bVar4) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_68;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar4 = true;
      goto LAB_146bf1785;
    }
  }
  bVar4 = false;
LAB_146bf1785:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// FetchSample<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> @ 146bf17b0

bool __cdecl
FetchSample<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *param_1,
          TRange<FTimespan> *param_2,TSharedPtr<IMediaTextureSample,1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  IMediaTextureSample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  IMediaTextureSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38 [16];
  TRange<FTimespan> local_28;
  
  plVar1 = &param_1->_padding_;
  local_58 = (IMediaTextureSample *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  cVar4 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_58);
  if (cVar4 != '\0') {
    if ((local_58 == (IMediaTextureSample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 0x60))(local_58,local_38);
    lVar2 = *plVar7;
    if ((local_58 == (IMediaTextureSample *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*local_58 + 0x20))(local_58,local_res8);
    local_28.UpperBound.Value.Ticks = *plVar7 + lVar2;
    local_28.LowerBound.Type.Value = '\x01';
    local_28.UpperBound.Type.Value = '\0';
    local_28.LowerBound.Value.Ticks = lVar2;
    bVar5 = TRange<FTimespan>::Overlaps(param_2,&local_28);
    if (bVar5) {
      if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_58;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_50;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar5 = true;
      goto LAB_146bf18da;
    }
  }
  bVar5 = false;
LAB_146bf18da:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return bVar5;
}

// FetchSample<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> @ 146bf1910

bool __cdecl
FetchSample<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *param_1,
          TRange<FMediaTimeStamp> *param_2,TSharedPtr<IMediaTextureSample,1> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaTextureSample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaTextureSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  plVar1 = &param_1->_padding_;
  local_68 = (IMediaTextureSample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  cVar3 = (**(code **)(param_1->_padding_ + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaTextureSample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x60))(local_68,&local_58);
    if ((local_68 == (IMediaTextureSample *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_68 + 0x20))(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.LowerBound.Type.Value = '\x01';
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_2,&local_38);
    if (bVar4) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_3->Object;
      pTStack_40 = (param_3->SharedReferenceCount).ReferenceController;
      param_3->Object = local_68;
      (param_3->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      bVar4 = true;
      goto LAB_146bf1a46;
    }
  }
  bVar4 = false;
LAB_146bf1a46:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// HeapSortInternal<`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::FCandidate,int,FIdentityFunctor,TDereferenceWrapper<`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::FCandidate,`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>_>_> @ 146bf1a80

void __cdecl
AlgoImpl::
HeapSortInternal<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,int,FIdentityFunctor,TDereferenceWrapper<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::<lambda_1>_>_>
          (FCandidate *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_class_IMediaPlayerFactory_*___cdecl_FMediaPlayerFacade::GetPlayerFactoryForUrl(FString_const_&,IMediaOptions_const_*)const_::_2_::FCandidate,_protected:_class_IMediaPlayerFactory_*___cdecl_FMediaPlayerFacade::GetPlayerFactoryForUrl(FString_const_&,IMediaOptions_const_*)const_::_2_::<lambda_1>_>
          param_4)

{
  FCandidate *pFVar1;
  FCandidate *pFVar2;
  code *pcVar3;
  FName FVar4;
  IMediaPlayerFactory *pIVar5;
  IMediaPlayerFactory *pIVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FCandidate *pFVar16;
  
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
  iVar13 = iVar11;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_146bf1bc5:
      if (iVar14 == 0) {
        iVar11 = param_2 + -1;
        lVar15 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar16 = param_1 + lVar15;
          do {
            pIVar5 = pFVar16->Factory;
            iVar10 = 0;
            iVar13 = param_1->ConfidenceScore;
            uVar8 = *(undefined4 *)&param_1->field_0x14;
            FVar4 = param_1->Name;
            pIVar6 = param_1->Factory;
            param_1->Name = pFVar16->Name;
            param_1->Factory = pIVar5;
            uVar7 = *(undefined4 *)&pFVar16->field_0x14;
            param_1->ConfidenceScore = pFVar16->ConfidenceScore;
            *(undefined4 *)&param_1->field_0x14 = uVar7;
            pFVar16->Name = FVar4;
            pFVar16->Factory = pIVar6;
            pFVar16->ConfidenceScore = iVar13;
            *(undefined4 *)&pFVar16->field_0x14 = uVar8;
            if (1 < iVar11) {
              do {
                iVar14 = iVar10 * 2;
                iVar13 = iVar14 + 1;
                if (iVar14 + 2 < iVar11) {
                  bVar9 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar14 + 2),param_1 + iVar13);
                  if (bVar9) {
                    iVar13 = iVar14;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar1 = param_1 + iVar13;
                pFVar2 = param_1 + iVar10;
                bVar9 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,pFVar2,pFVar1);
                if (!bVar9) break;
                FVar4 = pFVar2->Name;
                pIVar5 = pFVar2->Factory;
                iVar10 = pFVar2->ConfidenceScore;
                uVar8 = *(undefined4 *)&pFVar2->field_0x14;
                pIVar6 = pFVar1->Factory;
                pFVar2->Name = pFVar1->Name;
                pFVar2->Factory = pIVar6;
                uVar7 = *(undefined4 *)&pFVar1->field_0x14;
                pFVar2->ConfidenceScore = pFVar1->ConfidenceScore;
                *(undefined4 *)&pFVar2->field_0x14 = uVar7;
                pFVar1->Name = FVar4;
                pFVar1->Factory = pIVar5;
                pFVar1->ConfidenceScore = iVar10;
                *(undefined4 *)&pFVar1->field_0x14 = uVar8;
                iVar10 = iVar13;
              } while (iVar13 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar10 = iVar14 + -1;
      iVar11 = iVar13 + -2;
      iVar13 = iVar11;
      iVar14 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      bVar9 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar11 + 2),param_1 + iVar12);
      if (bVar9) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar16 = param_1 + iVar12;
    pFVar1 = param_1 + iVar10;
    bVar9 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pFVar1,pFVar16);
    if (!bVar9) goto LAB_146bf1bc5;
    FVar4 = pFVar1->Name;
    pIVar5 = pFVar1->Factory;
    iVar11 = iVar12 * 2 + 1;
    iVar10 = pFVar1->ConfidenceScore;
    uVar8 = *(undefined4 *)&pFVar1->field_0x14;
    pIVar6 = pFVar16->Factory;
    pFVar1->Name = pFVar16->Name;
    pFVar1->Factory = pIVar6;
    uVar7 = *(undefined4 *)&pFVar16->field_0x14;
    pFVar1->ConfidenceScore = pFVar16->ConfidenceScore;
    *(undefined4 *)&pFVar1->field_0x14 = uVar7;
    pFVar16->Name = FVar4;
    pFVar16->Factory = pIVar5;
    pFVar16->ConfidenceScore = iVar10;
    *(undefined4 *)&pFVar16->field_0x14 = uVar8;
    iVar10 = iVar12;
  } while( true );
}

// IntroSortInternal<`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::FCandidate,int,FIdentityFunctor,TDereferenceWrapper<`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::FCandidate,`FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>_>_> @ 146bf1d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,int,FIdentityFunctor,TDereferenceWrapper<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::<lambda_1>_>_>
          (FCandidate *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_class_IMediaPlayerFactory_*___cdecl_FMediaPlayerFacade::GetPlayerFactoryForUrl(FString_const_&,IMediaOptions_const_*)const_::_2_::FCandidate,_protected:_class_IMediaPlayerFactory_*___cdecl_FMediaPlayerFacade::GetPlayerFactoryForUrl(FString_const_&,IMediaOptions_const_*)const_::_2_::<lambda_1>_>
          param_4)

{
  IMediaPlayerFactory *pIVar1;
  FName FVar2;
  IMediaPlayerFactory *pIVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FCandidate *pFVar10;
  FCandidate *pFVar11;
  FCandidate *pFVar12;
  FCandidate **ppFVar13;
  int iVar14;
  FCandidate *pFVar15;
  FCandidate *pFVar16;
  FCandidate *pFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FCandidate *local_358;
  FCandidate *local_348;
  FCandidate *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x18) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146bf1de0:
        if (8 < iVar9) {
          pIVar1 = pFVar15->Factory;
          pFVar10 = pFVar17 + 1;
          iVar9 = iVar9 / 2;
          FVar2 = pFVar15[iVar9].Name;
          pIVar3 = pFVar15[iVar9].Factory;
          iVar5 = pFVar15[iVar9].ConfidenceScore;
          uVar6 = *(undefined4 *)&pFVar15[iVar9].field_0x14;
          pFVar15[iVar9].Name = pFVar15->Name;
          pFVar15[iVar9].Factory = pIVar1;
          uVar4 = *(undefined4 *)&pFVar15->field_0x14;
          pFVar15[iVar9].ConfidenceScore = pFVar15->ConfidenceScore;
          *(undefined4 *)&pFVar15[iVar9].field_0x14 = uVar4;
          pFVar15->Name = FVar2;
          pFVar15->Factory = pIVar3;
          pFVar15->ConfidenceScore = iVar5;
          *(undefined4 *)&pFVar15->field_0x14 = uVar6;
          pFVar16 = pFVar15;
LAB_146bf1e30:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x000146bf1e39;
          goto LAB_146bf1e50;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            bVar7 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (!bVar7) {
              pFVar10 = pFVar12;
            }
          }
          FVar2 = pFVar12->Name;
          pIVar1 = pFVar12->Factory;
          iVar14 = pFVar12->ConfidenceScore;
          uVar6 = *(undefined4 *)&pFVar12->field_0x14;
          pIVar3 = pFVar17->Factory;
          pFVar12->Name = pFVar17->Name;
          pFVar12->Factory = pIVar3;
          uVar4 = *(undefined4 *)&pFVar17->field_0x14;
          pFVar12->ConfidenceScore = pFVar17->ConfidenceScore;
          *(undefined4 *)&pFVar12->field_0x14 = uVar4;
          pFVar17->Name = FVar2;
          pFVar17->Factory = pIVar1;
          pFVar17->ConfidenceScore = iVar14;
          *(undefined4 *)&pFVar17->field_0x14 = uVar6;
        }
        goto LAB_146bf1f8e;
      }
LAB_146bf1f75:
      HeapSortInternal<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,int,FIdentityFunctor,TDereferenceWrapper<_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::FCandidate,_FMediaPlayerFacade::GetPlayerFactoryForUrl_::__l2::<lambda_1>_>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_146bf1f8e:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x000146bf1e39:
  bVar7 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,pFVar15,pFVar16);
  if (!bVar7) goto LAB_146bf1e30;
LAB_146bf1e50:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    bVar7 = `FMediaPlayerFacade::GetPlayerFactoryForUrl'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pFVar10,pFVar15);
  } while (!bVar7);
  pIVar1 = pFVar11[-1].Factory;
  if (pFVar16 <= pFVar10) {
    FVar2 = pFVar16->Name;
    pIVar3 = pFVar12[1].Factory;
    iVar9 = pFVar12[1].ConfidenceScore;
    uVar6 = *(undefined4 *)&pFVar12[1].field_0x14;
    pFVar16->Name = pFVar10->Name;
    pFVar12[1].Factory = pIVar1;
    uVar4 = *(undefined4 *)&pFVar11[-1].field_0x14;
    pFVar12[1].ConfidenceScore = pFVar11[-1].ConfidenceScore;
    *(undefined4 *)&pFVar12[1].field_0x14 = uVar4;
    pFVar10->Name = FVar2;
    pFVar11[-1].Factory = pIVar3;
    pFVar11[-1].ConfidenceScore = iVar9;
    *(undefined4 *)&pFVar11[-1].field_0x14 = uVar6;
    goto LAB_146bf1e30;
  }
  FVar2 = pFVar15->Name;
  pIVar3 = pFVar15->Factory;
  iVar9 = pFVar15->ConfidenceScore;
  uVar6 = *(undefined4 *)&pFVar15->field_0x14;
  lVar8 = (longlong)pFVar10 + (-0x18 - (longlong)pFVar15);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  pFVar15->Name = pFVar10->Name;
  pFVar15->Factory = pIVar1;
  uVar4 = *(undefined4 *)&pFVar11[-1].field_0x14;
  pFVar15->ConfidenceScore = pFVar11[-1].ConfidenceScore;
  *(undefined4 *)&pFVar15->field_0x14 = uVar4;
  iVar14 = iVar14 + -1;
  pFVar10->Name = FVar2;
  pFVar11[-1].Factory = pIVar3;
  pFVar11[-1].ConfidenceScore = iVar9;
  *(undefined4 *)&pFVar11[-1].field_0x14 = uVar6;
  if ((lVar8 >> 2) - (lVar8 >> 0x3f) < ((longlong)pFVar17 - (longlong)pFVar16) / 0x18) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_146bf1f8e;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_146bf1f8e;
  }
  iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x18) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_146bf1f75;
  goto LAB_146bf1de0;
}

// Reverse<float> @ 146bf2060

void __cdecl AlgoImpl::Reverse<float>(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar2 = param_2 + -1;
  lVar4 = 0;
  lVar7 = (longlong)(param_2 / 2);
  if (lVar7 < 4) {
    if (param_2 / 2 < 1) {
      return;
    }
    lVar5 = (longlong)iVar2;
  }
  else {
    lVar8 = (lVar7 - 4U >> 2) + 1;
    lVar4 = lVar8 * 4;
    lVar5 = (longlong)iVar2 + lVar8 * -4;
    pfVar3 = param_1 + (longlong)iVar2 + -2;
    pfVar6 = param_1 + 2;
    do {
      fVar1 = pfVar6[-2];
      pfVar6[-2] = pfVar3[2];
      pfVar3[2] = fVar1;
      fVar1 = pfVar6[-1];
      pfVar6[-1] = pfVar3[1];
      pfVar3[1] = fVar1;
      fVar1 = *pfVar6;
      *pfVar6 = *pfVar3;
      *pfVar3 = fVar1;
      fVar1 = pfVar6[1];
      pfVar6[1] = pfVar3[-1];
      pfVar3[-1] = fVar1;
      lVar8 = lVar8 + -1;
      pfVar3 = pfVar3 + -4;
      pfVar6 = pfVar6 + 4;
    } while (lVar8 != 0);
    if (lVar7 <= lVar4) {
      return;
    }
  }
  pfVar3 = param_1 + lVar5;
  do {
    fVar1 = param_1[lVar4];
    param_1[lVar4] = *pfVar3;
    lVar4 = lVar4 + 1;
    *pfVar3 = fVar1;
    pfVar3 = pfVar3 + -1;
  } while (lVar4 < lVar7);
  return;
}

// StaticEnum<enum_EMediaPlayerOptionBooleanOverride> @ 146bf2270

UEnum * __cdecl StaticEnum<enum_EMediaPlayerOptionBooleanOverride>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride,
                       (UObject *)pUVar1,L"EMediaPlayerOptionBooleanOverride");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton;
}

// StaticEnum<enum_EMediaPlayerOptionSeekTimeType> @ 146bf22b0

UEnum * __cdecl StaticEnum<enum_EMediaPlayerOptionSeekTimeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionSeekTimeType,(UObject *)pUVar1
                       ,L"EMediaPlayerOptionSeekTimeType");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionSeekTimeType.OuterSingleton;
}

// StaticEnum<enum_EMediaPlayerOptionTrackSelectMode> @ 146bf22f0

UEnum * __cdecl StaticEnum<enum_EMediaPlayerOptionTrackSelectMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionTrackSelectMode,
                       (UObject *)pUVar1,L"EMediaPlayerOptionTrackSelectMode");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerOptionTrackSelectMode.OuterSingleton;
}

// ~TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,0,1> @ 146bf2d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__FMediaPlayerFacade::ContinueOpen_::__l5::FAsyncResourceReleaseNotification::Signal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::Signal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bf40b8

/* [thunk]:public: virtual void * __ptr64 __cdecl TMediaSampleQueue<class IMediaAudioSample,class
   FMediaAudioSampleSink>::`vector deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
_vector_deleting_destructor__adjustor_40__
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)
                      (this[-1].CriticalSection.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bf40c8

/* [thunk]:public: virtual void * __ptr64 __cdecl TMediaSampleQueue<class IMediaBinarySample,class
   TMediaSampleSink<class IMediaBinarySample> >::`vector deleting destructor'`adjustor{40}'
   (unsigned int) __ptr64 */

void * __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
_vector_deleting_destructor__adjustor_40__
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *
                      )(this[-1].CriticalSection.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bf40d8

/* [thunk]:public: virtual void * __ptr64 __cdecl TMediaSampleQueue<class IMediaOverlaySample,class
   TMediaSampleSink<class IMediaOverlaySample> >::`vector deleting destructor'`adjustor{40}'
   (unsigned int) __ptr64 */

void * __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
_vector_deleting_destructor__adjustor_40__
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
                       *)(this[-1].CriticalSection.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bf40e8

/* [thunk]:public: virtual void * __ptr64 __cdecl TMediaSampleQueue<class IMediaTextureSample,class
   TMediaSampleSink<class IMediaTextureSample> >::`vector deleting destructor'`adjustor{40}'
   (unsigned int) __ptr64 */

void * __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
_vector_deleting_destructor__adjustor_40__
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
                       *)(this[-1].CriticalSection.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bf40f8

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaAudioSampleQueue::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FMediaAudioSampleQueue::_vector_deleting_destructor__adjustor_40__
          (FMediaAudioSampleQueue *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMediaAudioSampleQueue *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146bf4108

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaPlayerFacade::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaPlayerFacade::_vector_deleting_destructor__adjustor_8__(FMediaPlayerFacade *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaPlayerFacade *)
                      &this[-1].LifecycleManagerDelegateControl.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 146bf4118

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaPlayerFacade::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FMediaPlayerFacade::_vector_deleting_destructor__adjustor_16__
          (FMediaPlayerFacade *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaPlayerFacade *)&this[-1].LifecycleManagerDelegateControl,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146bf4130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::Signal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4180

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf41c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaPlayerLifecycleManagerDelegateControl,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaPlayerLifecycleManagerDelegateControl,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4200

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaRecorderClockSink,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaRecorderClockSink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4240

void * __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::_scalar_deleting_destructor_
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,uint param_1)

{
  ~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4280

void * __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
_scalar_deleting_destructor_
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          uint param_1)

{
  ~TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf42c0

void * __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
_scalar_deleting_destructor_
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          uint param_1)

{
  ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4300

void * __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
_scalar_deleting_destructor_
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          uint param_1)

{
  ~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4340

void * __thiscall
TMediaSampleSink<IMediaAudioSample>::_scalar_deleting_destructor_
          (TMediaSampleSink<IMediaAudioSample> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaAudioSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf43b0

void * __thiscall
TMediaSampleSink<IMediaBinarySample>::_scalar_deleting_destructor_
          (TMediaSampleSink<IMediaBinarySample> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaBinarySample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4420

void * __thiscall
TMediaSampleSink<IMediaOverlaySample>::_scalar_deleting_destructor_
          (TMediaSampleSink<IMediaOverlaySample> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaOverlaySample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4490

void * __thiscall
TMediaSampleSink<IMediaTextureSample>::_scalar_deleting_destructor_
          (TMediaSampleSink<IMediaTextureSample> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaTextureSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4500

void * __thiscall
TMediaSampleSource<IMediaAudioSample>::_scalar_deleting_destructor_
          (TMediaSampleSource<IMediaAudioSample> *this,uint param_1)

{
  *this = (TMediaSampleSource<IMediaAudioSample>)&___7__TMediaSampleSource_VIMediaAudioSample____6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4540

void * __thiscall
TMediaSampleSource<IMediaBinarySample>::_scalar_deleting_destructor_
          (TMediaSampleSource<IMediaBinarySample> *this,uint param_1)

{
  *this = (TMediaSampleSource<IMediaBinarySample>)
          &___7__TMediaSampleSource_VIMediaBinarySample____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4580

void * __thiscall
TMediaSampleSource<IMediaOverlaySample>::_scalar_deleting_destructor_
          (TMediaSampleSource<IMediaOverlaySample> *this,uint param_1)

{
  *this = (TMediaSampleSource<IMediaOverlaySample>)
          &___7__TMediaSampleSource_VIMediaOverlaySample____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf45c0

void * __thiscall
TMediaSampleSource<IMediaTextureSample>::_scalar_deleting_destructor_
          (TMediaSampleSource<IMediaTextureSample> *this,uint param_1)

{
  *this = (TMediaSampleSource<IMediaTextureSample>)
          &___7__TMediaSampleSource_VIMediaTextureSample____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4600

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification,SharedPointerInternals::DefaultDeleter<`FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4640

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest,SharedPointerInternals::DefaultDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest,SharedPointerInternals::DefaultDeleter<FMediaPlayerLifecycleManagerDelegateOpenRequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4680

void * __thiscall
`FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IAsyncResourceReleaseNotification_IMediaPlayer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf46d0

void * __thiscall
FMediaAudioSampleQueue::_scalar_deleting_destructor_(FMediaAudioSampleQueue *this,uint param_1)

{
  TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
  ~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>
            ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4710

void * __thiscall
FMediaAudioSampleSink::_scalar_deleting_destructor_(FMediaAudioSampleSink *this,uint param_1)

{
  *(undefined ***)this = &___7__TMediaSampleSink_VIMediaAudioSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4780

void * __thiscall
FMediaImagePixelData::_scalar_deleting_destructor_(FMediaImagePixelData *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Sample).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf47e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
FMediaPlayerFacade::_scalar_deleting_destructor_(FMediaPlayerFacade *this,uint param_1)

{
  ~FMediaPlayerFacade(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4820

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
FMediaPlayerLifecycleManagerDelegateControl::_scalar_deleting_destructor_
          (FMediaPlayerLifecycleManagerDelegateControl *this,uint param_1)

{
  ~FMediaPlayerLifecycleManagerDelegateControl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4860

void * __thiscall
FMediaPlayerLifecycleManagerDelegateOpenRequest::_scalar_deleting_destructor_
          (FMediaPlayerLifecycleManagerDelegateOpenRequest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReusedPlayer).SharedReferenceCount.ReferenceController);
  if ((this->PlayerOptions).bIsSet != false) {
    FMediaPlayerOptions::~FMediaPlayerOptions(&(this->PlayerOptions).TypedValue);
  }
  pFVar1 = (this->Url).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOpenRequest_IMediaPlayerLifecycleManagerDelegate__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf48d0

void * __thiscall
FMediaRecorderClockSink::_scalar_deleting_destructor_(FMediaRecorderClockSink *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4910

void * __thiscall FMediaSamples::_scalar_deleting_destructor_(FMediaSamples *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMediaSamples__6B_;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
  ~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
            (&this->VideoSampleQueue);
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->SubtitleSampleQueue);
  TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
  ~TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>
            (&this->MetadataSampleQueue);
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->CaptionSampleQueue);
  TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
  ~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>
            ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)&this->AudioSampleQueue);
  this->_padding_ = (longlong)&___7IMediaSamples__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf49a0

void * __thiscall
IMediaPlayer::IAsyncResourceReleaseNotification::_scalar_deleting_destructor_
          (IAsyncResourceReleaseNotification *this,uint param_1)

{
  *this = (IAsyncResourceReleaseNotification)
          &___7IAsyncResourceReleaseNotification_IMediaPlayer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf49e0

void * __thiscall
IMediaPlayerLifecycleManagerDelegate::IControl::_scalar_deleting_destructor_
          (IControl *this,uint param_1)

{
  *this = (IControl)&___7IControl_IMediaPlayerLifecycleManagerDelegate__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4a20

void * __thiscall IMediaClockSink::_scalar_deleting_destructor_(IMediaClockSink *this,uint param_1)

{
  *this = (IMediaClockSink)&___7IMediaClockSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4a60

void * __thiscall IMediaEventSink::_scalar_deleting_destructor_(IMediaEventSink *this,uint param_1)

{
  *this = (IMediaEventSink)&___7IMediaEventSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4aa0

void * __thiscall IMediaSamples::_scalar_deleting_destructor_(IMediaSamples *this,uint param_1)

{
  *this = (IMediaSamples)&___7IMediaSamples__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4ae0

void * __thiscall IMediaTickable::_scalar_deleting_destructor_(IMediaTickable *this,uint param_1)

{
  *this = (IMediaTickable)&___7IMediaTickable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bf4b20

void * __thiscall
IMediaPlayerLifecycleManagerDelegate::IOpenRequest::_scalar_deleting_destructor_
          (IOpenRequest *this,uint param_1)

{
  *this = (IOpenRequest)&___7IOpenRequest_IMediaPlayerLifecycleManagerDelegate__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Downmix @ 146bf8730

bool __cdecl
MediaAudioResampler::Downmix(float *param_1,uint param_2,uint param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  
  if (((7 < param_2 - 1) || (7 < param_5 - 1)) ||
     (pfVar5 = DownmixMatrices[param_5 - 1][param_2 - 1], pfVar5 == (float *)0x0)) {
    return false;
  }
  if (param_3 != 0) {
    do {
      param_3 = param_3 - 1;
      pfVar8 = pfVar5;
      uVar10 = (ulonglong)param_5;
      if (param_5 != 0) {
        do {
          uVar12 = 0;
          *param_4 = 0.0;
          if (param_2 < 4) {
            if (param_2 != 0) {
              fVar13 = 0.0;
              lVar7 = 0;
              goto LAB_146bf884d;
            }
          }
          else {
            fVar13 = 0.0;
            pfVar9 = param_1 + 2;
            uVar6 = (param_2 - 4 >> 2) + 1;
            uVar11 = (ulonglong)uVar6;
            uVar12 = uVar6 * 4;
            do {
              fVar13 = pfVar9[-2] * *pfVar8 + fVar13;
              *param_4 = fVar13;
              fVar13 = pfVar9[-1] * pfVar8[1] + fVar13;
              *param_4 = fVar13;
              fVar13 = pfVar8[2] * *pfVar9 + fVar13;
              *param_4 = fVar13;
              pfVar1 = pfVar9 + 1;
              pfVar9 = pfVar9 + 4;
              pfVar2 = pfVar8 + 3;
              pfVar8 = pfVar8 + 4;
              fVar13 = *pfVar1 * *pfVar2 + fVar13;
              *param_4 = fVar13;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            lVar7 = (ulonglong)uVar6 * 4;
            if (uVar12 < param_2) {
LAB_146bf884d:
              pfVar9 = param_1 + lVar7;
              uVar11 = (ulonglong)(param_2 - uVar12);
              do {
                fVar3 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                fVar4 = *pfVar9;
                pfVar9 = pfVar9 + 1;
                fVar13 = fVar3 * fVar4 + fVar13;
                *param_4 = fVar13;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          param_4 = param_4 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      param_1 = param_1 + param_2;
    } while (param_3 != 0);
  }
  return true;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlayerOptions @ 146bf8c50

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlayerOptions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaUtils_init @ 146bf8c60

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaUtils_init(void)

{
  return;
}

// EnumerateAudioCaptureDevices @ 146bf93b0

void __cdecl
MediaCaptureSupport::EnumerateAudioCaptureDevices
          (TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  FName FVar2;
  longlong lVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  FName local_res10;
  
  pFVar4 = ::FName::FName(&local_res10,"Media");
  FVar2 = *pFVar4;
  this = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModule(this,FVar2,None);
  if (pIVar5 != (IModuleInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5);
    puVar7 = (undefined8 *)*plVar6;
    lVar3 = plVar6[1];
    puVar1 = puVar7 + (int)lVar3;
    while( true ) {
      if ((int)plVar6[1] != (int)lVar3) {
        `TCheckedPointerIterator<IMediaCaptureSupport_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res10);
      }
      if (puVar7 == puVar1) break;
      (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,param_1);
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

// EnumerateVideoCaptureDevices @ 146bf9460

void __cdecl
MediaCaptureSupport::EnumerateVideoCaptureDevices
          (TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  FName FVar2;
  longlong lVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  FName local_res10;
  
  pFVar4 = ::FName::FName(&local_res10,"Media");
  FVar2 = *pFVar4;
  this = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModule(this,FVar2,None);
  if (pIVar5 != (IModuleInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5);
    puVar7 = (undefined8 *)*plVar6;
    lVar3 = plVar6[1];
    puVar1 = puVar7 + (int)lVar3;
    while( true ) {
      if ((int)plVar6[1] != (int)lVar3) {
        `TCheckedPointerIterator<IMediaCaptureSupport_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res10);
      }
      if (puVar7 == puVar1) break;
      (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,param_1);
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

// EventToString @ 146bf9510

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __cdecl MediaUtils::EventToString(FString *__return_storage_ptr__,EMediaEvent param_1)

{
  switch(param_1) {
  case MediaBuffering:
    ::FString::FString(__return_storage_ptr__,L"MediaBuffering");
    return __return_storage_ptr__;
  case MediaBufferingComplete:
    ::FString::FString(__return_storage_ptr__,L"MediaBufferingComplete");
    return __return_storage_ptr__;
  case MediaClosed:
    ::FString::FString(__return_storage_ptr__,L"MediaClosed");
    return __return_storage_ptr__;
  case MediaConnecting:
    ::FString::FString(__return_storage_ptr__,L"MediaConnecting");
    return __return_storage_ptr__;
  case MediaOpened:
    ::FString::FString(__return_storage_ptr__,L"MediaOpened");
    return __return_storage_ptr__;
  case MediaOpenFailed:
    ::FString::FString(__return_storage_ptr__,L"MediaOpenFailed");
    return __return_storage_ptr__;
  case PlaybackEndReached:
    ::FString::FString(__return_storage_ptr__,L"PlaybackEndReached");
    return __return_storage_ptr__;
  case PlaybackResumed:
    ::FString::FString(__return_storage_ptr__,L"PlaybackResumed");
    return __return_storage_ptr__;
  case PlaybackSuspended:
    ::FString::FString(__return_storage_ptr__,L"PlaybackSuspended");
    return __return_storage_ptr__;
  case SeekCompleted:
    ::FString::FString(__return_storage_ptr__,L"SeekCompleted");
    return __return_storage_ptr__;
  case TracksChanged:
    ::FString::FString(__return_storage_ptr__,L"TracksChanged");
    return __return_storage_ptr__;
  case MetadataChanged:
    ::FString::FString(__return_storage_ptr__,L"MetadataChanged");
    return __return_storage_ptr__;
  case Internal_PurgeVideoSamplesHint:
    ::FString::FString(__return_storage_ptr__,L"Internal: PurgeVideoSamplesHint");
    return __return_storage_ptr__;
  case Internal_VideoSamplesAvailable:
    ::FString::FString(__return_storage_ptr__,L"Internal: VideoSamplesAvailable");
    return __return_storage_ptr__;
  case Internal_VideoSamplesUnavailable:
    ::FString::FString(__return_storage_ptr__,L"Internal: VideoSamplesUnavailable");
    return __return_storage_ptr__;
  case Internal_AudioSamplesAvailable:
    ::FString::FString(__return_storage_ptr__,L"Internal: AudioSamplesAvailable");
    return __return_storage_ptr__;
  case Internal_AudioSamplesUnavailable:
    ::FString::FString(__return_storage_ptr__,L"Internal: AudioSamplesUnavailable");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
}

// ProcessCaptionSamples @ 146c05800

/* WARNING: Removing unreachable block (ram,0x000146c059b4) */
/* WARNING: Removing unreachable block (ram,0x000146c059c7) */
/* WARNING: Removing unreachable block (ram,0x000146c059ec) */
/* WARNING: Removing unreachable block (ram,0x000146c059ed) */
/* WARNING: Removing unreachable block (ram,0x000146c05a06) */
/* WARNING: Removing unreachable block (ram,0x000146c05a0a) */
/* WARNING: Removing unreachable block (ram,0x000146c05a11) */
/* WARNING: Removing unreachable block (ram,0x000146c05a36) */
/* WARNING: Removing unreachable block (ram,0x000146c05a37) */
/* WARNING: Removing unreachable block (ram,0x000146c05a45) */
/* WARNING: Removing unreachable block (ram,0x000146c05a60) */
/* WARNING: Removing unreachable block (ram,0x000146c05a7a) */
/* WARNING: Removing unreachable block (ram,0x000146c05a7e) */
/* WARNING: Removing unreachable block (ram,0x000146c05a82) */
/* WARNING: Removing unreachable block (ram,0x000146c05ab1) */
/* WARNING: Removing unreachable block (ram,0x000146c05ab2) */
/* WARNING: Removing unreachable block (ram,0x000146c05aba) */
/* WARNING: Removing unreachable block (ram,0x000146c05ac7) */
/* WARNING: Removing unreachable block (ram,0x000146c05ad0) */
/* WARNING: Removing unreachable block (ram,0x000146c05ad3) */
/* WARNING: Removing unreachable block (ram,0x000146c05c2b) */
/* WARNING: Removing unreachable block (ram,0x000146c05c38) */
/* WARNING: Removing unreachable block (ram,0x000146c05c4e) */
/* WARNING: Removing unreachable block (ram,0x000146c05ade) */
/* WARNING: Removing unreachable block (ram,0x000146c05ae2) */
/* WARNING: Removing unreachable block (ram,0x000146c05ae5) */
/* WARNING: Removing unreachable block (ram,0x000146c05aef) */
/* WARNING: Removing unreachable block (ram,0x000146c05af3) */
/* WARNING: Removing unreachable block (ram,0x000146c05af7) */
/* WARNING: Removing unreachable block (ram,0x000146c05b26) */
/* WARNING: Removing unreachable block (ram,0x000146c05b27) */
/* WARNING: Removing unreachable block (ram,0x000146c05b36) */
/* WARNING: Removing unreachable block (ram,0x000146c05b45) */
/* WARNING: Removing unreachable block (ram,0x000146c05b50) */
/* WARNING: Removing unreachable block (ram,0x000146c05b58) */
/* WARNING: Removing unreachable block (ram,0x000146c05b6b) */
/* WARNING: Removing unreachable block (ram,0x000146c05b8d) */
/* WARNING: Removing unreachable block (ram,0x000146c05bb0) */
/* WARNING: Removing unreachable block (ram,0x000146c05bb8) */
/* WARNING: Removing unreachable block (ram,0x000146c05bc6) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessCaptionSamples
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FMediaTimeStamp> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  IMediaPlayer *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  long64 lStack_80;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long64 local_68;
  undefined8 uStack_60;
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->Player).Object;
  cVar6 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1);
  if ((cVar6 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xd04,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar3 = (this->SeekTargetTime).Time.Ticks;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (lVar3 == -0x8000000000000000) {
    local_88 = *(undefined8 *)&param_2->LowerBound;
    lStack_80 = (param_2->LowerBound).Value.Time.Ticks;
    local_78 = (param_2->LowerBound).Value.SequenceIndex;
    iStack_74 = (param_2->LowerBound).Value.LoopIndex;
    uStack_70 = *(undefined4 *)&param_2->UpperBound;
    uStack_6c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    local_68 = (param_2->UpperBound).Value.Time.Ticks;
    uStack_60._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
    uStack_60._4_4_ = (param_2->UpperBound).Value.LoopIndex;
    cVar6 = (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_88);
    while (cVar6 != '\0') {
      local_88 = *(undefined8 *)&param_2->LowerBound;
      lStack_80 = (param_2->LowerBound).Value.Time.Ticks;
      local_78 = (param_2->LowerBound).Value.SequenceIndex;
      iStack_74 = (param_2->LowerBound).Value.LoopIndex;
      uStack_70 = *(undefined4 *)&param_2->UpperBound;
      uStack_6c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
      local_68 = (param_2->UpperBound).Value.Time.Ticks;
      uStack_60._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
      uStack_60._4_4_ = (param_2->UpperBound).Value.LoopIndex;
      cVar6 = (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_88);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->CurrentRate;
    local_8c = (this->SeekTargetTime).LoopIndex;
    local_90 = (this->SeekTargetTime).SequenceIndex;
    local_b8[0] = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0x7fffffffffffffff;
    if (0.0 <= fVar1) {
      local_98 = 0;
    }
    if (fVar1 == 0.0) {
      fVar1 = this->LastRate;
    }
    (**(code **)((longlong)*param_1 + 0x98))(param_1,local_b8,fVar1 < 0.0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ProcessMetadataSamples @ 146c065d0

/* WARNING: Removing unreachable block (ram,0x000146c06784) */
/* WARNING: Removing unreachable block (ram,0x000146c06797) */
/* WARNING: Removing unreachable block (ram,0x000146c067bc) */
/* WARNING: Removing unreachable block (ram,0x000146c067bd) */
/* WARNING: Removing unreachable block (ram,0x000146c067d6) */
/* WARNING: Removing unreachable block (ram,0x000146c067da) */
/* WARNING: Removing unreachable block (ram,0x000146c067e1) */
/* WARNING: Removing unreachable block (ram,0x000146c06806) */
/* WARNING: Removing unreachable block (ram,0x000146c06807) */
/* WARNING: Removing unreachable block (ram,0x000146c06815) */
/* WARNING: Removing unreachable block (ram,0x000146c06830) */
/* WARNING: Removing unreachable block (ram,0x000146c0684a) */
/* WARNING: Removing unreachable block (ram,0x000146c0684e) */
/* WARNING: Removing unreachable block (ram,0x000146c06852) */
/* WARNING: Removing unreachable block (ram,0x000146c06881) */
/* WARNING: Removing unreachable block (ram,0x000146c06882) */
/* WARNING: Removing unreachable block (ram,0x000146c0688a) */
/* WARNING: Removing unreachable block (ram,0x000146c06897) */
/* WARNING: Removing unreachable block (ram,0x000146c068a0) */
/* WARNING: Removing unreachable block (ram,0x000146c068a3) */
/* WARNING: Removing unreachable block (ram,0x000146c069fb) */
/* WARNING: Removing unreachable block (ram,0x000146c06a08) */
/* WARNING: Removing unreachable block (ram,0x000146c06a1e) */
/* WARNING: Removing unreachable block (ram,0x000146c068ae) */
/* WARNING: Removing unreachable block (ram,0x000146c068b2) */
/* WARNING: Removing unreachable block (ram,0x000146c068b5) */
/* WARNING: Removing unreachable block (ram,0x000146c068bf) */
/* WARNING: Removing unreachable block (ram,0x000146c068c3) */
/* WARNING: Removing unreachable block (ram,0x000146c068c7) */
/* WARNING: Removing unreachable block (ram,0x000146c068f6) */
/* WARNING: Removing unreachable block (ram,0x000146c068f7) */
/* WARNING: Removing unreachable block (ram,0x000146c06906) */
/* WARNING: Removing unreachable block (ram,0x000146c06915) */
/* WARNING: Removing unreachable block (ram,0x000146c06920) */
/* WARNING: Removing unreachable block (ram,0x000146c06928) */
/* WARNING: Removing unreachable block (ram,0x000146c0693b) */
/* WARNING: Removing unreachable block (ram,0x000146c0695d) */
/* WARNING: Removing unreachable block (ram,0x000146c06980) */
/* WARNING: Removing unreachable block (ram,0x000146c06988) */
/* WARNING: Removing unreachable block (ram,0x000146c06996) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessMetadataSamples
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FMediaTimeStamp> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  IMediaPlayer *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  long64 lStack_80;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long64 local_68;
  undefined8 uStack_60;
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->Player).Object;
  cVar6 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1);
  if ((cVar6 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xd41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar3 = (this->SeekTargetTime).Time.Ticks;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (lVar3 == -0x8000000000000000) {
    local_88 = *(undefined8 *)&param_2->LowerBound;
    lStack_80 = (param_2->LowerBound).Value.Time.Ticks;
    local_78 = (param_2->LowerBound).Value.SequenceIndex;
    iStack_74 = (param_2->LowerBound).Value.LoopIndex;
    uStack_70 = *(undefined4 *)&param_2->UpperBound;
    uStack_6c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    local_68 = (param_2->UpperBound).Value.Time.Ticks;
    uStack_60._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
    uStack_60._4_4_ = (param_2->UpperBound).Value.LoopIndex;
    cVar6 = (**(code **)((longlong)*param_1 + 0x20))(param_1,&local_88);
    while (cVar6 != '\0') {
      local_88 = *(undefined8 *)&param_2->LowerBound;
      lStack_80 = (param_2->LowerBound).Value.Time.Ticks;
      local_78 = (param_2->LowerBound).Value.SequenceIndex;
      iStack_74 = (param_2->LowerBound).Value.LoopIndex;
      uStack_70 = *(undefined4 *)&param_2->UpperBound;
      uStack_6c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
      local_68 = (param_2->UpperBound).Value.Time.Ticks;
      uStack_60._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
      uStack_60._4_4_ = (param_2->UpperBound).Value.LoopIndex;
      cVar6 = (**(code **)((longlong)*param_1 + 0x20))(param_1,&local_88);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->CurrentRate;
    local_8c = (this->SeekTargetTime).LoopIndex;
    local_90 = (this->SeekTargetTime).SequenceIndex;
    local_b8[0] = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0x7fffffffffffffff;
    if (0.0 <= fVar1) {
      local_98 = 0;
    }
    if (fVar1 == 0.0) {
      fVar1 = this->LastRate;
    }
    (**(code **)((longlong)*param_1 + 0xa8))(param_1,local_b8,fVar1 < 0.0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ProcessSubtitleSamples @ 146c06dc0

/* WARNING: Removing unreachable block (ram,0x000146c06f74) */
/* WARNING: Removing unreachable block (ram,0x000146c06f87) */
/* WARNING: Removing unreachable block (ram,0x000146c06fac) */
/* WARNING: Removing unreachable block (ram,0x000146c06fad) */
/* WARNING: Removing unreachable block (ram,0x000146c06fc6) */
/* WARNING: Removing unreachable block (ram,0x000146c06fca) */
/* WARNING: Removing unreachable block (ram,0x000146c06fd1) */
/* WARNING: Removing unreachable block (ram,0x000146c06ff6) */
/* WARNING: Removing unreachable block (ram,0x000146c06ff7) */
/* WARNING: Removing unreachable block (ram,0x000146c07005) */
/* WARNING: Removing unreachable block (ram,0x000146c07020) */
/* WARNING: Removing unreachable block (ram,0x000146c0703a) */
/* WARNING: Removing unreachable block (ram,0x000146c0703e) */
/* WARNING: Removing unreachable block (ram,0x000146c07042) */
/* WARNING: Removing unreachable block (ram,0x000146c07071) */
/* WARNING: Removing unreachable block (ram,0x000146c07072) */
/* WARNING: Removing unreachable block (ram,0x000146c0707a) */
/* WARNING: Removing unreachable block (ram,0x000146c07087) */
/* WARNING: Removing unreachable block (ram,0x000146c07090) */
/* WARNING: Removing unreachable block (ram,0x000146c07093) */
/* WARNING: Removing unreachable block (ram,0x000146c071eb) */
/* WARNING: Removing unreachable block (ram,0x000146c071f8) */
/* WARNING: Removing unreachable block (ram,0x000146c0720e) */
/* WARNING: Removing unreachable block (ram,0x000146c0709e) */
/* WARNING: Removing unreachable block (ram,0x000146c070a2) */
/* WARNING: Removing unreachable block (ram,0x000146c070a5) */
/* WARNING: Removing unreachable block (ram,0x000146c070af) */
/* WARNING: Removing unreachable block (ram,0x000146c070b3) */
/* WARNING: Removing unreachable block (ram,0x000146c070b7) */
/* WARNING: Removing unreachable block (ram,0x000146c070e6) */
/* WARNING: Removing unreachable block (ram,0x000146c070e7) */
/* WARNING: Removing unreachable block (ram,0x000146c070f6) */
/* WARNING: Removing unreachable block (ram,0x000146c07105) */
/* WARNING: Removing unreachable block (ram,0x000146c07110) */
/* WARNING: Removing unreachable block (ram,0x000146c07118) */
/* WARNING: Removing unreachable block (ram,0x000146c0712b) */
/* WARNING: Removing unreachable block (ram,0x000146c0714d) */
/* WARNING: Removing unreachable block (ram,0x000146c07170) */
/* WARNING: Removing unreachable block (ram,0x000146c07178) */
/* WARNING: Removing unreachable block (ram,0x000146c07186) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerFacade::ProcessSubtitleSamples
          (FMediaPlayerFacade *this,IMediaSamples *param_1,TRange<FMediaTimeStamp> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  IMediaPlayer *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  long64 lStack_80;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long64 local_68;
  undefined8 uStack_60;
  
  if (((this->Player).Object == (IMediaPlayer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->Player).Object;
  cVar6 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,1);
  if ((cVar6 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Player->GetPlayerFeatureFlag(IMediaPlayer::EFeatureFlag::UsePlaybackTimingV2)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaPlayerFacade.cpp"
                         ,0xd22,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->TimeValueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar3 = (this->SeekTargetTime).Time.Ticks;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (lVar3 == -0x8000000000000000) {
    local_88 = *(undefined8 *)&param_2->LowerBound;
    lStack_80 = (param_2->LowerBound).Value.Time.Ticks;
    local_78 = (param_2->LowerBound).Value.SequenceIndex;
    iStack_74 = (param_2->LowerBound).Value.LoopIndex;
    uStack_70 = *(undefined4 *)&param_2->UpperBound;
    uStack_6c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
    local_68 = (param_2->UpperBound).Value.Time.Ticks;
    uStack_60._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
    uStack_60._4_4_ = (param_2->UpperBound).Value.LoopIndex;
    cVar6 = (**(code **)((longlong)*param_1 + 0x30))(param_1,&local_88);
    while (cVar6 != '\0') {
      local_88 = *(undefined8 *)&param_2->LowerBound;
      lStack_80 = (param_2->LowerBound).Value.Time.Ticks;
      local_78 = (param_2->LowerBound).Value.SequenceIndex;
      iStack_74 = (param_2->LowerBound).Value.LoopIndex;
      uStack_70 = *(undefined4 *)&param_2->UpperBound;
      uStack_6c = *(undefined4 *)&(param_2->UpperBound).field_0x4;
      local_68 = (param_2->UpperBound).Value.Time.Ticks;
      uStack_60._0_4_ = (param_2->UpperBound).Value.SequenceIndex;
      uStack_60._4_4_ = (param_2->UpperBound).Value.LoopIndex;
      cVar6 = (**(code **)((longlong)*param_1 + 0x30))(param_1,&local_88);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->CurrentRate;
    local_8c = (this->SeekTargetTime).LoopIndex;
    local_90 = (this->SeekTargetTime).SequenceIndex;
    local_b8[0] = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0x7fffffffffffffff;
    if (0.0 <= fVar1) {
      local_98 = 0;
    }
    if (fVar1 == 0.0) {
      fVar1 = this->LastRate;
    }
    (**(code **)((longlong)*param_1 + 0xa0))(param_1,local_b8,fVar1 < 0.0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// StateToString @ 146c0dc00

FString * __cdecl MediaUtils::StateToString(FString *__return_storage_ptr__,EMediaState param_1)

{
  switch(param_1) {
  case Closed:
    ::FString::FString(__return_storage_ptr__,L"Closed");
    return __return_storage_ptr__;
  case Error:
    ::FString::FString(__return_storage_ptr__,L"Error");
    return __return_storage_ptr__;
  case Paused:
    ::FString::FString(__return_storage_ptr__,L"Paused");
    return __return_storage_ptr__;
  case Playing:
    ::FString::FString(__return_storage_ptr__,L"Playing");
    return __return_storage_ptr__;
  case Preparing:
    ::FString::FString(__return_storage_ptr__,L"Preparing");
    return __return_storage_ptr__;
  case Stopped:
    ::FString::FString(__return_storage_ptr__,L"Stopped");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
}

// TrackTypeToString @ 146c10800

FString * __cdecl
MediaUtils::TrackTypeToString(FString *__return_storage_ptr__,EMediaTrackType param_1)

{
  switch(param_1) {
  case Audio:
    ::FString::FString(__return_storage_ptr__,L"Audio");
    return __return_storage_ptr__;
  case Caption:
    ::FString::FString(__return_storage_ptr__,L"Caption");
    return __return_storage_ptr__;
  case Metadata:
    ::FString::FString(__return_storage_ptr__,L"Metadata");
    return __return_storage_ptr__;
  case Script:
    ::FString::FString(__return_storage_ptr__,L"Script");
    return __return_storage_ptr__;
  case Subtitle:
    ::FString::FString(__return_storage_ptr__,L"Subtitle");
    return __return_storage_ptr__;
  case Text:
    ::FString::FString(__return_storage_ptr__,L"Text");
    return __return_storage_ptr__;
  case Video:
    ::FString::FString(__return_storage_ptr__,L"Video");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
}

// Z_Construct_UScriptStruct_FMediaPlayerOptions @ 146c117e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaPlayerOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.InnerSingleton;
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

// IMPLEMENT_MODULE_MediaUtils @ 146c11860

void __cdecl IMPLEMENT_MODULE_MediaUtils(void)

{
  return;
}

// OnPreSampleRender_RenderThread'' @ 1503df750

void __cdecl `dynamic_atexit_destructor_for_'FMediaDelegates::OnPreSampleRender_RenderThread__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FMediaDelegates::OnPreSampleRender_RenderThread._8_8_,
             FMediaDelegates::OnPreSampleRender_RenderThread._16_4_);
  if (FMediaDelegates::OnPreSampleRender_RenderThread._8_8_ != 0) {
    FMemory::Free((void *)FMediaDelegates::OnPreSampleRender_RenderThread._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMediaDelegates::OnPreSampleRender_RenderThread);
  return;
}

// OnSampleDiscarded_RenderThread'' @ 1503df790

void __cdecl `dynamic_atexit_destructor_for_'FMediaDelegates::OnSampleDiscarded_RenderThread__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FMediaDelegates::OnSampleDiscarded_RenderThread._8_8_,
             FMediaDelegates::OnSampleDiscarded_RenderThread._16_4_);
  if (FMediaDelegates::OnSampleDiscarded_RenderThread._8_8_ != 0) {
    FMemory::Free((void *)FMediaDelegates::OnSampleDiscarded_RenderThread._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMediaDelegates::OnSampleDiscarded_RenderThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaUtilsBlockOnFetchTimeout'' @ 1503df7d0

void __cdecl
UE::MediaUtils::Private::_dynamic_atexit_destructor_for__CVarMediaUtilsBlockOnFetchTimeout__(void)

{
  CVarMediaUtilsBlockOnFetchTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaUtilsBlockOnFetchTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTestForcePlayerCreateFailed'' @ 1503df7f0

void __cdecl
UE::MediaUtils::Private::_dynamic_atexit_destructor_for__CVarTestForcePlayerCreateFailed__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTestForcePlayerCreateFailed);
  return;
}

// `dynamic_atexit_destructor_for_'LogMediaTimeSource'' @ 1503df810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaTimeSource__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaTimeSource);
  return;
}

// `dynamic_atexit_destructor_for_'LogMediaUtils'' @ 1503df830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaUtils__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaUtils);
  return;
}

