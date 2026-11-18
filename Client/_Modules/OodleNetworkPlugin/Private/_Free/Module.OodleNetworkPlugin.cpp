// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 141

// `dynamic_initializer_for_'CVarOodleClientEnableMode'' @ 141416310

void __cdecl _dynamic_initializer_for__CVarOodleClientEnableMode__(void)

{
  FString local_18;
  
  FString::FString(&local_18,"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarOodleClientEnableMode,L"net.OodleClientEnableMode",&local_18,
             L"When to enable compression on the client (overrides the \'ClientEnableMode\' .ini setting)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarOodleClientEnableMode__);
  return;
}

// `dynamic_initializer_for_'CVarOodleMinSizeForCompression'' @ 141416380

void __cdecl _dynamic_initializer_for__CVarOodleMinSizeForCompression__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOodleMinSizeForCompression,L"net.OodleMinSizeForCompression",
             &GOodleMinSizeForCompression,
             L"The minimum size an outgoing packet must be, for it to be considered for compression (does not count overhead of handler components which process packets after Oodle)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOodleMinSizeForCompression__);
  return;
}

// `dynamic_initializer_for_'CVarOodleNetworkTimeguardLimit'' @ 1414163d0

void __cdecl UE::Oodle::_dynamic_initializer_for__CVarOodleNetworkTimeguardLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOodleNetworkTimeguardLimit,L"net.OodleNetwork.TimeGuardLimit",
             &GOodleTimeguardLimit,
             L"Sets the maximum number of OodleNetworkHandlerComponent timeguard logs.",0);
  atexit(_dynamic_atexit_destructor_for__CVarOodleNetworkTimeguardLimit__);
  return;
}

// `dynamic_initializer_for_'CVarOodleNetworkTimeguardThresholdMS'' @ 141416420

void __cdecl UE::Oodle::_dynamic_initializer_for__CVarOodleNetworkTimeguardThresholdMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOodleNetworkTimeguardThresholdMS,L"net.OodleNetwork.TimeGuardThresholdMS",
             &GOodleTimeguardThresholdMS,
             L"Threshold in milliseconds for the OodleNetworkHandlerComponent timeguard.",0);
  atexit(_dynamic_atexit_destructor_for__CVarOodleNetworkTimeguardThresholdMS__);
  return;
}

// `dynamic_initializer_for_'CVarOodleServerEnableMode'' @ 141416470

void __cdecl _dynamic_initializer_for__CVarOodleServerEnableMode__(void)

{
  FString local_18;
  
  FString::FString(&local_18,"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarOodleServerEnableMode,L"net.OodleServerEnableMode",&local_18,
             L"When to enable compression on the server (overrides the \'ServerEnableMode\' .ini setting)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarOodleServerEnableMode__);
  return;
}

// `dynamic_initializer_for_'DictionaryMap'' @ 1414164e0

void __cdecl _dynamic_initializer_for__DictionaryMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__DictionaryMap__);
  return;
}

// `dynamic_initializer_for_'GOodleContentDir'' @ 141416500

void __cdecl _dynamic_initializer_for__GOodleContentDir__(void)

{
  FString::FString(&GOodleContentDir,L"");
  atexit(_dynamic_atexit_destructor_for__GOodleContentDir__);
  return;
}

// `dynamic_initializer_for_'GOodleSaveDir'' @ 141416530

void __cdecl _dynamic_initializer_for__GOodleSaveDir__(void)

{
  FString::FString(&GOodleSaveDir,L"");
  atexit(_dynamic_atexit_destructor_for__GOodleSaveDir__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOodleNetworkHandlerComponent'' @ 141416560

void __cdecl _dynamic_initializer_for__ModuleRegistrantOodleNetworkHandlerComponent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OodleNetworkHandlerComponent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OodleNetworkHandlerComponent",0x1c);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOodleComponentModuleInterface>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'OodleComponentList'' @ 1414165b0

void __cdecl _dynamic_initializer_for__OodleComponentList__(void)

{
  atexit(_dynamic_atexit_destructor_for__OodleComponentList__);
  return;
}

// `dynamic_initializer_for_'OodleExecRegistration'' @ 1414165d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__OodleExecRegistration__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(&OodleExecRegistration,OodleExec);
  atexit(_dynamic_atexit_destructor_for__OodleExecRegistration__);
  return;
}

// `dynamic_initializer_for_'OodleNetworkHandlerComponentLog'' @ 141416600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__OodleNetworkHandlerComponentLog__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&OodleNetworkHandlerComponentLog,L"OodleNetworkHandlerComponentLog"
             ,Log,All);
  atexit(_dynamic_atexit_destructor_for__OodleNetworkHandlerComponentLog__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_CompressFailSavings'' @ 141416640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_CompressFailSavings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_CompressFailSavings ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_CompressFailSavings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_CompressFailSavings,*pFVar1,
               L"Oodle Compress Fail Num (0% savings)","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_CompressFailSize'' @ 1414166d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_CompressFailSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_CompressFailSize ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_CompressFailSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_CompressFailSize,*pFVar1,
               L"Oodle Compress Fail Num (size limit)","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_DictionaryBytes'' @ 141416760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_DictionaryBytes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_DictionaryBytes ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_DictionaryBytes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_DictionaryBytes,*pFVar1,
               L"Oodle Dictionary Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_DictionaryCount'' @ 1414167f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_DictionaryCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_DictionaryCount ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_DictionaryCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_DictionaryCount,*pFVar1,
               L"Oodle Dictionary Count","STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork"
               ,true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_InCompressed'' @ 141416880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_InCompressed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_InCompressed == (FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_InCompressed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCompressed,*pFVar1,
               L"Oodle In Rate Compressed (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_InDecompressTime'' @ 141416910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_InDecompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_InDecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_InDecompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_InDecompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InDecompressTime,*pFVar1,
               L"Oodle In Decompress Time","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_InRaw'' @ 1414169a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_InRaw__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_InRaw == (FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_InRaw");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InRaw,*pFVar1,
               L"Oodle In Rate Raw (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_InSavings'' @ 141416a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_InSavings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_InSavings == (FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_InSavings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InSavings,*pFVar1,
               L"Oodle In Rate Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_InTotalSavings'' @ 141416ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_InTotalSavings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_InTotalSavings ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_InTotalSavings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InTotalSavings,*pFVar1,
               L"Oodle In Total Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_OutCompressTime'' @ 141416b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_OutCompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_OutCompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_OutCompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutCompressTime,*pFVar1,
               L"Oodle Out Compress Time","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_OutCompressed'' @ 141416be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_OutCompressed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_OutCompressed == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_OutCompressed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutCompressed,*pFVar1,
               L"Oodle Out Rate Compressed (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_OutRaw'' @ 141416c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_OutRaw__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_OutRaw == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_OutRaw");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutRaw,*pFVar1,
               L"Oodle Out Rate Raw (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_OutSavings'' @ 141416d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_OutSavings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_OutSavings == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_OutSavings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutSavings,*pFVar1,
               L"Oodle Out Rate Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_OutTotalSavings'' @ 141416d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_OutTotalSavings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_OutTotalSavings ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_OutTotalSavings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutTotalSavings,*pFVar1,
               L"Oodle Out Total Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
               L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_SharedBytes'' @ 141416e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_SharedBytes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_SharedBytes == (FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_SharedBytes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_SharedBytes,*pFVar1,
               L"Oodle Shared Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Oodle_StateBytes'' @ 141416eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Oodle_StateBytes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Oodle_StateBytes == (FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Oodle_StateBytes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_StateBytes,*pFVar1,
               L"Oodle State Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PacketReservedOodle'' @ 141416f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PacketReservedOodle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PacketReservedOodle == (FThreadSafeStaticStat<FStat_STAT_PacketReservedOodle>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PacketReservedOodle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedOodle,*pFVar1,
               L"Reserved Oodle (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h__Script_OodleNetworkHandlerComponent_231734951'' @ 141416fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h__Script_OodleNetworkHandlerComponent_231734951__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OodleNetworkHandlerComponent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h__Script_OodleNetworkHandlerComponent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h__Script_OodleNetworkHandlerComponent_52783000'' @ 141417010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h__Script_OodleNetworkHandlerComponent_52783000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OodleNetworkHandlerComponent",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h__Script_OodleNetworkHandlerComponent_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h__Script_OodleNetworkHandlerComponent_1442298826'' @ 141417060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h__Script_OodleNetworkHandlerComponent_1442298826__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OodleNetworkHandlerComponent",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h__Script_OodleNetworkHandlerComponent_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OodleNetworkHandlerComponent'' @ 1414170b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OodleNetworkHandlerComponent__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xec6d52e0;
  local_res8[0].DeclarationsHash = 0x2b342f45;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OodleNetworkHandlerComponent,
             L"/Script/OodleNetworkHandlerComponent",
             &Z_Registration_Info_UPackage__Script_OodleNetworkHandlerComponent,local_res8);
  return;
}

// Z_Construct_UPackage__Script_OodleNetworkHandlerComponent @ 14e2922d0

UPackage * __cdecl Z_Construct_UPackage__Script_OodleNetworkHandlerComponent(void)

{
  if (Z_Registration_Info_UPackage__Script_OodleNetworkHandlerComponent.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OodleNetworkHandlerComponent.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OodleNetworkHandlerComponent.OuterSingleton;
}

// Z_Construct_UClass_UOodleNetworkTrainerCommandlet @ 14e292310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOodleNetworkTrainerCommandlet(void)

{
  if (Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.OuterSingleton,
               &Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.OuterSingleton;
}

// NewProp_bCompressionTest_SetBit @ 14e292350

void __cdecl
Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bWriteV5Dictionaries_SetBit @ 14e292360

void __cdecl
Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewProp_bNoTrials_SetBit @ 14e292370

void __cdecl
Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// EOodleNetResult_StaticEnum @ 14e292380

UEnum * __cdecl EOodleNetResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
    Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult,
                       (UObject *)pUVar1,L"EOodleNetResult");
  }
  return Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e292770

void * __thiscall
FOodleComponentModuleInterface::_scalar_deleting_destructor_
          (FOodleComponentModuleInterface *this,uint param_1)

{
  *this = (FOodleComponentModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EOodleNetworkEnableMode_StaticEnum @ 14e292870

UEnum * __cdecl EOodleNetworkEnableMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
    Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode,
                       (UObject *)pUVar1,L"EOodleNetworkEnableMode");
  }
  return Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton;
}

// operator<<<unsigned_int> @ 14e292bb0

FArchive * __cdecl operator<<<unsigned_int>(FArchive *param_1,TRewritable<unsigned_int> *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  FArchive *pFVar6;
  
  if (param_2->Offset == 0) {
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x28))();
    param_2->Offset = uVar4;
  }
  else {
    uVar4 = param_2->Offset;
    uVar5 = (**(code **)(*(longlong *)param_1 + 0x28))();
    if (uVar4 != uVar5) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Offset == Ar.Tell()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Public\\OodleNetworkArchives.h"
                         ,0x73,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->Value);
  return param_1;
}

// AddElement<TSizedDefaultAllocator<32>,FString,signed_char> @ 14e292c80

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          schar *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%d");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,__int64> @ 14e292de0

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,__int64>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          long64 *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%lld");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// InternalConstructor<UOodleNetworkTrainerCommandlet> @ 14e293260

void __cdecl InternalConstructor<UOodleNetworkTrainerCommandlet>(FObjectInitializer *param_1)

{
  UCommandlet *this;
  
  this = (UCommandlet *)param_1->Obj;
  if (this != (UCommandlet *)0x0) {
    UCommandlet::UCommandlet(this,param_1);
    this->LogToConsole = 1;
    this->_padding_ = (longlong)&___7UOodleNetworkTrainerCommandlet__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x13;
    *(undefined4 *)&this[1]._padding_ = 0x400000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 3;
    *(undefined4 *)&this[1]._padding_ = 200;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UOodleNetworkTrainerCommandlet> @ 14e2932e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOodleNetworkTrainerCommandlet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCommandlet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOodleNetworkTrainerCommandlet::GetPrivateStaticClass();
  this = (UCommandlet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCommandlet *)0x0) {
    UCommandlet::UCommandlet(this,param_1);
    this->_padding_ = (longlong)&___7UOodleNetworkTrainerCommandlet__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EOodleNetResult> @ 14e293390

UEnum * __cdecl StaticEnum<enum_EOodleNetResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
    Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult,
                       (UObject *)pUVar1,L"EOodleNetResult");
  }
  return Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton;
}

// StaticEnum<enum_EOodleNetworkEnableMode> @ 14e2933d0

UEnum * __cdecl StaticEnum<enum_EOodleNetworkEnableMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
    Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode,
                       (UObject *)pUVar1,L"EOodleNetworkEnableMode");
  }
  return Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton;
}

// OodleNetworkHandlerComponent @ 14e293d30

OodleNetworkHandlerComponent * __thiscall
OodleNetworkHandlerComponent::OodleNetworkHandlerComponent(OodleNetworkHandlerComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  OodleNetworkHandlerComponent *pOVar4;
  longlong lVar5;
  FName local_res8 [4];
  OodleNetworkHandlerComponent *local_18 [2];
  
  pFVar3 = ::FName::FName(local_res8,L"OodleNetworkHandlerComponent");
  HandlerComponent::HandlerComponent((HandlerComponent *)this,*pFVar3);
  this->bEnableOodle = false;
  this->ServerEnableMode = AlwaysEnabled;
  this->InPacketLog = (FPacketCaptureArchive *)0x0;
  this->_padding_ = (longlong)&___7OodleNetworkHandlerComponent__6B_;
  (this->NetAnalyticsData).Object = (FOodleNetAnalyticsData *)0x0;
  (this->NetAnalyticsData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ServerDictionary).Object = (FOodleNetworkDictionary *)0x0;
  (this->ServerDictionary).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClientDictionary).Object = (FOodleNetworkDictionary *)0x0;
  (this->ClientDictionary).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OodleNetworkFaultHandler)._padding_ = 0;
  (this->OodleNetworkFaultHandler).FaultRecovery = (FNetConnectionFaultRecoveryBase *)0x0;
  this->OutPacketLog = (FPacketCaptureArchive *)0x0;
  this->bUseDictionaryIfPresent = false;
  this->bCaptureMode = false;
  this->bOodleNetworkAnalytics = false;
  this->bInitializedDictionaries = false;
  (this->OodleNetworkFaultHandler)._padding_ = (longlong)&___7FOodleNetworkFaultHandler__6B_;
  this->ClientEnableMode = AlwaysEnabled;
  (this->OodleNetworkFaultHandler).CounterIndex = -1;
  HandlerComponent::SetActive((HandlerComponent *)this,true);
  local_18[0] = this;
  if (((OodleComponentList.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       OodleComponentList.AllocatorInstance.Data + (longlong)OodleComponentList.ArrayMax * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pOVar4 = (OodleNetworkHandlerComponent *)(*pcVar1)();
    return pOVar4;
  }
  if (OodleComponentList.ArrayNum == OodleComponentList.ArrayMax) {
    OodleComponentList.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&OodleComponentList.AllocatorInstance,&OodleComponentList.ArrayMax);
  }
  lVar5 = (longlong)OodleComponentList.ArrayNum;
  OodleComponentList.ArrayNum = OodleComponentList.ArrayNum + 1;
  *(OodleNetworkHandlerComponent **)(OodleComponentList.AllocatorInstance.Data + lVar5 * 8) =
       local_18[0];
  return this;
}

// ~OodleNetworkHandlerComponent @ 14e294660

