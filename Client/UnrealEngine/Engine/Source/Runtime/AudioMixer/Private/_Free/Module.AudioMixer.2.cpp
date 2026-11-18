// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 465

// `dynamic_initializer_for_'CVarBypassAllSubmixEffects'' @ 14109a0b0

void __cdecl _dynamic_initializer_for__CVarBypassAllSubmixEffects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBypassAllSubmixEffects,L"au.BypassAllSubmixEffects",&BypassAllSubmixEffectsCVar,
             L"When set to 1, all submix effects will be bypassed.\n1: Submix Effects are disabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBypassAllSubmixEffects__);
  return;
}

// `dynamic_initializer_for_'CVarBypassDynamicsProcessor'' @ 14109a100

void __cdecl _dynamic_initializer_for__CVarBypassDynamicsProcessor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBypassDynamicsProcessor,L"au.Submix.Effects.DynamicsProcessor.Bypass",
             &bBypassSubmixDynamicsProcessor,
             L"If non-zero, bypasses all submix dynamics processors currently active.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarBypassDynamicsProcessor__);
  return;
}

// `dynamic_initializer_for_'CVarDisableQuadReverbCVarFast'' @ 14109a150

void __cdecl _dynamic_initializer_for__CVarDisableQuadReverbCVarFast__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableQuadReverbCVarFast,L"au.DisableQuadReverb",&DisableQuadReverbCVarFast,
             L"Disables quad reverb in surround.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableQuadReverbCVarFast__);
  return;
}

// `dynamic_initializer_for_'CVarDisableSubmixReverb'' @ 14109a1a0

void __cdecl _dynamic_initializer_for__CVarDisableSubmixReverb__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableSubmixReverb,L"au.DisableReverbSubmix",&DisableSubmixReverbCVarFast,
             L"Disables the reverb submix.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableSubmixReverb__);
  return;
}

// `dynamic_initializer_for_'CVarHeadlessClockSampleRate'' @ 14109a1f0

void __cdecl _dynamic_initializer_for__CVarHeadlessClockSampleRate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHeadlessClockSampleRate,L"au.Quartz.HeadlessClockSampleRate",
             &HeadlessClockSampleRateCvar,
             L"Sample rate to use for Quartz Clocks/Metronomes when no Mixer Device is present.\n0: Not Enabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHeadlessClockSampleRate__);
  return;
}

// `dynamic_initializer_for_'CVarLogSubmixEnablement'' @ 14109a240

void __cdecl _dynamic_initializer_for__CVarLogSubmixEnablement__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogSubmixEnablement,L"au.LogSubmixAutoDisable",&LogSubmixEnablementCVar,
             L"Enables logging of submix disable and enable state.\n1: Submix enablement logging is on. 0: Submix enablement/disablement logging is off."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogSubmixEnablement__);
  return;
}

// `dynamic_initializer_for_'CVarMaxQuartzSubscribersToUpdatePerTick'' @ 14109a290

void __cdecl _dynamic_initializer_for__CVarMaxQuartzSubscribersToUpdatePerTick__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxQuartzSubscribersToUpdatePerTick,L"au.Quartz.MaxSubscribersToUpdatePerTick",
             &MaxQuartzSubscribersToUpdatePerTickCvar,
             L"Limits the number of Quartz subscribers to update per Tick.\n<= 0: No Limit, >= 1: Limit"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxQuartzSubscribersToUpdatePerTick__);
  return;
}

// `dynamic_initializer_for_'CVarRecoverRecordingOnShutdown'' @ 14109a2e0

void __cdecl _dynamic_initializer_for__CVarRecoverRecordingOnShutdown__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRecoverRecordingOnShutdown,L"au.RecoverRecordingOnShutdown",
             &RecoverRecordingOnShutdownCVar,
             L"When set to 1, we will attempt to bounce the recording to a wav file if the game is shutdown while a recording is in flight.\n0: Disabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRecoverRecordingOnShutdown__);
  return;
}

// `dynamic_initializer_for_'CVarReverbStereoFlipForQuadFast'' @ 14109a330

void __cdecl _dynamic_initializer_for__CVarReverbStereoFlipForQuadFast__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReverbStereoFlipForQuadFast,L"au.EnableReverbStereoFlipForQuad",
             &EnableReverbStereoFlipForQuadCVarFast,
             L"Enables doing a stereo flip for quad reverb when in surround.\n0: Not Enabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReverbStereoFlipForQuadFast__);
  return;
}

// `dynamic_initializer_for_'CVarSimulateNoAudioDevice'' @ 14109a380

void __cdecl _dynamic_initializer_for__CVarSimulateNoAudioDevice__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimulateNoAudioDevice,L"au.Quartz.SimulateNoAudioDevice",
             &SimulateNoAudioDeviceCvar,
             L"If enabled, the QuartzSubsystem will assume no audio device, and will run new clocks in headless mode.\n0: Not Enabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSimulateNoAudioDevice__);
  return;
}

// `dynamic_initializer_for_'FQuantizedNotifyName'' @ 14109a3d0

void __cdecl Audio::_dynamic_initializer_for__FQuantizedNotifyName__(void)

{
  ::FName::FName(&FQuantizedNotifyName,"Notify Command");
  return;
}

// `dynamic_initializer_for_'LogAudioRenderScheduler'' @ 14109a3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioRenderScheduler__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioRenderScheduler,L"LogAudioRenderScheduler",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioRenderScheduler__);
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 14109a430

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 14109a450

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 14109a470

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'PlayCommandName'' @ 14109a490

void __cdecl Audio::_dynamic_initializer_for__PlayCommandName__(void)

{
  ::FName::FName(&PlayCommandName,"Play Command");
  return;
}

// `dynamic_initializer_for_'QueueCommandName'' @ 14109a4b0

void __cdecl Audio::_dynamic_initializer_for__QueueCommandName__(void)

{
  ::FName::FName(&QueueCommandName,"Queue Command");
  return;
}

// `dynamic_initializer_for_'StartOtherClockName'' @ 14109a4d0

void __cdecl Audio::_dynamic_initializer_for__StartOtherClockName__(void)

{
  ::FName::FName(&StartOtherClockName,"Start Other Clock Command");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerEndpointSubmixes'' @ 14109a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerEndpointSubmixes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerEndpointSubmixes ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerEndpointSubmixes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerEndpointSubmixes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerEndpointSubmixes,*pFVar1,
               L"Submix Graph Endpoint","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixBufferListeners'' @ 14109a580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixBufferListeners__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixBufferListeners ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixBufferListeners>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixBufferListeners");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixBufferListeners,*pFVar1,
               L"Submix Buffer Listeners","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixChildren'' @ 14109a610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixChildren__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixChildren ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixChildren>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixChildren");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixChildren,*pFVar1,
               L"Submix Graph Child Processing","STATGROUP_AudioMixer","STATCAT_Advanced",
               L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixDynamics'' @ 14109a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixDynamics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixDynamics ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixDynamics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixDynamics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixDynamics,*pFVar1,
               L"Submix Dynamics","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixEQ'' @ 14109a730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixEQ__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixEQ == (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEQ>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixEQ");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixEQ,*pFVar1,L"Submix EQ",
               "STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixEffectProcessing'' @ 14109a7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixEffectProcessing__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixEffectProcessing ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEffectProcessing>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixEffectProcessing");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixEffectProcessing,*pFVar1,
               L"Submix Graph Effect Processing","STATGROUP_AudioMixer","STATCAT_Advanced",
               L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixReverb'' @ 14109a850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixReverb__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixReverb ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixReverb>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixReverb");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixReverb,*pFVar1,
               L"Submix Reverb","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixSoundfieldChildren'' @ 14109a8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixSoundfieldChildren__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixSoundfieldChildren ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldChildren>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixSoundfieldChildren");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixSoundfieldChildren,*pFVar1
               ,L"Submix Soundfield Children","STATGROUP_AudioMixer","STATCAT_Advanced",
               L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors'' @ 14109a970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldProcessors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixSoundfieldProcessors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors,
               *pFVar1,L"Submix Soundfield Processors","STATGROUP_AudioMixer","STATCAT_Advanced",
               L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixSoundfieldSources'' @ 14109aa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixSoundfieldSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixSoundfieldSources ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldSources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixSoundfieldSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixSoundfieldSources,*pFVar1,
               L"Submix Soundfield Sources","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixSource'' @ 14109aa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixSource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixSource ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixSource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixSource,*pFVar1,
               L"Submix Graph Source Mixing","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSubmixes'' @ 14109ab20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSubmixes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSubmixes == (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixes>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSubmixes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixes,*pFVar1,L"Submix Graph"
               ,"STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TickRateChangeCommandName'' @ 14109abb0

void __cdecl Audio::_dynamic_initializer_for__TickRateChangeCommandName__(void)

{
  ::FName::FName(&TickRateChangeCommandName,"Tick Rate Change Command");
  return;
}

// `dynamic_initializer_for_'TransportResetCommandName'' @ 14109abd0

void __cdecl Audio::_dynamic_initializer_for__TransportResetCommandName__(void)

{
  ::FName::FName(&TransportResetCommandName,"Transport Reset Command");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h__Script_AudioMixer_2966236835'' @ 14109abf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h__Script_AudioMixer_2966236835__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h__Script_AudioMixer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h__Script_AudioMixer_3139101113'' @ 14109ac30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h__Script_AudioMixer_3139101113__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h__Script_AudioMixer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h__Script_AudioMixer_2512023711'' @ 14109ac70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h__Script_AudioMixer_2512023711__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h__Script_AudioMixer_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h__Script_AudioMixer_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h__Script_AudioMixer_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h__Script_AudioMixer_1610198163'' @ 14109acc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h__Script_AudioMixer_1610198163__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h__Script_AudioMixer_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h__Script_AudioMixer_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h__Script_AudioMixer_613989701'' @ 14109ad10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h__Script_AudioMixer_613989701__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h__Script_AudioMixer_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h__Script_AudioMixer_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h__Script_AudioMixer_2626286498'' @ 14109ad60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h__Script_AudioMixer_2626286498__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h__Script_AudioMixer_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h__Script_AudioMixer_2939322901'' @ 14109ada0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h__Script_AudioMixer_2939322901__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h__Script_AudioMixer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h__Script_AudioMixer_1437231892'' @ 14109ade0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h__Script_AudioMixer_1437231892__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h__Script_AudioMixer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_USubmixEffectSubmixEQPreset @ 146533ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectSubmixEQPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectEQBand @ 146533b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectEQBand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings @ 146533ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectSubmixEQSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectSubmixEQSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectSubmixEQSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectSubmixEQSettings.InnerSingleton;
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

// NewProp_bEnabled_SetBit @ 146533c20

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 1;
  return;
}

// NewStructOps @ 146533c30

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectEQBand,&UE::CoreUObject::Private::Construct<FSubmixEffectEQBand>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectEQBand>,&UE::CoreUObject::Private::Destruct<FSubmixEffectEQBand>,&UE::CoreUObject::Private::Copy<FSubmixEffectEQBand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UQuartzClockHandle @ 146533c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UQuartzClockHandle(void)

{
  if (Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton,
               &Z_Construct_UClass_UQuartzClockHandle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent @ 146533cb0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetBeatProgressPercent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 146533cf0

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectSubmixEQSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectSubmixEQSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectSubmixEQSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectSubmixEQSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectSubmixEQSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute @ 146533d30

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp @ 146533d70

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings @ 146533db0

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds @ 146533df0

UFunction * __cdecl
Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime @ 146533e30

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick @ 146533e70

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick @ 146533eb0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute @ 146533ef0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond @ 146533f30

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146533f70

void __cdecl
Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UQuartzSubsystem @ 146533f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UQuartzSubsystem(void)

{
  if (Z_Registration_Info_UClass_UQuartzSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UQuartzSubsystem.OuterSingleton,
               &Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UQuartzSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning @ 146533fc0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideSettingsIfClockExists_SetBit @ 146534000

void __cdecl
Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::
NewProp_bOverrideSettingsIfClockExists_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bUseAudioEngineClockManager_SetBit @ 146534010

void __cdecl
Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::
NewProp_bUseAudioEngineClockManager_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary @ 146534020

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_NotifyOnQuantizationBoundary_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock @ 146534060

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle @ 1465340a0

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_PauseClock @ 1465340e0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_PauseClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName @ 146534120

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146534160

void __cdecl
Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist @ 146534170

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency @ 1465341b0

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency @ 1465341f0

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_ResetTransport @ 146534230

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_ResetTransport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency @ 146534270

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized @ 1465342b0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp @ 1465342f0

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_ResumeClock @ 146534330

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_ResumeClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds @ 146534370

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute @ 146534430

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime @ 146534470

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick @ 146534570

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency @ 1465345b0

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency @ 1465345f0

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick @ 146534630

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency @ 146534670

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioGenerator @ 1465346b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGenerator(void)

{
  if (Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton,
               &Z_Construct_UClass_UAudioGenerator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock @ 1465346f0

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute @ 146534730

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency @ 146534770

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond @ 1465347b0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset @ 1465347f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton;
}

// Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode @ 146534830

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode(void)

{
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource @ 146534870

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource(void)

{
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode @ 1465348b0

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode(void)

{
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType @ 1465348f0

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType(void)

{
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings @ 146534930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.
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

// Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings @ 1465349b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.InnerSingleton;
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

// Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency @ 146534a30

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESubmixEffectDynamicsProcessorType_StaticEnum @ 146534a70

UEnum * __cdecl ESubmixEffectDynamicsProcessorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType,
                       (UObject *)pUVar1,L"ESubmixEffectDynamicsProcessorType");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton;
}

// Z_Construct_UFunction_UQuartzClockHandle_StartClock @ 146534ab0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_StartClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency @ 146534af0

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESubmixEffectDynamicsPeakMode_StaticEnum @ 146534b30

UEnum * __cdecl ESubmixEffectDynamicsPeakMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode,(UObject *)pUVar1,
                       L"ESubmixEffectDynamicsPeakMode");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146534b70

void __cdecl
Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ESubmixEffectDynamicsChannelLinkMode_StaticEnum @ 146534b80

UEnum * __cdecl ESubmixEffectDynamicsChannelLinkMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode,
                       (UObject *)pUVar1,L"ESubmixEffectDynamicsChannelLinkMode");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton;
}

// Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock @ 146534bc0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning @ 146534c00

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146534c40

void __cdecl
Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ESubmixEffectDynamicsKeySource_StaticEnum @ 146534c50

UEnum * __cdecl ESubmixEffectDynamicsKeySource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource,(UObject *)pUVar1
                       ,L"ESubmixEffectDynamicsKeySource");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton;
}

// NewProp_CancelPendingEvents_SetBit @ 146534c90

void __cdecl
Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled @ 146534ca0

UFunction * __cdecl Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 146534ce0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// Z_Construct_UFunction_UQuartzClockHandle_StopClock @ 146534cf0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_StopClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInTickableWhenPaused_SetBit @ 146534d30

void __cdecl
Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics::
NewProp_bInTickableWhenPaused_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 146534d40

void * __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectDynamicProcessorFilterSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectDynamicProcessorFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectDynamicProcessorFilterSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectDynamicProcessorFilterSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectDynamicProcessorFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused @ 146534d80

UFunction * __cdecl
Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzSubsystem_SetQuartzSubsystemTickableWhenPaused_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents @ 146534dc0

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent @ 146534e00

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bChannelLinked_SetBit @ 146534e40

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::
NewProp_bChannelLinked_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bAnalogMode_SetBit @ 146534e50

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 2;
  return;
}

// NewProp_bBypass_SetBit @ 146534e60

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 4;
  return;
}

// NewProp_bKeyAudition_SetBit @ 146534e70

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::
NewProp_bKeyAudition_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 8;
  return;
}

// Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions @ 146534e80

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146534ec0

void * __cdecl
Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectDynamicsProcessorSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectDynamicsProcessorSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectDynamicsProcessorSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectDynamicsProcessorSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectDynamicsProcessorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision @ 146534f00

UFunction * __cdecl Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey @ 146534f40

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus @ 146534f80

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix @ 146534fc0

UFunction * __cdecl
Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings @ 146535000

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UScrubbedSound @ 146535200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScrubbedSound(void)

{
  if (Z_Registration_Info_UClass_UScrubbedSound.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScrubbedSound.OuterSingleton,
               &Z_Construct_UClass_UScrubbedSound_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScrubbedSound.OuterSingleton;
}

// Z_Construct_UFunction_UScrubbedSound_GetPlayheadTime @ 146535240

UFunction * __cdecl Z_Construct_UFunction_UScrubbedSound_GetPlayheadTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UScrubbedSound_GetPlayheadTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UScrubbedSound_SetGrainDurationRange @ 146535280

UFunction * __cdecl Z_Construct_UFunction_UScrubbedSound_SetGrainDurationRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UScrubbedSound_SetGrainDurationRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsScrubbing_SetBit @ 1465352c0

void __cdecl
Z_Construct_UFunction_UScrubbedSound_SetIsScrubbing_Statics::NewProp_bInIsScrubbing_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UScrubbedSound_SetIsScrubbing @ 1465352d0

UFunction * __cdecl Z_Construct_UFunction_UScrubbedSound_SetIsScrubbing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UScrubbedSound_SetIsScrubbing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInScrubWhileStationary_SetBit @ 146535310

void __cdecl
Z_Construct_UFunction_UScrubbedSound_SetIsScrubbingWhileStationary_Statics::
NewProp_bInScrubWhileStationary_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UScrubbedSound_SetIsScrubbingWhileStationary @ 146535320

UFunction * __cdecl Z_Construct_UFunction_UScrubbedSound_SetIsScrubbingWhileStationary(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UScrubbedSound_SetIsScrubbingWhileStationary_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UScrubbedSound_SetPlayheadTime @ 146535360

UFunction * __cdecl Z_Construct_UFunction_UScrubbedSound_SetPlayheadTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UScrubbedSound_SetPlayheadTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UScrubbedSound_SetSoundWave @ 1465353a0

UFunction * __cdecl Z_Construct_UFunction_UScrubbedSound_SetSoundWave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UScrubbedSound_SetSoundWave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixEffectReverbPreset @ 1465354e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixEffectReverbPreset(void)

{
  if (Z_Registration_Info_UClass_USubmixEffectReverbPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixEffectReverbPreset.OuterSingleton,
               &Z_Construct_UClass_USubmixEffectReverbPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixEffectReverbPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSubmixEffectReverbSettings @ 146535520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubmixEffectReverbSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.InnerSingleton;
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

// NewProp_bBypassEarlyReflections_SetBit @ 1465355a0

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::
NewProp_bBypassEarlyReflections_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bBypassLateReflections_SetBit @ 146535600

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypassLateReflections_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bBypass_SetBit @ 146535610

void __cdecl
Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_bBypass_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewStructOps @ 146535620

void * __cdecl Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubmixEffectReverbSettings,&UE::CoreUObject::Private::Construct<FSubmixEffectReverbSettings>,&UE::CoreUObject::Private::ConstructForTests<FSubmixEffectReverbSettings>,&UE::CoreUObject::Private::Destruct<FSubmixEffectReverbSettings>,&UE::CoreUObject::Private::Copy<FSubmixEffectReverbSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings @ 146535660

UFunction * __cdecl Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect @ 1465356a0

UFunction * __cdecl
Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USynthSound_NoRegister @ 146535800

UClass * __cdecl Z_Construct_UClass_USynthSound_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SynthSound",
               &Z_Registration_Info_UClass_USynthSound.InnerSingleton,
               USynthSound::StaticRegisterNativesUSynthSound,0x480,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<USynthSound>,
               InternalVTableHelperCtorCaller<USynthSound>,local_res8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthSound.InnerSingleton;
}

// Z_Construct_UClass_USynthComponent_NoRegister @ 1465358c0

UClass * __cdecl Z_Construct_UClass_USynthComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SynthComponent",
               &Z_Registration_Info_UClass_USynthComponent.InnerSingleton,
               USynthComponent::StaticRegisterNativesUSynthComponent,0x8c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponent>,InternalVTableHelperCtorCaller<USynthComponent>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponent.InnerSingleton;
}

// Z_Construct_UClass_USynthComponent @ 146535b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthComponent(void)

{
  if (Z_Registration_Info_UClass_USynthComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthComponent.OuterSingleton,
               &Z_Construct_UClass_USynthComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynthComponent.OuterSingleton;
}

// Z_Construct_UClass_USynthSound @ 146535bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynthSound(void)

{
  if (Z_Registration_Info_UClass_USynthSound.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynthSound.OuterSingleton,
               &Z_Construct_UClass_USynthSound_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynthSound.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature @ 146535c00

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_AdjustVolume @ 146535f40

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_AdjustVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_FadeIn @ 146535f80

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_FadeIn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_FadeOut @ 146535fc0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_FadeOut(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_GetModulators @ 146536000

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_GetModulators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_GetModulators_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146536040

void __cdecl
Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponent_IsPlaying @ 1465360a0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect @ 146536120

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect @ 146536160

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InLowPassFilterEnabled_SetBit @ 1465361a0

void __cdecl
Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::
NewProp_InLowPassFilterEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled @ 1465361b0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency @ 1465361f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetModulationRouting @ 1465362f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetModulationRouting(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInOutputToBusOnly_SetBit @ 146536330

void __cdecl
Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly @ 1465363f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect @ 146536430

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect @ 146536470

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetSubmixSend @ 1465364b0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetSubmixSend(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier @ 1465364f0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UQuartzClockHandle_NoRegister @ 1465365f0

UClass * __cdecl Z_Construct_UClass_UQuartzClockHandle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"QuartzClockHandle",
               &Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton,
               UQuartzClockHandle::StaticRegisterNativesUQuartzClockHandle,0x298,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UQuartzClockHandle>,
               InternalVTableHelperCtorCaller<UQuartzClockHandle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton;
}

// Z_Construct_UFunction_USynthComponent_Start @ 1465366a0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_Start(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynthComponent_Stop @ 1465366e0

UFunction * __cdecl Z_Construct_UFunction_USynthComponent_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 146536720

void __cdecl Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x250) = *(byte *)((longlong)param_1 + 0x250) | 1;
  return;
}

// NewProp_bStopWhenOwnerDestroyed_SetBit @ 146536730

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x250) = *(byte *)((longlong)param_1 + 0x250) | 2;
  return;
}

// NewProp_bAllowSpatialization_SetBit @ 146536740

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x250) = *(byte *)((longlong)param_1 + 0x250) | 4;
  return;
}

// NewProp_bOverrideAttenuation_SetBit @ 146536750

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x250) = *(byte *)((longlong)param_1 + 0x250) | 8;
  return;
}

// NewProp_bEnableBusSends_SetBit @ 146536760

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x254) = *(uint *)((longlong)param_1 + 0x254) | 1;
  return;
}

// NewProp_bEnableBaseSubmix_SetBit @ 146536770

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x254) = *(uint *)((longlong)param_1 + 0x254) | 2;
  return;
}

// NewProp_bEnableSubmixSends_SetBit @ 146536780

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x254) = *(uint *)((longlong)param_1 + 0x254) | 4;
  return;
}

// NewProp_bIsUISound_SetBit @ 146536840

void __cdecl Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x838) = *(byte *)((longlong)param_1 + 0x838) | 1;
  return;
}

// NewProp_bIsPreviewSound_SetBit @ 146536850

void __cdecl
Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x838) = *(byte *)((longlong)param_1 + 0x838) | 2;
  return;
}

// ConstructItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,TObjectPtr<UOcclusionPluginSourceSettingsBase>,int> @ 1465373c0

void __cdecl
ConstructItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,TObjectPtr<UOcclusionPluginSourceSettingsBase>,int>
          (void *param_1,TObjectPtr<UOcclusionPluginSourceSettingsBase> *param_2,int param_3)

{
  TObjectPtr<UOcclusionPluginSourceSettingsBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UOcclusionPluginSourceSettingsBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UOcclusionPluginSourceSettingsBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr
           = (UOcclusionPluginSourceSettingsBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UOcclusionPluginSourceSettingsBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UReverbPluginSourceSettingsBase>,TObjectPtr<UReverbPluginSourceSettingsBase>,int> @ 146537420

void __cdecl
ConstructItems<TObjectPtr<UReverbPluginSourceSettingsBase>,TObjectPtr<UReverbPluginSourceSettingsBase>,int>
          (void *param_1,TObjectPtr<UReverbPluginSourceSettingsBase> *param_2,int param_3)

{
  TObjectPtr<UReverbPluginSourceSettingsBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UReverbPluginSourceSettingsBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UReverbPluginSourceSettingsBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UReverbPluginSourceSettingsBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UReverbPluginSourceSettingsBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int> @ 146537480

void __cdecl
ConstructItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int>
          (void *param_1,TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *param_2,
          int param_3)

{
  TObjectPtr<USourceDataOverridePluginSourceSettingsBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 =
           (TObjectPtr<USourceDataOverridePluginSourceSettingsBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<USourceDataOverridePluginSourceSettingsBase>_u_0 *)(lVar2 + (longlong)param_2))->
      DebugPtr = (USourceDataOverridePluginSourceSettingsBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USourceDataOverridePluginSourceSettingsBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,TObjectPtr<USpatializationPluginSourceSettingsBase>,int> @ 1465374e0

void __cdecl
ConstructItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,TObjectPtr<USpatializationPluginSourceSettingsBase>,int>
          (void *param_1,TObjectPtr<USpatializationPluginSourceSettingsBase> *param_2,int param_3)

{
  TObjectPtr<USpatializationPluginSourceSettingsBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 =
           (TObjectPtr<USpatializationPluginSourceSettingsBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<USpatializationPluginSourceSettingsBase>_u_0 *)(lVar2 + (longlong)param_2))->
      DebugPtr = (USpatializationPluginSourceSettingsBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USpatializationPluginSourceSettingsBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAttenuationSubmixSendSettings,FAttenuationSubmixSendSettings,int> @ 146537540

void __cdecl
ConstructItems<FAttenuationSubmixSendSettings,FAttenuationSubmixSendSettings,int>
          (void *param_1,FAttenuationSubmixSendSettings *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase
                ((FSoundSubmixSendInfoBase *)(lVar1 + (longlong)param_2),
                 (FSoundSubmixSendInfoBase *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int> @ 146537590

void __cdecl
ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
          (void *param_1,FSoundSourceBusSendInfo *param_2,int param_3)

{
  TObjectPtr<USoundSourceBus> TVar1;
  USoundSourceBus *pUVar2;
  TObjectPtr<USoundSourceBus>_u_0 *pTVar3;
  TObjectPtr<USoundSourceBus>_u_0 *pTVar4;
  
  if (param_3 != 0) {
    pTVar3 = (TObjectPtr<USoundSourceBus>_u_0 *)((longlong)param_1 + 8);
    pTVar4 = &(param_2->SoundSourceBus).field0_0x0;
    do {
      *(undefined1 *)(pTVar3 + -1) =
           *(undefined1 *)((longlong)pTVar3 + (longlong)param_2 + (-8 - (longlong)param_1));
      TVar1.field0_0x0 = (TObjectPtr<USoundSourceBus>_u_0)pTVar4->DebugPtr;
      pTVar3->DebugPtr = (USoundSourceBus *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USoundSourceBus *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      pUVar2 = pTVar4[1].DebugPtr;
      pTVar3[1].DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundSourceBus *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(undefined4 *)(pTVar3 + 2) = *(undefined4 *)(pTVar4 + 2);
      *(undefined4 *)((longlong)pTVar3 + 0x14) = *(undefined4 *)((longlong)pTVar4 + 0x14);
      *(undefined4 *)(pTVar3 + 3) = *(undefined4 *)(pTVar4 + 3);
      *(undefined4 *)((longlong)pTVar3 + 0x1c) = *(undefined4 *)((longlong)pTVar4 + 0x1c);
      *(undefined4 *)(pTVar3 + 4) = *(undefined4 *)(pTVar4 + 4);
      FRichCurve::FRichCurve((FRichCurve *)&pTVar3[5].ObjectPtr,(FRichCurve *)&pTVar4[5].ObjectPtr);
      pUVar2 = pTVar4[0x15].DebugPtr;
      pTVar3[0x15].DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundSourceBus *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pTVar4 = pTVar4 + 0x17;
      pTVar3 = pTVar3 + 0x17;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int> @ 146537680

void __cdecl
ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>
          (void *param_1,FSoundSubmixSendInfo *param_2,int param_3)

{
  ESubmixSendStage *pEVar1;
  FSoundSubmixSendInfoBase *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FSoundSubmixSendInfoBase *)(lVar2 + (longlong)param_2);
      FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase(this,(FSoundSubmixSendInfoBase *)param_2);
      pEVar1 = &param_2->SendStage;
      param_2 = param_2 + 1;
      this[1].SendLevelControlMethod = *pEVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int> @ 146537710

void __cdecl
DefaultConstructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FAudioRenderScheduler::FStepEntry,int> @ 146537750

void __cdecl
DefaultConstructItems<Audio::FAudioRenderScheduler::FStepEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-3] = 0xffffffffffffffff;
      *puVar1 = 0;
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xc) = 4;
      *(undefined2 *)((longlong)puVar1 + 0x14) = 0;
      puVar1[3] = 0;
      *(undefined2 *)(puVar1 + 4) = 0xffff;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>,int> @ 1465377e0

void __cdecl
DestructItems<TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

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

// DestructItems<FAttenuationSubmixSendSettings,int> @ 146537820

void __cdecl
DestructItems<FAttenuationSubmixSendSettings,int>
          (FAttenuationSubmixSendSettings *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x98;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1[-0xe] = &___7FIndexedCurve__6B_;
      if ((void *)puVar1[-3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-3]);
      }
      *(undefined4 *)(puVar1 + -4) = 0;
      if ((void *)puVar1[-5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-5]);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0xd));
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int> @ 1465378b0

void __cdecl
DestructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int>
          (FDecodedDataChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PCMAudio;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSubmixEffectSubmixEQ::FEQ,int> @ 1465378f0

void __cdecl DestructItems<FSubmixEffectSubmixEQ::FEQ,int>(FEQ *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<Audio::FBiquadFilter,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Bands;
    DestructItems<Audio::FBiquadFilter,int>
              ((FBiquadFilter *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FEQ *)(pTVar2 + 1);
  }
  return;
}

// DestructItems<FSoundSourceBusSendInfo,int> @ 146537940

void __cdecl
DestructItems<FSoundSourceBusSendInfo,int>(FSoundSourceBusSendInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->CustomSendLevelCurve).EditorCurveData.Keys;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((FRichCurve *)(pTVar2 + -7))->_padding_ = (longlong)&___7FIndexedCurve__6B_;
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      *(undefined4 *)(pTVar2 + -2) = 0;
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&((FRichCurve *)(pTVar2 + -7))->_padding_);
      pTVar2 = (TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 0xb) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSoundSubmixSendInfo,int> @ 1465379d0

void __cdecl DestructItems<FSoundSubmixSendInfo,int>(FSoundSubmixSendInfo *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1[-0xe] = (longlong)&___7FIndexedCurve__6B_;
      if ((void *)plVar1[-3] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-3]);
      }
      *(undefined4 *)(plVar1 + -4) = 0;
      if ((void *)plVar1[-5] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-5]);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(plVar1 + -0xd));
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FMixerSubmix::FSoundfieldEffectProcessorData,int> @ 146537a60

void __cdecl
DestructItems<Audio::FMixerSubmix::FSoundfieldEffectProcessorData,int>
          (FSoundfieldEffectProcessorData *param_1,int param_2)

{
  ISoundfieldEffectInstance *pIVar1;
  ISoundfieldEffectSettingsProxy *pIVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Processor).Ptr;
    if (pIVar1 != (ISoundfieldEffectInstance *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    pIVar2 = (param_1->Settings).Ptr;
    if (pIVar2 != (ISoundfieldEffectSettingsProxy *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,int> @ 146537ac0

void __cdecl
DestructItems<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,int>
          (FSpectrumAnalysisDelegateInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  TArray<Audio::FMixerSubmix::FSpectralAnalysisBandInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->SpectralBands;
    do {
      pFVar1 = (pTVar3->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      puVar2 = *(undefined8 **)((longlong)(pTVar3 + -1) + 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (*(void **)&((FOnSubmixSpectralAnalysis *)(pTVar3 + -2))->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&((FOnSubmixSpectralAnalysis *)(pTVar3 + -2))->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(pTVar3 + -2));
      if (*(void **)((longlong)(pTVar3 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar3 + -5) + 8));
      }
      pTVar3 = pTVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int> @ 146537b40

void __cdecl
DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int>
          (FSubmixEffectFadeInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
              ((TSharedPtr<FSoundEffectSubmix,1> *)(param_1->EffectChain).AllocatorInstance.Data,
               (param_1->EffectChain).ArrayNum);
    pFVar1 = (param_1->EffectChain).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FQuartzClock::PendingCommand,int> @ 146537b90

void __cdecl
DestructItems<Audio::FQuartzClock::PendingCommand,int>(PendingCommand *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Command).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,int> @ 146537bd0

void __cdecl
DestructItems<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,int>
          (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
           *param_1,int param_2)

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

// DestructItems<TSharedPtr<Audio::FQuartzClock,1>,int> @ 146537c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<Audio::FQuartzClock,1>,int>
          (TSharedPtr<Audio::FQuartzClock,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<ISubmixBufferListener,1>,int> @ 146537c50

void __cdecl
DestructItems<TWeakPtr<ISubmixBufferListener,1>,int>
          (TWeakPtr<ISubmixBufferListener,1> *param_1,int param_2)

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

// DestructItems<Audio::FQuartzClockProxy,int> @ 146537ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<Audio::FQuartzClockProxy,int>(FQuartzClockProxy *param_1,int param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWeakReferencer<1> *pFVar7;
  
  if (param_2 != 0) {
    pFVar7 = &(param_1->SharedQueue).WeakReferenceCount;
    do {
      plVar5 = *(longlong **)(pFVar7 + 2);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pTVar6 = pFVar7->ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      pFVar7 = pFVar7 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FSoundFileChunkInfoWrapper,int> @ 146537d20

void __cdecl
DestructItems<Audio::FSoundFileChunkInfoWrapper,int>
          (FSoundFileChunkInfoWrapper *param_1,int param_2)

{
  TUniquePtr<unsigned_char_[0],TDefaultDelete<unsigned_char_[0]>_> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->ChunkData;
    do {
      operator_delete__(pTVar1->Ptr);
      pTVar1 = pTVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DowncastSoundfieldRef<FAmbisonicsSoundfieldBuffer,ISoundfieldAudioPacket> @ 146537d60

FAmbisonicsSoundfieldBuffer * __cdecl
DowncastSoundfieldRef<FAmbisonicsSoundfieldBuffer,ISoundfieldAudioPacket>
          (ISoundfieldAudioPacket *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAmbisonicsSoundfieldBuffer *pFVar3;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAmbisonicsSoundfieldBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAmbisonicsSoundfieldBuffer *)param_1;
}

// InternalConstructor<UAudioGenerator> @ 1465395c0

void __cdecl InternalConstructor<UAudioGenerator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UAudioGenerator__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UQuartzClockHandle> @ 146539640

void __cdecl InternalConstructor<UQuartzClockHandle>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    FQuartzTickableObject::FQuartzTickableObject((FQuartzTickableObject *)(this + 1));
    *(undefined ***)this = &___7UQuartzClockHandle__6B_;
    *(undefined ***)(this + 1) =
         &UQuartzClockHandle::
          _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
    ;
    *(undefined ***)&this[1].field_0x8 =
         &UQuartzClockHandle::_vftable__for__Audio__Quartz__IMetronomeEventListener__;
    *(undefined ***)&this[1].field_0x10 =
         &UQuartzClockHandle::_vftable__for__Audio__Quartz__ICommandListener__;
    *(undefined ***)&this[1].field_0x18 =
         &UQuartzClockHandle::_vftable__for__Audio__Quartz__IQueueCommandListener__;
    *(undefined8 *)&this[0xf].field_0x10 = 0;
    *(undefined8 *)&this[0xf].field_0x18 = 0;
    *(undefined8 *)&this[0xf].field_0x20 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)&this[0x10].field_0x8 = 0;
    *(undefined8 *)&this[0x10].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UQuartzSubsystem> @ 1465396e0

void __cdecl InternalConstructor<UQuartzSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FQuartzTickableObjectsManager,1> *pTVar2;
  TSharedRef<FQuartzTickableObjectsManager,1> local_18;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&UQuartzSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UQuartzSubsystem::_vftable__for__FTickableGameObject__;
    pTVar2 = MakeShared<FQuartzTickableObjectsManager,1>(&local_18);
    this[1]._padding_ = (longlong)pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    this[1]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UScrubbedSound> @ 146539750

void __cdecl InternalConstructor<UScrubbedSound>(FObjectInitializer *param_1)

{
  USoundWave *this;
  
  this = (USoundWave *)param_1->Obj;
  if (this != (USoundWave *)0x0) {
    USoundWave::USoundWave(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x100;
    this->bProcedural = '\x01';
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UScrubbedSound::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__IAudioProxyDataFactory__;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0x3fd99999a0000000;
    this[1]._padding_ = 0x3fa99999a0000000;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3dcccccd;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USubmixEffectDynamicsProcessorPreset> @ 146539810

void __cdecl InternalConstructor<USubmixEffectDynamicsProcessorPreset>(FObjectInitializer *param_1)

{
  byte bVar1;
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectDynamicsProcessorPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    bVar1 = this[1].field_0x60;
    this[2].field_0x4 = this[2].field_0x4 & 0xfe;
    this[2].field_0x10 = this[2].field_0x10 & 0xfe;
    this[2].field_0x64 = this[2].field_0x64 & 0xfe;
    this[1].field_0x60 = bVar1 & 0xf3 | 3;
    bVar1 = this[2].field_0x58;
    *(undefined2 *)&this[1].field_0x28 = 0x200;
    this[1].field_0x2a = 1;
    this[3].field_0x8 = this[3].field_0x8 & 0xfe;
    this[2].field_0x58 = bVar1 & 0xf3 | 3;
    *(undefined4 *)&this[1].field_0x2c = 0;
    *(undefined4 *)&this[1].field_0x30 = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x34 = 0x3fc00000;
    *(undefined4 *)&this[1].field_0x38 = 0x41200000;
    *(undefined4 *)&this[1].field_0x3c = 0x40400000;
    *(undefined4 *)&this[1].field_0x40 = 0x41200000;
    *(undefined4 *)&this[1].field_0x44 = 0x42c80000;
    this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x64 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0x41a00000;
    *(undefined8 *)&this[2].field_0x14 = 0x469c4000;
    *(undefined2 *)&this[2].field_0x20 = 0x200;
    this[2].field_0x22 = 1;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0xc0c00000;
    *(undefined4 *)&this[2].field_0x2c = 0x3fc00000;
    *(undefined4 *)&this[2].field_0x30 = 0x41200000;
    *(undefined4 *)&this[2].field_0x34 = 0x40400000;
    *(undefined4 *)&this[2].field_0x38 = 0x41200000;
    *(undefined4 *)&this[2].field_0x3c = 0x42c80000;
    this[2].field_0x40 = 0;
    *(undefined8 *)&this[2].field_0x48 = 0;
    *(undefined8 *)&this[2].field_0x50 = 0;
    *(undefined8 *)&this[2].field_0x5c = 0;
    *(undefined8 *)(this + 3) = 0x41a00000;
    *(undefined8 *)&this[3].field_0xc = 0x469c4000;
  }
  return;
}

// InternalConstructor<USubmixEffectReverbPreset> @ 1465399a0

void __cdecl InternalConstructor<USubmixEffectReverbPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectReverbPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x3be56042;
    *(undefined4 *)&this[1].field_0x30 = 0x3f63d70a;
    *(undefined4 *)&this[1].field_0x34 = 0x3d4ccccd;
    this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x3c = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x40 = 0x3fbeb852;
    *(undefined4 *)&this[1].field_0x44 = 0x3f59999a;
    *(undefined4 *)&this[1].field_0x48 = 0x3f59999a;
    *(undefined4 *)&this[1].field_0x4c = 0x3f7e76c9;
    *(undefined4 *)&this[1].field_0x50 = 0x3f547ae1;
    *(undefined8 *)&this[1].field_0x54 = 0x3fa147ae;
    *(undefined8 *)&this[1].field_0x5c = 0x3e99999a;
    this[1].field_0x64 = 0;
    *(undefined1 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x3be56042;
    *(undefined4 *)&this[2].field_0x8 = 0x3f63d70a;
    *(undefined4 *)&this[2].field_0xc = 0x3d4ccccd;
    this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x3dcccccd;
    *(undefined4 *)&this[2].field_0x18 = 0x3fbeb852;
    *(undefined4 *)&this[2].field_0x1c = 0x3f59999a;
    *(undefined4 *)&this[2].field_0x20 = 0x3f59999a;
    *(undefined4 *)&this[2].field_0x24 = 0x3f7e76c9;
    *(undefined4 *)&this[2].field_0x28 = 0x3f547ae1;
    *(undefined8 *)&this[2].field_0x2c = 0x3fa147ae;
    *(undefined8 *)&this[2].field_0x34 = 0x3e99999a;
    this[2].field_0x3c = 0;
  }
  return;
}

// InternalConstructor<USubmixEffectSubmixEQPreset> @ 146539af0

void __cdecl InternalConstructor<USubmixEffectSubmixEQPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectSubmixEQPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
  }
  return;
}

// InternalConstructor<USynthComponent> @ 146539b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<USynthComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 *puVar3;
  USceneComponent *this;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    puVar5 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&USynthComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USynthComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&USynthComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FSoundAttenuationSettings::FSoundAttenuationSettings
              ((FSoundAttenuationSettings *)&this[1]._padding_);
    this[2].ComponentVelocity.field0_0x0._s_0.X = 0.0;
    this[2].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
    this[2].ComponentVelocity.field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)&this[2].TransformUpdated.field_0x8 = 0;
    *(undefined4 *)&this[2].TransformUpdated.field_0x10 = 0;
    *(undefined4 *)&this[2].TransformUpdated.field_0x14 = 0x80;
    *(undefined4 *)&this[2].TransformUpdated.field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].TransformUpdated.field_0x1c = 0;
    this[2].ScopedMovementStack.ArrayNum = 0;
    this[2].ScopedMovementStack.ArrayMax = 0;
    *(undefined4 *)&this[2].WorldRotationCache.PayloadPtr.Ptr = 0;
    FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
              ((FSoundModulationDefaultRoutingSettings *)&this[2].RelativeRotationCache);
    this[3].ClientAttachedChildren.ArrayNum = 0;
    this[3].ClientAttachedChildren.ArrayMax = 0;
    this[3].NetOldAttachParent = (USceneComponent *)0x0;
    this[3].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    this[3].Bounds.Origin.field0_0x0._s_0.Y = 0.0;
    this[3].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[3].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[3].Bounds.BoxExtent.field0_0x0._s_0.Y = 0.0;
    this[3].Bounds.BoxExtent.field0_0x0._s_0.Z = 0.0;
    this[3].Bounds.SphereRadius = 0.0;
    this[3].RelativeLocation.field0_0x0._s_0.Z = 0.0;
    this[3].RelativeRotation.Pitch = 0.0;
    this[3].RelativeRotation.Yaw = 0.0;
    this[3].RelativeRotation.Roll = 0.0;
    this[3].RelativeScale3D.field0_0x0._s_0.X = 0.0;
    this[3].RelativeScale3D.field0_0x0._s_0.Y = 0.0;
    this[3].RelativeScale3D.field0_0x0._s_0.Z = 9.88131291682493e-324;
    this[3].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
    this[3].ComponentVelocity.field0_0x0._s_0.Z = 0.0;
    puVar4 = operator_new(0x40);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[7] = 0;
      puVar5 = puVar4;
    }
    *(undefined8 **)&this[3].TransformUpdated.field_0x8 = puVar5;
    *(undefined8 **)&this[3].TransformUpdated = puVar5;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xf7;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 1;
    *(byte *)&this[1]._padding_ = (byte)this[1]._padding_ | 2;
    puVar2 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar2 = *puVar2 | 7;
    this->bUseAttachParentBound = '\x01';
    *(byte *)&this[3].RelativeLocation.field0_0x0 =
         *(byte *)&this[3].RelativeLocation.field0_0x0 & 0xfe;
    *(byte *)&this[3].RelativeLocation.field0_0x0 =
         *(byte *)&this[3].RelativeLocation.field0_0x0 | 4;
    *(undefined8 *)&this[3].TransformUpdated.field_0x10 = 0;
    *(undefined8 *)&this[3].TransformUpdated.field_0x18 = 0;
    puVar3 = &this[3].field_0x1a8;
    this[3].bComponentToWorldUpdated = '\0';
    this[3].bComputeBoundsOnceForGame = '\0';
    this[3].bComputeFastLocalBounds = '\0';
    this[3].bUseAttachParentBound = '\0';
    this[3].bBoundsChangeTriggersStreamingDataRebuild = '\0';
    this[3].bHiddenInGame = '\0';
    this[3].bShouldUpdatePhysicsVolume = '\0';
    this[3].bShouldSnapScaleWhenAttached = '\0';
    this[3].bShouldSnapRotationWhenAttached = '\0';
    this[3].bShouldSnapLocationWhenAttached = '\0';
    this[3].bShouldBeAttached = '\0';
    this[3].bVisible = '\0';
    this[3].bAbsoluteScale = '\0';
    this[3].bAbsoluteRotation = '\0';
    this[3].bAbsoluteLocation = '\0';
    this[3].bSkipUpdateOverlaps = '\0';
    this[3].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
    *(undefined4 *)((longlong)&this[3].ComponentVelocity.field0_0x0 + 4) = 0x400;
  }
  return;
}

// InternalConstructor<USynthSound> @ 146539d30

void __cdecl InternalConstructor<USynthSound>(FObjectInitializer *param_1)

{
  USoundWaveProcedural *this;
  undefined8 local_res8;
  
  this = (USoundWaveProcedural *)param_1->Obj;
  if (this != (USoundWaveProcedural *)0x0) {
    USoundWaveProcedural::USoundWaveProcedural(this,param_1);
    *(undefined ***)this = &USynthSound::_vftable__for__UObject__;
    local_res8 = 0;
    *(undefined ***)&this->field_0x28 =
         &USynthSound::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    *(undefined ***)&this->field_0x30 = &USynthSound::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x180 = &USynthSound::_vftable__for__IAudioProxyDataFactory__;
    *(undefined ***)&this->field_0x188 = &USynthSound::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined8 *)&this->field_0x468 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x468,(FObjectPtr)&local_res8);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioGenerator> @ 146539dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioGenerator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGenerator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioGenerator__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pUVar1 + 1),4000);
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UQuartzClockHandle> @ 146539ed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UQuartzClockHandle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UQuartzClockHandle::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    FQuartzTickableObject::FQuartzTickableObject((FQuartzTickableObject *)(pUVar1 + 1));
    *(undefined ***)pUVar1 = &___7UQuartzClockHandle__6B_;
    *(undefined ***)(pUVar1 + 1) =
         &UQuartzClockHandle::
          _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
    ;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UQuartzClockHandle::_vftable__for__Audio__Quartz__IMetronomeEventListener__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UQuartzClockHandle::_vftable__for__Audio__Quartz__ICommandListener__;
    *(undefined ***)&pUVar1[1].field_0x18 =
         &UQuartzClockHandle::_vftable__for__Audio__Quartz__IQueueCommandListener__;
    *(undefined8 *)&pUVar1[0xf].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x10) = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x10 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UQuartzSubsystem> @ 146539fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UQuartzSubsystem>(FVTableHelper *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTickableWorldSubsystem *this;
  TSharedRef<FQuartzTickableObjectsManager,1> *pTVar4;
  TSharedRef<FQuartzTickableObjectsManager,1> local_18;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UQuartzSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&UQuartzSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UQuartzSubsystem::_vftable__for__FTickableGameObject__;
    pTVar4 = MakeShared<FQuartzTickableObjectsManager,1>(&local_18);
    this[1]._padding_ = (longlong)pTVar4->Object;
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    this[1]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScrubbedSound> @ 14653a0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UScrubbedSound>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundWave *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScrubbedSound::GetPrivateStaticClass();
  this = (USoundWave *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundWave *)0x0) {
    USoundWave::USoundWave(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UScrubbedSound::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__IAudioProxyDataFactory__;
    this->_padding_ = (longlong)&UScrubbedSound::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0x3fd99999a0000000;
    this[1]._padding_ = 0x3fa99999a0000000;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3dcccccd;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectDynamicsProcessorPreset> @ 14653a1f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectDynamicsProcessorPreset>(FVTableHelper *param_1)

{
  byte bVar1;
  byte bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  USoundEffectSubmixPreset *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = USubmixEffectDynamicsProcessorPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectDynamicsProcessorPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    bVar1 = this[1].field_0x60;
    bVar2 = this[2].field_0x58;
    this[2].field_0x4 = this[2].field_0x4 & 0xfe;
    this[2].field_0x10 = this[2].field_0x10 & 0xfe;
    this[2].field_0x64 = this[2].field_0x64 & 0xfe;
    this[3].field_0x8 = this[3].field_0x8 & 0xfe;
    this[1].field_0x60 = bVar1 & 0xf3 | 3;
    *(undefined2 *)&this[1].field_0x28 = 0x200;
    this[1].field_0x2a = 1;
    *(undefined4 *)&this[1].field_0x2c = 0;
    *(undefined4 *)&this[1].field_0x30 = 0xc0c00000;
    *(undefined4 *)&this[1].field_0x34 = 0x3fc00000;
    *(undefined4 *)&this[1].field_0x38 = 0x41200000;
    *(undefined4 *)&this[1].field_0x3c = 0x40400000;
    *(undefined4 *)&this[1].field_0x40 = 0x41200000;
    *(undefined4 *)&this[1].field_0x44 = 0x42c80000;
    this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x64 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0x41a00000;
    *(undefined8 *)&this[2].field_0x14 = 0x469c4000;
    *(undefined2 *)&this[2].field_0x20 = 0x200;
    this[2].field_0x22 = 1;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0xc0c00000;
    *(undefined4 *)&this[2].field_0x2c = 0x3fc00000;
    *(undefined4 *)&this[2].field_0x30 = 0x41200000;
    *(undefined4 *)&this[2].field_0x34 = 0x40400000;
    *(undefined4 *)&this[2].field_0x38 = 0x41200000;
    *(undefined4 *)&this[2].field_0x3c = 0x42c80000;
    this[2].field_0x40 = 0;
    *(undefined8 *)&this[2].field_0x48 = 0;
    *(undefined8 *)&this[2].field_0x50 = 0;
    this[2].field_0x58 = bVar2 & 0xf3 | 3;
    *(undefined8 *)&this[2].field_0x5c = 0;
    *(undefined8 *)(this + 3) = 0x41a00000;
    *(undefined8 *)&this[3].field_0xc = 0x469c4000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectReverbPreset> @ 14653a400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubmixEffectReverbPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectReverbPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectReverbPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x3be56042;
    *(undefined4 *)&this[1].field_0x30 = 0x3f63d70a;
    *(undefined4 *)&this[1].field_0x34 = 0x3d4ccccd;
    this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x3c = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x40 = 0x3fbeb852;
    *(undefined4 *)&this[1].field_0x44 = 0x3f59999a;
    *(undefined4 *)&this[1].field_0x48 = 0x3f59999a;
    *(undefined4 *)&this[1].field_0x4c = 0x3f7e76c9;
    *(undefined4 *)&this[1].field_0x50 = 0x3f547ae1;
    *(undefined8 *)&this[1].field_0x54 = 0x3fa147ae;
    *(undefined8 *)&this[1].field_0x5c = 0x3e99999a;
    this[1].field_0x64 = 0;
    *(undefined1 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x3be56042;
    *(undefined4 *)&this[2].field_0x8 = 0x3f63d70a;
    *(undefined4 *)&this[2].field_0xc = 0x3d4ccccd;
    this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x3dcccccd;
    *(undefined4 *)&this[2].field_0x18 = 0x3fbeb852;
    *(undefined4 *)&this[2].field_0x1c = 0x3f59999a;
    *(undefined4 *)&this[2].field_0x20 = 0x3f59999a;
    *(undefined4 *)&this[2].field_0x24 = 0x3f7e76c9;
    *(undefined4 *)&this[2].field_0x28 = 0x3f547ae1;
    *(undefined8 *)&this[2].field_0x2c = 0x3fa147ae;
    *(undefined8 *)&this[2].field_0x34 = 0x3e99999a;
    this[2].field_0x3c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixEffectSubmixEQPreset> @ 14653a5d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixEffectSubmixEQPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundEffectSubmixPreset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixEffectSubmixEQPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7USubmixEffectSubmixEQPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynthComponent> @ 14653a6b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USynthComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynthComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this == (USceneComponent *)0x0) {
    return (UObject *)0x0;
  }
  USceneComponent::USceneComponent(this,param_1);
  this->_padding_ = (longlong)&USynthComponent::_vftable__for__UObject__;
  this[1]._padding_ = 0;
  this->_padding_ = (longlong)&USynthComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&USynthComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  FSoundAttenuationSettings::FSoundAttenuationSettings
            ((FSoundAttenuationSettings *)&this[1]._padding_);
  this[2].ComponentVelocity.field0_0x0._s_0.X = 0.0;
  this[2].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
  this[2].ComponentVelocity.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this[2].TransformUpdated.field_0x8 = 0;
  *(undefined4 *)&this[2].TransformUpdated.field_0x10 = 0;
  *(undefined4 *)&this[2].TransformUpdated.field_0x14 = 0x80;
  *(undefined4 *)&this[2].TransformUpdated.field_0x18 = 0xffffffff;
  *(undefined4 *)&this[2].TransformUpdated.field_0x1c = 0;
  this[2].ScopedMovementStack.ArrayNum = 0;
  this[2].ScopedMovementStack.ArrayMax = 0;
  *(undefined4 *)&this[2].WorldRotationCache.PayloadPtr.Ptr = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            ((FSoundModulationDefaultRoutingSettings *)&this[2].RelativeRotationCache);
  this[3].ClientAttachedChildren.ArrayNum = 0;
  this[3].ClientAttachedChildren.ArrayMax = 0;
  this[3].NetOldAttachParent = (USceneComponent *)0x0;
  this[3].Bounds.Origin.field0_0x0._s_0.X = 0.0;
  this[3].Bounds.Origin.field0_0x0._s_0.Y = 0.0;
  this[3].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
  this[3].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
  this[3].Bounds.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this[3].Bounds.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this[3].Bounds.SphereRadius = 0.0;
  this[3].RelativeLocation.field0_0x0._s_0.Z = 0.0;
  this[3].RelativeRotation.Pitch = 0.0;
  this[3].RelativeRotation.Yaw = 0.0;
  this[3].RelativeRotation.Roll = 0.0;
  this[3].RelativeScale3D.field0_0x0._s_0.X = 0.0;
  this[3].RelativeScale3D.field0_0x0._s_0.Y = 0.0;
  this[3].RelativeScale3D.field0_0x0._s_0.Z = 9.88131291682493e-324;
  this[3].ComponentVelocity.field0_0x0._s_0.Y = 0.0;
  this[3].ComponentVelocity.field0_0x0._s_0.Z = 0.0;
  puVar3 = operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3[7] = 0;
    puVar4 = puVar3;
  }
  *(undefined8 **)&this[3].TransformUpdated.field_0x8 = puVar4;
  *(undefined8 **)&this[3].TransformUpdated = puVar4;
  *(undefined8 *)&this[3].TransformUpdated.field_0x10 = 0;
  *(undefined8 *)&this[3].TransformUpdated.field_0x18 = 0;
  return (UObject *)this;
}

// InternalVTableHelperCtorCaller<USynthSound> @ 14653a6c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USynthSound>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundWaveProcedural *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynthSound::GetPrivateStaticClass();
  this = (USoundWaveProcedural *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundWaveProcedural *)0x0) {
    USoundWaveProcedural::USoundWaveProcedural(this,param_1);
    local_res10 = 0;
    *(undefined ***)this = &USynthSound::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &USynthSound::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    *(undefined ***)&this->field_0x30 = &USynthSound::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x180 = &USynthSound::_vftable__for__IAudioProxyDataFactory__;
    *(undefined ***)&this->field_0x188 = &USynthSound::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined8 *)&this->field_0x468 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x468,(FObjectPtr)&local_res10);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeShared<FQuartzTickableObjectsManager,1> @ 14653a930

TSharedRef<FQuartzTickableObjectsManager,1> * __cdecl
MakeShared<FQuartzTickableObjectsManager,1>
          (TSharedRef<FQuartzTickableObjectsManager,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FQuartzTickableObjectsManager,1> *pTVar4;
  
  pTVar3 = operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FQuartzTickableObjectsManager *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFQuartzTickableObjectsManager___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    FQuartLatencyTracker::FQuartLatencyTracker((FQuartLatencyTracker *)(pTVar3 + 1));
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FQuartzTickableObjectsManager *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FQuartzTickableObjectsManager *)(pTVar3 + 1) == (FQuartzTickableObjectsManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FQuartzTickableObjectsManager,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<Audio::FQuantizedOtherClockStart,1> @ 14653aa10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Audio::FQuantizedOtherClockStart,1> * __cdecl
MakeShared<Audio::FQuantizedOtherClockStart,1>
          (TSharedRef<Audio::FQuantizedOtherClockStart,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Audio::FQuantizedOtherClockStart,1> *pTVar4;
  
  pTVar3 = operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FQuantizedOtherClockStart *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedOtherClockStart_Audio___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)(pTVar3 + 1))
    ;
    pTVar3[1]._padding_ = (longlong)&___7FQuantizedOtherClockStart_Audio__6B_;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    __return_storage_ptr__->Object = (FQuantizedOtherClockStart *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FQuantizedOtherClockStart *)(pTVar3 + 1) == (FQuantizedOtherClockStart *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Audio::FQuantizedOtherClockStart,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<Audio::FQuantizedPlayCommand,1> @ 14653ab00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Audio::FQuantizedPlayCommand,1> * __cdecl
MakeShared<Audio::FQuantizedPlayCommand,1>
          (TSharedRef<Audio::FQuantizedPlayCommand,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Audio::FQuantizedPlayCommand,1> *pTVar4;
  
  pTVar3 = operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FQuantizedPlayCommand *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedPlayCommand_Audio___00_SharedPointerInternals__6B_
    ;
    Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)(pTVar3 + 1))
    ;
    pTVar3[1]._padding_ = (longlong)&___7FQuantizedPlayCommand_Audio__6B_;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar3[6]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[6]._padding_ = 0xffffffff;
    __return_storage_ptr__->Object = (FQuantizedPlayCommand *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FQuantizedPlayCommand *)(pTVar3 + 1) == (FQuantizedPlayCommand *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Audio::FQuantizedPlayCommand,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<Audio::FQuantizedTickRateChange,1> @ 14653abe0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Audio::FQuantizedTickRateChange,1> * __cdecl
MakeShared<Audio::FQuantizedTickRateChange,1>
          (TSharedRef<Audio::FQuantizedTickRateChange,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Audio::FQuantizedTickRateChange,1> *pTVar4;
  
  pTVar3 = operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FQuantizedTickRateChange *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedTickRateChange_Audio___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)(pTVar3 + 1))
    ;
    pTVar3[1]._padding_ = (longlong)&___7FQuantizedTickRateChange_Audio__6B_;
    Audio::FQuartzClockTickRate::FQuartzClockTickRate((FQuartzClockTickRate *)(pTVar3 + 5));
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FQuantizedTickRateChange *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FQuantizedTickRateChange *)(pTVar3 + 1) == (FQuantizedTickRateChange *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Audio::FQuantizedTickRateChange,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<Audio::FQuantizedTransportReset,1> @ 14653ace0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Audio::FQuantizedTransportReset,1> * __cdecl
MakeShared<Audio::FQuantizedTransportReset,1>
          (TSharedRef<Audio::FQuantizedTransportReset,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Audio::FQuantizedTransportReset,1> *pTVar4;
  
  pTVar3 = operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FQuantizedTransportReset *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedTransportReset_Audio___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)(pTVar3 + 1))
    ;
    pTVar3[1]._padding_ = (longlong)&___7FQuantizedTransportReset_Audio__6B_;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FQuantizedTransportReset *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FQuantizedTransportReset *)(pTVar3 + 1) == (FQuantizedTransportReset *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Audio::FQuantizedTransportReset,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MutableView<TObjectPtr<UQuartzClockHandle>_> @ 14653adc0

/* WARNING: Enum "Type": Some values do not have unique names */

TMutableView<TObjectPtr<UQuartzClockHandle>_> __cdecl
MutableView<TObjectPtr<UQuartzClockHandle>_>(TObjectPtr<UQuartzClockHandle> *param_1)

{
  TObjectPtr<UQuartzClockHandle>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UQuartzClockHandle>_>)(UQuartzClockHandle **)param_1;
}

// NewObject<UAudioComponent> @ 14653add0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAudioComponent * __cdecl
NewObject<UAudioComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UAudioComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UAudioComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UAudioComponent *)
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

// NewObject<UQuartzClockHandle> @ 14653aec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UQuartzClockHandle * __cdecl NewObject<UQuartzClockHandle>(UObject *param_1)

{
  UClass *pUVar1;
  UQuartzClockHandle *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UQuartzClockHandle::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UQuartzClockHandle *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectDynamicsProcessorPreset> @ 14653af60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectDynamicsProcessorPreset * __cdecl
NewObject<USubmixEffectDynamicsProcessorPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectDynamicsProcessorPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectDynamicsProcessorPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectDynamicsProcessorPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectReverbPreset> @ 14653b060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectReverbPreset * __cdecl
NewObject<USubmixEffectReverbPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectReverbPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectReverbPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectReverbPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USubmixEffectSubmixEQPreset> @ 14653b160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USubmixEffectSubmixEQPreset * __cdecl
NewObject<USubmixEffectSubmixEQPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USubmixEffectSubmixEQPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USubmixEffectSubmixEQPreset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USubmixEffectSubmixEQPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USynthSound> @ 14653b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USynthSound * __cdecl NewObject<USynthSound>(UObject *param_1)

{
  UClass *pUVar1;
  USynthSound *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USynthSound::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USynthSound *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrWrap<UQuartzClockHandle_*,TObjectPtr<UQuartzClockHandle>_> @ 14653b300

/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UQuartzClockHandle> * __cdecl
ObjectPtrWrap<UQuartzClockHandle_*,TObjectPtr<UQuartzClockHandle>_>(UQuartzClockHandle **param_1)

{
  return (TObjectPtr<UQuartzClockHandle> *)param_1;
}

// RemoveAll<`Audio::FMixerSubmix::UnregisterBufferListenerInternal'::__l2::<lambda_1>_> @ 14653b490

int __thiscall
TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::
RemoveAll<_Audio::FMixerSubmix::UnregisterBufferListenerInternal_::__l2::<lambda_1>_>
          (TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int local_res20;
  
  iVar1 = this->ArrayNum;
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar12 = 0;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar14 = 0;
  pTVar6 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
  local_res20 = 0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14653b514;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar15 = aVar4 == aVar5;
      if (bVar15) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar15);
    uVar12 = *(ulong64 *)pFVar2;
  }
LAB_14653b514:
  uVar3 = param_1->ListenerBufferPtr;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  bVar15 = uVar12 != uVar3;
  lVar11 = 0;
  iVar8 = 0;
  do {
    iVar9 = iVar8 + 1;
    lVar11 = lVar11 + 1;
    if (lVar11 < lVar10) {
      pFVar13 = pFVar2 + lVar11 * 0x10;
      do {
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
        uVar12 = 0;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar6->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              pTVar6 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14653b5a4;
            }
            LOCK();
            aVar5 = pTVar6->SharedReferenceCount;
            bVar16 = aVar4 == aVar5;
            if (bVar16) {
              pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar5 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar5;
          } while (!bVar16);
          uVar12 = *(ulong64 *)pFVar13;
        }
LAB_14653b5a4:
        uVar3 = param_1->ListenerBufferPtr;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        iVar14 = local_res20;
        if (bVar15 != (uVar12 != uVar3)) break;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 1;
        pFVar13 = pFVar13 + 0x10;
      } while (lVar11 < lVar10);
    }
    iVar7 = iVar9 - iVar8;
    if (bVar15 == false) {
      DestructItems<TWeakPtr<ISubmixBufferListener,1>,int>
                ((TWeakPtr<ISubmixBufferListener,1> *)(pFVar2 + (longlong)iVar8 * 0x10),iVar7);
    }
    else {
      if (iVar14 != iVar8) {
        memmove(pFVar2 + (longlong)iVar14 * 0x10,pFVar2 + (longlong)iVar8 * 0x10,
                (longlong)iVar7 << 4);
      }
      iVar14 = iVar14 + iVar7;
      local_res20 = iVar14;
    }
    bVar15 = (bool)(bVar15 ^ 1);
    iVar8 = iVar9;
    if (lVar10 <= lVar11) {
      this->ArrayNum = iVar14;
      return iVar1 - iVar14;
    }
  } while( true );
}

// StaticEnum<enum_ESubmixEffectDynamicsChannelLinkMode> @ 14653c000

UEnum * __cdecl StaticEnum<enum_ESubmixEffectDynamicsChannelLinkMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode,
                       (UObject *)pUVar1,L"ESubmixEffectDynamicsChannelLinkMode");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton;
}