void __thiscall
OodleNetworkHandlerComponent::~OodleNetworkHandlerComponent(OodleNetworkHandlerComponent *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  longlong lVar4;
  OodleNetworkHandlerComponent *pOVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  OodleNetworkHandlerComponent *local_38 [2];
  
  this->_padding_ = (longlong)&___7OodleNetworkHandlerComponent__6B_;
  local_38[0] = this;
  if (((OodleComponentList.AllocatorInstance.Data <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       OodleComponentList.AllocatorInstance.Data + (longlong)OodleComponentList.ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2.Data = OodleComponentList.AllocatorInstance.Data;
  lVar4 = (longlong)OodleComponentList.ArrayNum;
  iVar9 = OodleComponentList.ArrayNum;
  if (OodleComponentList.ArrayNum != 0) {
    iVar9 = 0;
    bVar3 = *(OodleNetworkHandlerComponent **)OodleComponentList.AllocatorInstance.Data !=
            local_38[0];
    lVar6 = 0;
    pOVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (lVar4 <= lVar6) break;
      } while (bVar3 == (*(OodleNetworkHandlerComponent **)(FVar2.Data + lVar6 * 8) != pOVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar7) {
          memmove(FVar2.Data + (longlong)iVar9 * 8,FVar2.Data + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pOVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < lVar4);
  }
  OodleComponentList.ArrayNum = iVar9;
  FreePacketLogs(this);
  FreeDictionary(this,&this->ServerDictionary);
  FreeDictionary(this,&this->ClientDictionary);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClientDictionary).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ServerDictionary).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NetAnalyticsData).SharedReferenceCount.ReferenceController);
  HandlerComponent::~HandlerComponent((HandlerComponent *)this);
  return;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14e2949c0

/* [thunk]:public: virtual void * __ptr64 __cdecl FClientOodleNetAnalyticsData::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FClientOodleNetAnalyticsData::_vector_deleting_destructor__adjustor_32__
          (FClientOodleNetAnalyticsData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FClientOodleNetAnalyticsData *)&this[-1].field_0xa8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14e2949d0

/* [thunk]:public: virtual void * __ptr64 __cdecl FOodleNetAnalyticsData::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FOodleNetAnalyticsData::_vector_deleting_destructor__adjustor_32__
          (FOodleNetAnalyticsData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FOodleNetAnalyticsData *)&this[-1].field_0xa8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e2949e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FClientOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FClientOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294a20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOodleNetAnalyticsData,FNetAnalyticsDataDeleter,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294a60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOodleNetworkDictionary,SharedPointerInternals::DefaultDeleter<FOodleNetworkDictionary>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOodleNetworkDictionary,SharedPointerInternals::DefaultDeleter<FOodleNetworkDictionary>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294aa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<OodleNetworkHandlerComponent,SharedPointerInternals::DefaultDeleter<OodleNetworkHandlerComponent>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<OodleNetworkHandlerComponent,SharedPointerInternals::DefaultDeleter<OodleNetworkHandlerComponent>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294ae0

void * __thiscall
FClientOodleNetAnalyticsData::_scalar_deleting_destructor_
          (FClientOodleNetAnalyticsData *this,uint param_1)

{
  *(undefined ***)&this->field_0x20 = &___7FVirtualDestructor__6B_;
  FNetAnalyticsData::~FNetAnalyticsData((FNetAnalyticsData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294b30

void * __thiscall
FLocalNetAnalyticsStruct::_scalar_deleting_destructor_(FLocalNetAnalyticsStruct *this,uint param_1)

{
  *this = (FLocalNetAnalyticsStruct)&___7FVirtualDestructor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294b70

void * __thiscall
FOodleNetAnalyticsData::_scalar_deleting_destructor_(FOodleNetAnalyticsData *this,uint param_1)

{
  *(undefined ***)&this->field_0x20 = &___7FVirtualDestructor__6B_;
  FNetAnalyticsData::~FNetAnalyticsData((FNetAnalyticsData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294bc0

void * __thiscall
FOodleNetworkAnalyticsVars::_scalar_deleting_destructor_
          (FOodleNetworkAnalyticsVars *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVirtualDestructor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294c00

void * __thiscall
FOodleNetworkArchiveBase::_scalar_deleting_destructor_(FOodleNetworkArchiveBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SeekStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294c50

void * __thiscall
FOodleNetworkDictionaryArchive::_scalar_deleting_destructor_
          (FOodleNetworkDictionaryArchive *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294ca0

void * __thiscall
FOodleNetworkFaultHandler::_scalar_deleting_destructor_
          (FOodleNetworkFaultHandler *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294cd0

void * __thiscall
FPacketCaptureArchive::_scalar_deleting_destructor_(FPacketCaptureArchive *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294d20

void * __thiscall
OodleNetworkHandlerComponent::_scalar_deleting_destructor_
          (OodleNetworkHandlerComponent *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  OodleNetworkHandlerComponent *pOVar9;
  int iVar10;
  OodleNetworkHandlerComponent *local_38 [2];
  
  this->_padding_ = (longlong)&___7OodleNetworkHandlerComponent__6B_;
  local_38[0] = this;
  if (((OodleComponentList.AllocatorInstance.Data <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       OodleComponentList.AllocatorInstance.Data + (longlong)OodleComponentList.ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FVar2.Data = OodleComponentList.AllocatorInstance.Data;
  lVar5 = (longlong)OodleComponentList.ArrayNum;
  iVar10 = OodleComponentList.ArrayNum;
  if (OodleComponentList.ArrayNum != 0) {
    iVar10 = 0;
    bVar3 = *(OodleNetworkHandlerComponent **)OodleComponentList.AllocatorInstance.Data !=
            local_38[0];
    lVar6 = 0;
    pOVar9 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (lVar5 <= lVar6) break;
      } while (bVar3 == (*(OodleNetworkHandlerComponent **)(FVar2.Data + lVar6 * 8) != pOVar9));
      if (bVar3 != false) {
        if (iVar10 != iVar7) {
          memmove(FVar2.Data + (longlong)iVar10 * 8,FVar2.Data + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pOVar9 = local_38[0];
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < lVar5);
  }
  OodleComponentList.ArrayNum = iVar10;
  FreePacketLogs(this);
  FreeDictionary(this,&this->ServerDictionary);
  FreeDictionary(this,&this->ClientDictionary);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClientDictionary).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ServerDictionary).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NetAnalyticsData).SharedReferenceCount.ReferenceController);
  HandlerComponent::~HandlerComponent((HandlerComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e294f20

void * __thiscall
UOodleNetworkTrainerCommandlet::_scalar_deleting_destructor_
          (UOodleNetworkTrainerCommandlet *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UOodleNetworkTrainerCommandlet__6B_;
  UCommandlet::~UCommandlet((UCommandlet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// CountBytes @ 14e295270

void __thiscall
OodleNetworkHandlerComponent::CountBytes(OodleNetworkHandlerComponent *this,FArchive *param_1)

{
  HandlerComponent::CountBytes((HandlerComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e295291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x80,0x80);
  return;
}

// EmptyLinkFunctionForGeneratedCodeOodleNetworkFaultHandler @ 14e295460

void __cdecl EmptyLinkFunctionForGeneratedCodeOodleNetworkFaultHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOodleNetworkHandlerComponent @ 14e295470

void __cdecl EmptyLinkFunctionForGeneratedCodeOodleNetworkHandlerComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOodleNetworkHandlerComponent_init @ 14e295480

void __cdecl EmptyLinkFunctionForGeneratedCodeOodleNetworkHandlerComponent_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOodleNetworkTrainerCommandlet @ 14e295490

void __cdecl EmptyLinkFunctionForGeneratedCodeOodleNetworkTrainerCommandlet(void)

{
  return;
}

// FindFallbackDictionaries @ 14e2954a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
OodleNetworkHandlerComponent::FindFallbackDictionaries
          (OodleNetworkHandlerComponent *this,FString *param_1,FString *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  IFileManager *pIVar8;
  FString *pFVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FString *pFVar13;
  FString *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  ulonglong in_stack_ffffffffffffff70;
  FIdentityFunctor local_78 [8];
  FString *local_70;
  undefined8 local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  ::FString::operator=(param_1,L"");
  ::FString::operator=(param_2,L"");
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  pIVar8 = IFileManager::Get();
  bVar3 = GetDictionaryPaths(this,&local_50,&local_60,false);
  if (bVar3) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar11.Data = local_50.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar8 + 0x50))(pIVar8,FVar11.Data);
    if (cVar4 != '\0') {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_60.Data.ArrayNum != 0) {
        FVar11.Data = local_60.Data.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*pIVar8 + 0x50))(pIVar8,FVar11.Data);
      if (cVar4 != '\0') {
        bVar3 = true;
        iVar7 = local_50.Data.ArrayNum + -1;
        if (local_50.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange(param_1,(wchar_t *)local_50.Data.AllocatorInstance.Data,iVar7);
        iVar7 = local_60.Data.ArrayNum + -1;
        if (local_60.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange(param_2,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar7);
        goto LAB_14e2959f1;
      }
    }
  }
  bVar3 = false;
  local_70 = (FString *)0x0;
  local_68 = 0;
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x88);
  pFVar9 = FPaths::ProjectDir(&local_40);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar8,&local_70,pwVar16,L"*.udic",1,in_stack_ffffffffffffff70 & 0xffffffffffffff00,1);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (0 < (int)local_68) {
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              (local_70,(int)local_68,local_78[0],(TLess<void> *)local_78);
    pFVar9 = local_70;
    pFVar13 = local_70 + (int)local_68;
    pFVar14 = local_70;
    if (local_70 != pFVar13) {
      do {
        iVar7 = ::FString::Find(pFVar14,L"Server",6,IgnoreCase,FromStart,-1);
        if ((iVar7 != -1) ||
           (iVar7 = ::FString::Find(pFVar14,L"Output",6,IgnoreCase,FromStart,-1), iVar7 != -1)) {
          uVar15 = (uint)((longlong)pFVar14 - (longlong)pFVar9 >> 4);
          iVar7 = (int)local_68;
          goto LAB_14e29569f;
        }
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar13);
    }
    uVar15 = 0xffffffff;
    iVar7 = (int)local_68;
LAB_14e29569f:
    pFVar9 = local_70;
    pFVar13 = local_70 + iVar7;
    pFVar14 = local_70;
    if (local_70 != pFVar13) {
      do {
        iVar7 = ::FString::Find(pFVar14,L"Client",6,IgnoreCase,FromStart,-1);
        if ((iVar7 != -1) ||
           (iVar7 = ::FString::Find(pFVar14,L"Input",5,IgnoreCase,FromStart,-1), iVar7 != -1)) {
          uVar12 = (uint)((longlong)pFVar14 - (longlong)pFVar9 >> 4);
          iVar7 = (int)local_68;
          goto LAB_14e295729;
        }
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar13);
      iVar7 = (int)local_68;
    }
    uVar12 = 0xffffffff;
LAB_14e295729:
    if ((uVar15 == 0xffffffff) || (uVar12 == 0xffffffff)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!param_3) && (4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      iVar7 = (int)local_68;
    }
    if (bVar3 == false) {
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      if ((int)uVar12 < (int)uVar15) {
        uVar12 = uVar15;
      }
      uVar15 = 0;
      if ((int)uVar12 < iVar7) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = local_70[(int)uVar12].Data.ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange
                (param_1,(wchar_t *)local_70[(int)uVar12].Data.AllocatorInstance.Data,iVar7);
      uVar15 = 0;
      if ((int)uVar12 < (int)local_68) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = local_70[(int)uVar12].Data.ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange
                (param_2,(wchar_t *)local_70[(int)uVar12].Data.AllocatorInstance.Data,iVar7);
      bVar3 = true;
      if ((!param_3) && (4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        goto LAB_14e295980;
      }
    }
    else {
      uVar10 = 0;
      if ((int)uVar15 < iVar7) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = local_70[(int)uVar15].Data.ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange
                (param_1,(wchar_t *)local_70[(int)uVar15].Data.AllocatorInstance.Data,iVar7);
      uVar15 = 0;
      if ((int)uVar12 < (int)local_68) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = local_70[(int)uVar12].Data.ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange
                (param_2,(wchar_t *)local_70[(int)uVar12].Data.AllocatorInstance.Data,iVar7);
      if (!param_3) {
LAB_14e295980:
        if ((4 < (byte)OodleNetworkHandlerComponentLog._0_1_) &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        }
      }
    }
  }
  DestructItems<FString,int>(local_70,(int)local_68);
  if (local_70 != (FString *)0x0) {
    FMemory::Free(local_70);
  }
LAB_14e2959f1:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// FreeDictionary @ 14e295a60

void __thiscall
OodleNetworkHandlerComponent::FreeDictionary
          (OodleNetworkHandlerComponent *this,TSharedPtr<FOodleNetworkDictionary,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  TSharedPtr<FOodleNetworkDictionary,1> local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if (param_1->Object != (FOodleNetworkDictionary *)0x0) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    if ((pTVar1 != (TReferenceControllerBase<1> *)0x0) &&
       (pTVar1->SharedReferenceCount == (atomic<int>)0x2)) {
      TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_78,
                 (TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
                  *)&DictionaryMap);
      local_18 = (TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
                  *)&DictionaryMap;
      stack0xffffffffffffffc8 = local_78._16_16_;
      local_48 = (longlong *)local_78._0_8_;
      auStack_40._0_8_ = local_78._8_8_;
      local_10 = 0;
      local_28 = local_58;
      pTStack_20 = pTStack_50;
      uVar4 = local_78._24_8_ >> 0x20;
      uVar5 = local_78._28_4_;
      if ((int)uVar5 < *(int *)(local_78._16_8_ + 0x18)) {
        do {
          if (*(FOodleNetworkDictionary **)(*local_48 + 0x10 + (longlong)(int)uVar4 * 0x28) ==
              param_1->Object) {
            TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_20,uVar5);
            goto LAB_14e295b50;
          }
          uStack_30 = uStack_30 & ~auStack_40._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
          uVar4 = (ulonglong)uStack_2c;
          uVar5 = uStack_2c;
        } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
        if ((char)local_10 != '\0') {
LAB_14e295b50:
          if (local_10._1_1_ != '\0') {
            uVar5 = *(int *)&(local_18->Elements).field_0x8 -
                    *(int *)&(local_18->Elements).field_0x34;
            if (uVar5 < 4) {
              iVar3 = 1;
            }
            else {
              uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
              lVar2 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                }
              }
              iVar3 = 1 << ((byte)lVar2 & 0x1f);
            }
            if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize))
            {
              local_18->HashSize = iVar3;
              TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
              ::Rehash(local_18);
            }
          }
        }
      }
    }
    local_88.Object = (FOodleNetworkDictionary *)0x0;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_88) {
      param_1->Object = (FOodleNetworkDictionary *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_88.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FreePacketLogs @ 14e295c00

void __thiscall OodleNetworkHandlerComponent::FreePacketLogs(OodleNetworkHandlerComponent *this)

{
  FPacketCaptureArchive *pFVar1;
  undefined8 *puVar2;
  
  if (this->OutPacketLog != (FPacketCaptureArchive *)0x0) {
    (**(code **)(this->OutPacketLog->_padding_ + 0x210))();
    pFVar1 = this->OutPacketLog;
    puVar2 = (undefined8 *)pFVar1->_padding_;
    if (pFVar1 != (FPacketCaptureArchive *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    this->OutPacketLog = (FPacketCaptureArchive *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (this->InPacketLog != (FPacketCaptureArchive *)0x0) {
    (**(code **)(this->InPacketLog->_padding_ + 0x210))();
    pFVar1 = this->InPacketLog;
    puVar2 = (undefined8 *)pFVar1->_padding_;
    if (pFVar1 != (FPacketCaptureArchive *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    this->InPacketLog = (FPacketCaptureArchive *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

// GetDictionaryPaths @ 14e295cd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
OodleNetworkHandlerComponent::GetDictionaryPaths
          (OodleNetworkHandlerComponent *this,FString *param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  FStaticBasicLogRecord *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TStringView<wchar_t> local_50;
  FScriptContainerElement *local_40;
  int local_38;
  
  iVar11 = 0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"OodleNetworkHandlerComponent",L"ServerDictionary",&local_80,
                     &GEngineIni);
  if ((!bVar2) ||
     (bVar2 = FConfigCacheIni::GetString
                        (GConfig,L"OodleNetworkHandlerComponent",L"ClientDictionary",&local_90,
                         &GEngineIni), !bVar2)) goto LAB_14e29607b;
  bVar2 = true;
  iVar10 = 0;
  iVar4 = local_80.Data.ArrayNum + -1;
  if (local_80.Data.ArrayNum == 0) {
    iVar4 = iVar10;
  }
  if (iVar4 < 1) {
LAB_14e296032:
    if (param_3) {
      UE::Assert::Private::ProcessLowLevelFatalError
                ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                 ,0x2c2,L"%s");
    }
    else if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
      pFVar7 = &::LOG_Static;
LAB_14e29606f:
      UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog)
      ;
    }
  }
  else {
    iVar4 = local_90.Data.ArrayNum + -1;
    if (local_90.Data.ArrayNum == 0) {
      iVar4 = iVar10;
    }
    if (iVar4 < 1) goto LAB_14e296032;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar9.Data = local_80.Data.AllocatorInstance.Data;
    }
    pFVar5 = FPaths::ProjectDir(&local_60);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_50.DataPtr = L"";
    }
    else {
      local_50.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    local_50.Size = iVar11;
    if ((FScriptContainerElement *)local_50.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_50.DataPtr);
      local_50.Size = (int)sVar6;
    }
    local_40 = FVar9.Data;
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen((wchar_t *)FVar9.Data);
      iVar11 = (int)sVar6;
    }
    local_38 = iVar11;
    FPaths::CombineInternal(&local_70,&local_50,2);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    local_80.Data.ArrayNum = local_70.Data.ArrayNum;
    local_80.Data.ArrayMax = local_70.Data.ArrayMax;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar9.Data = local_90.Data.AllocatorInstance.Data;
    }
    pFVar5 = FPaths::ProjectDir(&local_60);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_50.DataPtr = L"";
    }
    else {
      local_50.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar11 = iVar10;
    if ((FScriptContainerElement *)local_50.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_50.DataPtr);
      iVar11 = (int)sVar6;
    }
    iVar4 = iVar10;
    local_50.Size = iVar11;
    local_40 = FVar9.Data;
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen((wchar_t *)FVar9.Data);
      iVar4 = (int)sVar6;
    }
    local_38 = iVar4;
    FPaths::CombineInternal(&local_70,&local_50,2);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    local_90.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    local_90.Data.ArrayNum = local_70.Data.ArrayNum;
    local_90.Data.ArrayMax = local_70.Data.ArrayMax;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    FPaths::CollapseRelativeDirectories(&local_80,false);
    FPaths::CollapseRelativeDirectories(&local_90,false);
    FPaths::NormalizeDirectoryName(&local_80);
    FPaths::NormalizeDirectoryName(&local_90);
    pFVar5 = FPaths::ProjectDir(&local_70);
    iVar11 = (pFVar5->Data).ArrayNum;
    if (iVar11 == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      iVar10 = iVar11 + -1;
    }
    bVar1 = false;
    bVar3 = ::FString::StartsWith(&local_80,pwVar8,iVar10,IgnoreCase);
    iVar11 = 0;
    if (bVar3) {
      pFVar5 = FPaths::ProjectDir(&local_60);
      iVar10 = (pFVar5->Data).ArrayNum;
      if (iVar10 == 0) {
        pwVar8 = L"";
        iVar10 = iVar11;
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        iVar10 = iVar10 + -1;
      }
      bVar1 = true;
      bVar3 = ::FString::StartsWith(&local_90,pwVar8,iVar10,IgnoreCase);
      if (!bVar3) goto LAB_14e295f86;
      bVar3 = false;
LAB_14e295f90:
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_14e295f86:
      bVar3 = true;
      if (bVar1) goto LAB_14e295f90;
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      iVar10 = local_80.Data.ArrayNum + -1;
      if (local_80.Data.ArrayNum == 0) {
        iVar10 = iVar11;
      }
      ::FString::AssignRange(param_1,(wchar_t *)local_80.Data.AllocatorInstance.Data,iVar10);
      iVar10 = local_90.Data.ArrayNum + -1;
      if (local_90.Data.ArrayNum == 0) {
        iVar10 = iVar11;
      }
      ::FString::AssignRange(param_2,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar10);
      goto LAB_14e29609c;
    }
    if (!param_3) {
      if ((byte)OodleNetworkHandlerComponentLog._0_1_ < 3) goto LAB_14e29607b;
      pFVar7 = &::LOG_Static;
      goto LAB_14e29606f;
    }
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
               ,0x2df,L"%s");
  }
LAB_14e29607b:
  bVar2 = false;
  ::FString::operator=(param_1,L"");
  ::FString::operator=(param_2,L"");
LAB_14e29609c:
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetReservedPacketBits @ 14e296330

int __thiscall
OodleNetworkHandlerComponent::GetReservedPacketBits(OodleNetworkHandlerComponent *this)

{
  return -(uint)(this->bEnableOodle != false) & 0x10;
}

// Incoming @ 14e296560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
OodleNetworkHandlerComponent::Incoming
          (OodleNetworkHandlerComponent *this,FIncomingPacketRef *param_1)

{
  char cVar1;
  FScriptContainerElement FVar2;
  FBitReader *this_00;
  FInPacketTraits *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  TStatId TVar13;
  FName *pFVar14;
  FOodleNetAnalyticsData *pFVar15;
  UEnum *pUVar16;
  wchar_t *pwVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  LARGE_INTEGER LVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auStackY_2338 [32];
  uint local_22d8 [2];
  ulonglong local_22d0;
  UEnum *local_22c8;
  FName local_22c0;
  byte local_22b8;
  FName local_22b0;
  byte local_22a8;
  FName local_22a0;
  byte local_2298;
  FInPacketTraits *local_2290;
  FNetResult local_2288;
  LARGE_INTEGER local_2258;
  LARGE_INTEGER local_2250;
  LARGE_INTEGER local_2248;
  LARGE_INTEGER local_2240;
  FSourceLocation local_2238;
  FSourceLocation local_2218;
  FSourceLocation local_21f8;
  FName local_21d0;
  FName local_21c8;
  FName local_21c0;
  FName local_21b8;
  FNetResult local_21b0;
  FNetResult local_2180;
  FNetResult local_2150;
  FBitReader local_2118;
  undefined1 local_2068 [8192];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2338;
  this_00 = param_1->Packet;
  pFVar3 = param_1->Traits;
  local_2290 = pFVar3;
  if ((this_00->Pos != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Packet.GetPosBits() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                          ,0x3b9,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->bEnableOodle != false) {
    pFVar4 = (this_00->Buffer).AllocatorInstance.Data;
    uVar22 = (uint)(this_00->Num + 7 >> 3);
    if ((uVar22 == 0) || (*pFVar4 == (FScriptContainerElement)0x0)) {
      lVar12 = this_00->Pos + 8;
      if (this_00->Num < lVar12) {
        FBitReader::SetOverflowed(this_00,this_00->Pos);
      }
      else {
        this_00->Pos = lVar12;
      }
      if ((this->bOodleNetworkAnalytics != false) &&
         ((this->NetAnalyticsData).Object != (FOodleNetAnalyticsData *)0x0)) {
        pFVar15 = TSharedPtr<FOodleNetAnalyticsData,1>::operator->(&this->NetAnalyticsData);
        lVar12 = this_00->Num;
        lVar5 = this_00->Pos;
        plVar19 = (longlong *)&pFVar15->field_0x30;
        if (pFVar15 == (FOodleNetAnalyticsData *)0x0) {
          plVar19 = (longlong *)&DAT_00000010;
        }
        plVar20 = (longlong *)&pFVar15->field_0x50;
        *plVar19 = *plVar19 + 1;
        if (pFVar15 == (FOodleNetAnalyticsData *)0x0) {
          plVar20 = (longlong *)&DAT_00000030;
        }
        *plVar20 = *plVar20 + ((lVar12 - lVar5) + 7 >> 3 & 0xffffffffU);
      }
      if ((((this->bCaptureMode != false) && (*(char *)this->_padding_ == '\x01')) &&
          (this->InPacketLog != (FPacketCaptureArchive *)0x0)) &&
         (iVar11 = (int)((this_00->Num - this_00->Pos) + 7 >> 3),
         local_22d0 = CONCAT44(local_22d0._4_4_,iVar11), iVar11 != 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          if (StatPtr_STAT_Oodle_InCaptureTime ==
              (FThreadSafeStaticStat<_public:_virtual_void___cdecl_OodleNetworkHandlerComponent::Incoming(FIncomingPacketRef)_::_148_::FStat_STAT_Oodle_InCaptureTime>
               )0x0) {
            pFVar14 = ::FName::FName(&local_21c0,"STAT_Oodle_InCaptureTime");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCaptureTime,*pFVar14,
                       L"STAT_Oodle_InCaptureTime","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                       true,true,ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS1);
        }
        TVar13.StatIdPtr = (TStatIdData *)StatPtr_STAT_Oodle_InCaptureTime;
        if (StatPtr_STAT_Oodle_InCaptureTime ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_OodleNetworkHandlerComponent::Incoming(FIncomingPacketRef)_::_148_::FStat_STAT_Oodle_InCaptureTime>
             )0x0) {
          pFVar14 = ::FName::FName(&local_21b8,"STAT_Oodle_InCaptureTime");
          TVar13.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCaptureTime,*pFVar14,
                          L"STAT_Oodle_InCaptureTime","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_21f8.Impl._Line = 0x467;
        local_21f8.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
        ;
        local_21f8.Impl._Column = 6;
        local_21f8.Impl._Function =
             "void __cdecl OodleNetworkHandlerComponent::Incoming(struct FIncomingPacketRef)";
        FScopeCycleCounter::FScopeCycleCounter
                  ((FScopeCycleCounter *)&local_22a0,TVar13,CycleStat|ClearEveryFrame,false,
                   &local_21f8);
        if (__CsvProfilerStat1128 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("Oodle_InCaptureTime");
          __CsvProfilerStat1128 = true;
        }
        FCsvProfiler::BeginExclusiveStat("Oodle_InCaptureTime","CSV_Oodle_InCaptureTime");
        GPacketHandlerDiscardTimeguardMeasurement = true;
        FPacketCaptureArchive::SerializePacket
                  (this->InPacketLog,(this_00->Buffer).AllocatorInstance.Data,(uint *)&local_22d0);
        FCsvProfiler::EndExclusiveStat("Oodle_InCaptureTime");
        if ((local_2298 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_2298 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_2298 & 4) != 0) {
          FThreadStats::AddMessage(local_22a0,CycleScopeEnd);
        }
      }
    }
    else {
      LVar21.QuadPart = 0;
      cVar1 = *(char *)this->_padding_;
      if ((this->bInitializedDictionaries == false) &&
         ((&this->ServerEnableMode)[cVar1 != '\x01'] == WhenCompressedPacketReceived)) {
        RemoteInitializeDictionaries(this);
      }
      lVar12 = 0x70;
      if (cVar1 != '\x01') {
        lVar12 = 0x60;
      }
      local_22c8 = *(UEnum **)((longlong)&this->_padding_ + lVar12);
      if (local_22c8 == (UEnum *)0x0) {
        UE::Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                   ,0x44a,
                   L"Received compressed packet, but no dictionary is present for decompression.");
        FArchiveState::SetError((FArchiveState *)this_00);
        UE::Net::TNetResult<enum_EOodleNetResult>::TNetResult<enum_EOodleNetResult>
                  (&local_2150,OodleNoDictionary);
        UE::Net::AddToChainResultPtr(&pFVar3->ExtendedError,&local_2150);
        if (local_2150.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)local_2150.NextResult + -0x10))
                    ((longlong)local_2150.NextResult + -0x10);
        }
        if (local_2150.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2150.ErrorContext.Data.AllocatorInstance.Data);
        }
        pUVar16 = StaticEnum<enum_ENetCloseResult>();
        local_2288.Result = 0x70;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        local_2288.ResultEnumObj.WeakPtr.ObjectIndex = 0;
        local_2288.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
        local_22c8 = pUVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        FWeakObjectPtr::operator=(&local_2288.ResultEnumObj.WeakPtr,(FObjectPtr)&local_22c8);
        local_2288.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2288.ErrorContext.Data.ArrayNum = 0;
        local_2288.ErrorContext.Data.ArrayMax = 0;
        local_2288.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        local_2288.RawResultEnumObj = pUVar16;
        pwVar17 = ::LexToString(NotRecoverable);
        ::FString::operator=(&local_2288.ErrorContext,pwVar17);
        UE::Net::AddToChainResultPtr(&pFVar3->ExtendedError,&local_2288);
        if (local_2288.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)local_2288.NextResult + -0x10))
                    ((longlong)local_2288.NextResult + -0x10);
        }
        if (local_2288.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2288.ErrorContext.Data.AllocatorInstance.Data);
        }
      }
      else {
        FVar2 = *pFVar4;
        uVar18 = 1;
        lVar12 = this_00->Num;
        uVar23 = (uint)(byte)FVar2;
        lVar5 = this_00->Pos;
        if (0xfb < (byte)FVar2) {
          if (uVar22 < 2) {
            if ((byte)OodleNetworkHandlerComponentLog._0_1_ < 2) {
              return;
            }
            local_22d8[0] = uVar23;
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
            return;
          }
          uVar18 = 2;
          uVar23 = (uint)(byte)FVar2 + (uint)(byte)pFVar4[1] * 4;
        }
        local_22d8[0] = uVar23;
        if (uVar23 < 0x400) {
          local_22d0 = (ulonglong)(uVar22 - uVar18);
          memcpy(local_2068,pFVar4 + uVar18,(ulonglong)(uVar22 - uVar18));
          FBitReader::FBitReader(&local_2118,(uchar *)0x0,(ulonglong)(uVar23 * 8));
          dVar8 = (double)UE::Oodle::GOodleTimeguardThresholdMS;
          TVar13 = FThreadSafeStaticStatInner<FStat_STAT_Oodle_InDecompressTime,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_Oodle_InDecompressTime,1> *)
                              &StatPtr_STAT_Oodle_InDecompressTime);
          local_2238.Impl._Line = 0x3fa;
          local_2238.Impl._Column = 8;
          local_2238.Impl._Function =
               "void __cdecl OodleNetworkHandlerComponent::Incoming(struct FIncomingPacketRef)";
          local_2238.Impl._File =
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
          ;
          FScopeCycleCounter::FScopeCycleCounter
                    ((FScopeCycleCounter *)&local_22c0,*(TStatIdData **)&(TVar13.StatIdPtr)->Name,
                     CycleStat|ClearEveryFrame,false,&local_2238);
          if (__CsvProfilerStat1019 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("Oodle_InDecompressTime");
            __CsvProfilerStat1019 = true;
          }
          FCsvProfiler::BeginExclusiveStat("Oodle_InDecompressTime","CSV_Oodle_InDecompressTime");
          if ((0.0 < dVar8) && (0 < UE::Oodle::GOodleTimeguardLimit)) {
            QueryPerformanceCounter(&local_2258);
            LVar21 = local_2258;
          }
          iVar11 = OodleNetwork1UDP_Decode
                             (*(OodleNetwork1UDP_State **)((longlong)local_22c8 + 0x28),
                              *(OodleNetwork1_Shared **)((longlong)local_22c8 + 0x18),local_2068,
                              local_22d0,local_2118.Buffer.AllocatorInstance.Data,
                              (ulonglong)local_22d8[0]);
          dVar7 = 0.0;
          if ((0.0 < dVar8) && (dVar7 = 0.0, 0 < UE::Oodle::GOodleTimeguardLimit)) {
            QueryPerformanceCounter(&local_2250);
            dVar7 = (double)(ulonglong)(local_2250.QuadPart - (longlong)LVar21) *
                    FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
          }
          FCsvProfiler::EndExclusiveStat("Oodle_InDecompressTime");
          if ((local_22b8 & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_22b8 & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_22b8 & 4) != 0) {
            FThreadStats::AddMessage(local_22c0,CycleScopeEnd);
          }
          if (dVar8 < dVar7) {
            if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
            }
            UE::Oodle::GOodleTimeguardLimit = UE::Oodle::GOodleTimeguardLimit + -1;
          }
          if (iVar11 == 0) {
            if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
            }
            FArchiveState::SetError((FArchiveState *)this_00);
            UE::Net::TNetResult<enum_EOodleNetResult>::TNetResult<enum_EOodleNetResult>
                      (&local_21b0,OodleDecodeFailed);
            UE::Net::AddToChainResultPtr(&local_2290->ExtendedError,&local_21b0);
            if (local_21b0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
              (**(code **)((longlong)local_21b0.NextResult + -0x10))
                        ((longlong)local_21b0.NextResult + -0x10);
            }
            if (local_21b0.ErrorContext.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_21b0.ErrorContext.Data.AllocatorInstance.Data);
            }
            FArchiveState::SetError((FArchiveState *)this_00);
          }
          else {
            FBitReader::operator=(this_00,&local_2118);
            if (((this->bCaptureMode != false) && (*(char *)this->_padding_ == '\x01')) &&
               (this->InPacketLog != (FPacketCaptureArchive *)0x0)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                if (StatPtr_STAT_Oodle_InCaptureTime ==
                    (FThreadSafeStaticStat<_public:_virtual_void___cdecl_OodleNetworkHandlerComponent::Incoming(FIncomingPacketRef)_::_104_::FStat_STAT_Oodle_InCaptureTime>
                     )0x0) {
                  pFVar14 = ::FName::FName(&local_21d0,"STAT_Oodle_InCaptureTime");
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCaptureTime,*pFVar14
                             ,L"STAT_Oodle_InCaptureTime","STATGROUP_Quick","STATCAT_Advanced",
                             L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
                }
                _Init_thread_footer(&::_TSS0);
              }
              TVar13.StatIdPtr = (TStatIdData *)StatPtr_STAT_Oodle_InCaptureTime;
              if (StatPtr_STAT_Oodle_InCaptureTime ==
                  (FThreadSafeStaticStat<_public:_virtual_void___cdecl_OodleNetworkHandlerComponent::Incoming(FIncomingPacketRef)_::_104_::FStat_STAT_Oodle_InCaptureTime>
                   )0x0) {
                pFVar14 = ::FName::FName(&local_21c8,"STAT_Oodle_InCaptureTime");
                TVar13.StatIdPtr =
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCaptureTime,
                                *pFVar14,L"STAT_Oodle_InCaptureTime","STATGROUP_Quick",
                                "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                                MCR_Invalid);
              }
              local_2218.Impl._Line = 0x421;
              local_2218.Impl._File =
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
              ;
              local_2218.Impl._Column = 8;
              local_2218.Impl._Function =
                   "void __cdecl OodleNetworkHandlerComponent::Incoming(struct FIncomingPacketRef)";
              FScopeCycleCounter::FScopeCycleCounter
                        ((FScopeCycleCounter *)&local_22b0,TVar13,CycleStat|ClearEveryFrame,false,
                         &local_2218);
              if (__CsvProfilerStat1058 == false) {
                FCsvProfilerTrace::OutputInlineStatExclusive("Oodle_InCaptureTime");
                __CsvProfilerStat1058 = true;
              }
              FCsvProfiler::BeginExclusiveStat("Oodle_InCaptureTime","CSV_Oodle_InCaptureTime");
              GPacketHandlerDiscardTimeguardMeasurement = true;
              FPacketCaptureArchive::SerializePacket
                        (this->InPacketLog,(this_00->Buffer).AllocatorInstance.Data,local_22d8);
              FCsvProfiler::EndExclusiveStat("Oodle_InCaptureTime");
              if ((local_22a8 & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_22a8 & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_22a8 & 4) != 0) {
                FThreadStats::AddMessage(local_22b0,CycleScopeEnd);
              }
            }
            uVar9 = local_22d0;
            GOodleNetStats.InCompressedLength = GOodleNetStats.InCompressedLength + (int)local_22d0;
            GOodleNetStats.TotalInCompressedLength =
                 GOodleNetStats.TotalInCompressedLength + local_22d0;
            GOodleNetStats.InDecompressedLength =
                 GOodleNetStats.InDecompressedLength + local_22d8[0];
            GOodleNetStats.TotalInDecompressedLength =
                 GOodleNetStats.TotalInDecompressedLength + local_22d8[0];
            QueryPerformanceCounter(&local_2248);
            dVar8 = __real_4170000000000000;
            fVar24 = (float)(((double)local_2248.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                             __real_4170000000000000) - GOodleNetStats.LastStatsUpdate);
            if (__real_3f800000 < fVar24) {
              FOodleNetStats::UpdateStats(&GOodleNetStats,fVar24);
              QueryPerformanceCounter(&local_2240);
              GOodleNetStats.LastStatsUpdate =
                   (double)local_2240.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
            }
            if ((this->bOodleNetworkAnalytics != false) &&
               ((this->NetAnalyticsData).Object != (FOodleNetAnalyticsData *)0x0)) {
              pFVar15 = TSharedPtr<FOodleNetAnalyticsData,1>::operator->(&this->NetAnalyticsData);
              plVar19 = (longlong *)&pFVar15->field_0x28;
              if (pFVar15 == (FOodleNetAnalyticsData *)0x0) {
                plVar19 = (longlong *)&DAT_00000008;
              }
              plVar20 = (longlong *)&pFVar15->field_0x38;
              *plVar19 = *plVar19 + 1;
              if (pFVar15 == (FOodleNetAnalyticsData *)0x0) {
                plVar20 = (longlong *)&DAT_00000018;
              }
              plVar19 = (longlong *)&pFVar15->field_0x40;
              *plVar20 = *plVar20 + ((lVar12 - lVar5) + 7 >> 3 & 0xffffffffU);
              if (pFVar15 == (FOodleNetAnalyticsData *)0x0) {
                plVar19 = (longlong *)&DAT_00000020;
              }
              plVar20 = (longlong *)&pFVar15->field_0x48;
              *plVar19 = *plVar19 + uVar9;
              if (pFVar15 == (FOodleNetAnalyticsData *)0x0) {
                plVar20 = (longlong *)&DAT_00000028;
              }
              *plVar20 = *plVar20 + (ulonglong)local_22d8[0];
            }
          }
          FBitReader::~FBitReader(&local_2118);
        }
        else {
          if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
          }
          FArchiveState::SetError((FArchiveState *)this_00);
          UE::Net::TNetResult<enum_EOodleNetResult>::TNetResult<enum_EOodleNetResult>
                    (&local_2180,OodleBadDecompressedLength);
          UE::Net::AddToChainResultPtr(&local_2290->ExtendedError,&local_2180);
          if (local_2180.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
            (**(code **)((longlong)local_2180.NextResult + -0x10))
                      ((longlong)local_2180.NextResult + -0x10);
          }
          if (local_2180.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_2180.ErrorContext.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// InitFaultRecovery @ 14e297180

void __thiscall
OodleNetworkHandlerComponent::InitFaultRecovery
          (OodleNetworkHandlerComponent *this,FNetConnectionFaultRecoveryBase *param_1)

{
  int iVar1;
  
  if ((((this->OodleNetworkFaultHandler).FaultRecovery == (FNetConnectionFaultRecoveryBase *)0x0) &&
      ((this->OodleNetworkFaultHandler).FaultRecovery = param_1,
      param_1 != (FNetConnectionFaultRecoveryBase *)0x0)) &&
     ((this->OodleNetworkFaultHandler).CounterIndex == -1)) {
    UE::Net::FNetResultManager::AddResultHandlerPtr
              (&param_1->FaultManager,(FNetResultHandler *)&this->OodleNetworkFaultHandler,Last);
    iVar1 = UE::Net::FNetConnectionFaultRecoveryBase::AddNewCounter
                      ((this->OodleNetworkFaultHandler).FaultRecovery,1);
    (this->OodleNetworkFaultHandler).CounterIndex = iVar1;
    UE::Net::FNetConnectionFaultRecoveryBase::RegisterCounterCategory
              ((this->OodleNetworkFaultHandler).FaultRecovery,NetworkCorruption,iVar1);
    return;
  }
  return;
}

// InitFirstRunConfig @ 14e2971f0

void __cdecl OodleNetworkHandlerComponent::InitFirstRunConfig(void)

{
  bool bVar1;
  FString local_18;
  
  bVar1 = FConfigCacheIni::DoesSectionExist(GConfig,L"OodleNetworkHandlerComponent",&GEngineIni);
  if (!bVar1) {
    FConfigCacheIni::SetBool
              (GConfig,L"OodleNetworkHandlerComponent",L"bEnableOodle",true,&GEngineIni);
    FConfigCacheIni::SetBool
              (GConfig,L"OodleNetworkHandlerComponent",L"bUseDictionaryIfPresent",false,&GEngineIni)
    ;
    FConfigCacheIni::SetString
              (GConfig,L"OodleNetworkHandlerComponent",L"PacketLogFile",L"PacketDump",&GEngineIni);
    FConfigCacheIni::SetString
              (GConfig,L"OodleNetworkHandlerComponent",L"ServerDictionary",L"",&GEngineIni);
    FConfigCacheIni::SetString
              (GConfig,L"OodleNetworkHandlerComponent",L"ClientDictionary",L"",&GEngineIni);
    ::FString::FString(&local_18,L"");
    FConfigCacheIni::Flush(GConfig,false,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Initialize @ 14e297310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall OodleNetworkHandlerComponent::Initialize(OodleNetworkHandlerComponent *this)

{
  FName FVar1;
  void *_Src;
  UEnum *this_00;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize> FVar10;
  UPackage *pUVar11;
  long64 lVar12;
  wchar_t *pwVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_f8;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FString local_68;
  FName local_58 [3];
  
  FVar7 = StatPtr_STAT_Oodle_CompressFailSavings;
  if (StatPtr_STAT_Oodle_CompressFailSavings ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_Oodle_CompressFailSavings");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_CompressFailSavings,*pFVar6,
                       L"Oodle Compress Fail Num (0% savings)","STATGROUP_OodleNetwork",
                       "STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_88.StatData.Pad[0] = '\0';
    local_88.StatData.Pad[1] = '\0';
    local_88.StatData.Pad[2] = '\0';
    local_88.StatData.Pad[3] = '\0';
    local_88.StatData.Pad[4] = '\0';
    local_88.StatData.Pad[5] = '\0';
    local_88.StatData.Pad[6] = '\0';
    local_88.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_88.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,&local_88);
    FStatsTrace::Set(&local_res10,0);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar10 = StatPtr_STAT_Oodle_CompressFailSize;
  if (StatPtr_STAT_Oodle_CompressFailSize ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)0x0) {
    pFVar6 = ::FName::FName(local_58,"STAT_Oodle_CompressFailSize");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_CompressFailSize,*pFVar6,
                        L"Oodle Compress Fail Num (size limit)","STATGROUP_OodleNetwork",
                        "STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar1 = *(FName *)FVar10;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_78.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_78.StatData.Pad[0] = '\0';
    local_78.StatData.Pad[1] = '\0';
    local_78.StatData.Pad[2] = '\0';
    local_78.StatData.Pad[3] = '\0';
    local_78.StatData.Pad[4] = '\0';
    local_78.StatData.Pad[5] = '\0';
    local_78.StatData.Pad[6] = '\0';
    local_78.StatData.Pad[7] = '\0';
    local_res18 = FVar1;
    local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,&local_78);
    FStatsTrace::Set(&local_res18,0);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  bVar3 = FConfigCacheIni::DoesSectionExist(GConfig,L"OodleNetworkHandlerComponent",&GEngineIni);
  if (!bVar3) {
    FConfigCacheIni::SetBool
              (GConfig,L"OodleNetworkHandlerComponent",L"bEnableOodle",true,&GEngineIni);
    FConfigCacheIni::SetBool
              (GConfig,L"OodleNetworkHandlerComponent",L"bUseDictionaryIfPresent",false,&GEngineIni)
    ;
    FConfigCacheIni::SetString
              (GConfig,L"OodleNetworkHandlerComponent",L"PacketLogFile",L"PacketDump",&GEngineIni);
    FConfigCacheIni::SetString
              (GConfig,L"OodleNetworkHandlerComponent",L"ServerDictionary",L"",&GEngineIni);
    FConfigCacheIni::SetString
              (GConfig,L"OodleNetworkHandlerComponent",L"ClientDictionary",L"",&GEngineIni);
    ::FString::FString(&local_68,L"");
    FConfigCacheIni::Flush(GConfig,false,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  FConfigCacheIni::GetBool
            (GConfig,L"OodleNetworkHandlerComponent",L"bEnableOodle",&this->bEnableOodle,&GEngineIni
            );
  if ((this->bEnableOodle == false) && (bOodleForceEnable != false)) {
    if (4 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
    }
    this->bEnableOodle = true;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  if (Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
    Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode,
                       (UObject *)pUVar11,L"EOodleNetworkEnableMode");
  }
  pTVar2 = CVarOodleServerEnableMode.Ref;
  this_00 = Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton;
  local_res8 = (FName)CVarOodleServerEnableMode.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14e297722:
    lVar15 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar15 = 0x10;
    if (bVar3) goto LAB_14e297722;
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  iVar14 = *(int *)((longlong)&pTVar2->ShadowedValue[0].Data.ArrayNum + lVar15);
  local_res8 = *(FName *)((longlong)local_res8 + lVar15);
  local_e0 = CONCAT44(local_e0._4_4_,iVar14);
  if (iVar14 == 0) {
    local_e0 = 0;
    local_e0._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar14,0,&local_e8,iVar14,(int *)((longlong)&local_e0 + 4));
    memcpy(local_e8.Data,(void *)local_res8,(longlong)iVar14 * 2);
  }
  FVar16.Data = local_e8.Data;
  iVar14 = (int)local_e0;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    FVar16.Data = local_e8.Data;
    iVar14 = (int)local_e0;
  }
  local_f8.Data.ArrayMax = local_e0._4_4_;
  iVar5 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar5 = 0;
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_f8.Data.AllocatorInstance.Data = FVar16.Data;
  local_f8.Data.ArrayNum = iVar14;
  if (iVar5 < 1) {
LAB_14e29787b:
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,L"OodleNetworkHandlerComponent",L"ServerEnableMode",&local_f8,
                       &GEngineIni);
    FVar16.Data = local_f8.Data.AllocatorInstance.Data;
    if (bVar3) {
      lVar15 = (longlong)local_f8.Data.ArrayNum;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = local_f8.Data.ArrayNum;
      if (local_f8.Data.ArrayNum == 0) {
        local_b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                   local_f8.Data.ArrayNum,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,FVar16.Data,lVar15 * 2);
      }
      lVar12 = UEnum::GetValueByNameString(this_00,&local_b8,None);
      if (lVar12 == -1) {
        if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Failed_to_parse_152e39500,
                     (FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        }
      }
      else {
        this->ServerEnableMode = (EOodleNetworkEnableMode)lVar12;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = iVar14;
    if (iVar14 == 0) {
      local_c8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar14,0,(ForAnyElementType *)&local_c8,iVar14,&local_c8.Data.ArrayMax);
      memcpy(local_c8.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar14 * 2);
    }
    bVar3 = false;
    lVar12 = UEnum::GetValueByNameString(this_00,&local_c8,None);
    if (lVar12 == -1) {
      if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_parse_152e39500,
                   (FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
    }
    else {
      this->ServerEnableMode = (EOodleNetworkEnableMode)lVar12;
      bVar3 = true;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_14e29787b;
  }
  pTVar2 = CVarOodleClientEnableMode.Ref;
  local_res8 = (FName)CVarOodleClientEnableMode.Ref;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), lVar15 = 0x10, bVar3)) {
    lVar15 = 0;
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  iVar14 = *(int *)((longlong)&pTVar2->ShadowedValue[0].Data.ArrayNum + lVar15);
  _Src = *(void **)((longlong)local_res8 + lVar15);
  local_d0 = CONCAT44(local_d0._4_4_,iVar14);
  if (iVar14 == 0) {
    local_d0 = 0;
    local_d0._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar14,0,&local_d8,iVar14,(int *)((longlong)&local_d0 + 4));
    memcpy(local_d8.Data,_Src,(longlong)iVar14 * 2);
  }
  FVar16.Data = local_d8.Data;
  iVar14 = (int)local_d0;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    FVar16.Data = local_d8.Data;
    iVar14 = (int)local_d0;
  }
  local_f8.Data.ArrayMax = local_d0._4_4_;
  iVar5 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar5 = 0;
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_f8.Data.AllocatorInstance.Data = FVar16.Data;
  local_f8.Data.ArrayNum = iVar14;
  if (0 < iVar5) {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = iVar14;
    if (iVar14 == 0) {
      local_a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar14,0,(ForAnyElementType *)&local_a8,iVar14,&local_a8.Data.ArrayMax);
      memcpy(local_a8.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar14 * 2);
    }
    bVar3 = false;
    lVar12 = UEnum::GetValueByNameString(this_00,&local_a8,None);
    if (lVar12 == -1) {
      if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_parse_152e39500,
                   (FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
    }
    else {
      this->ClientEnableMode = (EOodleNetworkEnableMode)lVar12;
      bVar3 = true;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar3) goto LAB_14e297b8b;
  }
  bVar3 = FConfigCacheIni::GetString
                    (GConfig,L"OodleNetworkHandlerComponent",L"ClientEnableMode",&local_f8,
                     &GEngineIni);
  FVar16.Data = local_f8.Data.AllocatorInstance.Data;
  if (bVar3) {
    lVar15 = (longlong)local_f8.Data.ArrayNum;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_f8.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,FVar16.Data,lVar15 * 2);
    }
    lVar12 = UEnum::GetValueByNameString(this_00,&local_98,None);
    if (lVar12 == -1) {
      if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_parse_152e39500,
                   (FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
    }
    else {
      this->ClientEnableMode = (EOodleNetworkEnableMode)lVar12;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
LAB_14e297b8b:
  FConfigCacheIni::GetBool
            (GConfig,L"OodleNetworkHandlerComponent",L"bUseDictionaryIfPresent",
             &this->bUseDictionaryIfPresent,&GEngineIni);
  if ((this->bUseDictionaryIfPresent == false) && (bOodleForceEnable != false)) {
    if (4 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
    }
    this->bUseDictionaryIfPresent = true;
  }
  if (this->bEnableOodle != false) {
    pwVar13 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar13,L"OodleCapturing");
    this->bCaptureMode = bVar3;
    if (bVar3) {
      local_res8.ComparisonIndex.Value = 100;
      pwVar13 = FCommandLine::Get();
      FParse::Value(pwVar13,L"CapturePercentage=",(int *)&local_res8);
      uVar4 = rand();
      iVar5 = (int)((float)(uVar4 & 0x7fff) * __real_3b4a0194);
      iVar14 = 100;
      if (iVar5 < 100) {
        iVar14 = iVar5;
      }
      bVar3 = iVar14 <= (int)local_res8.ComparisonIndex.Value;
      if (4 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
      if (bVar3) {
        InitializePacketLogs(this);
      }
    }
    if ((&this->ServerEnableMode)[*(char *)this->_padding_ != '\x01'] == AlwaysEnabled) {
      InitializeDictionaries(this);
    }
  }
  HandlerComponent::Initialized((HandlerComponent *)this);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return;
}

// InitializeDictionaries @ 14e297cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
OodleNetworkHandlerComponent::InitializeDictionaries(OodleNetworkHandlerComponent *this)

{
  ForAnyElementType FVar1;
  bool bVar2;
  longlong lVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  this->bInitializedDictionaries = true;
  if (this->bUseDictionaryIfPresent == false) {
LAB_14e297d3a:
    bVar2 = GetDictionaryPaths(this,&local_28,&local_38,false);
    if (!bVar2) {
      if (this->bCaptureMode == false) {
        if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        }
        this->bInitializedDictionaries = false;
      }
      else if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
      goto LAB_14e297e84;
    }
  }
  else {
    bVar2 = FindFallbackDictionaries(this,&local_28,&local_38,false);
    if (!bVar2) goto LAB_14e297d3a;
  }
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  lVar3 = (longlong)local_28.Data.ArrayNum;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_28.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,FVar1.Data,lVar3 * 2);
  }
  InitializeDictionary(this,&local_18,&this->ServerDictionary);
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  lVar3 = (longlong)local_38.Data.ArrayNum;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_38.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,FVar1.Data,lVar3 * 2);
  }
  InitializeDictionary(this,&local_18,&this->ClientDictionary);
LAB_14e297e84:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// InitializeDictionary @ 14e297ec0

/* WARNING: Removing unreachable block (ram,0x00014e298413) */
/* WARNING: Removing unreachable block (ram,0x00014e298462) */
/* WARNING: Removing unreachable block (ram,0x00014e298473) */
/* WARNING: Removing unreachable block (ram,0x00014e29849b) */
/* WARNING: Removing unreachable block (ram,0x00014e2984db) */
/* WARNING: Removing unreachable block (ram,0x00014e2984a6) */
/* WARNING: Removing unreachable block (ram,0x00014e2984d2) */
/* WARNING: Removing unreachable block (ram,0x00014e2984c3) */
/* WARNING: Removing unreachable block (ram,0x00014e29848f) */
/* WARNING: Removing unreachable block (ram,0x00014e2984e4) */
/* WARNING: Removing unreachable block (ram,0x00014e2984ed) */
/* WARNING: Removing unreachable block (ram,0x00014e2984fb) */
/* WARNING: Removing unreachable block (ram,0x00014e298523) */
/* WARNING: Removing unreachable block (ram,0x00014e298563) */
/* WARNING: Removing unreachable block (ram,0x00014e29852e) */
/* WARNING: Removing unreachable block (ram,0x00014e29855a) */
/* WARNING: Removing unreachable block (ram,0x00014e29854b) */
/* WARNING: Removing unreachable block (ram,0x00014e298517) */
/* WARNING: Removing unreachable block (ram,0x00014e29856c) */
/* WARNING: Removing unreachable block (ram,0x00014e298575) */
/* WARNING: Removing unreachable block (ram,0x00014e29858d) */
/* WARNING: Removing unreachable block (ram,0x00014e2985b5) */
/* WARNING: Removing unreachable block (ram,0x00014e2985f5) */
/* WARNING: Removing unreachable block (ram,0x00014e2985c0) */
/* WARNING: Removing unreachable block (ram,0x00014e2985ec) */
/* WARNING: Removing unreachable block (ram,0x00014e2985dd) */
/* WARNING: Removing unreachable block (ram,0x00014e2985a9) */
/* WARNING: Removing unreachable block (ram,0x00014e2985fe) */
/* WARNING: Removing unreachable block (ram,0x00014e298607) */
/* WARNING: Removing unreachable block (ram,0x00014e298191) */
/* WARNING: Removing unreachable block (ram,0x00014e29815a) */
/* WARNING: Removing unreachable block (ram,0x00014e29815f) */
/* WARNING: Removing unreachable block (ram,0x00014e298183) */
/* WARNING: Removing unreachable block (ram,0x00014e298188) */
/* WARNING: Removing unreachable block (ram,0x00014e2981d7) */
/* WARNING: Removing unreachable block (ram,0x00014e2981e7) */
/* WARNING: Removing unreachable block (ram,0x00014e29820f) */
/* WARNING: Removing unreachable block (ram,0x00014e29824f) */
/* WARNING: Removing unreachable block (ram,0x00014e29821a) */
/* WARNING: Removing unreachable block (ram,0x00014e298246) */
/* WARNING: Removing unreachable block (ram,0x00014e298237) */
/* WARNING: Removing unreachable block (ram,0x00014e298203) */
/* WARNING: Removing unreachable block (ram,0x00014e298258) */
/* WARNING: Removing unreachable block (ram,0x00014e298261) */
/* WARNING: Removing unreachable block (ram,0x00014e298271) */
/* WARNING: Removing unreachable block (ram,0x00014e298299) */
/* WARNING: Removing unreachable block (ram,0x00014e2982d9) */
/* WARNING: Removing unreachable block (ram,0x00014e2982a4) */
/* WARNING: Removing unreachable block (ram,0x00014e2982d0) */
/* WARNING: Removing unreachable block (ram,0x00014e2982c1) */
/* WARNING: Removing unreachable block (ram,0x00014e29828d) */
/* WARNING: Removing unreachable block (ram,0x00014e2982e2) */
/* WARNING: Removing unreachable block (ram,0x00014e2982eb) */
/* WARNING: Removing unreachable block (ram,0x00014e298303) */
/* WARNING: Removing unreachable block (ram,0x00014e29832b) */
/* WARNING: Removing unreachable block (ram,0x00014e29836b) */
/* WARNING: Removing unreachable block (ram,0x00014e298336) */
/* WARNING: Removing unreachable block (ram,0x00014e298362) */
/* WARNING: Removing unreachable block (ram,0x00014e298353) */
/* WARNING: Removing unreachable block (ram,0x00014e29831f) */
/* WARNING: Removing unreachable block (ram,0x00014e298374) */
/* WARNING: Removing unreachable block (ram,0x00014e29837d) */
/* WARNING: Removing unreachable block (ram,0x00014e2983df) */
/* WARNING: Removing unreachable block (ram,0x00014e2983e3) */
/* WARNING: Removing unreachable block (ram,0x00014e29840e) */
/* WARNING: Removing unreachable block (ram,0x00014e29841b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
OodleNetworkHandlerComponent::InitializeDictionary
          (OodleNetworkHandlerComponent *this,FString *param_1,
          TSharedPtr<FOodleNetworkDictionary,1> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  IFileManager *pIVar9;
  FArchive *pFVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  FOodleNetworkDictionary *pFVar13;
  uint uVar14;
  OodleNetwork1_Shared *pOVar16;
  OodleNetwork1_Shared *pOVar17;
  undefined8 local_res10;
  TSharedPtr<FOodleNetworkDictionary,1> *local_res18;
  undefined8 local_res20;
  OodleNetwork1_Shared *local_198;
  OodleNetwork1_Shared *local_190;
  TPairInitializer<FString_const_&,TSharedPtr<FOodleNetworkDictionary,1>_&&> local_188;
  undefined1 local_178 [160];
  ForAnyElementType local_d8;
  longlong local_d0;
  FDictionaryHeader local_c8;
  FOodleNetworkDictionary *local_78;
  TReferenceControllerBase<1> *local_70;
  FString *local_68;
  FOodleNetworkDictionary **local_60;
  FOodleNetworkDictionary *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  OodleNetwork1_Shared *pOVar15;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pOVar15 = (OodleNetwork1_Shared *)0x0;
  uVar14 = 0;
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  local_res18 = param_2;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
  iVar7 = TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
                      *)&DictionaryMap,uVar6,param_1);
  pOVar17 = pOVar15;
  if (iVar7 == -1) {
LAB_14e297f62:
    pIVar9 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar10 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,pwVar11,0);
    if (pFVar10 == (FArchive *)0x0) {
      UE::Assert::Private::ProcessLowLevelFatalError
                ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                 ,0x28c,L"Incorrect DictionaryFile Provided");
      goto LAB_14e2988c3;
    }
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)local_178,pFVar10);
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_178._0_8_ = &___7FOodleNetworkArchiveBase__6B_;
    local_d0 = 0;
    pwVar11 = FCommandLine::Get();
    local_178[0x98] = FParse::Param(pwVar11,L"FORCELOGFLUSH");
    local_178._0_8_ = &___7FOodleNetworkDictionaryArchive__6B_;
    local_c8.Magic = 0x1b1bacd4;
    local_c8.DictionaryVersion = 0;
    local_c8.OodleMajorHeaderVersion = 0;
    local_c8.HashTableSize.Value = 0xffffffff;
    local_c8.HashTableSize.Offset = 0;
    local_c8.DictionaryData.Offset.Value = 0;
    local_c8.DictionaryData.Offset.Offset = 0;
    local_c8.DictionaryData.CompressedLength.Value = 0;
    local_c8.DictionaryData.CompressedLength.Offset = 0;
    local_c8.DictionaryData.DecompressedLength.Value = 0;
    local_c8.DictionaryData.DecompressedLength.Offset = 0;
    local_c8.CompressorData.Offset.Value = 0;
    local_c8.CompressorData.Offset.Offset = 0;
    local_c8.CompressorData.CompressedLength.Value = 0;
    local_c8.CompressorData.CompressedLength.Offset = 0;
    local_c8.CompressorData.DecompressedLength.Value = 0;
    local_c8.CompressorData.DecompressedLength.Offset = 0;
    if ((local_178[0x28] & 4) != 0) {
      local_c8.Magic = 0x1b1bacd4;
      local_c8.DictionaryVersion = 1;
      local_c8.OodleMajorHeaderVersion = 9;
    }
    local_190 = (OodleNetwork1_Shared *)0x0;
    local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
    local_res10 = (OodleNetwork1UDP_State *)((ulonglong)local_res10._4_4_ << 0x20);
    local_198 = (OodleNetwork1_Shared *)0x0;
    FOodleNetworkDictionaryArchive::FDictionaryHeader::SerializeHeader
              (&local_c8,(FOodleNetworkDictionaryArchive *)local_178);
    if ((local_178[0x28] & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DictionaryBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x196,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactCompressorStateBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x197,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7780651153003380766>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x1e,"Data != nullptr");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FArchiveState::SetError((FArchiveState *)local_178);
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7780651153003380766>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkArchives.cpp"
                         ,0x1e,"Data != nullptr");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FArchiveState::SetError((FArchiveState *)local_178);
      pOVar16 = pOVar15;
    }
    else {
      FOodleNetworkArchiveBase::SerializeOodleDecompressData
                ((FOodleNetworkArchiveBase *)local_178,&local_c8.DictionaryData,(uchar **)&local_190
                 ,(uint *)&local_res10,true);
      FOodleNetworkArchiveBase::SerializeOodleDecompressData
                ((FOodleNetworkArchiveBase *)local_178,&local_c8.CompressorData,(uchar **)&local_198
                 ,(uint *)&local_res20,false);
      pOVar15 = local_198;
      pOVar16 = local_190;
      uVar14 = (uint)local_res10;
    }
    if ((local_178[0x29] & 2) == 0) {
      if (4 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
      uVar12 = OodleNetwork1UDP_State_Size();
      local_res10 = FMemory::Malloc(uVar12 & 0xffffffff,0);
      iVar8 = OodleNetwork1UDP_State_Uncompact_ForVersion
                        (local_res10,(OodleNetwork1UDP_StateCompacted *)pOVar15,
                         local_c8.OodleMajorHeaderVersion);
      iVar7 = local_c8.HashTableSize.Value;
      if (iVar8 == 0) {
        if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        }
        this->bEnableOodle = false;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_178);
        (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
        goto LAB_14e2988c3;
      }
      local_res20 = OodleNetwork1_Shared_Size(local_c8.HashTableSize.Value);
      local_198 = FMemory::Malloc(local_res20 & 0xffffffff,0);
      OodleNetwork1_Shared_SetWindow(local_198,iVar7,pOVar16,uVar14);
      pFVar13 = ::operator_new(0x38);
      if (pFVar13 == (FOodleNetworkDictionary *)0x0) {
        pFVar13 = (FOodleNetworkDictionary *)0x0;
      }
      else {
        pFVar13 = FOodleNetworkDictionary::FOodleNetworkDictionary
                            (pFVar13,iVar7,(uchar *)pOVar16,uVar14,(OodleNetwork1_Shared *)local_198
                             ,(uint)local_res20,(OodleNetwork1UDP_State *)local_res10,(uint)uVar12);
      }
      local_78 = pFVar13;
      local_70 = ::operator_new(0x18);
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        local_70->SharedReferenceCount = (atomic<int>)0x1;
        local_70->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOodleNetworkDictionary__U__DefaultDeleter_UFOodleNetworkDictionary___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_70->WeakReferenceCount = (atomic<int>)0x1;
        local_70[1]._padding_ = (longlong)pFVar13;
      }
      local_60 = &local_78;
      local_68 = param_1;
      TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FOodleNetworkDictionary,1>_&&>_>
                ((TSet<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FOodleNetworkDictionary,1>,0>,FDefaultSetAllocator>
                  *)&DictionaryMap,&local_188,(bool *)&local_68);
      pOVar17 = (OodleNetwork1_Shared *)
                (DictionaryMap._0_8_ + ((longlong)(int)local_188.Key * 5 + 2) * 8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    }
    else {
      if (2 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
      }
      if (pOVar16 != (OodleNetwork1_Shared *)0x0) {
        operator_delete__(pOVar16);
      }
    }
    if (pOVar15 != (OodleNetwork1_Shared *)0x0) {
      operator_delete__(pOVar15);
    }
    (**(code **)(*(longlong *)pFVar10 + 0x210))(pFVar10);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)local_178);
    (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
    param_2 = local_res18;
    if (pOVar17 == (OodleNetwork1_Shared *)0x0) goto LAB_14e2988c3;
  }
  else {
    lVar1 = DictionaryMap._0_8_ + (longlong)iVar7 * 0x28;
    pOVar17 = (OodleNetwork1_Shared *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pOVar17 = pOVar15;
    }
    if (pOVar17 == (OodleNetwork1_Shared *)0x0) goto LAB_14e297f62;
  }
  pTVar2 = (TReferenceControllerBase<1> *)pOVar17->m_lzp_window_end;
  pFVar13 = (FOodleNetworkDictionary *)pOVar17->m_lzp_window;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = param_2->Object;
  pTStack_50 = (param_2->SharedReferenceCount).ReferenceController;
  param_2->Object = pFVar13;
  (param_2->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
LAB_14e2988c3:
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// InitializePacketLogs @ 14e298930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
OodleNetworkHandlerComponent::InitializePacketLogs(OodleNetworkHandlerComponent *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar5;
  size_t sVar6;
  FString *pFVar7;
  FDateTime this_01;
  FEngineVersion *this_02;
  FString *pFVar8;
  IFileManager *pIVar9;
  FArchive *pFVar10;
  FArchive *pFVar11;
  FPacketCaptureArchive *this_03;
  FPacketCaptureArchive *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FPacketCaptureArchive *pFVar15;
  ForAnyElementType FVar16;
  OodleNetworkHandlerComponent *pOVar17;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  OodleNetworkHandlerComponent *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TStringView<wchar_t> local_60;
  wchar_t *local_50;
  undefined4 local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((((this->bCaptureMode == false) || (*(char *)this->_padding_ != '\x01')) ||
      (this->InPacketLog != (FPacketCaptureArchive *)0x0)) ||
     (this->OutPacketLog != (FPacketCaptureArchive *)0x0)) {
    return;
  }
  local_108 = this;
  this_00 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this_00);
  local_60.DataPtr = L"";
  if (GOodleSaveDir.Data.ArrayNum != 0) {
    local_60.DataPtr = (wchar_t *)GOodleSaveDir.Data.AllocatorInstance;
  }
  pFVar12 = (FPacketCaptureArchive *)0x0;
  pFVar15 = (FPacketCaptureArchive *)0x0;
  iVar14 = 0;
  local_60.Size = iVar14;
  if ((FScriptContainerElement *)local_60.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_60.DataPtr);
    local_60.Size = (int)sVar6;
  }
  local_48 = 6;
  local_50 = L"Server";
  FPaths::CombineInternal(&local_148,&local_60,2);
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar13.Data = local_148.Data.AllocatorInstance.Data;
  }
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  (**(code **)((longlong)*pIVar5 + 0x200))(pIVar5,FVar13.Data);
  local_60.DataPtr = L"";
  if (local_148.Data.ArrayNum != 0) {
    local_60.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  }
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x200);
  if ((FScriptContainerElement *)local_60.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_60.DataPtr);
    iVar14 = (int)sVar6;
  }
  local_48 = 5;
  local_50 = L"Input";
  local_60.Size = iVar14;
  FPaths::CombineInternal(&local_188,&local_60,2);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar13.Data = local_188.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar5,FVar13.Data);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  local_60.DataPtr = L"";
  if (local_148.Data.ArrayNum != 0) {
    local_60.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  }
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x200);
  iVar3 = 0;
  iVar14 = iVar3;
  if ((FScriptContainerElement *)local_60.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_60.DataPtr);
    iVar14 = (int)sVar6;
  }
  local_48 = 6;
  local_50 = L"Output";
  local_60.Size = iVar14;
  FPaths::CombineInternal(&local_188,&local_60,2);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar13.Data = local_188.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar5,FVar13.Data);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  FConfigCacheIni::GetString
            (GConfig,L"OodleNetworkHandlerComponent",L"PacketLogFile",&local_178,&GEngineIni);
  pFVar7 = FPaths::GetBaseFilename(&local_118,&local_178,true);
  if (&local_178 != pFVar7) {
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    local_178.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_178.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  this_01 = FDateTime::Now();
  pFVar7 = FDateTime::ToString((FDateTime *)this_01.Ticks,(FString *)&local_60);
  FWindowsPlatformProcess::GetCurrentProcessId();
  ::FString::PrintfImpl(&local_138,L"%d");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar13.Data = local_138.Data.AllocatorInstance.Data;
  }
  this_02 = FEngineVersion::Current();
  FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_02);
  ::FString::PrintfImpl(&local_d0,L"%d");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar16.Data = local_d0.Data.AllocatorInstance.Data;
  }
  pFVar8 = FApp::GetBranchName(&local_70);
  ::FString::ConcatFC(&local_118,&local_178,L"_");
  ::FString::ConcatFF(&local_e0,&local_118,pFVar8);
  ::FString::ConcatFC(&local_f0,&local_e0,L"_");
  ::FString::ConcatFC(&local_100,&local_f0,(wchar_t *)FVar16.Data);
  ::FString::ConcatFC(&local_80,&local_100,L"_");
  ::FString::ConcatFC(&local_90,&local_80,(wchar_t *)FVar13.Data);
  ::FString::ConcatFC(&local_a0,&local_90,L"_");
  ::FString::ConcatFF(&local_188,&local_a0,pFVar7);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  local_178.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_60.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.DataPtr);
  }
  ::FString::ConcatFC(&local_138,&local_178,L"_Input");
  local_40 = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    local_40 = local_138.Data.AllocatorInstance.Data;
  }
  local_60.DataPtr = L"";
  if (local_148.Data.ArrayNum != 0) {
    local_60.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  }
  iVar14 = iVar3;
  if ((FScriptContainerElement *)local_60.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_60.DataPtr);
    iVar14 = (int)sVar6;
  }
  local_50 = L"Input";
  local_48 = 5;
  local_38 = iVar3;
  local_60.Size = iVar14;
  if (local_40 != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen((wchar_t *)local_40);
    local_38 = (int)sVar6;
  }
  FPaths::CombineInternal(&local_b0,&local_60,3);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_138,&local_178,L"_Output");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar13.Data = local_138.Data.AllocatorInstance.Data;
  }
  local_60.DataPtr = L"";
  if (local_148.Data.ArrayNum != 0) {
    local_60.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_60.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_60.DataPtr);
    iVar3 = (int)sVar6;
  }
  local_50 = L"Output";
  uVar4 = 0;
  local_48 = 6;
  local_60.Size = iVar3;
  local_40 = FVar13.Data;
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen((wchar_t *)FVar13.Data);
    uVar4 = (undefined4)sVar6;
  }
  local_38 = uVar4;
  FPaths::CombineInternal(&local_c0,&local_60,3);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_158,&local_b0,L".ucap");
  ::FString::ConcatFC(&local_168,&local_c0,L".ucap");
  do {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar13.Data = local_158.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,FVar13.Data);
    if (cVar2 == '\0') {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar13.Data = local_168.Data.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,FVar13.Data);
      if (cVar2 == '\0') {
        pIVar9 = IFileManager::Get();
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_158.Data.ArrayNum != 0) {
          FVar13.Data = local_158.Data.AllocatorInstance.Data;
        }
        pFVar10 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar13.Data,0);
        if (pFVar10 == (FArchive *)0x0) {
          local_108->InPacketLog = (FPacketCaptureArchive *)0x0;
          pOVar17 = local_108;
        }
        else {
          pIVar9 = IFileManager::Get();
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_168.Data.ArrayNum != 0) {
            FVar13.Data = local_168.Data.AllocatorInstance.Data;
          }
          pFVar11 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar13.Data,0);
          this_03 = ::operator_new(0xd0);
          pFVar15 = pFVar12;
          if (this_03 != (FPacketCaptureArchive *)0x0) {
            pFVar15 = FPacketCaptureArchive::FPacketCaptureArchive(this_03,pFVar10);
          }
          pOVar17 = local_108;
          local_108->InPacketLog = pFVar15;
          pFVar15 = pFVar12;
          if ((pFVar11 != (FArchive *)0x0) &&
             (pFVar12 = ::operator_new(0xd0), pFVar12 != (FPacketCaptureArchive *)0x0)) {
            pFVar15 = FPacketCaptureArchive::FPacketCaptureArchive(pFVar12,pFVar11);
          }
        }
        pOVar17->OutPacketLog = pFVar15;
        if ((pOVar17->InPacketLog == (FPacketCaptureArchive *)0x0) ||
           (pFVar15 == (FPacketCaptureArchive *)0x0)) {
          UE::Assert::Private::ProcessLowLevelFatalError
                    ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                     ,0x38c,L"Failed to create files \'%s\' and \'%s\'");
        }
        else {
          FPacketCaptureArchive::SerializeCaptureHeader(pOVar17->InPacketLog);
          FPacketCaptureArchive::SerializeCaptureHeader(pOVar17->OutPacketLog);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
        return;
      }
    }
    ::FString::PrintfImpl(&local_e0,L"_%i");
    ::FString::ConcatFF(&local_118,&local_b0,&local_e0);
    ::FString::ConcatFC(&local_188,&local_118,L".ucap");
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    local_158.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    local_158.Data.ArrayNum = local_188.Data.ArrayNum;
    local_158.Data.ArrayMax = local_188.Data.ArrayMax;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_100,L"_%i");
    ::FString::ConcatFF(&local_f0,&local_c0,&local_100);
    ::FString::ConcatFC(&local_128,&local_f0,L".ucap");
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
    local_168.Data.ArrayNum = local_128.Data.ArrayNum;
    local_168.Data.ArrayMax = local_128.Data.ArrayMax;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// IsCompressionActive @ 14e2991b0

bool __thiscall
OodleNetworkHandlerComponent::IsCompressionActive(OodleNetworkHandlerComponent *this)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((this->bEnableOodle != false) && ((char *)this->_padding_ != (char *)0x0)) {
    cVar1 = *(char *)this->_padding_;
    lVar3 = 0x60;
    if (cVar1 != '\x01') {
      lVar3 = 0x70;
    }
    lVar3 = *(longlong *)((longlong)&this->_padding_ + lVar3);
    if ((((lVar3 == 0) && (this->bCaptureMode != false)) || (bOodleCompressionDisabled)) ||
       ((this->bInitializedDictionaries == false &&
        ((&this->ServerEnableMode)[cVar1 != '\x01'] == WhenCompressedPacketReceived)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (lVar3 != 0) {
      return !bVar2;
    }
  }
  return false;
}

// IsValid @ 14e299230

bool __thiscall OodleNetworkHandlerComponent::IsValid(OodleNetworkHandlerComponent *this)

{
  return true;
}

// LexToString @ 14e299240

wchar_t * __cdecl LexToString(EOodleNetResult param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"::Invalid";
  switch(param_1) {
  case Unknown:
    pwVar1 = L"EOodleNetResult::Unknown";
    break;
  case Success:
    pwVar1 = L"EOodleNetResult::Success";
    break;
  case OodleDecodeFailed:
    pwVar1 = L"EOodleNetResult::OodleDecodeFailed";
    break;
  case OodleSerializePayloadFail:
    pwVar1 = L"EOodleNetResult::OodleSerializePayloadFail";
    break;
  case OodleBadDecompressedLength:
    pwVar1 = L"EOodleNetResult::OodleBadDecompressedLength";
    break;
  case OodleNoDictionary:
    pwVar1 = L"EOodleNetResult::OodleNoDictionary";
    break;
  default:
    goto switchD_14e299261_default;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L':');
switchD_14e299261_default:
  return pwVar1 + 2;
}

// NotifyAnalyticsProvider @ 14e299310

void __thiscall
OodleNetworkHandlerComponent::NotifyAnalyticsProvider(OodleNetworkHandlerComponent *this)

{
  TSharedPtr<FOodleNetAnalyticsData,1> *pTVar1;
  char cVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNetAnalyticsAggregator *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  FOodleNetAnalyticsData *pFVar8;
  TSharedRef<FNetAnalyticsData,1> *pTVar9;
  TSharedPtr<FNetAnalyticsData,1> *pTVar10;
  longlong lVar11;
  FSharedReferencer<1> FVar12;
  FName local_res8;
  FName local_res10;
  FOodleNetAnalyticsData *local_d8;
  FSharedReferencer<1> local_d0;
  FOodleNetAnalyticsData *local_c8;
  FSharedReferencer<1> local_c0;
  TRawPtrProxyWithDeleter<FOodleNetAnalyticsData,FNetAnalyticsDataDeleter> local_b8;
  TSharedPtr<FNetAnalyticsData,1> local_a8;
  TRawPtrProxyWithDeleter<FClientOodleNetAnalyticsData,FNetAnalyticsDataDeleter> local_98;
  TSharedPtr<FNetAnalyticsData,1> local_88;
  FString local_78;
  TSharedRef<FNetAnalyticsData,1> local_68;
  FString local_58;
  TSharedRef<FNetAnalyticsData,1> local_48;
  
  pTVar1 = &this->NetAnalyticsData;
  if (pTVar1->Object == (FOodleNetAnalyticsData *)0x0) {
    pTVar3 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x268);
    this_00 = *(FNetAnalyticsAggregator **)(this->_padding_ + 0x260);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar12.ReferenceController = *(TReferenceControllerBase<1> **)(this->_padding_ + 600);
    lVar11 = *(longlong *)(this->_padding_ + 0x250);
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar11 != 0) && (this_00 != (FNetAnalyticsAggregator *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
      if (*(char *)this->_padding_ == '\x01') {
        pFVar7 = ::FString::FString(&local_78,L"FOodleNetAnalyticsData");
        ::FName::FName(&local_res8,L"Oodle.Stats");
        pFVar8 = ::operator_new(200);
        if (pFVar8 == (FOodleNetAnalyticsData *)0x0) {
          local_b8.Object = (FOodleNetAnalyticsData *)0x0;
        }
        else {
          memset(pFVar8,0,200);
          local_b8.Object = FOodleNetAnalyticsData::FOodleNetAnalyticsData(pFVar8);
          if (((local_b8.Object != (FOodleNetAnalyticsData *)0x0) &&
              (*(longlong *)&(local_b8.Object)->field_0x8 != 0)) &&
             ((*(longlong *)&(local_b8.Object)->field_0x10 != 0 &&
              (0 < *(int *)(*(longlong *)&(local_b8.Object)->field_0x10 + 8))))) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7bd,L"Trying to share an already-shared object");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        pTVar9 = TSharedRef<FNetAnalyticsData,1>::
                 TSharedRef<FNetAnalyticsData,1><FOodleNetAnalyticsData,FNetAnalyticsDataDeleter>
                           (&local_68,&local_b8);
        pTVar10 = FNetAnalyticsAggregator::RegisterAnalyticsData_Internal
                            (this_00,&local_a8,pTVar9,&local_res8,pFVar7);
        local_c0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_c8 = (FOodleNetAnalyticsData *)pTVar10->Object;
        if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_c0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<FOodleNetAnalyticsData,1> *)&local_c8) {
          pTVar1->Object = local_c8;
          local_c8 = (FOodleNetAnalyticsData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->NetAnalyticsData).SharedReferenceCount,&local_c0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.ReferenceController);
        FVar12.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
      }
      else {
        pFVar7 = ::FString::FString(&local_58,L"FClientOodleNetAnalyticsData");
        ::FName::FName(&local_res10,L"Oodle.ClientStats");
        pFVar8 = ::operator_new(200);
        if (pFVar8 == (FOodleNetAnalyticsData *)0x0) {
          pFVar8 = (FOodleNetAnalyticsData *)0x0;
        }
        else {
          memset(pFVar8,0,200);
          FOodleNetAnalyticsData::FOodleNetAnalyticsData(pFVar8);
          *(undefined ***)pFVar8 = &FClientOodleNetAnalyticsData::_vftable__for__FNetAnalyticsData__
          ;
          *(undefined ***)&pFVar8->field_0x20 =
               &FClientOodleNetAnalyticsData::_vftable__for__FOodleNetworkAnalyticsVars__;
          if (((*(longlong *)&pFVar8->field_0x8 != 0) && (*(longlong *)&pFVar8->field_0x10 != 0)) &&
             (0 < *(int *)(*(longlong *)&pFVar8->field_0x10 + 8))) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7bd,L"Trying to share an already-shared object");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        local_98.Object = (FClientOodleNetAnalyticsData *)pFVar8;
        pTVar9 = TSharedRef<FNetAnalyticsData,1>::
                 TSharedRef<FNetAnalyticsData,1><FClientOodleNetAnalyticsData,FNetAnalyticsDataDeleter>
                           (&local_48,&local_98);
        pTVar10 = FNetAnalyticsAggregator::RegisterAnalyticsData_Internal
                            (this_00,&local_88,pTVar9,&local_res10,pFVar7);
        pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
        local_d8 = (FOodleNetAnalyticsData *)pTVar10->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d0.ReferenceController = pTVar4;
        if (pTVar1 != (TSharedPtr<FOodleNetAnalyticsData,1> *)&local_d8) {
          pTVar1->Object = local_d8;
          local_d8 = (FOodleNetAnalyticsData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->NetAnalyticsData).SharedReferenceCount,&local_d0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        FVar12.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
    pFVar8 = pTVar1->Object;
    if (((pFVar8 != (FOodleNetAnalyticsData *)0x0) &&
        (pFVar8 != (FOodleNetAnalyticsData *)0xffffffffffffffe0)) &&
       ((*(int *)&pFVar8->field_0xc0 = *(int *)&pFVar8->field_0xc0 + 1, this->bEnableOodle != false
        && ((char *)this->_padding_ != (char *)0x0)))) {
      cVar2 = *(char *)this->_padding_;
      lVar11 = 0x60;
      if (cVar2 != '\x01') {
        lVar11 = 0x70;
      }
      lVar11 = *(longlong *)((longlong)&this->_padding_ + lVar11);
      if ((((lVar11 == 0) && (this->bCaptureMode != false)) || (bOodleCompressionDisabled != false))
         || ((this->bInitializedDictionaries == false &&
             ((&this->ServerEnableMode)[cVar2 != '\x01'] == WhenCompressedPacketReceived)))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((lVar11 != 0) && (!bVar6)) {
        *(int *)&pFVar8->field_0xc4 = *(int *)&pFVar8->field_0xc4 + 1;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  this->bOodleNetworkAnalytics = pTVar1->Object != (FOodleNetAnalyticsData *)0x0;
  return;
}

// OodleExec @ 14e2996a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl OodleExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  OodleNetworkHandlerComponent *pOVar2;
  FOodleNetworkDictionary *pFVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  wchar_t *pwVar7;
  FModuleManager *pFVar8;
  FName *pFVar9;
  size_t sVar10;
  FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize> FVar12;
  wchar_t *pwVar13;
  FName FVar14;
  ForAnyElementType FVar15;
  wchar_t *local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  FString local_50;
  
  local_res10[0] = param_2;
  bVar5 = FParse::Command(local_res10,L"Oodle",true);
  if (!bVar5) {
    return false;
  }
  bVar5 = FParse::Command(local_res10,L"ForceEnable",true);
  if (bVar5) {
    bVar5 = FParse::Command(local_res10,L"On",true);
    if (bVar5) {
      bVar5 = true;
    }
    else {
      bVar5 = FParse::Command(local_res10,L"Off",true);
      if (bVar5) {
        bVar5 = false;
      }
      else {
        bVar5 = FParse::Command(local_res10,L"Default",true);
        if (bVar5) {
          pwVar7 = FCommandLine::Get();
          bVar5 = FParse::Param(pwVar7,L"Oodle");
        }
        else {
          bVar5 = bOodleForceEnable == false;
        }
      }
    }
    if (bVar5 == bOodleForceEnable) {
      return true;
    }
    bOodleForceEnable = bVar5;
    return true;
  }
  bVar5 = FParse::Command(local_res10,L"Compression",true);
  if (bVar5) {
    pwVar7 = L"On";
    bVar5 = FParse::Command(local_res10,L"On",true);
    if (bVar5) {
      bOodleCompressionDisabled = false;
    }
    else {
      bVar5 = FParse::Command(local_res10,L"Off",true);
      if (bVar5) {
        bOodleCompressionDisabled = true;
      }
      else {
        bOodleCompressionDisabled = bOodleCompressionDisabled == false;
      }
    }
    pwVar13 = 
    L"Oodle compression disabled (packets will still be decompressed, just not compressed on send)."
    ;
    if (bOodleCompressionDisabled == false) {
      pwVar13 = L"Oodle compression re-enabled.";
    }
    FOutputDevice::Log(param_3,pwVar13);
    pFVar8 = FModuleManager::Get();
    pFVar9 = FName::FName(&local_res20,L"NetcodeUnitTest");
    bVar5 = FModuleManager::IsModuleLoaded(pFVar8,*pFVar9);
    if (!bVar5) {
      return true;
    }
    if (OodleComponentList.ArrayNum < 1) {
      return true;
    }
    if (**(char **)(*(longlong *)OodleComponentList.AllocatorInstance.Data + 8) != '\0') {
      return true;
    }
    FString::FString(&local_50,L"Admin Oodle Compression ");
    if (bOodleCompressionDisabled != false) {
      pwVar7 = L"Off";
    }
    sVar10 = wcslen(pwVar7);
    FString::AppendChars(&local_50,pwVar7,(int)sVar10);
    FOutputDevice::LogfImpl(param_3,L"Sending command \'%s\' to server.");
    FVar14 = (FName)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar14 = (FName)local_50.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar5 = FParse::Command(local_res10,L"Dictionary",true);
    if (!bVar5) {
      bVar5 = FParse::Command(local_res10,L"ResetStats",true);
      if (bVar5) {
        FOutputDevice::Log(param_3,L"Resetting Oodle stats.");
        FOodleNetStats::ResetStats(&GOodleNetStats);
        FVar11 = StatPtr_STAT_Oodle_CompressFailSavings;
        if (StatPtr_STAT_Oodle_CompressFailSavings ==
            (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)0x0) {
          pFVar9 = FName::FName(&local_res20,"STAT_Oodle_CompressFailSavings");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_CompressFailSavings,
                              *pFVar9,L"Oodle Compress Fail Num (0% savings)",
                              "STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork",true,false
                              ,ST_int64,false,false,MCR_Invalid);
        }
        FVar14 = *(FName *)FVar11;
        local_res20.ComparisonIndex = FVar14.ComparisonIndex.Value;
        local_res20.Number = FVar14.Number;
        FThreadStats::AddMessage<__int64>(FVar14,Set,0,false);
        FVar12 = StatPtr_STAT_Oodle_CompressFailSize;
        if (StatPtr_STAT_Oodle_CompressFailSize ==
            (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)0x0) {
          pFVar9 = FName::FName(&local_res20,"STAT_Oodle_CompressFailSize");
          FVar12 = (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_CompressFailSize,
                              *pFVar9,L"Oodle Compress Fail Num (size limit)",
                              "STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork",true,false
                              ,ST_int64,false,false,MCR_Invalid);
        }
        FVar14 = *(FName *)FVar12;
        local_res20.ComparisonIndex = FVar14.ComparisonIndex.Value;
        local_res20.Number = FVar14.Number;
        FThreadStats::AddMessage<__int64>(FVar14,Set,0,false);
        return true;
      }
      bVar5 = FParse::Command(local_res10,L"Capture",true);
      if (!bVar5) {
        FOutputDevice::LogfImpl(param_3,L"Unknown Oodle command \'Oodle %s\'");
        return true;
      }
      bVar5 = FParse::Command(local_res10,L"On",true);
      if (bVar5) {
        bVar5 = true;
      }
      else {
        bVar6 = FParse::Command(local_res10,L"Off",true);
        bVar5 = false;
        if (bVar6) {
          bVar5 = false;
        }
      }
      pwVar7 = L"Enabling Oodle capturing.";
      if (!bVar5) {
        pwVar7 = L"Disabling Oodle capturing";
      }
      FOutputDevice::Log(param_3,pwVar7);
      iVar4 = OodleComponentList.ArrayNum;
      pFVar1 = OodleComponentList.AllocatorInstance.Data + (longlong)OodleComponentList.ArrayNum * 8
      ;
      FVar15 = OodleComponentList.AllocatorInstance;
      do {
        while( true ) {
          if (OodleComponentList.ArrayNum != iVar4) {
            `TCheckedPointerIterator<OodleNetworkHandlerComponent_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res20);
          }
          if (FVar15.Data == pFVar1) {
            return true;
          }
          pOVar2 = *(OodleNetworkHandlerComponent **)FVar15.Data;
          if (pOVar2 != (OodleNetworkHandlerComponent *)0x0) break;
LAB_14e299d2a:
          FVar15.Data = FVar15.Data + 8;
        }
        if (!bVar5) {
          OodleNetworkHandlerComponent::FreePacketLogs(pOVar2);
          goto LAB_14e299d2a;
        }
        OodleNetworkHandlerComponent::InitializePacketLogs(pOVar2);
        FVar15.Data = FVar15.Data + 8;
      } while( true );
    }
    bVar5 = FParse::Command(local_res10,L"Load",true);
    pwVar7 = L"Unload";
    if (bVar5) {
      bVar5 = true;
      local_res20.ComparisonIndex.Value._0_1_ = 1;
      (**(code **)(GEngine->_padding_ + 8))(&GEngine->_padding_,0,L"Oodle ResetStats",param_3);
      pwVar13 = 
      L"Loading Oodle dictionaries (has no effect, if they have not been unloaded prior to this).";
    }
    else {
      bVar5 = FParse::Command(local_res10,L"Unload",true);
      if ((bVar5) && (bOodleCompressionDisabled == false)) {
        FOutputDevice::Log(param_3,
                           L"Can\'t unload dictionaries unless compression is disabled. Use \'Oodle Compression Off\'"
                          );
        return true;
      }
      local_res20.ComparisonIndex.Value = local_res20.ComparisonIndex.Value & 0xffffff00;
      pwVar13 = L"Unloading Oodle dictionaries.";
      bVar5 = false;
    }
    FOutputDevice::Log(param_3,pwVar13);
    iVar4 = OodleComponentList.ArrayNum;
    pFVar1 = OodleComponentList.AllocatorInstance.Data + (longlong)OodleComponentList.ArrayNum * 8;
    FVar15 = OodleComponentList.AllocatorInstance;
    while( true ) {
      if (OodleComponentList.ArrayNum != iVar4) {
        `TCheckedPointerIterator<OodleNetworkHandlerComponent_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_58);
      }
      if (FVar15.Data == pFVar1) break;
      pOVar2 = *(OodleNetworkHandlerComponent **)FVar15.Data;
      if (pOVar2 == (OodleNetworkHandlerComponent *)0x0) {
LAB_14e299a0a:
        FVar15.Data = FVar15.Data + 8;
      }
      else {
        pFVar3 = (pOVar2->ServerDictionary).Object;
        if (!bVar5) {
          if (pFVar3 != (FOodleNetworkDictionary *)0x0) {
            OodleNetworkHandlerComponent::FreeDictionary(pOVar2,&pOVar2->ServerDictionary);
          }
          if ((pOVar2->ClientDictionary).Object != (FOodleNetworkDictionary *)0x0) {
            OodleNetworkHandlerComponent::FreeDictionary(pOVar2,&pOVar2->ClientDictionary);
          }
          goto LAB_14e299a0a;
        }
        if ((pFVar3 == (FOodleNetworkDictionary *)0x0) &&
           ((pOVar2->ClientDictionary).Object == (FOodleNetworkDictionary *)0x0)) {
          OodleNetworkHandlerComponent::InitializeDictionaries(pOVar2);
          FVar15.Data = FVar15.Data + 8;
        }
        else {
          FOutputDevice::Log(param_3,
                             L"An OodleNetworkHandlerComponent already had loaded dictionaries.");
          FVar15.Data = FVar15.Data + 8;
        }
      }
    }
    pFVar8 = FModuleManager::Get();
    pFVar9 = FName::FName((FName *)&local_50,L"NetcodeUnitTest");
    bVar5 = FModuleManager::IsModuleLoaded(pFVar8,*pFVar9);
    if (!bVar5) {
      return true;
    }
    if (OodleComponentList.ArrayNum < 1) {
      return true;
    }
    if (**(char **)(*(longlong *)OodleComponentList.AllocatorInstance.Data + 8) != '\0') {
      return true;
    }
    FString::FString(&local_50,L"Admin Oodle Dictionary ");
    if ((char)local_res20.ComparisonIndex.Value != '\0') {
      pwVar7 = L"Load";
    }
    sVar10 = wcslen(pwVar7);
    FString::AppendChars(&local_50,pwVar7,(int)sVar10);
    FOutputDevice::LogfImpl(param_3,L"Sending command \'%s\' to server.");
    FVar14 = (FName)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar14 = (FName)local_50.Data.AllocatorInstance.Data;
    }
    (**(code **)(GEngine->_padding_ + 8))(&GEngine->_padding_,0,FVar14,param_3);
    FOutputDevice::Log(param_3,
                       L"Disabling packet capturing serverside (to allow dictionary generation).");
    FVar14 = (FName)L"Admin Oodle Capture Off";
  }
  (**(code **)(GEngine->_padding_ + 8))(&GEngine->_padding_,0,FVar14,param_3);
  if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return true;
}

// Outgoing @ 14e299d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
OodleNetworkHandlerComponent::Outgoing
          (OodleNetworkHandlerComponent *this,FBitWriter *param_1,FOutPacketTraits *param_2)

{
  longlong lVar1;
  FPacketCaptureArchive *this_00;
  FOodleNetworkDictionary *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TStatId TVar7;
  uchar *puVar8;
  FOodleNetAnalyticsData *pFVar9;
  TSharedPtr<FOodleNetworkDictionary,1> *pTVar10;
  EOodleNetworkEnableMode *pEVar11;
  long64 lVar12;
  ulonglong uVar13;
  FBitWriter *pFVar14;
  byte *pbVar15;
  FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize> FVar16;
  FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings> FVar17;
  undefined1 *puVar18;
  byte *_Dst;
  undefined1 *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auStackY_a28 [32];
  uint local_9c0 [2];
  FName local_9b8;
  byte local_9b0;
  FName local_9a8;
  byte local_9a0;
  LARGE_INTEGER local_998;
  LARGE_INTEGER local_990;
  ulonglong local_988;
  LARGE_INTEGER local_980;
  LARGE_INTEGER local_978 [2];
  FSourceLocation local_968;
  FSourceLocation local_948;
  FName local_928;
  FName local_920 [2];
  FName local_910;
  FName local_908;
  FBitWriter local_900;
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a28;
  if (this->bEnableOodle == false) {
    return;
  }
  if ((((this->bCaptureMode != false) && (*(char *)this->_padding_ == '\x01')) &&
      (this->OutPacketLog != (FPacketCaptureArchive *)0x0)) &&
     (local_9c0[0] = (uint)(param_1->Num + 7 >> 3), local_9c0[0] != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_Oodle_OutCaptureTime ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_OodleNetworkHandlerComponent::Outgoing(FBitWriter_&,FOutPacketTraits_&)_::_11_::FStat_STAT_Oodle_OutCaptureTime>
           )0x0) {
        pFVar6 = ::FName::FName(&local_928,"STAT_Oodle_OutCaptureTime");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutCaptureTime,*pFVar6,
                   L"STAT_Oodle_OutCaptureTime","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar7.StatIdPtr = (TStatIdData *)StatPtr_STAT_Oodle_OutCaptureTime;
    if (StatPtr_STAT_Oodle_OutCaptureTime ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_OodleNetworkHandlerComponent::Outgoing(FBitWriter_&,FOutPacketTraits_&)_::_11_::FStat_STAT_Oodle_OutCaptureTime>
         )0x0) {
      pFVar6 = ::FName::FName(local_920,"STAT_Oodle_OutCaptureTime");
      TVar7.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutCaptureTime,*pFVar6,
                      L"STAT_Oodle_OutCaptureTime","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_968.Impl._Line = 0x482;
    local_968.Impl._Column = 5;
    local_968.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
    ;
    local_968.Impl._Function =
         "void __cdecl OodleNetworkHandlerComponent::Outgoing(struct FBitWriter &,struct FOutPacketTraits &)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_9b8,TVar7,CycleStat|ClearEveryFrame,false,&local_968);
    if (__CsvProfilerStat1155 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("Oodle_OutCaptureTime");
      __CsvProfilerStat1155 = true;
    }
    FCsvProfiler::BeginExclusiveStat("Oodle_OutCaptureTime","CSV_Oodle_OutCaptureTime");
    GPacketHandlerDiscardTimeguardMeasurement = true;
    this_00 = this->OutPacketLog;
    puVar8 = FBitWriter::GetData(param_1);
    FPacketCaptureArchive::SerializePacket(this_00,puVar8,local_9c0);
    FCsvProfiler::EndExclusiveStat("Oodle_OutCaptureTime");
    if ((local_9b0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_9b0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_9b0 & 4) != 0) {
      FThreadStats::AddMessage(local_9b8,CycleScopeEnd);
    }
    local_9b0 = 0;
  }
  puVar19 = (undefined1 *)0x0;
  puVar21 = puVar19;
  if ((this->bOodleNetworkAnalytics != false) &&
     ((this->NetAnalyticsData).Object != (FOodleNetAnalyticsData *)0x0)) {
    pFVar9 = TSharedPtr<FOodleNetAnalyticsData,1>::operator->(&this->NetAnalyticsData);
    puVar21 = &pFVar9->field_0x20;
    if (pFVar9 == (FOodleNetAnalyticsData *)0x0) {
      puVar21 = puVar19;
    }
  }
  pTVar10 = &this->ServerDictionary;
  if (*(char *)this->_padding_ != '\x01') {
    pTVar10 = &this->ClientDictionary;
  }
  pFVar2 = pTVar10->Object;
  uVar24 = param_1->Num + 7 >> 3;
  uVar23 = (uint)uVar24;
  puVar18 = puVar19;
  if (((pFVar2 != (FOodleNetworkDictionary *)0x0) || (this->bCaptureMode == false)) &&
     (bOodleCompressionDisabled == false)) {
    if (this->bInitializedDictionaries == false) {
      pEVar11 = &this->ServerEnableMode;
      if (*(char *)this->_padding_ != '\x01') {
        pEVar11 = &this->ClientEnableMode;
      }
      if (*pEVar11 == WhenCompressedPacketReceived) {
        puVar19 = &DAT_00000001;
        goto LAB_14e299ff2;
      }
    }
    if ((GOodleMinSizeForCompression < 1) || (GOodleMinSizeForCompression <= (int)uVar23)) {
      if (pFVar2 != (FOodleNetworkDictionary *)0x0) {
        if ((0x2000 < *(uint *)((longlong)&this->_padding_ + 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaxOutgoingBits <= (MAX_PACKET_SIZE * 8)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                               ,0x4aa,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar22 = *(int *)((longlong)&this->_padding_ + 4);
        iVar5 = (**(code **)(this->_padding_ + 0x70))(this);
        uVar20 = (uint)param_1->Num;
        if (uVar20 != 0) {
          if ((uint)(iVar22 - iVar5) < uVar20) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1179215895688381615>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                               ,0x4af,"UncompressedBits <= MaxAdjustedLengthBits");
            if (bVar4) {
code_r0x00014e29a19d:
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            lVar12 = OodleNetwork1_CompressedBufferSizeNeeded(uVar24 & 0xffffffff);
            if (lVar12 < 0x801) {
              puVar8 = FBitWriter::GetData(param_1);
              TVar7 = FThreadSafeStaticStatInner<FStat_STAT_Oodle_OutCompressTime,1>::GetStatId
                                ((FThreadSafeStaticStatInner<FStat_STAT_Oodle_OutCompressTime,1> *)
                                 &StatPtr_STAT_Oodle_OutCompressTime);
              local_948.Impl._Line = 0x4ba;
              local_948.Impl._File =
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
              ;
              local_948.Impl._Column = 6;
              local_948.Impl._Function =
                   "void __cdecl OodleNetworkHandlerComponent::Outgoing(struct FBitWriter &,struct FOutPacketTraits &)"
              ;
              FScopeCycleCounter::FScopeCycleCounter
                        ((FScopeCycleCounter *)&local_9a8,*(TStatIdData **)&(TVar7.StatIdPtr)->Name,
                         CycleStat|ClearEveryFrame,false,&local_948);
              if (__CsvProfilerStat1211 == false) {
                FCsvProfilerTrace::OutputInlineStatExclusive("Oodle_OutCompressTime");
                __CsvProfilerStat1211 = true;
              }
              FCsvProfiler::BeginExclusiveStat("Oodle_OutCompressTime","CSV_Oodle_OutCompressTime");
              uVar13 = OodleNetwork1UDP_Encode
                                 ((OodleNetwork1UDP_State *)pFVar2->CompressorState,
                                  (OodleNetwork1_Shared *)pFVar2->SharedDictionary,puVar8,
                                  uVar24 & 0xffffffff,local_848);
              local_988 = uVar13;
              FCsvProfiler::EndExclusiveStat("Oodle_OutCompressTime");
              if ((local_9a0 & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_9a0 & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_9a0 & 4) != 0) {
                FThreadStats::AddMessage(local_9a8,CycleScopeEnd);
              }
              local_9a0 = 0;
              uVar20 = (uint)uVar13;
              if (uVar23 < uVar20) {
                if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
                }
                (**(code **)(param_1->_padding_ + 0xc0))(param_1);
                FArchiveState::SetError((FArchiveState *)param_1);
                return;
              }
              iVar22 = 2 - (uint)(uVar23 < 0xfc);
              uVar25 = *(int *)((longlong)&this->_padding_ + 4) + iVar22 * -8;
              if ((uVar20 * 8 <= uVar25) && (uVar20 < uVar23)) {
                param_2->bIsCompressed = true;
                lVar1 = (ulonglong)(uVar20 + iVar22) * 8;
                if (lVar1 - param_1->Max != 0 && param_1->Max <= lVar1) {
                  if ((0x400 < uVar20 + iVar22) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NewPacketByteCount <= MAX_PACKET_SIZE",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                                         ,0x4de,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar14 = FBitWriter::FBitWriter(&local_900,0x2000,false);
                  FBitWriter::operator=(param_1,pFVar14);
                  FBitWriter::~FBitWriter(&local_900);
                }
                pbVar15 = FBitWriter::GetData(param_1);
                _Dst = pbVar15 + 1;
                if (uVar23 < 0xfc) {
                  *pbVar15 = (byte)uVar24;
                }
                else {
                  *pbVar15 = (byte)uVar24 | 0xfc;
                  *_Dst = (byte)(uVar23 - 0xfc >> 2);
                  _Dst = pbVar15 + 2;
                }
                memcpy(_Dst,local_848,uVar13 & 0xffffffff);
                FBitWriter::SetNumBits(param_1,(ulonglong)((uVar20 + iVar22) * 8));
                GOodleNetStats.OutUncompressedLength = GOodleNetStats.OutUncompressedLength + uVar23
                ;
                GOodleNetStats.OutCompressedLength = GOodleNetStats.OutCompressedLength + uVar20;
                GOodleNetStats.TotalOutCompressedLength =
                     GOodleNetStats.TotalOutCompressedLength + (uVar13 & 0xffffffff);
                GOodleNetStats.TotalOutUncompressedLength =
                     GOodleNetStats.TotalOutUncompressedLength + (uVar24 & 0xffffffff);
                QueryPerformanceCounter(&local_998);
                fVar26 = (float)(((double)local_998.QuadPart * FGenericPlatformTime::SecondsPerCycle
                                 + __real_4170000000000000) - GOodleNetStats.LastStatsUpdate);
                if (__real_3f800000 < fVar26) {
                  FOodleNetStats::UpdateStats(&GOodleNetStats,fVar26);
                  QueryPerformanceCounter(&local_990);
                  GOodleNetStats.LastStatsUpdate =
                       (double)local_990.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                       __real_4170000000000000;
                }
                if (puVar21 == (undefined1 *)0x0) {
                  return;
                }
                *(longlong *)(puVar21 + 0x38) = *(longlong *)(puVar21 + 0x38) + 1;
                lVar1 = param_1->Num;
                *(ulonglong *)(puVar21 + 0x80) =
                     *(longlong *)(puVar21 + 0x80) + (uVar13 & 0xffffffff);
                *(longlong *)(puVar21 + 0x78) = *(longlong *)(puVar21 + 0x78) + (lVar1 + 6 >> 3);
                *(ulonglong *)(puVar21 + 0x88) =
                     *(longlong *)(puVar21 + 0x88) + (uVar24 & 0xffffffff);
                return;
              }
              param_2->bIsCompressed = false;
              if (puVar21 != (undefined1 *)0x0) {
                *(ulonglong *)(puVar21 + 0x90) =
                     *(longlong *)(puVar21 + 0x90) + (uVar24 & 0xffffffff);
              }
              bVar4 = FBitWriter::AllowAppend(param_1,8);
              if (bVar4) {
                puVar8 = FBitWriter::GetData(param_1);
                memmove(puVar8 + 1,puVar8,param_1->Num + 7 >> 3);
                *puVar8 = '\0';
                FBitWriter::SetNumBits(param_1,param_1->Num + 8);
              }
              else {
                FBitWriter::SetOverflowed(param_1,(int)param_1->Num);
              }
              if (uVar25 < uVar20 * 8) {
                FVar16 = StatPtr_STAT_Oodle_CompressFailSize;
                if (StatPtr_STAT_Oodle_CompressFailSize ==
                    (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)0x0) {
                  pFVar6 = ::FName::FName(&local_910,"STAT_Oodle_CompressFailSize");
                  FVar16 = (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSize>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_Oodle_CompressFailSize,*pFVar6,
                                      L"Oodle Compress Fail Num (size limit)",
                                      "STATGROUP_OodleNetwork","STATCAT_Advanced",L"OodleNetwork",
                                      true,false,ST_int64,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar16,Add,1,false);
                if (puVar21 == (undefined1 *)0x0) {
                  return;
                }
                *(longlong *)(puVar21 + 0x58) = *(longlong *)(puVar21 + 0x58) + 1;
                return;
              }
              if ((uint)local_988 < uVar23) {
                return;
              }
              GOodleNetStats.OutCompressedLength = GOodleNetStats.OutCompressedLength + uVar23;
              GOodleNetStats.OutUncompressedLength = GOodleNetStats.OutUncompressedLength + uVar23;
              GOodleNetStats.TotalOutCompressedLength =
                   GOodleNetStats.TotalOutCompressedLength + (uVar24 & 0xffffffff);
              GOodleNetStats.TotalOutUncompressedLength =
                   GOodleNetStats.TotalOutUncompressedLength + (uVar24 & 0xffffffff);
              QueryPerformanceCounter(&local_980);
              fVar26 = (float)(((double)local_980.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                               __real_4170000000000000) - GOodleNetStats.LastStatsUpdate);
              if (__real_3f800000 < fVar26) {
                FOodleNetStats::UpdateStats(&GOodleNetStats,fVar26);
                QueryPerformanceCounter(local_978);
                GOodleNetStats.LastStatsUpdate =
                     (double)local_978[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                     __real_4170000000000000;
              }
              FVar17 = StatPtr_STAT_Oodle_CompressFailSavings;
              if (StatPtr_STAT_Oodle_CompressFailSavings ==
                  (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)0x0) {
                pFVar6 = ::FName::FName(&local_908,"STAT_Oodle_CompressFailSavings");
                FVar17 = (FThreadSafeStaticStat<FStat_STAT_Oodle_CompressFailSavings>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_Oodle_CompressFailSavings,*pFVar6,
                                    L"Oodle Compress Fail Num (0% savings)","STATGROUP_OodleNetwork"
                                    ,"STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,
                                    false,MCR_Invalid);
              }
              FThreadStats::AddMessage<__int64>(*(FName *)FVar17,Add,1,false);
              if (puVar21 == (undefined1 *)0x0) {
                return;
              }
              *(longlong *)(puVar21 + 0x40) = *(longlong *)(puVar21 + 0x40) + 1;
              if (param_2->bIsKeepAlive != false) {
                *(longlong *)(puVar21 + 0x50) = *(longlong *)(puVar21 + 0x50) + 1;
                return;
              }
              if (param_2->NumAckBits == 0) {
                return;
              }
              if (param_2->NumBunchBits != 0) {
                return;
              }
              *(longlong *)(puVar21 + 0x48) = *(longlong *)(puVar21 + 0x48) + 1;
              return;
            }
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1179215895688381616>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                               ,0x4b0,
                               "OodleNetwork1_CompressedBufferSizeNeeded(UncompressedBytes) <= (MAX_PACKET_SIZE * 2)"
                              );
            if (bVar4) goto code_r0x00014e29a19d;
          }
        }
        if (1 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
        }
        (**(code **)(param_1->_padding_ + 0xc0))(param_1);
        FArchiveState::SetError((FArchiveState *)param_1);
        return;
      }
      if (this->bInitializedDictionaries != false) {
        UE::Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                   ,0x577,
                   L"Tried to compress a packet, but no dictionary is present for compression.");
        (**(code **)(param_1->_padding_ + 0xc0))(param_1);
        FArchiveState::SetError((FArchiveState *)param_1);
        return;
      }
    }
    else {
      puVar18 = &DAT_00000001;
    }
  }
LAB_14e299ff2:
  if (puVar21 != (undefined1 *)0x0) {
    *(undefined1 **)(puVar21 + 0x68) = puVar19 + *(longlong *)(puVar21 + 0x68);
    *(ulonglong *)(puVar21 + 0x98) = *(longlong *)(puVar21 + 0x98) + (uVar24 & 0xffffffff);
    *(undefined1 **)(puVar21 + 0x70) = puVar18 + *(longlong *)(puVar21 + 0x70);
  }
  bVar4 = FBitWriter::AllowAppend(param_1,8);
  if (bVar4) {
    puVar8 = FBitWriter::GetData(param_1);
    memmove(puVar8 + 1,puVar8,param_1->Num + 7 >> 3);
    *puVar8 = '\0';
    FBitWriter::SetNumBits(param_1,param_1->Num + 8);
  }
  else {
    FBitWriter::SetOverflowed(param_1,(int)param_1->Num);
  }
  return;
}

// RemoteInitializeDictionaries @ 14e29aa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
OodleNetworkHandlerComponent::RemoteInitializeDictionaries(OodleNetworkHandlerComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  FOodleNetAnalyticsData *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_void___cdecl_OodleNetworkHandlerComponent::RemoteInitializeDictionaries(void)_::_2_::FStat_STAT_Oodle_RemoteInitializeDictionaries>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Oodle_RemoteInitializeDictionaries ==
          (FThreadSafeStaticStat<_public:_void___cdecl_OodleNetworkHandlerComponent::RemoteInitializeDictionaries(void)_::_2_::FStat_STAT_Oodle_RemoteInitializeDictionaries>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_Oodle_RemoteInitializeDictionaries");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_RemoteInitializeDictionaries,
                   *pFVar7,L"STAT_Oodle_RemoteInitializeDictionaries","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Oodle_RemoteInitializeDictionaries;
  if (StatPtr_STAT_Oodle_RemoteInitializeDictionaries ==
      (FThreadSafeStaticStat<_public:_void___cdecl_OodleNetworkHandlerComponent::RemoteInitializeDictionaries(void)_::_2_::FStat_STAT_Oodle_RemoteInitializeDictionaries>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_Oodle_RemoteInitializeDictionaries");
    FVar8 = (FThreadSafeStaticStat<_public:_void___cdecl_OodleNetworkHandlerComponent::RemoteInitializeDictionaries(void)_::_2_::FStat_STAT_Oodle_RemoteInitializeDictionaries>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Oodle_RemoteInitializeDictionaries,*pFVar7,
                         L"STAT_Oodle_RemoteInitializeDictionaries","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compression\\OodleNetwork\\Source\\Private\\OodleNetworkHandlerComponent.cpp"
                   ,0x231);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      goto LAB_14e29ab80;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14e29ab80:
  InitializeDictionaries(this);
  if ((this->bOodleNetworkAnalytics != false) &&
     (pFVar3 = (this->NetAnalyticsData).Object, pFVar3 != (FOodleNetAnalyticsData *)0x0)) {
    puVar2 = &pFVar3->field_0xc4;
    *(int *)puVar2 = *(int *)puVar2 + 1;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Z_Construct_UClass_UOodleNetworkTrainerCommandlet_NoRegister @ 14e29ec60

UClass * __cdecl Z_Construct_UClass_UOodleNetworkTrainerCommandlet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OodleNetworkHandlerComponent",L"OodleNetworkTrainerCommandlet",
               &Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton,
               UOodleNetworkTrainerCommandlet::StaticRegisterNativesUOodleNetworkTrainerCommandlet,
               0xa0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Editor",
               InternalConstructor<UOodleNetworkTrainerCommandlet>,
               InternalVTableHelperCtorCaller<UOodleNetworkTrainerCommandlet>,local_res8,
               UCommandlet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.InnerSingleton;
}

// Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult @ 14e29ed20

UEnum * __cdecl Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult(void)

{
  if (Z_Registration_Info_UEnum_EOodleNetResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOodleNetResult.InnerSingleton,
               &Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOodleNetResult.InnerSingleton;
}

// Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode @ 14e29ed60

UEnum * __cdecl Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode(void)

{
  if (Z_Registration_Info_UEnum_EOodleNetworkEnableMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOodleNetworkEnableMode.InnerSingleton,
               &Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EOodleNetworkEnableMode.InnerSingleton;
}

// IMPLEMENT_MODULE_OodleNetworkHandlerComponent @ 14e29eda0

void __cdecl IMPLEMENT_MODULE_OodleNetworkHandlerComponent(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarOodleClientEnableMode'' @ 150463670

void __cdecl _dynamic_atexit_destructor_for__CVarOodleClientEnableMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOodleClientEnableMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOodleMinSizeForCompression'' @ 150463690

void __cdecl _dynamic_atexit_destructor_for__CVarOodleMinSizeForCompression__(void)

{
  CVarOodleMinSizeForCompression._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOodleMinSizeForCompression);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOodleNetworkTimeguardLimit'' @ 1504636b0

void __cdecl UE::Oodle::_dynamic_atexit_destructor_for__CVarOodleNetworkTimeguardLimit__(void)

{
  CVarOodleNetworkTimeguardLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOodleNetworkTimeguardLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOodleNetworkTimeguardThresholdMS'' @ 1504636d0

void __cdecl UE::Oodle::_dynamic_atexit_destructor_for__CVarOodleNetworkTimeguardThresholdMS__(void)

{
  CVarOodleNetworkTimeguardThresholdMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarOodleNetworkTimeguardThresholdMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOodleServerEnableMode'' @ 1504636f0

void __cdecl _dynamic_atexit_destructor_for__CVarOodleServerEnableMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOodleServerEnableMode);
  return;
}

// `dynamic_atexit_destructor_for_'DictionaryMap'' @ 150463710

void __cdecl _dynamic_atexit_destructor_for__DictionaryMap__(void)

{
  DictionaryMap._72_4_ = 0;
  if (DictionaryMap._64_8_ != 0) {
    FMemory::Free((void *)DictionaryMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FOodleNetworkDictionary,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DictionaryMap);
  return;
}

// `dynamic_atexit_destructor_for_'EZAttrib_InAttemptedSavingsWithOverheadPercentTotal'' @ 150463750

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InAttemptedSavingsWithOverheadPercentTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InAttemptedSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InAttemptedSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InAttemptedSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_InCompressedLengthTotal'' @ 150463770

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InCompressedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InCompressedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InCompressedLengthTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (EZAttrib_InCompressedLengthTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_InCompressedNum'' @ 150463790

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InCompressedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InCompressedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_InCompressedNum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InCompressedNum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_InCompressedWithOverheadLengthTotal'' @ 1504637b0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InCompressedWithOverheadLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InCompressedWithOverheadLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InCompressedWithOverheadLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InCompressedWithOverheadLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_InDecompressedLengthTotal'' @ 1504637d0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InDecompressedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InDecompressedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InDecompressedLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InDecompressedLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_InNotCompressedLengthTotal'' @ 1504637f0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InNotCompressedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InNotCompressedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InNotCompressedLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InNotCompressedLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_InNotCompressedNum'' @ 150463810

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InNotCompressedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InNotCompressedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_InNotCompressedNum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InNotCompressedNum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_InPostLengthTotal'' @ 150463830

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InPostLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InPostLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InPostLengthTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InPostLengthTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_InSavingsBytesTotal'' @ 150463850

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InSavingsBytesTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InSavingsBytesTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InSavingsBytesTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InSavingsBytesTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_InSavingsPercentTotal'' @ 150463870

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InSavingsPercentTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InSavingsPercentTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InSavingsPercentTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (EZAttrib_InSavingsPercentTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'EZAttrib_InSavingsWithOverheadBytesTotal'' @ 150463890

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InSavingsWithOverheadBytesTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InSavingsWithOverheadBytesTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InSavingsWithOverheadBytesTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InSavingsWithOverheadBytesTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_InSavingsWithOverheadPercentTotal'' @ 1504638b0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_InSavingsWithOverheadPercentTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_InSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_InSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_InSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_NumOodleNetworkHandlers'' @ 1504638d0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_NumOodleNetworkHandlers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_NumOodleNetworkHandlers.Data.AllocatorInstance.Data;
  if (EZAttrib_NumOodleNetworkHandlers.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (EZAttrib_NumOodleNetworkHandlers.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_NumOodleNetworkHandlersCompressionDisabled'' @ 1504638f0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_NumOodleNetworkHandlersCompressionDisabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_NumOodleNetworkHandlersCompressionDisabled.Data.AllocatorInstance.Data;
  if (EZAttrib_NumOodleNetworkHandlersCompressionDisabled.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_NumOodleNetworkHandlersCompressionDisabled.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_NumOodleNetworkHandlersCompressionEnabled'' @ 150463910

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_NumOodleNetworkHandlersCompressionEnabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_NumOodleNetworkHandlersCompressionEnabled.Data.AllocatorInstance.Data;
  if (EZAttrib_NumOodleNetworkHandlersCompressionEnabled.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_NumOodleNetworkHandlersCompressionEnabled.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal'' @ 150463930

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutBeforeCompressedLengthTotal'' @ 150463950

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutBeforeCompressedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutBeforeCompressedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutBeforeCompressedLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutBeforeCompressedLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutCompressedLengthTotal'' @ 150463970

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutCompressedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutCompressedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutCompressedLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutCompressedLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutCompressedNum'' @ 150463990

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutCompressedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutCompressedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutCompressedNum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutCompressedNum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutCompressedWithOverheadLengthTotal'' @ 1504639b0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutCompressedWithOverheadLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutCompressedWithOverheadLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutCompressedWithOverheadLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutCompressedWithOverheadLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedBoundedNum'' @ 1504639d0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedBoundedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedBoundedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedBoundedNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedBoundedNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedClientDisabledNum'' @ 1504639f0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedClientDisabledNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedClientDisabledNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedClientDisabledNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedClientDisabledNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedFailedAckOnlyNum'' @ 150463a10

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedAckOnlyNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedFailedAckOnlyNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedFailedAckOnlyNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedFailedAckOnlyNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedFailedKeepAliveNum'' @ 150463a30

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedKeepAliveNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedFailedKeepAliveNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedFailedKeepAliveNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedFailedKeepAliveNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedFailedLengthTotal'' @ 150463a50

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedFailedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedFailedLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedFailedLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedFailedNum'' @ 150463a70

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedFailedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedFailedNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedFailedNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedFlaggedNum'' @ 150463a90

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFlaggedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedFlaggedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedFlaggedNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedFlaggedNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedNumTotal'' @ 150463ab0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedNumTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedNumTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedNumTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedNumTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedSkippedLengthTotal'' @ 150463ad0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedSkippedLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedSkippedLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedSkippedLengthTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedSkippedLengthTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedSkippedNum'' @ 150463af0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedSkippedNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedSkippedNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedSkippedNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedSkippedNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutNotCompressedTooSmallNum'' @ 150463b10

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedTooSmallNum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutNotCompressedTooSmallNum.Data.AllocatorInstance.Data;
  if (EZAttrib_OutNotCompressedTooSmallNum.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutNotCompressedTooSmallNum.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutPostLengthTotal'' @ 150463b30

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutPostLengthTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutPostLengthTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutPostLengthTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutPostLengthTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutSavingsBytesTotal'' @ 150463b50

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutSavingsBytesTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutSavingsBytesTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutSavingsBytesTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutSavingsBytesTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutSavingsPercentTotal'' @ 150463b70

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutSavingsPercentTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutSavingsPercentTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutSavingsPercentTotal.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (EZAttrib_OutSavingsPercentTotal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutSavingsWithOverheadBytesTotal'' @ 150463b90

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutSavingsWithOverheadBytesTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutSavingsWithOverheadBytesTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutSavingsWithOverheadBytesTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutSavingsWithOverheadBytesTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutSavingsWithOverheadPercentTotal'' @ 150463bb0

void __cdecl
`FOodleNetAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutSavingsWithOverheadPercentTotal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data;
  if (EZAttrib_OutSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutSavingsWithOverheadPercentTotal.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'GOodleContentDir'' @ 150463bd0

void __cdecl _dynamic_atexit_destructor_for__GOodleContentDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GOodleContentDir.Data.AllocatorInstance.Data;
  if (GOodleContentDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GOodleContentDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GOodleSaveDir'' @ 150463bf0

void __cdecl _dynamic_atexit_destructor_for__GOodleSaveDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GOodleSaveDir.Data.AllocatorInstance.Data;
  if (GOodleSaveDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GOodleSaveDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OodleComponentList'' @ 150463c10

void __cdecl _dynamic_atexit_destructor_for__OodleComponentList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OodleComponentList.AllocatorInstance.Data;
  if (OodleComponentList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OodleComponentList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OodleExecRegistration'' @ 150463c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__OodleExecRegistration__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&OodleExecRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'OodleNetworkHandlerComponentLog'' @ 150463c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__OodleNetworkHandlerComponentLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
  return;
}