// StaticEnum<enum_ESubmixEffectDynamicsKeySource> @ 14653c040

UEnum * __cdecl StaticEnum<enum_ESubmixEffectDynamicsKeySource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource,(UObject *)pUVar1
                       ,L"ESubmixEffectDynamicsKeySource");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton;
}

// StaticEnum<enum_ESubmixEffectDynamicsPeakMode> @ 14653c080

UEnum * __cdecl StaticEnum<enum_ESubmixEffectDynamicsPeakMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode,(UObject *)pUVar1,
                       L"ESubmixEffectDynamicsPeakMode");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton;
}

// StaticEnum<enum_ESubmixEffectDynamicsProcessorType> @ 14653c0c0

UEnum * __cdecl StaticEnum<enum_ESubmixEffectDynamicsProcessorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType,
                       (UObject *)pUVar1,L"ESubmixEffectDynamicsProcessorType");
  }
  return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>_> @ 14653c250

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>_> @ 14653c260

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>_> @ 14653c270

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>_> @ 14653c280

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*> @ 14653c290

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*> @ 14653c2a0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// get<1,TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_&> @ 14653c2b0

FPatchInput * __cdecl
get<1,TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_&>
          (TTuple<Audio::FAudioBusKey,Audio::FPatchInput> *param_1)

{
  return (FPatchInput *)&param_1->field_0x8;
}

// get<0,TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_&> @ 14653c2c0

FAudioBusKey * __cdecl
get<0,TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_&>
          (TTuple<Audio::FAudioBusKey,Audio::FPatchInput> *param_1)

{
  return (FAudioBusKey *)param_1;
}

// ~TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,0,1> @ 14653f6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014653f6f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 14653f700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z_QEBA_AEAVFSubmixEffectDynamicsProcessor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014653f723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,1,0> @ 14653f730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__Audio::FMixerSubmix::ClearSoundEffectSubmixes_::__l16::<lambda_1>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::`16'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,0,1> @ 14653f770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::AddChildSubmix_::__l2::<lambda_1>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014653f79a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,0,1> @ 14653f7b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::BeginDestroy_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,0,1> @ 14653f7d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::NotifyOnQuantizationBoundary_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,0,1> @ 14653f830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::QueueQuantizedSound_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,0,1> @ 14653f890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::RegisterAudioBus_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::`2'::<lambda_1>,0,1>::
        _vftable_;
  ::Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,0,0> @ 14653f8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::RemoveChildSubmix_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,0,1> @ 14653f8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::ResetTransport_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::`2'::<lambda_1>,0,1>::_vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,0,1> @ 14653f930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::ResetTransportQuantized_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,0,0> @ 14653f990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::SetBackgroundMuted_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,0,0> @ 14653f9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USubmixEffectDynamicsProcessorPreset::SetSettings_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,0,1> @ 14653f9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::SetTickRateInternal_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,0,1> @ 14653fa30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::StartOtherClock_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,0,0> @ 14653fa90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UQuartzClockHandle::StopClock_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,0,1> @ 14653fab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UQuartzClockHandle::SubscribeToAllQuantizationEvents_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,0,1> @ 14653fad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::SubscribeToQuantizationEvent_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,0,0> @ 14653faf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::UnregisterAudioBus_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,0,1> @ 14653fb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::UnsubscribeFromAllTimeDivisions_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  return;
}

// ~TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,0,1> @ 14653fb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UQuartzClockHandle::UnsubscribeFromTimeDivision_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,0,0> @ 14653fb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::PauseClock_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,0,0> @ 14653fb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::RemoveClock_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,0,0> @ 14653fb90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::ResumeClock_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,0,1> @ 14653fbb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzClockProxy::SendCommandToClock_::__l5::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014653fbd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,0,1> @ 14653fbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USubmixEffectDynamicsProcessorPreset::SetKey_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,0,1> @ 14653fc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::SetTickRateForClock_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,0,1> @ 14653fc20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::StopClock_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::`5'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,0,1> @ 14653fc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::SubscribeToAllTimeDivisions_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,0,1> @ 14653fc60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::SubscribeToTimeDivision_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,0,1> @ 14653fc80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,0,1> @ 14653fca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FQuartzClockManager::UnsubscribeFromTimeDivision_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,0,1> @ 14653fcc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::SetParentSubmix_::__l8::<lambda_1>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`8'::<lambda_1>,0,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014653fcea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,1,0> @ 14653fd00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::ClearSoundEffectSubmixes_::__l16::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::`16'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,0,1> @ 14653fd40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzMetronome::FireEvents_::__l17::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::`17'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,0,0> @ 14653fd60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::Init_::__l19::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::`19'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,0,1> @ 14653fd80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::InitInternal_::__l11::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::`11'::<lambda_1>,0,1>::_vftable_;
  `Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,0,1> @ 14653fda0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSubmix::SetParentSubmix_::__l2::<lambda_2>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`2'::<lambda_2>,0,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014653fdca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 146542840

void __thiscall
``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  TSharedPtr<FSoundEffectBase,1> local_18;
  
  iVar1 = *(int *)((longlong)this + 8);
  puVar2 = *(undefined8 **)this;
  puVar3 = puVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FSoundEffectSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar2 == puVar3) break;
    local_18.Object = (FSoundEffectBase *)*puVar2;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    USoundEffectPreset::UnregisterInstance(&local_18);
    puVar2 = puVar2 + 2;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146542fb4

/* [thunk]:public: virtual void * __ptr64 __cdecl
   Audio::Quartz::PrivateDefs::TVisitorPatternBase<class
   Audio::Quartz::IQuartzClock>::TElementBase<class Audio::Quartz::IQuartzClock>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TElementBase<Audio::Quartz::IQuartzClock>::_vector_deleting_destructor__adjustor_8__
          (TElementBase<Audio::Quartz::IQuartzClock> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TElementBase<Audio::Quartz::IQuartzClock> *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146542fc4

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FQuartzClock::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FQuartzClock::_vector_deleting_destructor__adjustor_8__(FQuartzClock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FQuartzClock *)&this[-1].TickDelayLengthInFrames,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146542fd4

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FSoundDataReader::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FSoundDataReader::_vector_deleting_destructor__adjustor_8__
          (FSoundDataReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSoundDataReader *)&this[-1].FileHandle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146542fe4

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FSoundFileReader::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FSoundFileReader::_vector_deleting_destructor__adjustor_8__
          (FSoundFileReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSoundFileReader *)&this[-1].State,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146542ff4

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FSoundFileWriter::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FSoundFileWriter::_vector_deleting_destructor__adjustor_8__
          (FSoundFileWriter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSoundFileWriter *)&this[-1].State,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146543004

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UQuartzClockHandle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UQuartzClockHandle::_vector_deleting_destructor__adjustor_40__
          (UQuartzClockHandle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UQuartzClockHandle *)&this[-1].RawHandle.SharedQueue,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 146543014

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UQuartzClockHandle::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UQuartzClockHandle::_vector_deleting_destructor__adjustor_48__
          (UQuartzClockHandle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UQuartzClockHandle *)&this[-1].RawHandle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 146543024

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UQuartzClockHandle::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UQuartzClockHandle::_vector_deleting_destructor__adjustor_56__
          (UQuartzClockHandle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UQuartzClockHandle *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 146543034

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UQuartzClockHandle::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UQuartzClockHandle::_vector_deleting_destructor__adjustor_64__
          (UQuartzClockHandle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UQuartzClockHandle *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 146543044

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UQuartzSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UQuartzSubsystem::_vector_deleting_destructor__adjustor_56__(UQuartzSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UQuartzSubsystem *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{392}' @ 146543054

/* [thunk]:public: virtual void * __ptr64 __cdecl UScrubbedSound::`vector deleting
   destructor'`adjustor{392}' (unsigned int) __ptr64 */

void * __thiscall
UScrubbedSound::_vector_deleting_destructor__adjustor_392__(UScrubbedSound *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UScrubbedSound *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146543068

/* [thunk]:public: virtual void * __ptr64 __cdecl UScrubbedSound::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UScrubbedSound::_vector_deleting_destructor__adjustor_40__(UScrubbedSound *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UScrubbedSound *)((longlong)&this[-1].GrainDurationRange.field0_0x0 + 8),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 146543078

/* [thunk]:public: virtual void * __ptr64 __cdecl UScrubbedSound::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UScrubbedSound::_vector_deleting_destructor__adjustor_48__(UScrubbedSound *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UScrubbedSound *)&this[-1].GrainDurationRange,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146543088

/* [thunk]:public: virtual void * __ptr64 __cdecl USynthComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynthComponent::_vector_deleting_destructor__adjustor_40__(USynthComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USynthComponent *)&this[-1].bIsSynthPlaying,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{392}' @ 146543098

/* [thunk]:public: virtual void * __ptr64 __cdecl USynthSound::`vector deleting
   destructor'`adjustor{392}' (unsigned int) __ptr64 */

void * __thiscall
USynthSound::_vector_deleting_destructor__adjustor_392__(USynthSound *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USynthSound *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1465430ac

/* [thunk]:public: virtual void * __ptr64 __cdecl USynthSound::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USynthSound::_vector_deleting_destructor__adjustor_40__(USynthSound *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USynthSound *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1465430bc

/* [thunk]:public: virtual void * __ptr64 __cdecl USynthSound::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USynthSound::_vector_deleting_destructor__adjustor_48__(USynthSound *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USynthSound *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1465430d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543100

void * __thiscall
IBaseDelegateInstance<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543130

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectDynamicsProcessor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543160

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543190

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465431c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465431f0

void * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TElementBase<Audio::Quartz::IQuartzClock>::_scalar_deleting_destructor_
          (TElementBase<Audio::Quartz::IQuartzClock> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543220

void * __thiscall
UE::Tasks::Private::TExecutableTask<`Audio::FAudioRenderScheduler::ScheduleAll'::__l33::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543290

void * __thiscall
UE::Tasks::Private::TExecutableTask<`Audio::FAudioRenderScheduler::RenderBlock'::__l14::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543300

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Audio::FAudioRenderScheduler::ScheduleAll'::__l33::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543340

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Audio::FAudioRenderScheduler::RenderBlock'::__l14::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465433c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z_QEBA_AEAVFSubmixEffectDynamicsProcessor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465434c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::`16'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465435e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465436e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::`2'::<lambda_1>,0,1>::
        _vftable_;
  ::Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::`2'::<lambda_1>,0,1>::_vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465437f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465438b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465438f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x48),
             *(int *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465439f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`8'::<lambda_1>,0,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::`16'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::`17'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146543fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::`19'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::`11'::<lambda_1>,0,1>::_vftable_;
  `Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`2'::<lambda_2>,0,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465440e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FPersistentQuartzSubsystemData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FPersistentQuartzSubsystemData,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FQuartzTickableObjectsManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FQuartzTickableObjectsManager,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544160

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465441a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FAsyncSpectrumAnalyzer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FAsyncSpectrumAnalyzer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465441e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedNotify,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuantizedNotify,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544220

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedOtherClockStart,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuantizedOtherClockStart,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544260

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedPlayCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuantizedPlayCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465442a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedQueueCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuantizedQueueCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465442e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedTickRateChange,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuantizedTickRateChange,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544320

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedTransportReset,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuantizedTransportReset,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544360

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuartzClock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FQuartzClock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x578);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465443a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FQuantizedPlayCommand,SharedPointerInternals::DefaultDeleter<Audio::FQuantizedPlayCommand>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FQuantizedPlayCommand,SharedPointerInternals::DefaultDeleter<Audio::FQuantizedPlayCommand>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465443e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundDataReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundDataReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FSoundDataReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundDataReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544420

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundFileReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FSoundFileReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544460

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundFileWriter,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileWriter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FSoundFileWriter,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileWriter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465444a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundWaveScrubberGenerator,SharedPointerInternals::DefaultDeleter<Audio::FSoundWaveScrubberGenerator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FSoundWaveScrubberGenerator,SharedPointerInternals::DefaultDeleter<Audio::FSoundWaveScrubberGenerator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465444e0

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitWithLambda<Audio::Quartz::IMetronomeEventListener>::_scalar_deleting_destructor_
          (TVisitWithLambda<Audio::Quartz::IMetronomeEventListener> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Lambda != 0) {
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    plVar2 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544540

void * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TVisitWithLambda<Audio::Quartz::IQuartzClock>::_scalar_deleting_destructor_
          (TVisitWithLambda<Audio::Quartz::IQuartzClock> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Lambda != 0) {
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    plVar2 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465445a0

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitorInterface<Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::
_scalar_deleting_destructor_
          (TVisitorInterface<Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465445d0

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::
TVisitorInterface<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::_scalar_deleting_destructor_
          (TVisitorInterface<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544600

void * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TVisitorInterface<Audio::Quartz::IQuartzClock>::_scalar_deleting_destructor_
          (TVisitorInterface<Audio::Quartz::IQuartzClock> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544630

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitorInterface<Audio::Quartz::IQueueCommandListener>::_scalar_deleting_destructor_
          (TVisitorInterface<Audio::Quartz::IQueueCommandListener> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544660

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FAudioRenderSchedulerTesterImpl::_scalar_deleting_destructor_
          (FAudioRenderSchedulerTesterImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Results).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  FAudioRenderScheduler::~FAudioRenderScheduler(&this->Scheduler);
  *(undefined4 *)&(this->Steps).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Steps).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Steps);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465446f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall Audio::FMixerSubmix::_scalar_deleting_destructor_(FMixerSubmix *this,uint param_1)

{
  ~FMixerSubmix(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x5f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544730

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FQuantizedNotify::_scalar_deleting_destructor_(FQuantizedNotify *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544780

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FQuantizedOtherClockStart::_scalar_deleting_destructor_
          (FQuantizedOtherClockStart *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465447d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FQuantizedPlayCommand::_scalar_deleting_destructor_(FQuantizedPlayCommand *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FQuantizedPlayCommand_Audio__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544820

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FQuantizedQueueCommand::_scalar_deleting_destructor_
          (FQuantizedQueueCommand *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             (this->AudioComponentData).AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance
             .Data,(this->AudioComponentData).AnticipatoryBoundary.GameThreadSubscribers.ArrayNum);
  pFVar1 = (this->AudioComponentData).AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioComponentData).Subscriber.Queue.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465448a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FQuantizedTickRateChange::_scalar_deleting_destructor_
          (FQuantizedTickRateChange *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465448f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FQuantizedTransportReset::_scalar_deleting_destructor_
          (FQuantizedTransportReset *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningClockPtr).SharedReferenceCount.ReferenceController);
  IQuartzQuantizedCommand::~IQuartzQuantizedCommand((IQuartzQuantizedCommand *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544940

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall Audio::FQuartzClock::_scalar_deleting_destructor_(FQuartzClock *this,uint param_1)

{
  ~FQuartzClock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x568);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544980

void * __thiscall
Audio::FSoundDataReader::_scalar_deleting_destructor_(FSoundDataReader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->SoundData = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISoundFileParser__;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISoundFileReader__;
  pFVar1 = (this->ChannelMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISoundFileReader_Audio__6B_;
  this->_padding_ = (longlong)&___7ISoundFileParser_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544a00

void * __thiscall
FSoundEffectSubmix::_scalar_deleting_destructor_(FSoundEffectSubmix *this,uint param_1)

{
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544a40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FSoundFileReader::_scalar_deleting_destructor_(FSoundFileReader *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__Audio__ISoundFileParser__;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISoundFileReader__;
  if (SoundFileClose == (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::Release(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if (this->FileHandle == (SoundFileHandleOpaque *)0x0) goto LAB_146544aa1;
    (*SoundFileClose)(this->FileHandle);
  }
  this->FileHandle = (SoundFileHandleOpaque *)0x0;
LAB_146544aa1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundFileData).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ISoundFileReader_Audio__6B_;
  this->_padding_ = (longlong)&___7ISoundFileParser_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544af0

void * __thiscall
Audio::FSoundFileWriter::_scalar_deleting_destructor_(FSoundFileWriter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__Audio__ISoundFileParser__;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISoundFileWriter__;
  pFVar1 = (this->BulkData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISoundFileWriter_Audio__6B_;
  this->_padding_ = (longlong)&___7ISoundFileParser_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544b70

void * __thiscall
Audio::FSoundWaveScrubberGenerator::_scalar_deleting_destructor_
          (FSoundWaveScrubberGenerator *this,uint param_1)

{
  FSoundWaveScrubber::~FSoundWaveScrubber(&this->SoundWaveScrubber);
  ISoundGenerator::~ISoundGenerator((ISoundGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544bc0

void * __thiscall
FSubmixEffectDynamicsProcessor::_scalar_deleting_destructor_
          (FSubmixEffectDynamicsProcessor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSubmixEffectDynamicsProcessor__6B_;
  ResetKey(this);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
             (FDelegateHandle)(this->DeviceCreatedHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
             (FDelegateHandle)(this->DeviceDestroyedHandle).ID);
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->DynamicsProcessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeySource).Patch.SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection);
  pFVar1 = (this->AudioExternal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544c70

void * __thiscall
FSubmixEffectReverb::_scalar_deleting_destructor_(FSubmixEffectReverb *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FPlateReverbFast *this_00;
  
  pFVar1 = (this->DecayCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DecayCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DecayCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DecayCurve)._padding_ = 0;
  pvVar2 = (void *)(this->DecayCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DecayCurve)._padding_);
  pFVar1 = (this->WetInputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->WetDryParams).CritSect);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ReverbParams).CritSect);
  this_00 = (this->PlateReverb).Ptr;
  if (this_00 != (FPlateReverbFast *)0x0) {
    Audio::FPlateReverbFast::~FPlateReverbFast(this_00);
    ::operator_delete(this_00,0x5d8);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544d60

void * __thiscall
FSubmixEffectSubmixEQ::_scalar_deleting_destructor_(FSubmixEffectSubmixEQ *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RenderThreadEQSettings).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameThreadEQSettings).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->PendingSettings).CritSect);
  pFVar1 = (this->PendingSettings).CurrentParams.EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSubmixEffectSubmixEQ::FEQ,int>
            ((FEQ *)(this->FiltersPerChannel).AllocatorInstance.Data,
             (this->FiltersPerChannel).ArrayNum);
  pFVar1 = (this->FiltersPerChannel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544e10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FAudioRenderSchedulerTesterImpl::FTestStep::_scalar_deleting_destructor_
          (FTestStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544e40

void * __thiscall
IAudioRenderSchedulerTester::_scalar_deleting_destructor_
          (IAudioRenderSchedulerTester *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544e70

void * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IListenerBase::
_scalar_deleting_destructor_(IListenerBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544ea0

void * __thiscall
Audio::Quartz::IQuartzClock::_scalar_deleting_destructor_(IQuartzClock *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544ed0

void * __thiscall
Audio::IQuartzQuantizedCommand::_scalar_deleting_destructor_
          (IQuartzQuantizedCommand *this,uint param_1)

{
  ~IQuartzQuantizedCommand(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544f10

void * __thiscall
Audio::ISoundFileParser::_scalar_deleting_destructor_(ISoundFileParser *this,uint param_1)

{
  *this = (ISoundFileParser)&___7ISoundFileParser_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544f50

void * __thiscall
Audio::ISoundFileReader::_scalar_deleting_destructor_(ISoundFileReader *this,uint param_1)

{
  *this = (ISoundFileReader)&___7ISoundFileReader_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544f90

void * __thiscall
Audio::ISoundFileWriter::_scalar_deleting_destructor_(ISoundFileWriter *this,uint param_1)

{
  *this = (ISoundFileWriter)&___7ISoundFileWriter_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146544fd0

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::IVisitorBase::_scalar_deleting_destructor_(IVisitorBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146545000

void * __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase::
_scalar_deleting_destructor_(IVisitorBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146545030

void * __thiscall UAudioGenerator::_scalar_deleting_destructor_(UAudioGenerator *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAudioGenerator__6B_;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnGeneratedMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnGeneratedMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CritSect);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465450d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UQuartzClockHandle::_scalar_deleting_destructor_(UQuartzClockHandle *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UQuartzClockHandle__6B_;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  pTVar3 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController;
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
  FQuartzTickableObject::~FQuartzTickableObject((FQuartzTickableObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x298);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465451c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UQuartzSubsystem::_scalar_deleting_destructor_(UQuartzSubsystem *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockManagerDataPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TickableObjectManagerPtr).SharedReferenceCount.ReferenceController);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146545230

void * __thiscall UScrubbedSound::_scalar_deleting_destructor_(UScrubbedSound *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundWaveScrubber).SharedReferenceCount.ReferenceController);
  USoundWave::~USoundWave((USoundWave *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465452d0

void * __thiscall
USubmixEffectDynamicsProcessorPreset::_scalar_deleting_destructor_
          (USubmixEffectDynamicsProcessorPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectDynamicsProcessorPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146545340

void * __thiscall
USubmixEffectReverbPreset::_scalar_deleting_destructor_
          (USubmixEffectReverbPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubmixEffectReverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465453b0

void * __thiscall
USubmixEffectSubmixEQPreset::_scalar_deleting_destructor_
          (USubmixEffectSubmixEQPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubmixEffectSubmixEQPreset__6B_;
  pFVar1 = (this->Settings).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146545440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall USynthComponent::_scalar_deleting_destructor_(USynthComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundGenerator).SharedReferenceCount.ReferenceController);
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioEnvelopeValueNative).field_0x8,
             *(int *)&(this->OnAudioEnvelopeValueNative).field_0x10);
  pvVar1 = *(void **)&(this->OnAudioEnvelopeValueNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioEnvelopeValueNative);
  pvVar1 = *(void **)&(this->OnAudioEnvelopeValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioEnvelopeValue);
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->PreEffectBusSends).AllocatorInstance.Data,
             (this->PreEffectBusSends).ArrayNum);
  pFVar2 = (this->PreEffectBusSends).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->BusSends).AllocatorInstance.Data,
             (this->BusSends).ArrayNum);
  pFVar2 = (this->BusSends).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)(this->SoundSubmixSends).AllocatorInstance.Data,
             (this->SoundSubmixSends).ArrayNum);
  pFVar2 = (this->SoundSubmixSends).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSoundModulationDefaultRoutingSettings::~FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  (this->ConcurrencySet).HashSize = 0;
  FVar3 = (this->ConcurrencySet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConcurrencySet).Elements);
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x8c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465455e0

void * __thiscall USynthSound::_scalar_deleting_destructor_(USynthSound *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->FloatBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USoundWaveProcedural::~USoundWaveProcedural((USoundWaveProcedural *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x480);
  }
  return this;
}

// ConvertAudioToWav @ 14654b300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Audio::SoundFileUtils::ConvertAudioToWav
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ISoundFileWriter *pIVar6;
  undefined8 *puVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  void *pvVar13;
  FSoundDataReader *pFVar14;
  FSoundDataReader *pFVar15;
  FSoundFileWriter *pFVar16;
  undefined **ppuVar17;
  uint uVar18;
  FSoundFileWriter *pFVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  FSoundFileWriter *pFVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_228 [32];
  FSoundFileWriter *local_208;
  longlong local_200;
  byte local_1f8;
  longlong local_1f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1e8;
  uchar local_1d8 [8];
  TSharedPtr<Audio::ISoundFileReader,1> local_1d0;
  TSharedPtr<Audio::ISoundFileWriter,1> local_1c0;
  longlong local_1b0;
  undefined8 *local_1a8;
  void *local_1a0;
  FSoundFileChunkInfoWrapper *local_198;
  undefined8 local_190;
  float local_188 [2];
  void *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  int local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_118;
  undefined1 local_110 [24];
  ulonglong local_f8;
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  undefined8 local_b0;
  void *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  uVar3 = (undefined4)__real_3ff0000000000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_160 = 0;
  local_f8 = 0;
  local_170 = 0xbb8000010002;
  _uStack_168 = CONCAT44(__real_3ff0000000000000._4_4_,(undefined4)__real_3ff0000000000000);
  local_118 = param_2;
  pvVar13 = ::operator_new(1);
  if (pvVar13 == (void *)0x0) {
    pvVar13 = (void *)0x0;
    local_1d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a0 = (void *)0x0;
    local_1d0.Object = (ISoundFileReader *)0x0;
LAB_14654b401:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  else {
    local_1a0 = pvVar13;
    pFVar14 = ::operator_new(0x60);
    pFVar15 = (FSoundDataReader *)0x0;
    if (pFVar14 != (FSoundDataReader *)0x0) {
      pFVar14->CurrentIndexBytes = 0;
      pFVar14->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileParser__;
      pFVar14->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileReader__;
      (pFVar14->State).Counter = 0;
      (pFVar14->CurrentError).Counter = 0;
      (pFVar14->Description).NumFrames = 0;
      (pFVar14->Description).SampleRate = 0;
      (pFVar14->Description).NumChannels = 0;
      (pFVar14->Description).FormatFlags = 0;
      (pFVar14->Description).NumSections = 0;
      (pFVar14->Description).bIsSeekable = 0;
      (pFVar14->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar14->ChannelMap).ArrayNum = 0;
      (pFVar14->ChannelMap).ArrayMax = 0;
      pFVar15 = pFVar14;
    }
    TSharedPtr<Audio::ISoundFileReader,1>::
    TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader>(&local_1d0,pFVar15);
    if (local_1d0.Object == (ISoundFileReader *)0x0) goto LAB_14654b401;
  }
  pFVar19 = (FSoundFileWriter *)0x0;
  cVar11 = (**(code **)((longlong)*local_1d0.Object + 8))(local_1d0.Object,param_1);
  if (cVar11 != '\0') {
    bVar9 = false;
    goto LAB_14654c12b;
  }
  local_150 = 0;
  uStack_148 = 0;
  local_180 = (void *)0x0;
  local_178 = 0;
  local_158 = 0;
  local_140 = 0;
  if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  (**(code **)((longlong)*local_1d0.Object + 0x48))(local_1d0.Object,&local_158,&local_180);
  local_12c = local_150._4_4_;
  local_138 = local_158;
  local_130 = (undefined4)local_150;
  local_124 = uStack_148._4_4_;
  local_120 = local_140;
  local_128 = 0x10002;
  if (pvVar13 == (void *)0x0) {
    local_1c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1c0.Object = (ISoundFileWriter *)0x0;
LAB_14654b55a:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
  }
  else {
    pFVar16 = ::operator_new(0x70);
    pFVar24 = pFVar19;
    if (pFVar16 != (FSoundFileWriter *)0x0) {
      pFVar16->CurrentIndexBytes = 0;
      pFVar16->_padding_ = (longlong)&FSoundFileWriter::_vftable__for__Audio__ISoundFileParser__;
      pFVar16->_padding_ = (longlong)&FSoundFileWriter::_vftable__for__Audio__ISoundFileWriter__;
      pFVar16->FileHandle = (SoundFileHandleOpaque *)0x0;
      (pFVar16->Description).NumFrames = 0;
      (pFVar16->Description).SampleRate = 0;
      (pFVar16->Description).NumChannels = 0;
      (pFVar16->Description).FormatFlags = 0;
      (pFVar16->Description).NumSections = 0;
      (pFVar16->Description).bIsSeekable = 0;
      (pFVar16->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->ChannelMap).ArrayNum = 0;
      (pFVar16->ChannelMap).ArrayMax = 0;
      (pFVar16->BulkData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->BulkData).ArrayNum = 0;
      (pFVar16->BulkData).ArrayMax = 0;
      pFVar16->EncodingQuality = 0.0;
      (pFVar16->State).Counter = 0;
      (pFVar16->CurrentError).Counter = 0;
      pFVar24 = pFVar16;
    }
    TSharedPtr<Audio::ISoundFileWriter,1>::
    TSharedPtr<Audio::ISoundFileWriter,1><Audio::FSoundFileWriter>(&local_1c0,pFVar24);
    if (local_1c0.Object == (ISoundFileWriter *)0x0) goto LAB_14654b55a;
  }
  cVar11 = (**(code **)((longlong)*local_1c0.Object + 8))
                     (local_1c0.Object,&local_138,&local_180,uVar3);
  if (cVar11 == '\0') {
    local_e8._16_8_ = 0;
    local_e8._24_8_ = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_e8._32_8_ = 0;
    local_e8._40_4_ = 0;
    local_e8._44_4_ = 0x80;
    local_e8._48_4_ = 0xffffffff;
    local_e8._52_4_ = 0;
    local_a8 = (void *)0x0;
    if (((uStack_148 & 0x10000) != 0) && ((local_128 & 0x10000) != 0)) {
      local_198 = (FSoundFileChunkInfoWrapper *)0x0;
      local_190 = 0;
      if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      cVar11 = (**(code **)((longlong)*local_1d0.Object + 0x50))
                         (local_1d0.Object,&local_198,&local_e8);
      if (cVar11 == '\0') {
        if ((local_1c0.Object == (ISoundFileWriter *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        cVar11 = (**(code **)((longlong)*local_1c0.Object + 0x48))(local_1c0.Object,&local_198);
        if ((cVar11 != '\0') && (1 < (byte)LogAudioMixer._0_1_)) {
          ppuVar17 = &PTR_u_Error_encounter_1512e70f0;
          goto LAB_14654b6f9;
        }
      }
      else if (1 < (byte)LogAudioMixer._0_1_) {
        ppuVar17 = &PTR_u_Error_encounter_1512e7050;
LAB_14654b6f9:
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)ppuVar17,(FLogCategoryBase *)&LogAudioMixer);
      }
      DestructItems<Audio::FSoundFileChunkInfoWrapper,int>(local_198,(int)local_190);
      if (local_198 != (FSoundFileChunkInfoWrapper *)0x0) {
        FMemory::Free(local_198);
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8);
    lVar22 = (longlong)local_12c << 10;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    local_188[0] = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_1e8,local_188,(int)lVar22);
    uVar23 = local_f8 & 0xff;
    fVar27 = 0.0;
    local_1f0 = 0;
    local_1f8 = (byte)local_f8;
    if ((byte)local_f8 != 0) {
      if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      cVar11 = (**(code **)((longlong)*local_1d0.Object + 0x40))
                         (local_1d0.Object,local_1e8.AllocatorInstance.Data,lVar22,&local_1f0);
      if ((cVar11 != '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Error == ESoundFileError::Type::NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                             ,0x65,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      if (local_1f0 == 0) {
LAB_14654b95e:
        uVar23 = 0;
        local_1f8 = 0;
      }
      else {
        do {
          pFVar24 = pFVar19;
          if (0 < local_1f0) {
            do {
              uVar18 = (uint)pFVar24;
              uVar12 = 0;
              if ((int)uVar18 < local_1e8.ArrayNum) {
                uVar12 = ~uVar18 >> 0x1f;
              }
              if (uVar12 == 0) {
                local_208 = (FSoundFileWriter *)(longlong)(int)uVar18;
                local_200 = (longlong)local_1e8.ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
              }
              pFVar16 = (FSoundFileWriter *)(longlong)(int)uVar18;
              if ((float)((uint)fVar27 & uVar20) <
                  *(float *)(local_1e8.AllocatorInstance.Data + (longlong)pFVar16 * 4)) {
                uVar12 = 0;
                if ((int)uVar18 < local_1e8.ArrayNum) {
                  uVar12 = ~uVar18 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (local_208 = pFVar16, local_200 = (longlong)local_1e8.ArrayNum,
                   bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , bVar9)) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
                fVar27 = *(float *)(local_1e8.AllocatorInstance.Data + (longlong)pFVar16 * 4);
              }
              pFVar24 = (FSoundFileWriter *)((longlong)&pFVar24->_padding_ + 1);
            } while ((longlong)pFVar24 < local_1f0);
          }
          if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
          cVar11 = (**(code **)((longlong)*local_1d0.Object + 0x40))
                             (local_1d0.Object,local_1e8.AllocatorInstance.Data,lVar22,&local_1f0);
          if ((cVar11 != '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Error == ESoundFileError::Type::NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                                 ,0x72,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
        } while (local_1f0 != 0);
        if (fVar27 == 0.0) goto LAB_14654b95e;
        uVar23 = (ulonglong)local_1f8;
      }
      if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      (**(code **)((longlong)*local_1d0.Object + 0x20))(local_1d0.Object,0,0,local_110);
    }
    if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    cVar11 = (**(code **)((longlong)*local_1d0.Object + 0x40))
                       (local_1d0.Object,local_1e8.AllocatorInstance.Data,lVar22,&local_1f0);
    if ((cVar11 != '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Error == ESoundFileError::Type::NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                           ,0x84,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    fVar5 = __real_bf800000;
    fVar4 = __real_3f800000;
    uVar20 = 0;
    if ((char)uVar23 == '\0') {
      pFVar24 = pFVar19;
      pFVar16 = pFVar19;
      if (0 < local_1f0) {
        do {
          uVar12 = 0;
          if ((int)uVar20 < local_1e8.ArrayNum) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_208 = pFVar24;
            local_200 = (longlong)local_1e8.ArrayNum;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar2 = (code *)swi(3);
              uVar10 = (*pcVar2)();
              return (bool)uVar10;
            }
          }
          fVar26 = *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_);
          if (fVar4 <= *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_))
          {
            fVar26 = fVar4;
          }
          uVar12 = 0;
          if ((int)uVar20 < local_1e8.ArrayNum) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if (fVar26 <= fVar5) {
            fVar26 = fVar5;
          }
          if (uVar12 == 0) {
            local_200 = (longlong)local_1e8.ArrayNum;
            local_208 = pFVar24;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar2 = (code *)swi(3);
              uVar10 = (*pcVar2)();
              return (bool)uVar10;
            }
          }
          uVar20 = uVar20 + 1;
          *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_) = fVar26;
          pFVar24 = (FSoundFileWriter *)(longlong)(int)uVar20;
          pFVar16 = (FSoundFileWriter *)((longlong)&pFVar16->_padding_ + 4);
        } while ((int)uVar20 < local_1f0);
        goto LAB_14654bc00;
      }
    }
    else if (0 < local_1f0) {
      fVar26 = __real_3f800000 / fVar27;
      pFVar24 = pFVar19;
      pFVar16 = pFVar19;
      do {
        uVar12 = 0;
        if ((int)uVar20 < local_1e8.ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_208 = pFVar24;
          local_200 = (longlong)local_1e8.ArrayNum;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
        }
        fVar25 = fVar26 * *(float *)(local_1e8.AllocatorInstance.Data +
                                    (longlong)&pFVar16->_padding_);
        uVar12 = 0;
        if ((int)uVar20 < local_1e8.ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if (fVar4 <= fVar25) {
          fVar25 = fVar4;
        }
        if (fVar25 <= fVar5) {
          fVar25 = fVar5;
        }
        if (uVar12 == 0) {
          local_200 = (longlong)local_1e8.ArrayNum;
          local_208 = pFVar24;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
        }
        uVar20 = uVar20 + 1;
        pFVar24 = (FSoundFileWriter *)(longlong)(int)uVar20;
        *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_) = fVar25;
        pFVar16 = (FSoundFileWriter *)((longlong)&pFVar16->_padding_ + 4);
      } while ((longlong)pFVar24 < local_1f0);
LAB_14654bc00:
      uVar23 = (ulonglong)local_1f8;
    }
    local_1b0 = 0;
    lVar21 = local_1f0;
    if (local_1f0 == local_1e8.ArrayNum) {
      do {
        if ((local_1c0.Object == (ISoundFileWriter *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        cVar11 = (**(code **)((longlong)*local_1c0.Object + 0x38))
                           (local_1c0.Object,local_1e8.AllocatorInstance.Data,local_1f0,&local_1b0);
        if ((cVar11 != '\0') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Error == ESoundFileError::Type::NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                               ,0x9c,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        if ((local_1b0 != local_1f0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SamplesWritten == InputSamplesRead",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                               ,0x9d,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        cVar11 = (**(code **)((longlong)*local_1d0.Object + 0x40))
                           (local_1d0.Object,local_1e8.AllocatorInstance.Data,lVar22,&local_1f0);
        if ((cVar11 != '\0') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Error == ESoundFileError::Type::NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                               ,0xa1,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        uVar20 = 0;
        if ((char)uVar23 == '\0') {
          pFVar24 = pFVar19;
          pFVar16 = pFVar19;
          if (0 < local_1f0) {
            do {
              uVar12 = 0;
              if ((int)uVar20 < local_1e8.ArrayNum) {
                uVar12 = ~uVar20 >> 0x1f;
              }
              if (uVar12 == 0) {
                local_208 = pFVar24;
                local_200 = (longlong)local_1e8.ArrayNum;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
              }
              fVar26 = *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_);
              if (fVar4 <= *(float *)(local_1e8.AllocatorInstance.Data +
                                     (longlong)&pFVar16->_padding_)) {
                fVar26 = fVar4;
              }
              uVar12 = 0;
              if ((int)uVar20 < local_1e8.ArrayNum) {
                uVar12 = ~uVar20 >> 0x1f;
              }
              if (fVar26 <= fVar5) {
                fVar26 = fVar5;
              }
              if (uVar12 == 0) {
                local_200 = (longlong)local_1e8.ArrayNum;
                local_208 = pFVar24;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar2 = (code *)swi(3);
                  uVar10 = (*pcVar2)();
                  return (bool)uVar10;
                }
              }
              uVar20 = uVar20 + 1;
              *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_) = fVar26;
              pFVar24 = (FSoundFileWriter *)(longlong)(int)uVar20;
              pFVar16 = (FSoundFileWriter *)((longlong)&pFVar16->_padding_ + 4);
            } while ((int)uVar20 < local_1f0);
            goto LAB_14654bf00;
          }
        }
        else if (0 < local_1f0) {
          pFVar24 = pFVar19;
          pFVar16 = pFVar19;
          do {
            uVar12 = 0;
            if ((int)uVar20 < local_1e8.ArrayNum) {
              uVar12 = ~uVar20 >> 0x1f;
            }
            if (uVar12 == 0) {
              local_208 = pFVar24;
              local_200 = (longlong)local_1e8.ArrayNum;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return (bool)uVar10;
              }
            }
            fVar26 = (fVar4 / fVar27) *
                     *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_);
            uVar12 = 0;
            if ((int)uVar20 < local_1e8.ArrayNum) {
              uVar12 = ~uVar20 >> 0x1f;
            }
            if (fVar4 <= fVar26) {
              fVar26 = fVar4;
            }
            if (fVar26 <= fVar5) {
              fVar26 = fVar5;
            }
            if (uVar12 == 0) {
              local_200 = (longlong)local_1e8.ArrayNum;
              local_208 = pFVar24;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                uVar10 = (*pcVar2)();
                return (bool)uVar10;
              }
            }
            uVar20 = uVar20 + 1;
            pFVar24 = (FSoundFileWriter *)(longlong)(int)uVar20;
            *(float *)(local_1e8.AllocatorInstance.Data + (longlong)&pFVar16->_padding_) = fVar26;
            pFVar16 = (FSoundFileWriter *)((longlong)&pFVar16->_padding_ + 4);
          } while ((longlong)pFVar24 < local_1f0);
LAB_14654bf00:
          uVar23 = (ulonglong)local_1f8;
        }
        lVar21 = lVar21 + local_1f0;
        if (0x7fffffff < lVar21) {
          if (1 < (byte)LogAudioMixer._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          }
          bVar9 = false;
          goto LAB_14654c0bd;
        }
      } while (local_1f0 == local_1e8.ArrayNum);
    }
    if ((local_1c0.Object == (ISoundFileWriter *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    cVar11 = (**(code **)((longlong)*local_1c0.Object + 0x38))
                       (local_1c0.Object,local_1e8.AllocatorInstance.Data,local_1f0,&local_1b0);
    if ((cVar11 != '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Error == ESoundFileError::Type::NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                           ,0xbf,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    if ((local_1d0.Object == (ISoundFileReader *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    (**(code **)((longlong)*local_1d0.Object + 0x18))();
    if ((local_1c0.Object == (ISoundFileWriter *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    pIVar6 = local_1c0.Object;
    (**(code **)((longlong)*local_1c0.Object + 0x10))(local_1c0.Object);
    local_1a8 = (undefined8 *)0x0;
    if ((pIVar6 == (ISoundFileWriter *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    (**(code **)((longlong)*local_1c0.Object + 0x40))(local_1c0.Object,&local_1a8);
    pTVar8 = local_118;
    local_1d8[0] = '\0';
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init
              (local_118,local_1d8,*(int *)(local_1a8 + 1));
    puVar7 = local_1a8;
    iVar1 = pTVar8->ArrayNum;
    if (*(int *)(local_1a8 + 1) < 1) {
      local_208 = (FSoundFileWriter *)0x0;
      local_200 = (longlong)*(int *)(local_1a8 + 1);
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
    }
    memcpy((pTVar8->AllocatorInstance).Data,(void *)*puVar7,(longlong)iVar1);
    bVar9 = true;
LAB_14654c0bd:
    pvVar13 = local_1a0;
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
      pvVar13 = local_1a0;
    }
  }
  else {
    bVar9 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  if (local_180 != (void *)0x0) {
    FMemory::Free(local_180);
  }
LAB_14654c12b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.SharedReferenceCount.ReferenceController);
  if (pvVar13 != (void *)0x0) {
    ::operator_delete(pvVar13,1);
  }
  return bVar9;
}

// CreateCueAndSampleChunks @ 14654ca90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Audio::SoundFileUtils::CreateCueAndSampleChunks
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FWaveCue,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FWaveSampleLoop,TSizedDefaultAllocator<32>_> *param_4)

{
  uint *puVar1;
  FScriptContainerElement FVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  TArray<FWaveSampleLoop,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  FSoundDataReader *pFVar19;
  FSoundDataReader *pFVar20;
  FSoundFileWriter *pFVar21;
  FSoundFileWriter *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  undefined8 *puVar25;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar26;
  undefined8 *puVar27;
  int iVar28;
  ulonglong uVar29;
  undefined **ppuVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  wchar_t *pwVar34;
  undefined8 *puVar35;
  ForElementType<FSetElementId> FVar36;
  TSparseSetElement<unsigned_int> *pTVar37;
  FSoundFileWriter *pFVar38;
  uint uVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  ForElementType<unsigned_int> FVar42;
  ISoundFileWriter *pIVar43;
  FScriptContainerElement *pFVar44;
  float fVar45;
  undefined4 uVar46;
  undefined1 auStackY_7278 [32];
  int local_7238;
  uint local_7234;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_7230;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_7220;
  undefined1 local_7210;
  undefined1 local_720f;
  uchar local_720e [6];
  TSharedPtr<Audio::ISoundFileWriter,1> local_7208;
  longlong local_71f8;
  TSharedPtr<Audio::ISoundFileReader,1> local_71f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_71e0;
  ForAnyElementType local_71d0;
  uint local_71c8 [3];
  uint local_71bc;
  uint local_71b8;
  uint local_71b4;
  uint local_71b0;
  uint local_71ac;
  float local_71a8 [2];
  TArray<FWaveSampleLoop,TSizedDefaultAllocator<32>_> *local_71a0;
  longlong local_7198;
  undefined8 *local_7190;
  FSoundFileChunkInfoWrapper *local_7188;
  undefined8 local_7180;
  int local_7178;
  uint uStack_7174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_7170;
  undefined4 local_7168;
  int iStack_7164;
  int iStack_7160;
  undefined4 uStack_715c;
  TArray<FWaveCue,TSizedDefaultAllocator<32>_> *local_7158;
  void *local_7150;
  undefined8 local_7148;
  void *local_7140;
  undefined8 local_7138;
  int local_7130;
  int local_712c;
  uint local_7128;
  undefined4 local_7124;
  undefined4 local_7120;
  undefined8 local_7118;
  undefined8 uStack_7110;
  undefined8 local_7108;
  undefined8 local_7100;
  undefined8 local_70f8;
  undefined8 uStack_70f0;
  undefined4 local_70e8;
  TPairInitializer<unsigned_int_const_&,Audio::FRiffLabelChunk_&> local_70e0;
  uint local_70d0;
  int local_70cc;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_70c8;
  longlong *local_70c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70b8;
  uint local_7098 [2];
  FSparseArrayAllocationInfo local_7090;
  FScriptContainerElement *local_7080;
  uint *local_7078;
  undefined8 local_7070;
  undefined1 local_7068 [32];
  ForElementType<unsigned_int> local_7048;
  int local_7040;
  int local_703c;
  int local_7038;
  int local_7034;
  FScriptContainerElement local_7030 [8];
  ForAnyElementType local_7028;
  int local_7020;
  uint local_7018;
  int local_7014;
  undefined4 local_7010;
  TSet<TTuple<unsigned_int,Audio::FRiffLabelChunk>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FRiffLabelChunk,0>,FDefaultSetAllocator>
  local_7008;
  undefined8 local_6fb8;
  uint uStack_6fb0;
  undefined4 uStack_6fac;
  undefined4 local_6fa8;
  undefined4 uStack_6fa4;
  char acStack_6fa0 [254];
  undefined1 local_6ea2;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_6e98;
  uint local_6df8;
  undefined8 local_6df4 [3501];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_7278;
  local_7108 = 0;
  uVar46 = (undefined4)__real_3ff0000000000000;
  local_7070 = 0;
  local_7118 = 0xbb8000010002;
  uStack_7110 = __real_3ff0000000000000;
  local_71a0 = param_4;
  local_7158 = param_3;
  local_70c8 = param_2;
  pvVar18 = ::operator_new(1);
  if (pvVar18 == (void *)0x0) {
    pvVar18 = (void *)0x0;
    local_71f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_7140 = (void *)0x0;
    local_71f0.Object = (ISoundFileReader *)0x0;
LAB_14654cbb2:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InputSoundDataReader",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                        ,0xf7,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
  }
  else {
    local_7140 = pvVar18;
    pFVar19 = ::operator_new(0x60);
    pFVar20 = (FSoundDataReader *)0x0;
    if (pFVar19 != (FSoundDataReader *)0x0) {
      pFVar19->CurrentIndexBytes = 0;
      pFVar19->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileParser__;
      pFVar19->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileReader__;
      (pFVar19->State).Counter = 0;
      (pFVar19->CurrentError).Counter = 0;
      (pFVar19->Description).NumFrames = 0;
      (pFVar19->Description).SampleRate = 0;
      (pFVar19->Description).NumChannels = 0;
      (pFVar19->Description).FormatFlags = 0;
      (pFVar19->Description).NumSections = 0;
      (pFVar19->Description).bIsSeekable = 0;
      (pFVar19->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar19->ChannelMap).ArrayNum = 0;
      (pFVar19->ChannelMap).ArrayMax = 0;
      pFVar20 = pFVar19;
    }
    TSharedPtr<Audio::ISoundFileReader,1>::
    TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader>(&local_71f0,pFVar20);
    if (local_71f0.Object == (ISoundFileReader *)0x0) goto LAB_14654cbb2;
  }
  pFVar38 = (FSoundFileWriter *)0x0;
  cVar15 = (**(code **)((longlong)*local_71f0.Object + 8))(local_71f0.Object,param_1);
  if (cVar15 != '\0') {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    bVar13 = false;
    goto LAB_14654e6fb;
  }
  local_70f8 = 0;
  uStack_70f0 = 0;
  local_7150 = (void *)0x0;
  local_7148 = 0;
  local_7100 = 0;
  local_70e8 = 0;
  if ((local_71f0.Object == (ISoundFileReader *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  (**(code **)((longlong)*local_71f0.Object + 0x48))(local_71f0.Object,&local_7100,&local_7150);
  local_712c = local_70f8._4_4_;
  local_7138 = local_7100;
  local_7130 = (int)local_70f8;
  local_7124 = uStack_70f0._4_4_;
  local_7120 = local_70e8;
  local_7128 = 0x10002;
  if (pvVar18 == (void *)0x0) {
    local_7208.Object = (ISoundFileWriter *)0x0;
    local_7208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14654cd6c:
    pIVar43 = local_7208.Object;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SoundFileWriter",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                        ,0x10f,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
  }
  else {
    pFVar21 = ::operator_new(0x70);
    pFVar22 = pFVar38;
    if (pFVar21 != (FSoundFileWriter *)0x0) {
      pFVar21->CurrentIndexBytes = 0;
      pFVar21->_padding_ = (longlong)&FSoundFileWriter::_vftable__for__Audio__ISoundFileParser__;
      pFVar21->_padding_ = (longlong)&FSoundFileWriter::_vftable__for__Audio__ISoundFileWriter__;
      pFVar21->FileHandle = (SoundFileHandleOpaque *)0x0;
      (pFVar21->Description).NumFrames = 0;
      (pFVar21->Description).SampleRate = 0;
      (pFVar21->Description).NumChannels = 0;
      (pFVar21->Description).FormatFlags = 0;
      (pFVar21->Description).NumSections = 0;
      (pFVar21->Description).bIsSeekable = 0;
      (pFVar21->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar21->ChannelMap).ArrayNum = 0;
      (pFVar21->ChannelMap).ArrayMax = 0;
      (pFVar21->BulkData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar21->BulkData).ArrayNum = 0;
      (pFVar21->BulkData).ArrayMax = 0;
      pFVar21->EncodingQuality = 0.0;
      (pFVar21->State).Counter = 0;
      (pFVar21->CurrentError).Counter = 0;
      pFVar22 = pFVar21;
    }
    TSharedPtr<Audio::ISoundFileWriter,1>::
    TSharedPtr<Audio::ISoundFileWriter,1><Audio::FSoundFileWriter>(&local_7208,pFVar22);
    pIVar43 = local_7208.Object;
    if (local_7208.Object == (ISoundFileWriter *)0x0) goto LAB_14654cd6c;
  }
  cVar15 = (**(code **)((longlong)*pIVar43 + 8))(pIVar43,&local_7138,&local_7150,uVar46);
  if (cVar15 == '\0') {
    local_7068._0_8_ = (FScriptContainerElement *)0x0;
    local_7068._8_8_ = 0;
    local_7048 = (ForElementType<unsigned_int>)0x0;
    local_7040 = 0;
    local_703c = 0x80;
    local_7038 = -1;
    local_7034 = 0;
    local_7028.Data = (FScriptContainerElement *)0x0;
    local_7020 = 0;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_7068,3);
    if (local_7020 < 1) {
      local_7020 = 1;
      if ((local_7028.Data != (FScriptContainerElement *)0x0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7028,0,0,4),
         local_7028.Data != (FScriptContainerElement *)0x0)) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7028,0,0,4);
      }
      FVar23.Data = local_7030;
      if (local_7028.Data != (FScriptContainerElement *)0x0) {
        FVar23.Data = local_7028.Data;
      }
      *(undefined4 *)FVar23.Data = 0xffffffff;
      if (local_7020 != 0) {
        pTStack_7170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_7068 + 0x10);
        local_7178 = 0;
        uStack_7174 = 1;
        iStack_7164 = 0;
        iStack_7160 = 0;
        if (local_7040 != 0) {
          FVar42 = (ForElementType<unsigned_int>)((longlong)local_7068 + 0x10);
          if (local_7048 != (ForElementType<unsigned_int>)0x0) {
            FVar42 = local_7048;
          }
          uVar31 = *(uint *)FVar42;
          iStack_7160 = 0;
          local_7178 = 0;
          while (uVar31 == 0) {
            iStack_7160 = iStack_7160 + 0x20;
            lVar33 = (longlong)local_7178;
            local_7178 = local_7178 + 1;
            if ((int)(local_7040 + -1 + (local_7040 + -1 >> 0x1f & 0x1fU)) >> 5 < local_7178)
            goto LAB_14654cfb0;
            uVar31 = ((uint *)((longlong)FVar42 + 4))[lVar33];
          }
          uStack_7174 = -uVar31 & uVar31;
          uVar29 = (ulonglong)uStack_7174 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_70cc = (int)lVar33;
          iStack_7164 = iStack_7160 + -1 + local_70cc;
          if (local_7040 < iStack_7164) {
LAB_14654cfb0:
            iStack_7164 = local_7040;
          }
        }
        local_7168 = 0xffffffff;
        local_70c0 = (longlong *)local_7068;
        local_70b8._padding_ = CONCAT44(uStack_7174,local_7178);
        local_70b8.CurrentBitIndex = iStack_7164;
        local_70b8.UnvisitedBitMask = 0xffffffff;
        local_70b8._28_4_ = uStack_715c;
        local_70b8.BaseBitIndex = iStack_7160;
        iVar16 = iStack_7164;
        local_70b8.Array = pTStack_7170;
        if (iStack_7164 < local_7040) {
          do {
            lVar33 = *local_70c0;
            lVar24 = (longlong)iVar16;
            uVar31 = local_7020 - 1U & *(uint *)(lVar33 + lVar24 * 0xc);
            *(uint *)(lVar33 + 8 + lVar24 * 0xc) = uVar31;
            FVar23.Data = local_7030;
            if (local_7028.Data != (FScriptContainerElement *)0x0) {
              FVar23.Data = local_7028.Data;
            }
            uVar29 = (longlong)local_7020 - 1U & (longlong)(int)uVar31;
            *(undefined4 *)(lVar33 + 4 + lVar24 * 0xc) = *(undefined4 *)(FVar23.Data + uVar29 * 4);
            *(int *)(FVar23.Data + uVar29 * 4) = iVar16;
            local_70b8.UnvisitedBitMask = local_70b8.UnvisitedBitMask & ~local_70b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70b8);
            iVar16 = local_70b8.CurrentBitIndex;
          } while (local_70b8.CurrentBitIndex < (local_70b8.Array)->NumBits);
        }
      }
    }
    if (param_3->ArrayNum != 0) {
      local_71b4 = FWaveModInfo::GetChunkId("cue ");
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 local_7068,&local_70d0,(bool *)&local_71b4);
      local_71b0 = FWaveModInfo::GetChunkId("LIST");
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 local_7068,(uint *)((longlong)&local_70e0.Value + 4),(bool *)&local_71b0);
      uVar31 = FWaveModInfo::GetChunkId("labl");
      if (local_7034 == 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_7068,(int *)(local_7068 + 8),
                            (int *)(local_7068 + 0xc));
        iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_7068 + 0x10),1);
        FVar42 = (ForElementType<unsigned_int>)((longlong)local_7068 + 0x10);
        if (local_7048 != (ForElementType<unsigned_int>)0x0) {
          FVar42 = local_7048;
        }
        uVar32 = iVar17 >> 0x1f & 0x1f;
        iVar17 = iVar17 + uVar32;
        puVar1 = (uint *)((longlong)FVar42 + (longlong)(iVar17 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (((byte)iVar17 & 0x1f) - (char)uVar32 & 0x1f));
        iVar17 = local_7038;
      }
      else {
        local_7034 = local_7034 + -1;
        iVar17 = *(int *)(local_7068._0_8_ + (longlong)local_7038 * 0xc + 4);
        iVar16 = local_7038;
        if (local_7034 != 0) {
          *(undefined4 *)(local_7068._0_8_ + (longlong)iVar17 * 0xc) = 0xffffffff;
        }
      }
      local_7038 = iVar17;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_7068,&local_7090,iVar16);
      if (local_7090.Pointer == (TSparseSetElement<unsigned_int> *)0x0) {
        pTVar37 = (TSparseSetElement<unsigned_int> *)0x0;
      }
      else {
        *(uint *)local_7090.Pointer = uVar31;
        *(undefined4 *)((longlong)local_7090.Pointer + 4) = 0xffffffff;
        pTVar37 = local_7090.Pointer;
      }
      uVar31 = *(uint *)pTVar37;
      local_71c8[2] = local_7090.Index;
      bVar13 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
               TryReplaceExisting((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                                   *)local_7068,uVar31,pTVar37,(int *)(local_71c8 + 2),(bool *)0x0);
      if (!bVar13) {
        uVar32 = local_7068._8_4_ - local_7034;
        if (uVar32 < 4) {
          iVar16 = 1;
        }
        else {
          uVar29 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
          lVar33 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_70e0.Value._0_4_ = (undefined4)lVar33;
          iVar16 = 1 << ((byte)lVar33 & 0x1f);
        }
        if (((int)uVar32 < 1) || (iVar16 <= local_7020)) {
          uVar31 = local_7020 - 1U & uVar31;
          *(uint *)&pTVar37->field_0x8 = uVar31;
          FVar23.Data = local_7030;
          if (local_7028.Data != (FScriptContainerElement *)0x0) {
            FVar23.Data = local_7028.Data;
          }
          uVar29 = (longlong)local_7020 - 1U & (longlong)(int)uVar31;
          *(undefined4 *)&pTVar37->field_0x4 = *(undefined4 *)(FVar23.Data + uVar29 * 4);
          *(uint *)(FVar23.Data + uVar29 * 4) = local_71c8[2];
        }
        else {
          local_7020 = iVar16;
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                     local_7068);
        }
      }
    }
    if (local_71a0->ArrayNum != 0) {
      local_71ac = FWaveModInfo::GetChunkId("smpl");
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 local_7068,local_7098,(bool *)&local_71ac);
    }
    if (((uStack_70f0 & 0x10000) != 0) && ((local_7128 & 0x10000) != 0)) {
      local_7188 = (FSoundFileChunkInfoWrapper *)0x0;
      local_7180 = 0;
      if ((local_71f0.Object == (ISoundFileReader *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      cVar15 = (**(code **)((longlong)*local_71f0.Object + 0x50))
                         (local_71f0.Object,&local_7188,local_7068);
      if (cVar15 == '\0') {
        if ((pIVar43 == (ISoundFileWriter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        cVar15 = (**(code **)((longlong)*pIVar43 + 0x48))(pIVar43,&local_7188);
        if ((cVar15 != '\0') && (1 < (byte)LogAudioMixer._0_1_)) {
          ppuVar30 = &PTR_u_Error_encounter_1512e70f0;
          goto LAB_14654d3aa;
        }
      }
      else if (1 < (byte)LogAudioMixer._0_1_) {
        ppuVar30 = &PTR_u_Error_encounter_1512e7050;
LAB_14654d3aa:
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)ppuVar30,(FLogCategoryBase *)&LogAudioMixer);
      }
      DestructItems<Audio::FSoundFileChunkInfoWrapper,int>(local_7188,(int)local_7180);
      if (local_7188 != (FSoundFileChunkInfoWrapper *)0x0) {
        FMemory::Free(local_7188);
      }
    }
    uVar31 = param_3->ArrayNum;
    if (uVar31 == 0) {
LAB_14654de33:
      if (local_71a0->ArrayNum != 0) {
        local_7220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = local_71a0->ArrayNum * 0x18;
        iVar28 = iVar16 + 0x2c;
        local_7220.ArrayNum = 0;
        local_7220.ArrayMax = 0;
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar28,&local_7220.AllocatorInstance,&local_7220.ArrayNum,
                            &local_7220.ArrayMax);
        memset(local_7220.AllocatorInstance.Data + iVar17,0,(longlong)iVar28);
        local_7238 = 1;
        if ((local_7220.ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7238 = 2;
        *local_7220.AllocatorInstance.Data = (FScriptContainerElement)0x73;
        if ((local_7220.ArrayNum < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7238 = 3;
        local_7220.AllocatorInstance.Data[1] = (FScriptContainerElement)0x6d;
        if ((local_7220.ArrayNum < 3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7220.AllocatorInstance.Data[2] = (FScriptContainerElement)0x70;
        local_7238 = 4;
        if ((local_7220.ArrayNum < 4) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7220.AllocatorInstance.Data[3] = (FScriptContainerElement)0x6c;
        WriteUInt32ToByteArray(&local_7220,&local_7238,iVar16 + 0x24);
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        if ((local_7130 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewSoundFileDescription.SampleRate > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                                ,0x1cb,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        WriteUInt32ToByteArray(&local_7220,&local_7238,(uint)(1000000000 / (longlong)local_7130));
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        pTVar10 = local_71a0;
        WriteUInt32ToByteArray(&local_7220,&local_7238,local_71a0->ArrayNum);
        WriteUInt32ToByteArray(&local_7220,&local_7238,0);
        iVar16 = pTVar10->ArrayNum;
        pFVar44 = (pTVar10->AllocatorInstance).Data;
        pFVar41 = pFVar44 + (longlong)iVar16 * 0xc;
        while( true ) {
          if (pTVar10->ArrayNum != iVar16) {
            local_720f = 0;
            `TCheckedPointerIterator<FWaveSampleLoop_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_720f);
          }
          if (pFVar44 == pFVar41) break;
          uVar31 = *(uint *)(pFVar44 + 4);
          uVar32 = *(uint *)(pFVar44 + 8);
          WriteUInt32ToByteArray(&local_7220,&local_7238,*(uint *)pFVar44);
          WriteUInt32ToByteArray(&local_7220,&local_7238,0);
          WriteUInt32ToByteArray(&local_7220,&local_7238,uVar31);
          WriteUInt32ToByteArray(&local_7220,&local_7238,uVar32);
          WriteUInt32ToByteArray(&local_7220,&local_7238,0);
          WriteUInt32ToByteArray(&local_7220,&local_7238,0);
          pFVar44 = pFVar44 + 0xc;
        }
        if ((pIVar43 == (ISoundFileWriter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        cVar15 = (**(code **)((longlong)*pIVar43 + 0x50))(pIVar43,&local_7220);
        if (cVar15 != '\0') {
          FVar23.Data = local_7220.AllocatorInstance.Data;
          if (1 < (byte)LogAudioMixer._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            FVar23.Data = local_7220.AllocatorInstance.Data;
          }
          goto LAB_14654e21f;
        }
        if (local_7220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7220.AllocatorInstance.Data);
        }
      }
      lVar33 = (longlong)local_712c << 10;
      local_71f8 = 0;
      local_71e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_71e0.ArrayNum = 0;
      local_71e0.ArrayMax = 0;
      local_71a8[0] = 0.0;
      TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_71e0,local_71a8,(int)lVar33);
      if ((local_71f0.Object == (ISoundFileReader *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      cVar15 = (**(code **)((longlong)*local_71f0.Object + 0x40))
                         (local_71f0.Object,local_71e0.AllocatorInstance.Data,lVar33,&local_71f8);
      fVar9 = __real_bf800000;
      fVar8 = __real_3f800000;
      if (cVar15 == '\0') {
        local_7198 = 0;
        if (local_71f8 == local_71e0.ArrayNum) {
          do {
            if ((pIVar43 == (ISoundFileWriter *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            cVar15 = (**(code **)((longlong)*pIVar43 + 0x38))
                               (pIVar43,local_71e0.AllocatorInstance.Data,local_71f8,&local_7198);
            if ((cVar15 != '\0') &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Error == ESoundFileError::Type::NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                                    ,0x21f,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            if ((local_7198 != local_71f8) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SamplesWritten == InputSamplesRead",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                                    ,0x220,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            if ((local_71f0.Object == (ISoundFileReader *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            cVar15 = (**(code **)((longlong)*local_71f0.Object + 0x40))
                               (local_71f0.Object,local_71e0.AllocatorInstance.Data,lVar33,
                                &local_71f8);
            if (cVar15 != '\0') {
              if (1 < (byte)LogAudioMixer._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
              }
              goto LAB_14654e767;
            }
            uVar31 = 0;
            lVar24 = 0;
            if (0 < local_71f8) {
              do {
                uVar32 = 0;
                if ((int)uVar31 < local_71e0.ArrayNum) {
                  uVar32 = ~uVar31 >> 0x1f;
                }
                if (uVar32 == 0) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar4 = (code *)swi(3);
                    uVar14 = (*pcVar4)();
                    return (bool)uVar14;
                  }
                }
                fVar45 = *(float *)(local_71e0.AllocatorInstance.Data + lVar24);
                if (fVar8 <= *(float *)(local_71e0.AllocatorInstance.Data + lVar24)) {
                  fVar45 = fVar8;
                }
                uVar32 = 0;
                if ((int)uVar31 < local_71e0.ArrayNum) {
                  uVar32 = ~uVar31 >> 0x1f;
                }
                if (fVar45 <= fVar9) {
                  fVar45 = fVar9;
                }
                if ((uVar32 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  uVar14 = (*pcVar4)();
                  return (bool)uVar14;
                }
                uVar31 = uVar31 + 1;
                *(float *)(local_71e0.AllocatorInstance.Data + lVar24) = fVar45;
                pIVar43 = local_7208.Object;
                lVar24 = lVar24 + 4;
              } while ((int)uVar31 < local_71f8);
            }
          } while (local_71f8 == local_71e0.ArrayNum);
        }
        if ((pIVar43 == (ISoundFileWriter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        cVar15 = (**(code **)((longlong)*pIVar43 + 0x38))
                           (pIVar43,local_71e0.AllocatorInstance.Data,local_71f8,&local_7198);
        if ((cVar15 != '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Error == ESoundFileError::Type::NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                                ,0x233,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        if ((local_71f0.Object == (ISoundFileReader *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        (**(code **)((longlong)*local_71f0.Object + 0x18))();
        if ((pIVar43 == (ISoundFileWriter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        (**(code **)((longlong)*pIVar43 + 0x10))(pIVar43);
        local_7190 = (undefined8 *)0x0;
        if ((pIVar43 == (ISoundFileWriter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        (**(code **)((longlong)*pIVar43 + 0x40))(pIVar43,&local_7190);
        pTVar11 = local_70c8;
        local_720e[0] = '\0';
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init
                  (local_70c8,local_720e,*(int *)(local_7190 + 1));
        puVar25 = local_7190;
        iVar16 = pTVar11->ArrayNum;
        if ((*(int *)(local_7190 + 1) < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        memcpy((pTVar11->AllocatorInstance).Data,(void *)*puVar25,(longlong)iVar16);
        bVar13 = true;
      }
      else if ((byte)LogAudioMixer._0_1_ < 2) {
LAB_14654e767:
        bVar13 = false;
      }
      else {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        bVar13 = false;
      }
      if (local_71e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_71e0.AllocatorInstance.Data);
      }
    }
    else {
      puVar25 = local_6df4 + 1;
      lVar33 = 100;
      do {
        puVar25[-1] = 0;
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = puVar25 + 0x23;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      uVar29 = 0;
      local_6df8 = 100;
      if ((int)uVar31 < 0x65) {
        local_6df8 = uVar31;
      }
      if (local_6df8 != 0) {
        do {
          uVar32 = (uint)uVar29;
          uVar31 = 0;
          if ((int)uVar32 < param_3->ArrayNum) {
            uVar31 = ~uVar32 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          pFVar41 = (param_3->AllocatorInstance).Data;
          uStack_6fb0 = 0;
          uStack_6fac = 0;
          local_6fa8 = 0;
          uStack_6fa4 = 0;
          lVar33 = (longlong)(int)uVar32 * 0x20;
          local_6fb8 = (ulonglong)*(uint *)(pFVar41 + lVar33);
          uStack_6fb0 = FWaveModInfo::GetChunkId("data");
          local_6fb8 = CONCAT44(*(undefined4 *)(pFVar41 + lVar33 + 4),(undefined4)local_6fb8);
          uStack_6fac = 0;
          local_6fa8 = 0;
          uStack_6fa4 = *(undefined4 *)(pFVar41 + lVar33 + 4);
          if (*(int *)(pFVar41 + lVar33 + 0x10) == 0) {
            pwVar34 = L"";
          }
          else {
            pwVar34 = *(wchar_t **)(pFVar41 + lVar33 + 8);
          }
          pTVar26 = StringCast<char,128,wchar_t>(&local_6e98,pwVar34);
          strncpy(acStack_6fa0,pTVar26->Ptr,0xff);
          local_6ea2 = 0;
          if ((void *)local_6e98._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_6e98._padding_);
          }
          lVar33 = 2;
          puVar25 = &local_6fb8;
          puVar12 = local_6df4 + uVar29 * 0x23;
          do {
            puVar35 = puVar12;
            puVar27 = puVar25;
            uVar3 = puVar27[1];
            uVar5 = puVar27[2];
            uVar6 = puVar27[3];
            *puVar35 = *puVar27;
            puVar35[1] = uVar3;
            uVar3 = puVar27[4];
            uVar7 = puVar27[5];
            puVar35[2] = uVar5;
            puVar35[3] = uVar6;
            uVar5 = puVar27[6];
            uVar6 = puVar27[7];
            puVar35[4] = uVar3;
            puVar35[5] = uVar7;
            uVar3 = puVar27[8];
            uVar7 = puVar27[9];
            puVar35[6] = uVar5;
            puVar35[7] = uVar6;
            uVar5 = puVar27[10];
            uVar6 = puVar27[0xb];
            puVar35[8] = uVar3;
            puVar35[9] = uVar7;
            uVar3 = puVar27[0xc];
            uVar7 = puVar27[0xd];
            puVar35[10] = uVar5;
            puVar35[0xb] = uVar6;
            uVar5 = puVar27[0xe];
            uVar6 = puVar27[0xf];
            puVar35[0xc] = uVar3;
            puVar35[0xd] = uVar7;
            puVar35[0xe] = uVar5;
            puVar35[0xf] = uVar6;
            lVar33 = lVar33 + -1;
            puVar25 = puVar27 + 0x10;
            puVar12 = puVar35 + 0x10;
          } while (lVar33 != 0);
          uVar5 = puVar27[0x11];
          uVar3 = puVar27[0x12];
          uVar29 = (ulonglong)(uVar32 + 1);
          puVar35[0x10] = puVar27[0x10];
          puVar35[0x11] = uVar5;
          puVar35[0x12] = uVar3;
          pIVar43 = local_7208.Object;
        } while (uVar32 + 1 < local_6df8);
      }
      if ((pIVar43 == (ISoundFileWriter *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      cVar15 = (**(code **)((longlong)*pIVar43 + 0x58))(pIVar43,&local_6df8);
      if (cVar15 == '\0') {
        iVar16 = param_3->ArrayNum;
        pFVar41 = (param_3->AllocatorInstance).Data;
        pFVar44 = pFVar41 + (longlong)iVar16 * 0x20;
        local_7230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7230.ArrayNum = 0;
        local_7230.ArrayMax = 0;
        local_7008.Elements._0_8_ = 0;
        local_7008.Elements._8_8_ = 0;
        local_7008.Elements._32_8_ = 0;
        local_7008.Elements._40_4_ = 0;
        local_7008.Elements._44_4_ = 0x80;
        local_7008.Elements._48_4_ = 0xffffffff;
        local_7008.Elements._52_4_ = 0;
        local_7008.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_7008.HashSize = 0;
        iVar17 = 0xc;
        while( true ) {
          if (param_3->ArrayNum != iVar16) {
            local_720e[1] = 0;
            `TCheckedPointerIterator<FWaveCue_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_720e + 1);
          }
          if (pFVar41 == pFVar44) break;
          uVar31 = 2;
          if (0 < (int)*(uint *)(pFVar41 + 0x10)) {
            uVar31 = *(uint *)(pFVar41 + 0x10);
          }
          local_7018 = FWaveModInfo::GetChunkId("labl");
          local_7014 = uVar31 + 4;
          local_7010 = *(undefined4 *)pFVar41;
          local_7078 = &local_7018;
          local_7080 = pFVar41;
          TSet<TTuple<unsigned_int,Audio::FRiffLabelChunk>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FRiffLabelChunk,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,Audio::FRiffLabelChunk_&>_>
                    (&local_7008,&local_70e0,(bool *)&local_7080);
          pFVar41 = pFVar41 + 0x20;
          iVar28 = local_7014 + 8 + iVar17;
          iVar17 = iVar28 + 1;
          if ((uVar31 & 1) == 0) {
            iVar17 = iVar28;
          }
        }
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar17,&local_7230.AllocatorInstance,&local_7230.ArrayNum,
                            &local_7230.ArrayMax);
        memset(local_7230.AllocatorInstance.Data + iVar16,0,(longlong)iVar17);
        local_7234 = 1;
        if ((local_7230.ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7234 = 2;
        *local_7230.AllocatorInstance.Data = (FScriptContainerElement)0x4c;
        if ((local_7230.ArrayNum < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7234 = 3;
        local_7230.AllocatorInstance.Data[1] = (FScriptContainerElement)0x49;
        if ((local_7230.ArrayNum < 3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7230.AllocatorInstance.Data[2] = (FScriptContainerElement)0x53;
        local_7234 = 4;
        if ((local_7230.ArrayNum < 4) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7230.AllocatorInstance.Data[3] = (FScriptContainerElement)0x54;
        WriteUInt32ToByteArray(&local_7230,(int *)&local_7234,iVar17 - 8);
        uVar31 = local_7234;
        lVar33 = (longlong)(int)local_7234;
        uVar39 = local_7234 + 1;
        uVar32 = 0;
        if ((int)local_7234 < local_7230.ArrayNum) {
          uVar32 = ~local_7234 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (local_7234 = uVar39,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7230.AllocatorInstance.Data[lVar33] = (FScriptContainerElement)0x61;
        uVar32 = uVar31 + 2;
        uVar40 = 0;
        if ((int)uVar39 < local_7230.ArrayNum) {
          uVar40 = ~uVar39 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (local_7234 = uVar32,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        uVar40 = uVar31 + 3;
        local_7230.AllocatorInstance.Data[(int)uVar39] = (FScriptContainerElement)0x64;
        uVar39 = 0;
        if ((int)uVar32 < local_7230.ArrayNum) {
          uVar39 = ~uVar32 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (local_7234 = uVar40,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7230.AllocatorInstance.Data[(int)uVar32] = (FScriptContainerElement)0x74;
        local_7234 = uVar31 + 4;
        uVar31 = 0;
        if ((int)uVar40 < local_7230.ArrayNum) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_7230.AllocatorInstance.Data[(int)uVar40] = (FScriptContainerElement)0x6c;
        pFVar41 = (param_3->AllocatorInstance).Data;
        local_71b8 = local_7158->ArrayNum;
        uVar29 = (ulonglong)(int)local_71b8;
        pFVar44 = pFVar41 + uVar29 * 0x20;
        while( true ) {
          if (local_7158->ArrayNum != (int)uVar29) {
            local_7210 = 0;
            `TCheckedPointerIterator<FWaveCue_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_7210);
          }
          pIVar43 = local_7208.Object;
          if (pFVar41 == pFVar44) break;
          pFVar22 = pFVar38;
          if (local_7008.Elements._8_4_ != local_7008.Elements._52_4_) {
            FVar36 = (ForElementType<FSetElementId>)&local_7008.Hash;
            if (local_7008.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar36 = local_7008.Hash.SecondaryData;
            }
            iVar16 = *(int *)((longlong)FVar36 +
                             (ulonglong)(local_7008.HashSize - 1U & *(uint *)pFVar41) * 4);
            while (pFVar22 = pFVar38, iVar16 != -1) {
              pFVar22 = (FSoundFileWriter *)(local_7008.Elements._0_8_ + (longlong)iVar16 * 0x18);
              if (*(uint *)(local_7008.Elements._0_8_ + (longlong)iVar16 * 0x18) == *(uint *)pFVar41
                 ) {
                if (pFVar22 != (FSoundFileWriter *)0x0) goto LAB_14654db55;
                break;
              }
              iVar16 = (int)pFVar22->CurrentIndexBytes;
            }
          }
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
LAB_14654db55:
          WriteUInt32ToByteArray
                    (&local_7230,(int *)&local_7234,*(uint *)((longlong)&pFVar22->_padding_ + 4));
          WriteUInt32ToByteArray(&local_7230,(int *)&local_7234,(uint)pFVar22->_padding_);
          WriteUInt32ToByteArray
                    (&local_7230,(int *)&local_7234,*(uint *)((longlong)&pFVar22->_padding_ + 4));
          local_71c8[0] = *(uint *)(pFVar41 + 0x10);
          lVar33 = (longlong)(int)local_71c8[0];
          pvVar18 = *(void **)(pFVar41 + 8);
          local_71d0.Data = (FScriptContainerElement *)0x0;
          if (local_71c8[0] == 0) {
            local_71c8[1] = 0;
            uVar31 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_71c8[0],0,&local_71d0,local_71c8[0],(int *)(local_71c8 + 1));
            memcpy(local_71d0.Data,pvVar18,lVar33 * 2);
            uVar31 = local_71c8[0];
          }
          if (uVar31 == 0) {
            local_71bc = uVar31;
            iVar16 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (2,2,2,&local_71d0,(int *)local_71c8,(int *)(local_71c8 + 1));
            *(undefined4 *)(local_71d0.Data + (longlong)iVar16 * 2) = 0;
            uVar31 = local_71c8[0];
          }
          uVar32 = 0;
          pFVar22 = pFVar38;
          if (0 < (int)uVar31) {
            do {
              uVar39 = 0;
              if ((int)uVar32 < (int)uVar31) {
                uVar39 = ~uVar32 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              lVar33 = (longlong)(int)local_7234;
              FVar2 = local_71d0.Data[(longlong)pFVar22];
              uVar39 = local_7234 + 1;
              uVar31 = 0;
              if ((int)local_7234 < local_7230.ArrayNum) {
                uVar31 = ~local_7234 >> 0x1f;
              }
              local_7234 = uVar39;
              if ((uVar31 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              uVar32 = uVar32 + 1;
              local_7230.AllocatorInstance.Data[lVar33] = FVar2;
              pFVar22 = (FSoundFileWriter *)((longlong)&pFVar22->_padding_ + 2);
              uVar31 = local_71c8[0];
            } while ((int)uVar32 < (int)local_71c8[0]);
          }
          if ((uVar31 & 1) != 0) {
            lVar33 = (longlong)(int)local_7234;
            uVar32 = local_7234 + 1;
            uVar31 = 0;
            if ((int)local_7234 < local_7230.ArrayNum) {
              uVar31 = ~local_7234 >> 0x1f;
            }
            local_7234 = uVar32;
            if ((uVar31 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            local_7230.AllocatorInstance.Data[lVar33] = (FScriptContainerElement)0x0;
          }
          if (local_71d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_71d0.Data);
          }
          uVar29 = (ulonglong)local_71b8;
          pFVar41 = pFVar41 + 0x20;
        }
        if ((local_7208.Object == (ISoundFileWriter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        cVar15 = (**(code **)((longlong)*pIVar43 + 0x50))(pIVar43,&local_7230);
        if (cVar15 == '\0') {
          local_7008.HashSize = 0;
          if (local_7008.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_7008.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FRiffLabelChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FRiffLabelChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_7008.Elements);
          if (local_7230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7230.AllocatorInstance.Data);
          }
          goto LAB_14654de33;
        }
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        local_7008.HashSize = 0;
        if (local_7008.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_7008.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FRiffLabelChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FRiffLabelChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_7008.Elements);
        FVar23.Data = local_7230.AllocatorInstance.Data;
LAB_14654e21f:
        if (FVar23.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar23.Data);
        }
      }
      else if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        bVar13 = false;
        goto LAB_14654e6a4;
      }
      bVar13 = false;
    }
LAB_14654e6a4:
    local_7020 = 0;
    if (local_7028.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7028.Data);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_7068);
    pvVar18 = local_7140;
  }
  else {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    bVar13 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7208.SharedReferenceCount.ReferenceController);
  if (local_7150 != (void *)0x0) {
    FMemory::Free(local_7150);
  }
LAB_14654e6fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_71f0.SharedReferenceCount.ReferenceController);
  if (pvVar18 != (void *)0x0) {
    ::operator_delete(pvVar18,1);
  }
  return bVar13;
}

// EmptyLinkFunctionForGeneratedCodeAudioGenerator @ 146552c90

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGenerator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerClockHandle @ 146552ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerClockHandle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor @ 146552cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectEQ @ 146552cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectEQ(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectReverb @ 146552cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectReverb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeQuartzSubsystem @ 146552ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeQuartzSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundWaveScrubber @ 146552cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundWaveScrubber(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynthComponent @ 146552d00

void __cdecl EmptyLinkFunctionForGeneratedCodeSynthComponent(void)

{
  return;
}

// FOnSynthEnvelopeValue_DelegateWrapper @ 146553a30

void __cdecl
FOnSynthEnvelopeValue_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetDefaultMappingsForChannelNumber @ 146556910

void __cdecl
Audio::GetDefaultMappingsForChannelNumber
          (int param_1,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->ArrayNum != param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChannelMap.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0xf8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(param_1) {
  case 1:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 1;
    return;
  case 2:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    return;
  case 3:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    if ((param_2->ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 8) = 0xb;
    return;
  case 4:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    if ((param_2->ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 8) = 9;
    if ((param_2->ArrayNum < 4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0xc) = 10;
    return;
  case 5:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    if ((param_2->ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 8) = 4;
    if ((param_2->ArrayNum < 4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0xc) = 0xe;
    if ((param_2->ArrayNum < 5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x10) = 0xf;
    return;
  case 6:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    if ((param_2->ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 8) = 4;
    if ((param_2->ArrayNum < 4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0xc) = 0xb;
    if ((param_2->ArrayNum < 5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x10) = 0xe;
    if ((param_2->ArrayNum < 6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x14) = 0xf;
    return;
  case 7:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    if ((param_2->ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 8) = 4;
    if ((param_2->ArrayNum < 4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0xc) = 0xb;
    if ((param_2->ArrayNum < 5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x10) = 0xe;
    if ((param_2->ArrayNum < 6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x14) = 0xf;
    if ((param_2->ArrayNum < 7) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x18) = 8;
    return;
  case 8:
    if ((param_2->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_2->AllocatorInstance).Data = 2;
    if ((param_2->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 4) = 3;
    if ((param_2->ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 8) = 4;
    if ((param_2->ArrayNum < 4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0xc) = 0xb;
    if ((param_2->ArrayNum < 5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x10) = 9;
    if ((param_2->ArrayNum < 6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x14) = 10;
    if ((param_2->ArrayNum < 7) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x18) = 0xe;
    if ((param_2->ArrayNum < 8) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)((param_2->AllocatorInstance).Data + 0x1c) = 0xf;
  }
  return;
}

// GetExtractorBandType @ 146557bd0

EBandType __cdecl
Audio::MixerSubmixIntrinsics::GetExtractorBandType(EFFTPeakInterpolationMethod param_1)

{
  if (param_1 == NearestNeighbor) {
    return NearestNeighbor;
  }
  if (param_1 != Linear) {
    if (param_1 != Quadratic) {
      return ConstantQ;
    }
    return Quadratic;
  }
  return Lerp;
}

// GetExtractorMetric @ 146557c00

EMetric __cdecl Audio::MixerSubmixIntrinsics::GetExtractorMetric(EAudioSpectrumType param_1)

{
  if (param_1 == MagnitudeSpectrum) {
    return Magnitude;
  }
  if (param_1 != PowerSpectrum) {
    return Decibel;
  }
  return Power;
}

// GetNumSamples @ 146559370

uint __cdecl
Audio::SoundFileUtils::GetNumSamples(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  FSoundDataReader *pFVar6;
  FSoundDataReader *pFVar7;
  ISoundFileReader *pIVar8;
  TSharedPtr<Audio::ISoundFileReader,1> local_48;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  pvVar5 = ::operator_new(1);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
    local_48.Object = (ISoundFileReader *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar6 = ::operator_new(0x60);
    pFVar7 = (FSoundDataReader *)0x0;
    if (pFVar6 != (FSoundDataReader *)0x0) {
      pFVar6->CurrentIndexBytes = 0;
      pFVar6->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileParser__;
      pFVar6->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileReader__;
      (pFVar6->State).Counter = 0;
      (pFVar6->CurrentError).Counter = 0;
      (pFVar6->Description).NumFrames = 0;
      (pFVar6->Description).SampleRate = 0;
      (pFVar6->Description).NumChannels = 0;
      (pFVar6->Description).FormatFlags = 0;
      (pFVar6->Description).NumSections = 0;
      (pFVar6->Description).bIsSeekable = 0;
      (pFVar6->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->ChannelMap).ArrayNum = 0;
      (pFVar6->ChannelMap).ArrayMax = 0;
      pFVar7 = pFVar6;
    }
    TSharedPtr<Audio::ISoundFileReader,1>::
    TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader>(&local_48,pFVar7);
    pIVar8 = local_48.Object;
    if (local_48.Object != (ISoundFileReader *)0x0) goto LAB_14655943e;
  }
  pIVar8 = local_48.Object;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
LAB_14655943e:
  uVar4 = 0;
  cVar3 = (**(code **)((longlong)*pIVar8 + 8))(pIVar8,param_1);
  if (cVar3 == '\0') {
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    if ((pIVar8 == (ISoundFileReader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    (**(code **)((longlong)*pIVar8 + 0x48))(pIVar8,&local_28,&local_38);
    if ((pIVar8 == (ISoundFileReader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8);
    uVar4 = (int)local_28 * local_20._4_4_;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (pvVar5 != (void *)0x0) {
    ::operator_delete(pvVar5,1);
  }
  return uVar4;
}

// GetOptionalChunksInternal @ 1465595e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
Audio::GetOptionalChunksInternal
          (SoundFileHandleOpaque *param_1,
          TArray<Audio::FSoundFileChunkInfoWrapper,TSizedDefaultAllocator<32>_> *param_2,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_3)

{
  uint uVar1;
  ForElementType<FSetElementId> FVar2;
  FSoundFileChunkInfo *pFVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  Type TVar7;
  int iVar8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  SoundFileChunkIteratorOpaque *pSVar11;
  void *_Dst;
  ForElementType<FSetElementId> FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [4];
  uint local_124;
  FScriptContainerElement *local_120;
  SoundFileHandleOpaque *local_118;
  FString local_110;
  FSoundFileChunkInfo local_f8;
  void *local_a8 [2];
  FSoundFileChunkInfo local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_118 = param_1;
  if ((((SoundFileGetChunkIterator ==
         (_func___cdecl_SoundFileChunkIteratorOpaque_ptr_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr
          *)0x0) ||
       (SoundFileGetChunkSize ==
        (_func___cdecl_int_SoundFileChunkIteratorOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0)) ||
      (SoundFileGetChunkData ==
       (_func___cdecl_int_SoundFileChunkIteratorOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0)) ||
     (SoundFileNextChunkIterator ==
      (_func___cdecl_SoundFileChunkIteratorOpaque_ptr_SoundFileChunkIteratorOpaque_ptr *)0x0)) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    pTVar9 = FWaveModInfo::GetOptionalWaveChunkIds();
    pFVar16 = (pTVar9->AllocatorInstance).Data;
    local_124 = pTVar9->ArrayNum;
    uVar10 = (ulonglong)(int)local_124;
    pFVar14 = pFVar16 + uVar10 * 4;
    local_120 = pFVar14;
    while( true ) {
      if (pTVar9->ArrayNum != (int)uVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if (pFVar16 == pFVar14) break;
      uVar1 = *(uint *)pFVar16;
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar2 = (param_3->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar2;
        }
        iVar8 = *(int *)((longlong)FVar12 + (ulonglong)(param_3->HashSize - 1U & uVar1) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar8 * 0xc) == uVar1)
            goto LAB_146559916;
            iVar8 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      local_98.ChunkIdSize = 5;
      local_98.DataLength = 0;
      local_98.DataPtr = (void *)0x0;
      local_98.ChunkId[4] = '\0';
      local_98.ChunkId._0_4_ = uVar1;
      pSVar11 = (*SoundFileGetChunkIterator)(param_1,&local_98);
      while (pSVar11 != (SoundFileChunkIteratorOpaque *)0x0) {
        local_f8.ChunkIdSize = 0;
        local_f8.DataLength = 0;
        local_f8.DataPtr = (void *)0x0;
        local_a8[0] = (void *)0x0;
        iVar8 = (*SoundFileGetChunkSize)(pSVar11,&local_f8);
        if (iVar8 == 0) {
          uVar10 = (ulonglong)local_f8.DataLength;
          if (local_f8.DataLength != 0) {
            if (local_f8.DataPtr == (void *)0x0) {
              _Dst = operator_new__(uVar10);
              if (_Dst == (void *)0x0) {
                _Dst = (void *)0x0;
              }
              else {
                memset(_Dst,0,uVar10);
              }
              pvVar5 = local_a8[0];
              local_a8[0] = _Dst;
              operator_delete__(pvVar5);
              operator_delete__((void *)0x0);
              local_f8.DataPtr = local_a8[0];
            }
            else {
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3078625243443494700>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFile.h"
                                 ,0xd4,"ChunkInfo.DataPtr == nullptr");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                TVar7 = (*pcVar4)();
                return TVar7;
              }
            }
            iVar8 = (*SoundFileGetChunkData)(pSVar11,&local_f8);
            if (iVar8 != 0) {
              if (1 < (byte)LogAudioMixer._0_1_) {
                ::FString::FString(&local_110,local_98.ChunkId);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
              }
              operator_delete__(local_a8[0]);
              return INVALID_CHUNK;
            }
            pFVar3 = (FSoundFileChunkInfo *)(param_2->AllocatorInstance).Data;
            if (((pFVar3 <= &local_f8) &&
                (&local_f8 <
                 (FSoundFileChunkInfo *)((longlong)pFVar3 + (longlong)param_2->ArrayMax * 0x58))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              TVar7 = (*pcVar4)();
              return TVar7;
            }
            iVar8 = param_2->ArrayNum;
            if (iVar8 == param_2->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x858,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            lVar13 = (longlong)iVar8 * 0x58;
            pFVar14 = (param_2->AllocatorInstance).Data;
            param_2->ArrayNum = iVar8 + 1;
            *(undefined8 *)(pFVar14 + lVar13 + 0x40) = 0;
            pFVar15 = pFVar14 + lVar13 + 0x50;
            *(undefined8 *)(pFVar14 + lVar13 + 0x48) = 0;
            *(undefined8 *)pFVar15 = 0;
            if (local_f8.ChunkIdSize != 0) {
              *(undefined8 *)(pFVar14 + lVar13) = local_f8.ChunkId._0_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 8) = local_f8.ChunkId._8_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 0x10) = local_f8.ChunkId._16_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 0x10 + 8) = local_f8.ChunkId._24_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 0x20) = local_f8.ChunkId._32_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 0x20 + 8) = local_f8.ChunkId._40_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 0x30) = local_f8.ChunkId._48_8_;
              *(undefined8 *)(pFVar14 + lVar13 + 0x30 + 8) = local_f8.ChunkId._56_8_;
            }
            *(uint *)(pFVar14 + lVar13 + 0x40) = local_f8.ChunkIdSize;
            *(uint *)(pFVar14 + lVar13 + 0x44) = local_f8.DataLength;
            *(void **)(pFVar14 + lVar13 + 0x48) = local_f8.DataPtr;
            if (pFVar15 != (FScriptContainerElement *)local_a8) {
              *(void **)pFVar15 = local_a8[0];
              local_a8[0] = (void *)0x0;
              operator_delete__((void *)0x0);
            }
          }
        }
        pSVar11 = (*SoundFileNextChunkIterator)(pSVar11);
        operator_delete__(local_a8[0]);
        pFVar14 = local_120;
        param_1 = local_118;
      }
LAB_146559916:
      uVar10 = (ulonglong)local_124;
      pFVar16 = pFVar16 + 4;
    }
  }
  return NONE;
}

// GetSoundDesriptionInternal @ 14655ab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
Audio::GetSoundDesriptionInternal
          (SoundFileHandleOpaque **param_1,FString *param_2,FSoundFileDescription *param_3,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  _func___cdecl_SoundFileHandleOpaque_ptr_char_ptr_int_FSoundFileDescription_ptr *p_Var3;
  bool bVar4;
  Type TVar5;
  int iVar6;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar7;
  SoundFileHandleOpaque *pSVar8;
  char *pcVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  Type local_104;
  FString local_100;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  *param_1 = (SoundFileHandleOpaque *)0x0;
  bVar4 = FPaths::FileExists(param_2);
  p_Var3 = SoundFileOpen;
  if (bVar4) {
    if (SoundFileOpen ==
        (_func___cdecl_SoundFileHandleOpaque_ptr_char_ptr_int_FSoundFileDescription_ptr *)0x0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      *param_1 = (SoundFileHandleOpaque *)0x0;
    }
    else {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pTVar7 = StringCast<char,128,wchar_t>(&local_e8,pwVar10);
      pSVar8 = (*p_Var3)(pTVar7->Ptr,0x10,param_3);
      *param_1 = pSVar8;
      if ((void *)local_e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._padding_);
        pSVar8 = *param_1;
      }
      if (pSVar8 != (SoundFileHandleOpaque *)0x0) {
        iVar2 = param_3->NumChannels;
        local_104 = INVALID;
        TArray<enum_Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>::Init
                  (param_4,&local_104,iVar2);
        if (SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0)
        {
          if (1 < (byte)LogAudioMixer._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          }
        }
        else {
          iVar6 = (*SoundFileCommand)(*param_1,0x1100,(param_4->AllocatorInstance).Data,iVar2 * 4);
          if (iVar6 != 0) {
            pFVar11 = (param_4->AllocatorInstance).Data;
            iVar6 = param_4->ArrayNum;
            pFVar1 = pFVar11 + (longlong)iVar6 * 4;
            while( true ) {
              if (param_4->ArrayNum != iVar6) {
                `TCheckedPointerIterator<enum_Audio::ESoundFileChannelMap::Type,int,0>::operator!='
                ::__l2::<lambda_1>::operator()(local_108);
              }
              if (pFVar11 == pFVar1) {
                return NONE;
              }
              if (*(int *)pFVar11 == 0) break;
              pFVar11 = pFVar11 + 4;
            }
          }
        }
        GetDefaultMappingsForChannelNumber(iVar2,param_4);
        return NONE;
      }
    }
    if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
      TVar5 = INVALID_DATA;
    }
    else {
      pcVar9 = (*SoundFileStrError)((SoundFileHandleOpaque *)0x0);
      ::FString::FString(&local_100,pcVar9);
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      TVar5 = FAILED_TO_OPEN;
    }
  }
  else {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    TVar5 = FILE_DOESNT_EXIST;
  }
  return TVar5;
}

// GetSpectrumAnalyzerFFTSize @ 14655b410

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

EFFTSize __cdecl Audio::MixerSubmixIntrinsics::GetSpectrumAnalyzerFFTSize(EFFTSize param_1)

{
  switch(param_1) {
  default:
    return Default;
  case Min:
    return Min_64;
  case Small:
    return Small_256;
  case Large:
    return Large_1024;
  case VeryLarge:
    return VeryLarge_2048;
  case Max:
    return TestLarge_4096;
  }
}

// GetWindowType @ 14655c330

EWindowType __cdecl Audio::MixerSubmixIntrinsics::GetWindowType(EFFTWindowType param_1)

{
  if (param_1 != None) {
    if (param_1 == Hamming) {
      return Hamming;
    }
    if (param_1 == Hann) {
      return Hann;
    }
    if (param_1 == Blackman) {
      return Blackman;
    }
  }
  return None;
}

// InitSoundFileIOManager @ 14655f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Audio::SoundFileUtils::InitSoundFileIOManager(void)

{
  SoundFileDllHandle = (void *)0x0;
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_to_load__1512e7660,
               (FLogCategoryBase *)&LogAudioMixer);
  }
  return false;
}

// IsEqual @ 146561120

bool __cdecl IsEqual(FSubmixEffectSubmixEQSettings *param_1,FSubmixEffectSubmixEQSettings *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  iVar11 = (param_2->EQBands).ArrayNum;
  if ((param_1->EQBands).ArrayNum == iVar11) {
    uVar10 = 0;
    if (0 < iVar11) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar11) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
        }
        pFVar1 = (param_2->EQBands).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar10 < (param_1->EQBands).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
        }
        pFVar2 = (param_1->EQBands).AllocatorInstance.Data;
        if ((((((*(uint *)(pFVar2 + lVar9 + 0xc) ^ *(uint *)(pFVar1 + lVar9 + 0xc)) & 1) != 0) ||
             (fVar4 < (float)((uint)(*(float *)(pFVar1 + lVar9 + 4) - *(float *)(pFVar2 + lVar9 + 4)
                                    ) & uVar5))) ||
            (fVar4 < (float)((uint)(*(float *)(pFVar1 + lVar9) - *(float *)(pFVar2 + lVar9)) & uVar5
                            ))) ||
           (fVar4 < (float)((uint)(*(float *)(pFVar1 + lVar9 + 8) - *(float *)(pFVar2 + lVar9 + 8))
                           & uVar5))) goto LAB_146561270;
        iVar11 = (param_2->EQBands).ArrayNum;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar10 < iVar11);
    }
    bVar6 = true;
  }
  else {
LAB_146561270:
    bVar6 = false;
  }
  return bVar6;
}

// OnSoundFileGetLengthBytes @ 146565d80

long64 __cdecl Audio::OnSoundFileGetLengthBytes(void *param_1)

{
  long64 local_res8 [4];
  
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_1 + 8))(param_1,local_res8);
  return local_res8[0];
}

// OnSoundFileReadBytes @ 146565db0

long64 __cdecl Audio::OnSoundFileReadBytes(void *param_1,long64 param_2,void *param_3)

{
  long64 local_res18 [2];
  
  local_res18[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x18))(param_3,param_1,param_2,local_res18);
  return local_res18[0];
}

// OnSoundFileSeekBytes @ 146565df0

long64 __cdecl Audio::OnSoundFileSeekBytes(long64 param_1,int param_2,void *param_3)

{
  long64 local_res18 [2];
  
  local_res18[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x10))(param_3,param_1,param_2,local_res18);
  return local_res18[0];
}

// OnSoundFileTell @ 146565e30

long64 __cdecl Audio::OnSoundFileTell(void *param_1)

{
  long64 local_res8 [4];
  
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x28))(param_1,local_res8);
  return local_res8[0];
}

// OnSoundFileWriteBytes @ 146565e60

long64 __cdecl Audio::OnSoundFileWriteBytes(void *param_1,long64 param_2,void *param_3)

{
  long64 local_res18 [2];
  
  local_res18[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x20))(param_3,param_1,param_2,local_res18);
  return local_res18[0];
}

// ShutdownSoundFileIOManager @ 146576740

bool __cdecl Audio::SoundFileUtils::ShutdownSoundFileIOManager(void)

{
  if (SoundFileDllHandle != (void *)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(SoundFileDllHandle);
    SoundFileDllHandle = (void *)0x0;
    SoundFileOpen =
         (_func___cdecl_SoundFileHandleOpaque_ptr_char_ptr_int_FSoundFileDescription_ptr *)0x0;
    SoundFileOpenVirtual =
         (_func___cdecl_SoundFileHandleOpaque_ptr_FVirtualSoundFileCallbackInfo_ptr_int_FSoundFileDescription_ptr_void_ptr
          *)0x0;
    SoundFileClose = (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0;
    SoundFileError = (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0;
    SoundFileStrError = (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0;
    SoundFileErrorNumber = (_func___cdecl_char_ptr_int *)0x0;
    SoundFileCommand = (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0;
    SoundFileFormatCheck = (_func___cdecl_int_FSoundFileDescription_ptr *)0x0;
    SoundFileSeek = (_func___cdecl_long64_SoundFileHandleOpaque_ptr_long64_int *)0x0;
    SoundFileGetVersion = (_func___cdecl_char_ptr *)0x0;
    SoundFileReadFramesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileReadFramesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileWriteFramesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileWriteFramesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileReadSamplesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileReadSamplesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileWriteSamplesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileWriteSamplesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileGetChunkSize =
         (_func___cdecl_int_SoundFileChunkIteratorOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0;
    SoundFileGetChunkData =
         (_func___cdecl_int_SoundFileChunkIteratorOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0;
    SoundFileGetChunkIterator =
         (_func___cdecl_SoundFileChunkIteratorOpaque_ptr_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr
          *)0x0;
    SoundFileNextChunkIterator =
         (_func___cdecl_SoundFileChunkIteratorOpaque_ptr_SoundFileChunkIteratorOpaque_ptr *)0x0;
    SoundFileSetChunk = (_func___cdecl_int_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0;
  }
  return true;
}

// SoundFileIOManagerInit @ 146576810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Audio::SoundFileIOManagerInit(void)

{
  SoundFileDllHandle = (void *)0x0;
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_to_load__1512e7660,
               (FLogCategoryBase *)&LogAudioMixer);
  }
  return false;
}

// SoundFileIOManagerShutdown @ 146576850

bool __cdecl Audio::SoundFileIOManagerShutdown(void)

{
  if (SoundFileDllHandle != (void *)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(SoundFileDllHandle);
    SoundFileDllHandle = (void *)0x0;
    SoundFileOpen =
         (_func___cdecl_SoundFileHandleOpaque_ptr_char_ptr_int_FSoundFileDescription_ptr *)0x0;
    SoundFileOpenVirtual =
         (_func___cdecl_SoundFileHandleOpaque_ptr_FVirtualSoundFileCallbackInfo_ptr_int_FSoundFileDescription_ptr_void_ptr
          *)0x0;
    SoundFileClose = (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0;
    SoundFileError = (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0;
    SoundFileStrError = (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0;
    SoundFileErrorNumber = (_func___cdecl_char_ptr_int *)0x0;
    SoundFileCommand = (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0;
    SoundFileFormatCheck = (_func___cdecl_int_FSoundFileDescription_ptr *)0x0;
    SoundFileSeek = (_func___cdecl_long64_SoundFileHandleOpaque_ptr_long64_int *)0x0;
    SoundFileGetVersion = (_func___cdecl_char_ptr *)0x0;
    SoundFileReadFramesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileReadFramesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileWriteFramesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileWriteFramesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileReadSamplesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileReadSamplesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileWriteSamplesFloat =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0;
    SoundFileWriteSamplesDouble =
         (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0;
    SoundFileGetChunkSize =
         (_func___cdecl_int_SoundFileChunkIteratorOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0;
    SoundFileGetChunkData =
         (_func___cdecl_int_SoundFileChunkIteratorOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0;
    SoundFileGetChunkIterator =
         (_func___cdecl_SoundFileChunkIteratorOpaque_ptr_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr
          *)0x0;
    SoundFileNextChunkIterator =
         (_func___cdecl_SoundFileChunkIteratorOpaque_ptr_SoundFileChunkIteratorOpaque_ptr *)0x0;
    SoundFileSetChunk = (_func___cdecl_int_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0;
  }
  return true;
}

// WriteByteArrayChunkInternal @ 14657d100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
Audio::WriteByteArrayChunkInternal
          (SoundFileHandleOpaque *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  Type TVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  FString local_98;
  FSoundFileChunkInfo local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0) ||
     (SoundFileSetChunk ==
      (_func___cdecl_int_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0)) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    TVar7 = INVALID_STATE;
  }
  else {
    if ((param_2->ArrayNum < 9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSoundFileChunk.Num() > 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                           ,0x1e9,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar7 = (*pcVar5)();
      return TVar7;
    }
    pFVar4 = (param_2->AllocatorInstance).Data;
    if ((pFVar4 == (FScriptContainerElement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SoundFileChunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                           ,0x1eb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar7 = (*pcVar5)();
      return TVar7;
    }
    if (param_2->ArrayNum < 1) {
      local_a8 = 0;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    local_88.ChunkId[0] = *(char *)(param_2->AllocatorInstance).Data;
    if (param_2->ArrayNum < 2) {
      local_a8 = 1;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    local_88.ChunkId[1] = *(char *)((param_2->AllocatorInstance).Data + 1);
    if (param_2->ArrayNum < 3) {
      local_a8 = 2;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    local_88.ChunkId[2] = *(char *)((param_2->AllocatorInstance).Data + 2);
    if (param_2->ArrayNum < 4) {
      local_a8 = 3;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    local_88.ChunkId[3] = *(char *)((param_2->AllocatorInstance).Data + 3);
    local_88.ChunkIdSize = 4;
    if (param_2->ArrayNum < 5) {
      local_a8 = 4;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    FVar1 = (param_2->AllocatorInstance).Data[4];
    if (param_2->ArrayNum < 6) {
      local_a8 = 5;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    FVar2 = (param_2->AllocatorInstance).Data[5];
    if (param_2->ArrayNum < 7) {
      local_a8 = 6;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    FVar3 = (param_2->AllocatorInstance).Data[6];
    if (param_2->ArrayNum < 8) {
      local_a8 = 7;
      local_a0 = (longlong)param_2->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar7 = (*pcVar5)();
        return TVar7;
      }
    }
    local_88.DataPtr = pFVar4 + 8;
    local_88.DataLength =
         CONCAT13((param_2->AllocatorInstance).Data[7],CONCAT12(FVar3,CONCAT11(FVar2,FVar1)));
    iVar8 = (*SoundFileSetChunk)(param_1,&local_88);
    if (iVar8 == 0) {
      if (6 < (byte)LogAudioMixer._0_1_) {
        ::FString::FString(&local_98,local_88.ChunkId);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      (*SoundFileCommand)(param_1,0x1060,(void *)0x0,0);
      DestructItems<Audio::FSoundFileChunkInfoWrapper,int>((FSoundFileChunkInfoWrapper *)0x0,0);
      TVar7 = NONE;
    }
    else {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      DestructItems<Audio::FSoundFileChunkInfoWrapper,int>((FSoundFileChunkInfoWrapper *)0x0,0);
      TVar7 = INVALID_STATE;
    }
  }
  return TVar7;
}

// WriteUInt32ToByteArray @ 14657da10

void __cdecl
Audio::SoundFileUtils::WriteUInt32ToByteArray
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (param_1->ArrayNum < *param_2 + 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutByteArray.Num() >= InOutIndex + 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIO.cpp"
                       ,0xe9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3 >> 8,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3 >> 0x10,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3 >> 0x18,0);
  return;
}

// Z_Construct_UClass_UAudioGenerator_NoRegister @ 14657dbf0

UClass * __cdecl Z_Construct_UClass_UAudioGenerator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioGenerator",
               &Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton,
               UAudioGenerator::StaticRegisterNativesUAudioGenerator,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGenerator>,
               InternalVTableHelperCtorCaller<UAudioGenerator>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton;
}

// Z_Construct_UClass_UQuartzSubsystem_NoRegister @ 14657dca0

UClass * __cdecl Z_Construct_UClass_UQuartzSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"QuartzSubsystem",
               &Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton,
               UQuartzSubsystem::StaticRegisterNativesUQuartzSubsystem,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UQuartzSubsystem>,
               InternalVTableHelperCtorCaller<UQuartzSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UScrubbedSound_NoRegister @ 14657dd60

UClass * __cdecl Z_Construct_UClass_UScrubbedSound_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"ScrubbedSound",
               &Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton,
               UScrubbedSound::StaticRegisterNativesUScrubbedSound,0x440,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UScrubbedSound>,InternalVTableHelperCtorCaller<UScrubbedSound>,
               local_res8,USoundWave::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister @ 14657de20

UClass * __cdecl Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton,
               USubmixEffectDynamicsProcessorPreset::
               StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDynamicsProcessorPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister @ 14657dee0

UClass * __cdecl Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton,
               USubmixEffectReverbPreset::StaticRegisterNativesUSubmixEffectReverbPreset,0x110,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectReverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton;
}

// Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister @ 14657dfa0

UClass * __cdecl Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectSubmixEQPreset",
               &Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton,
               USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubmixEffectSubmixEQPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectSubmixEQPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CVarBypassAllSubmixEffects'' @ 1503dcb30

void __cdecl _dynamic_atexit_destructor_for__CVarBypassAllSubmixEffects__(void)

{
  CVarBypassAllSubmixEffects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBypassAllSubmixEffects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBypassDynamicsProcessor'' @ 1503dcb50

void __cdecl _dynamic_atexit_destructor_for__CVarBypassDynamicsProcessor__(void)

{
  CVarBypassDynamicsProcessor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBypassDynamicsProcessor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableQuadReverbCVarFast'' @ 1503dcb70

void __cdecl _dynamic_atexit_destructor_for__CVarDisableQuadReverbCVarFast__(void)

{
  CVarDisableQuadReverbCVarFast._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableQuadReverbCVarFast);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableSubmixReverb'' @ 1503dcb90

void __cdecl _dynamic_atexit_destructor_for__CVarDisableSubmixReverb__(void)

{
  CVarDisableSubmixReverb._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableSubmixReverb);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHeadlessClockSampleRate'' @ 1503dcbb0

void __cdecl _dynamic_atexit_destructor_for__CVarHeadlessClockSampleRate__(void)

{
  CVarHeadlessClockSampleRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHeadlessClockSampleRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogSubmixEnablement'' @ 1503dcbd0

void __cdecl _dynamic_atexit_destructor_for__CVarLogSubmixEnablement__(void)

{
  CVarLogSubmixEnablement._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogSubmixEnablement);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxQuartzSubscribersToUpdatePerTick'' @ 1503dcbf0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxQuartzSubscribersToUpdatePerTick__(void)

{
  CVarMaxQuartzSubscribersToUpdatePerTick._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxQuartzSubscribersToUpdatePerTick);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecoverRecordingOnShutdown'' @ 1503dcc10

void __cdecl _dynamic_atexit_destructor_for__CVarRecoverRecordingOnShutdown__(void)

{
  CVarRecoverRecordingOnShutdown._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecoverRecordingOnShutdown);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReverbStereoFlipForQuadFast'' @ 1503dcc30

void __cdecl _dynamic_atexit_destructor_for__CVarReverbStereoFlipForQuadFast__(void)

{
  CVarReverbStereoFlipForQuadFast._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReverbStereoFlipForQuadFast);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimulateNoAudioDevice'' @ 1503dcc50

void __cdecl _dynamic_atexit_destructor_for__CVarSimulateNoAudioDevice__(void)

{
  CVarSimulateNoAudioDevice._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimulateNoAudioDevice);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioRenderScheduler'' @ 1503dcc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioRenderScheduler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioRenderScheduler);
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter149'' @ 1503dcc90

void __cdecl
`FQuartzTickableObjectsManager::IsTickable'::__l2::
_dynamic_atexit_destructor_for____TraceCounter149__(void)

{
  if ((__TraceCounter149.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter149.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter223'' @ 1503dccb0

void __cdecl
`UQuartzSubsystem::IsTickable'::__l2::_dynamic_atexit_destructor_for____TraceCounter223__(void)

{
  if ((__TraceCounter223.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter223.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter497'' @ 1503dccd0

void __cdecl
`Audio::FQuartzClockManager::TickClocks'::__l2::_dynamic_atexit_destructor_for____TraceCounter497__
          (void)

{
  if ((__TraceCounter497.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter497.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter498'' @ 1503dccf0

void __cdecl
`Audio::FQuartzClockManager::TickClocks'::__l2::_dynamic_atexit_destructor_for____TraceCounter498__
          (void)

{
  if ((__TraceCounter498.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter498.CounterName);
    return;
  }
  return;
}

