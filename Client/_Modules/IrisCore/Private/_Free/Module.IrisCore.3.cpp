// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 184

// NameTokenStoreName'' @ 140f83220

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// NetFactories'' @ 140f83240

void __cdecl `dynamic_initializer_for_'UE::Net::FNetObjectFactoryRegistry::NetFactories__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FNetObjectFactoryRegistry::NetFactories__);
  return;
}

// StringTokenStoreName'' @ 140f83260

void __cdecl `dynamic_initializer_for_'UE::Net::FStringTokenStore::StringTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FStringTokenStore::StringTokenStoreName,L"StringTokenStore");
  return;
}

// `dynamic_initializer_for_'CVarAllowPollPeriodOverrides'' @ 140f83280

void __cdecl _dynamic_initializer_for__CVarAllowPollPeriodOverrides__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowPollPeriodOverrides,L"net.Iris.AllowPollPeriodOverrides",
             &bAllowPollPeriodOverrides,
             L"Whether we allow poll period overrides set in ObjectReplicationBridgeConfig. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowPollPeriodOverrides__);
  return;
}

// `dynamic_initializer_for_'CVarEnableFilterMappings'' @ 140f832d0

void __cdecl _dynamic_initializer_for__CVarEnableFilterMappings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableFilterMappings,L"net.Iris.EnableFilterMappings",&bEnableFilterMappings,
             L"Whether we honor filter mappings set in ObjectReplicationBridgeConfig. If filter mappings are enabled then objects may also be assigned the default spatial filter even if there aren\'t any specific mappings. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableFilterMappings__);
  return;
}

// `dynamic_initializer_for_'CVarEnableForceNetUpdate'' @ 140f83320

void __cdecl _dynamic_initializer_for__CVarEnableForceNetUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableForceNetUpdate,L"net.Iris.EnableForceNetUpdate",&bEnableForceNetUpdate,
             L"When true the system only allows ForceNetUpdate to skip the poll frequency of objects. When false any MarkDirty object will be immediately polled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableForceNetUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarEnableRPCStateStompDetection'' @ 140f83370

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarEnableRPCStateStompDetection__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableRPCStateStompDetection,L"net.Iris.RPC.ServerStompDetectionEnabled",
             &bEnableRPCServerStateStompDetection,
             L"If enabled we can detect if RPC state is stomped between quantization and serialization on a dedicated server."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableRPCStateStompDetection__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreProtocolMismatchClasses'' @ 140f833c0

void __cdecl _dynamic_initializer_for__CVarIgnoreProtocolMismatchClasses__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIgnoreProtocolMismatchClasses,L"net.Iris.Protocols.IgnoreMismatchForClasses",
             &IgnoreProtocolMismatchForClasses,
             L"Array of class names that when wildcard matched will disable the protocol validation between the server and client. Should be only used temporarely to unblock replication while trying to fix the source of the protocol mismatch."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreProtocolMismatchClasses__);
  return;
}

// `dynamic_initializer_for_'CVarInvalidLocationWarnings'' @ 140f83410

void __cdecl _dynamic_initializer_for__CVarInvalidLocationWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInvalidLocationWarnings,L"net.Iris.InvalidLocationWarnings",
             &GInvalidLocationWarnings,
             L"Chooses how to warn when we detect an invalid world location on a rootobject. 0=never warn. 1=warn once per class. 2=warn once per object. 3=warn on every update"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInvalidLocationWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarIrisAllowAsyncLoading'' @ 140f83460

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisAllowAsyncLoading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisAllowAsyncLoading,L"net.iris.AllowAsyncLoading",&bIrisAllowAsyncLoading,
             L"Flag to allow or disallow async loading when using iris replication. Note: net.allowAsyncLoading must also be enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisAllowAsyncLoading__);
  return;
}

// `dynamic_initializer_for_'CVarIrisAsyncLoadingFailAllLoads'' @ 140f834b0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisAsyncLoadingFailAllLoads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisAsyncLoadingFailAllLoads,L"net.Iris.AsyncLoading.FailAllLoads",
             &bIrisAsyncLoadingFailAllLoads,
             L"Simulate failing all async loading requests. For debugging purposes.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisAsyncLoadingFailAllLoads__);
  return;
}

// `dynamic_initializer_for_'CVarIrisAsyncLoadingFailNextLoad'' @ 140f83500

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisAsyncLoadingFailNextLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisAsyncLoadingFailNextLoad,L"net.Iris.AsyncLoading.FailNextLoad",
             &bIrisAsyncLoadingFailNextLoad,
             L"Simulate failing the next async loading request. For debugging purposes.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisAsyncLoadingFailNextLoad__);
  return;
}

// `dynamic_initializer_for_'CVarIrisAsyncLoadingFailPackageName'' @ 140f83550

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisAsyncLoadingFailPackageName__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisAsyncLoadingFailPackageName,L"net.Iris.AsyncLoading.FailPackageName",
             &IrisAsyncLoadingFailPackageName,
             L"Always fail loading the specified package name. For debugging purposes.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisAsyncLoadingFailPackageName__);
  return;
}

// `dynamic_initializer_for_'CVarIrisDefaultAsyncLoadingPriority'' @ 140f835a0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisDefaultAsyncLoadingPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisDefaultAsyncLoadingPriority,L"net.iris.AsyncLoading.DefaultPriority",
             &IrisDefaultAsyncLoadingPriority,
             L"The default priority to use when async loading packages referenced by replicated properties."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisDefaultAsyncLoadingPriority__);
  return;
}

// `dynamic_initializer_for_'CVarIrisEnableRemoveReferenceFallbackPath'' @ 140f835f0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarIrisEnableRemoveReferenceFallbackPath__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisEnableRemoveReferenceFallbackPath,
             L"net.iris.ObjectReferenceCache.EnableRemoveReferenceFallbackPath",
             &bIrisEnableRemoveReferenceFallbackPath,
             L"Whether to enable the slow fallback path or not when ObjectReferenceCache::RemoveReference is passed a null pointer object."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisEnableRemoveReferenceFallbackPath__);
  return;
}

// `dynamic_initializer_for_'CVarIrisForceAsyncLoading'' @ 140f83640

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisForceAsyncLoading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisForceAsyncLoading,L"net.Iris.AsyncLoading.ForceEnable",&bForceAsyncLoading,
             L"Force the async loading path even in Editor/PIE.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisForceAsyncLoading__);
  return;
}

// `dynamic_initializer_for_'CVarIrisHighAsyncLoadingPriority'' @ 140f83690

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisHighAsyncLoadingPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisHighAsyncLoadingPriority,L"net.iris.AsyncLoading.HighPriority",
             &IrisHighAsyncLoadingPriority,
             L"The high priority value to use when async loading packages referenced by replicated properties."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisHighAsyncLoadingPriority__);
  return;
}

// `dynamic_initializer_for_'CVarIrisPreExportExistingNetTokensOnConnect'' @ 140f836e0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarIrisPreExportExistingNetTokensOnConnect__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisPreExportExistingNetTokensOnConnect,
             L"net.Iris.IrisPreExportExistingNetTokensOnConnect",
             &bIrisPreExportExistingNetTokensOnConnect,
             L"If true we will enqueue all existing NetTokens for pre-export when a new connection is added."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisPreExportExistingNetTokensOnConnect__);
  return;
}

// `dynamic_initializer_for_'CVarIrisVeryHighAsyncLoadingPriority'' @ 140f83730

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarIrisVeryHighAsyncLoadingPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisVeryHighAsyncLoadingPriority,L"net.iris.AsyncLoading.VeryHighPriority",
             &IrisVeryHighAsyncLoadingPriority,
             L"The very high priority value to use when async loading packages referenced by replicated properties."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisVeryHighAsyncLoadingPriority__);
  return;
}

// `dynamic_initializer_for_'CVarLogBlockedByAsyncLoadingErrorr'' @ 140f83780

void __cdecl _dynamic_initializer_for__CVarLogBlockedByAsyncLoadingErrorr__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogBlockedByAsyncLoadingErrorr,L"net.Iris.Error.LogBlockedByAsyncLoading",
             &bLogBlockedByAsyncLoadingError,
             L"Log and ensure on client reports of objects blocked by must be mapped references stuck in a async loading queue."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogBlockedByAsyncLoadingErrorr__);
  return;
}

// `dynamic_initializer_for_'CVarLogMissingParentsError'' @ 140f837d0

void __cdecl _dynamic_initializer_for__CVarLogMissingParentsError__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogMissingParentsError,L"net.Iris.Error.LogMissingParentsError",
             &bLogMissingParentsError,
             L"Log and ensure on client reports of objects not spawning due to missing creation dependent parents."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogMissingParentsError__);
  return;
}

// `dynamic_initializer_for_'CVarUseDormancyToFilterPolling'' @ 140f83820

void __cdecl _dynamic_initializer_for__CVarUseDormancyToFilterPolling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseDormancyToFilterPolling,L"net.Iris.UseDormancyToFilterPolling",
             &bUseDormancyToFilterPolling,
             L"Whether we should use dormancy to filter out objects that we should not poll. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseDormancyToFilterPolling__);
  return;
}

// `dynamic_initializer_for_'CVarUseFrequencyBasedPolling'' @ 140f83870

void __cdecl _dynamic_initializer_for__CVarUseFrequencyBasedPolling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseFrequencyBasedPolling,L"net.Iris.UseFrequencyBasedPolling",
             &bUseFrequencyBasedPolling,
             L"Whether to use frequency based polling or not. Default is true.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseFrequencyBasedPolling__);
  return;
}

// `dynamic_initializer_for_'CVarUseVerboseCsvStats'' @ 140f838c0

void __cdecl _dynamic_initializer_for__CVarUseVerboseCsvStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseVerboseCsvStats,L"net.Iris.UseVerboseIrisCsvStats",&bUseVerboseIrisCsvStats,
             L"Whether to use verbose per-class csv stats. Default is false in Shipping, otherwise True."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseVerboseCsvStats__);
  return;
}

// `dynamic_initializer_for_'CVarUseVeryVerboseCsvStats'' @ 140f83910

void __cdecl _dynamic_initializer_for__CVarUseVeryVerboseCsvStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseVeryVerboseCsvStats,L"net.Iris.UseVeryVerboseIrisCsvStats",
             &bUseVeryVerboseIrisCsvStats,
             L"Whether to use very verbose per-class csv stats. This causes all untracked classes to get their own CSV stats. Will incur significant CSV bloat."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseVeryVerboseCsvStats__);
  return;
}

// `dynamic_initializer_for_'IgnoreProtocolMismatchForClasses'' @ 140f83960

void __cdecl _dynamic_initializer_for__IgnoreProtocolMismatchForClasses__(void)

{
  atexit(_dynamic_atexit_destructor_for__IgnoreProtocolMismatchForClasses__);
  return;
}

// `dynamic_initializer_for_'IrisAsyncLoadingFailPackageName'' @ 140f83980

void __cdecl UE::Net::Private::_dynamic_initializer_for__IrisAsyncLoadingFailPackageName__(void)

{
  atexit(_dynamic_atexit_destructor_for__IrisAsyncLoadingFailPackageName__);
  return;
}

// `dynamic_initializer_for_'LogIrisFilterConfig'' @ 140f839a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisFilterConfig__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisFilterConfig,L"LogIrisFilterConfig",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisFilterConfig__);
  return;
}

// `dynamic_initializer_for_'LogIrisReferences'' @ 140f839e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisReferences__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisReferences,L"LogIrisReferences",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisReferences__);
  return;
}

// `dynamic_initializer_for_'LogIrisRpc'' @ 140f83a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisRpc__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIrisRpc,L"LogIrisRpc",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisRpc__);
  return;
}

// `dynamic_initializer_for_'NetError_FunctionCallNotAllowed'' @ 140f83a60

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_FunctionCallNotAllowed__(void)

{
  ::FName::FName(&NetError_FunctionCallNotAllowed,"RPC call not allowed");
  return;
}

// `dynamic_initializer_for_'NetError_InvalidNetObjectReference'' @ 140f83a80

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_InvalidNetObjectReference__(void)

{
  ::FName::FName(&NetError_InvalidNetObjectReference,"Invalid NetObjectRefererence");
  return;
}

// `dynamic_initializer_for_'NetError_InvalidSequence'' @ 140f83aa0

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_InvalidSequence__(void)

{
  ::FName::FName(&NetError_InvalidSequence,"Invalid sequence number");
  return;
}

// `dynamic_initializer_for_'NetError_ReliableQueueFull'' @ 140f83ac0

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_ReliableQueueFull__(void)

{
  ::FName::FName(&NetError_ReliableQueueFull,"Reliable attachment queue full");
  return;
}

// `dynamic_initializer_for_'NetError_UnknownFunction'' @ 140f83ae0

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_UnknownFunction__(void)

{
  ::FName::FName(&NetError_UnknownFunction,"Unknown RPC");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h__Script_IrisCore_694674396'' @ 140f83b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h__Script_IrisCore_694674396__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h__Script_IrisCore_1440697682'' @ 140f83b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h__Script_IrisCore_1440697682__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h__Script_IrisCore_4082902955'' @ 140f83b80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h__Script_IrisCore_4082902955__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h__Script_IrisCore_3658113655'' @ 140f83bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h__Script_IrisCore_3658113655__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetTokenDataStream_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h__Script_IrisCore_896584825'' @ 140f83c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h__Script_IrisCore_896584825__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h__Script_IrisCore_1630576412'' @ 140f83c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h__Script_IrisCore_1630576412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h__Script_IrisCore_3304405383'' @ 140f83c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h__Script_IrisCore_3304405383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReferenceTypes_h__Script_IrisCore_2721865866'' @ 140f83cd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReferenceTypes_h__Script_IrisCore_2721865866__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReferenceTypes_h__Script_IrisCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h__Script_IrisCore_1261162749'' @ 140f83d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h__Script_IrisCore_1261162749__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IrisCommon'' @ 140f83d60

void __cdecl _dynamic_initializer_for___GCsvCategory_IrisCommon__(void)

{
  FString::operator=(&_GCsvCategory_IrisCommon.Name,L"IrisCommon");
  _GCsvCategory_IrisCommon.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IrisCommon.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IrisCommon__);
  return;
}

// Z_Construct_UClass_UObjectReplicationBridge @ 14425d930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectReplicationBridge(void)

{
  if (Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton,
               &Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton;
}

// Z_Construct_UClass_UNetTokenDataStream @ 14425da30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetTokenDataStream(void)

{
  if (Z_Registration_Info_UClass_UNetTokenDataStream.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetTokenDataStream.OuterSingleton,
               &Z_Construct_UClass_UNetTokenDataStream_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetTokenDataStream.OuterSingleton;
}

// Z_Construct_UClass_UNetTokenTypeIdConfig @ 14425da70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetTokenTypeIdConfig(void)

{
  if (Z_Registration_Info_UClass_UNetTokenTypeIdConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetTokenTypeIdConfig.OuterSingleton,
               &Z_Construct_UClass_UNetTokenTypeIdConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetTokenTypeIdConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetTokenStoreTypeIdPair @ 14425dab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetTokenStoreTypeIdPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetTokenStoreTypeIdPair.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetTokenStoreTypeIdPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetTokenStoreTypeIdPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetTokenStoreTypeIdPair.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetTokenStoreTypeIdPair.InnerSingleton;
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

// NewStructOps @ 14425db30

void * __cdecl Z_Construct_UScriptStruct_FNetTokenStoreTypeIdPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetTokenStoreTypeIdPair,&UE::CoreUObject::Private::Construct<FNetTokenStoreTypeIdPair>,&UE::CoreUObject::Private::ConstructForTests<FNetTokenStoreTypeIdPair>,&UE::CoreUObject::Private::Destruct<FNetTokenStoreTypeIdPair>,&UE::CoreUObject::Private::Copy<FNetTokenStoreTypeIdPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetObjectFactory @ 14425db70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectFactory(void)

{
  if (Z_Registration_Info_UClass_UNetObjectFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectFactory.OuterSingleton,
               &Z_Construct_UClass_UNetObjectFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectFactory.OuterSingleton;
}

// Z_Construct_UClass_UNetRPCHandler @ 14425e010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetRPCHandler(void)

{
  if (Z_Registration_Info_UClass_UNetRPCHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetRPCHandler.OuterSingleton,
               &Z_Construct_UClass_UNetRPCHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetRPCHandler.OuterSingleton;
}

// EIrisAsyncLoadingPriority_StaticEnum @ 14425e050

UEnum * __cdecl EIrisAsyncLoadingPriority_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IrisCore_EIrisAsyncLoadingPriority,(UObject *)pUVar1,
                       L"EIrisAsyncLoadingPriority");
  }
  return Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.OuterSingleton;
}

// Z_Construct_UClass_UPartialNetObjectAttachmentHandler @ 14425e2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPartialNetObjectAttachmentHandler(void)

{
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton,
               &Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton;
}

// Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig @ 14425e310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig(void)

{
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton,
               &Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton;
}

// Z_Construct_UClass_USequentialPartialNetBlobHandler @ 14425e350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USequentialPartialNetBlobHandler(void)

{
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton,
               &Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton;
}

// Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig @ 14425e390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig(void)

{
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton,
               &Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectFactory_NoRegister @ 14425e490

UClass * __cdecl Z_Construct_UClass_UNetObjectFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFactory",
               &Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton,
               UNetObjectFactory::StaticRegisterNativesUNetObjectFactory,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFactory>,
               InternalVTableHelperCtorCaller<UNetObjectFactory>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectBlobHandler @ 14425e540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectBlobHandler(void)

{
  if (Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton,
               &Z_Construct_UClass_UNetObjectBlobHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton;
}

// AddLambda<`UObjectReplicationBridge::InitConditionalPropertyDelegates'::__l2::<lambda_1>_> @ 14425e8a0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
::AddLambda<_UObjectReplicationBridge::InitConditionalPropertyDelegates_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UObjectReplicationBridge *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UObjectReplicationBridge *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUObject__G_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy,`UObjectReplicationBridge::InitConditionalPropertyDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UObjectReplicationBridge *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar5 = (UObjectReplicationBridge *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UObjectReplicationBridge::InitConditionalPropertyDelegates'::__l2::<lambda_2>_> @ 14425eaf0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy>
::AddLambda<_UObjectReplicationBridge::InitConditionalPropertyDelegates_::__l2::<lambda_2>_>
          (void *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UObjectReplicationBridge *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UObjectReplicationBridge *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUObject__GW4ELifetimeCondition___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy,`UObjectReplicationBridge::InitConditionalPropertyDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (UObjectReplicationBridge *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar5 = (UObjectReplicationBridge *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->__this = pUVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// DefaultConstructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int> @ 14425f610

void __cdecl
DefaultConstructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int>
          (void *param_1,int param_2)

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

// DefaultConstructItems<TRefCountPtr<UE::Net::FNetBlob>,int> @ 14425f640

void __cdecl DefaultConstructItems<TRefCountPtr<UE::Net::FNetBlob>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,int> @ 14425f660

void __cdecl
DefaultConstructItems<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DestructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int> @ 14425f6a0

void __cdecl
DestructItems<TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>,int>
          (TTuple<FName,TUniquePtr<UE::Net::FNetTokenDataStore,TDefaultDelete<UE::Net::FNetTokenDataStore>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x8;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetTokenStoreTypeIdPair,int> @ 14425f6e0

void __cdecl
DestructItems<FNetTokenStoreTypeIdPair,int>(FNetTokenStoreTypeIdPair *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->StoreTypeName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,int> @ 14425f720

void __cdecl
DestructItems<TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>,int>
          (TUniquePtr<UE::Net::FNetTokenStoreState,TDefaultDelete<UE::Net::FNetTokenStoreState>_>
           *param_1,int param_2)

{
  FNetTokenStoreState *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FNetTokenStoreState *)0x0) {
      pTVar4 = pFVar1[1].TokenInfoArray;
      lVar3 = 8;
      do {
        pFVar2 = pTVar4[-1].AllocatorInstance.Data;
        pTVar4 = pTVar4 + -1;
        lVar3 = lVar3 + -1;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      } while (lVar3 != 0);
      operator_delete(pFVar1,0x80);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<`UObjectReplicationBridge::FindConnectionsFromArgs'::__l3::<lambda_1>_> @ 144261c60

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UObjectReplicationBridge::FindConnectionsFromArgs_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"ConnectionId=",0xd,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindLastByPredicate<`UE::Net::Private::FNetRefHandleManager::InternalRemoveDependentObject'::__l17::<lambda_1>_> @ 144261cf0

int __thiscall
TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::
FindLastByPredicate<_UE::Net::Private::FNetRefHandleManager::InternalRemoveDependentObject_::__l17::<lambda_1>_>
          (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,<lambda_1> param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<UE::Net::Private::FDependentObjectInfo> FVar4;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FVar4 = (this->AllocatorInstance).SecondaryData;
  if (FVar4 != (ForElementType<UE::Net::Private::FDependentObjectInfo>)0x0) {
    this = (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar4;
  }
  FVar4 = (ForElementType<UE::Net::Private::FDependentObjectInfo>)
          ((longlong)this + (longlong)param_2 * 8);
  do {
    if (FVar4 == (ForElementType<UE::Net::Private::FDependentObjectInfo>)this) {
      return -1;
    }
    FVar4 = (ForElementType<UE::Net::Private::FDependentObjectInfo>)((longlong)FVar4 + -8);
  } while (*(uint *)FVar4 != param_1.DependentInternalIndex);
  return (int)((longlong)FVar4 - (longlong)this >> 3);
}

// ForAllDependentObjectsRecursive<``UObjectReplicationBridge::BuildPollList'::__l28::<lambda_4>::operator()'::__l2::<lambda_1>_&> @ 144262020

void __thiscall
UE::Net::Private::FNetRefHandleManager::
ForAllDependentObjectsRecursive<__UObjectReplicationBridge::BuildPollList_::__l28::<lambda_4>::operator()_::__l2::<lambda_1>_&>
          (FNetRefHandleManager *this,uint param_1,<lambda_1> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FDependentObjectInfo *pFVar6;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_28;
  
  pFVar2 = (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDependentObjectsInternalIndices).BitCount <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
    GetDependentObjectInfos(this,&local_28,param_1);
    for (pFVar6 = local_28.DataPtr; pFVar6 != local_28.DataPtr + local_28.ArrayNum;
        pFVar6 = pFVar6 + 1) {
      uVar1 = pFVar6->NetRefIndex;
      lVar3 = **(longlong **)param_2;
      if ((*(uint *)((longlong)*(longlong **)param_2 + 0xc) <= uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) =
           *(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) | 1 << (uVar1 & 0x1f);
      ForAllDependentObjectsRecursive<__UObjectReplicationBridge::BuildPollList_::__l28::<lambda_4>::operator()_::__l2::<lambda_1>_&>
                (this,pFVar6->NetRefIndex,param_2);
    }
  }
  return;
}

// ForAllDependentObjectsRecursive<``UObjectReplicationBridge::BuildPollList'::__l28::<lambda_4>::operator()'::__l2::<lambda_1>_> @ 144262130

void __thiscall
UE::Net::Private::FNetRefHandleManager::
ForAllDependentObjectsRecursive<__UObjectReplicationBridge::BuildPollList_::__l28::<lambda_4>::operator()_::__l2::<lambda_1>_>
          (FNetRefHandleManager *this,uint param_1,<lambda_1> *param_2)

{
  FDependentObjectInfo *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FDependentObjectInfo *pFVar7;
  FDependentObjectInfo *pFVar8;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_48;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_38;
  
  pFVar3 = (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDependentObjectsInternalIndices).BitCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(uint *)(pFVar3 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
    GetDependentObjectInfos(this,&local_48,param_1);
    for (pFVar8 = local_48.DataPtr; pFVar8 != local_48.DataPtr + local_48.ArrayNum;
        pFVar8 = pFVar8 + 1) {
      uVar2 = pFVar8->NetRefIndex;
      lVar4 = **(longlong **)param_2;
      if ((*(uint *)((longlong)*(longlong **)param_2 + 0xc) <= uVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) =
           *(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) | 1 << (uVar2 & 0x1f);
      uVar2 = pFVar8->NetRefIndex;
      pFVar3 = (this->ObjectsWithDependentObjectsInternalIndices).Storage.AllocatorInstance.Data;
      if (((this->ObjectsWithDependentObjectsInternalIndices).BitCount <= uVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(uint *)(pFVar3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        GetDependentObjectInfos(this,&local_38,uVar2);
        pFVar1 = local_38.DataPtr + local_38.ArrayNum;
        for (pFVar7 = local_38.DataPtr; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
          uVar2 = pFVar7->NetRefIndex;
          lVar4 = **(longlong **)param_2;
          if ((*(uint *)((longlong)*(longlong **)param_2 + 0xc) <= uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) =
               *(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) | 1 << (uVar2 & 0x1f);
          ForAllDependentObjectsRecursive<__UObjectReplicationBridge::BuildPollList_::__l28::<lambda_4>::operator()_::__l2::<lambda_1>_&>
                    (this,pFVar7->NetRefIndex,param_2);
        }
      }
    }
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UObjectReplicationBridge::PreUpdate'::__l2::<lambda_1>_&> @ 144262330

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Net::FNetBitArrayView::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::PreUpdate_::__l2::<lambda_1>_&>
          (FNetBitArrayView *param_1,FNetBitArrayView *param_2,_func___cdecl_uint_uint_uint *param_3
          ,<lambda_1> *param_4)

{
  uint uVar1;
  uint uVar2;
  UObjectReplicationBridge *pUVar3;
  longlong *plVar4;
  FObjectPtr FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  FObjectPtr_u_0 *pFVar11;
  longlong *plVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  UObjectReplicationBridge *local_70;
  longlong local_68;
  UObject *(*local_58) [128];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  UObject *(*local_48) [128];
  undefined8 uStack_40;
  
  if ((param_1->BitCount != param_2->BitCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar1 = param_1->WordCount;
  uVar2 = param_1->BitCount;
  iVar15 = 0;
  puVar14 = param_2->Storage;
  uVar16 = 0;
  if (uVar1 != 0) {
    local_68 = (longlong)param_1->Storage - (longlong)puVar14;
    do {
      uVar8 = (*param_3)(*(uint *)((longlong)puVar14 + local_68),*puVar14);
      uVar9 = 0xffffffff;
      if (uVar16 == uVar1 - 1) {
        uVar9 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      iVar13 = iVar15;
      for (uVar8 = uVar8 & uVar9; uVar8 != 0; uVar8 = uVar8 >> 1) {
        if ((uVar8 & 1) != 0) {
          if (*param_4->BatchedObjectCount == 0x80) {
            pUVar3 = param_4->__this;
            local_58 = param_4->BatchedObjects;
            uStack_50 = 0x80;
            uStack_40 = CONCAT44(uStack_4c,0x80);
            local_70 = pUVar3;
            local_48 = local_58;
            Core::Private::Function::CheckCallable(*(void **)&pUVar3->PreUpdateInstanceFunction);
            plVar4 = *(longlong **)&(pUVar3->PreUpdateInstanceFunction).field_0x28;
            pcVar6 = *(code **)&pUVar3->PreUpdateInstanceFunction;
            plVar12 = (longlong *)&(pUVar3->PreUpdateInstanceFunction).field_0x10;
            if (plVar4 != (longlong *)0x0) {
              plVar12 = plVar4;
            }
            uVar10 = (**(code **)(*plVar12 + 8))();
            (*pcVar6)(uVar10,&local_48,&local_70);
            *param_4->PreUpdatedObjectCount =
                 *param_4->PreUpdatedObjectCount + *param_4->BatchedObjectCount;
            *param_4->BatchedObjectCount = 0;
          }
          pFVar11 = (FObjectPtr_u_0 *)
                    TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                              ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *
                               )param_4->ReplicatedInstances,iVar13);
          FVar5.field0_0x0 = (FObjectPtr_u_0)pFVar11->Handle;
          (((TObjectPtr<UObject>_u_0 *)(*param_4->BatchedObjects + *param_4->BatchedObjectCount))->
          ObjectPtr).field0_0x0 = FVar5.field0_0x0;
          *param_4->BatchedObjectCount =
               *param_4->BatchedObjectCount + (uint)(FVar5.field0_0x0 != (UObject *)0x0);
        }
        iVar13 = iVar13 + 1;
      }
      uVar16 = uVar16 + 1;
      puVar14 = puVar14 + 1;
      iVar15 = iVar15 + 0x20;
    } while (uVar16 < uVar1);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UObjectReplicationBridge::PruneStaleObjects'::__l2::<lambda_1>_&> @ 144262500

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::PruneStaleObjects_::__l2::<lambda_1>_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          _func___cdecl_uint_uint_uint *param_5,<lambda_1> *param_6)

{
  ulonglong uVar1;
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FReplicatedObjectData *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TObjectPtr<UObject>_u_0 *pTVar8;
  FReplicatedObjectData *this;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint local_res20;
  int local_78;
  FReplicatedObjectData *local_68;
  FString local_60 [2];
  
  local_res20 = 0;
  local_78 = 0;
  if (param_3 != 0) {
    lVar10 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar6 = (*param_5)(*(uint *)(lVar10 + (longlong)param_2),*param_2);
      uVar9 = 0xffffffff;
      if (local_res20 == param_3 - 1) {
        uVar9 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      }
      iVar11 = local_78;
      for (uVar6 = uVar6 & uVar9; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          pTVar8 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                              ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *
                               )param_6->ReplicatedInstances,iVar11)->field0_0x0;
          if (((pTVar8->DebugPtr == (UObject *)0x0) ||
              ((*(uint *)((longlong)pTVar8->DebugPtr + 8) >> 0x1e & 1) != 0)) &&
             (this = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                     ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                   *)&param_6->LocalNetRefHandleManager->ReplicatedObjectData,iVar11
                                 ), this->InstanceProtocol != (FReplicationInstanceProtocol *)0x0))
          {
            if (2 < (byte)LogIris._0_1_) {
              FNetRefHandle::GetReplicationSystemId(&this->RefHandle);
              uVar1 = (this->RefHandle).field0_0x0.Value;
              if ((uVar1 == 0) || (uVar1 < 0x40000000000000)) {
                ::FString::PrintfImpl(local_60,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
              }
              else {
                ::FString::PrintfImpl(local_60,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
              }
              Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_UObjectReplicat_150b97af8,
                         (FLogCategoryBase *)&LogIris);
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
            if (((this->InstanceProtocol->InstanceTraits & IsBound) == None) ||
               (local_68 = this,
               bVar5 = ``UObjectReplicationBridge::PruneStaleObjects'::__l2::<lambda_1>::operator()'
                       ::__l8::<lambda_1>::operator()(&local_68), bVar5)) {
              pTVar2 = param_6->StaleObjects;
              pFVar3 = (FReplicatedObjectData *)(pTVar2->AllocatorInstance).Data;
              if ((pFVar3 <= this) &&
                 ((this < (FReplicatedObjectData *)(&pFVar3->RefHandle + pTVar2->ArrayMax) &&
                  (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = pTVar2->ArrayNum;
              if (iVar7 == pTVar2->ArrayMax) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
              }
              pTVar2->ArrayNum = iVar7 + 1;
              *(FNetRefHandle_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                   (this->RefHandle).field0_0x0;
            }
          }
        }
        iVar11 = iVar11 + 1;
      }
      local_res20 = local_res20 + 1;
      param_2 = param_2 + 1;
      local_78 = local_78 + 0x20;
    } while (local_res20 < param_3);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UObjectReplicationBridge::ReconcileNewSubObjects'::__l2::<lambda_1>_&> @ 144262800

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::ReconcileNewSubObjects_::__l2::<lambda_1>_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          _func___cdecl_uint_uint_uint *param_5,<lambda_1> *param_6)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TObjectPtr<UObject>_u_0 *pTVar6;
  FReplicatedObjectData *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint local_res20 [2];
  FName local_90;
  FString local_88;
  FNetRefHandleManager *local_78;
  uint *local_70;
  <lambda_2> local_68;
  
  uVar11 = 0;
  uVar12 = 0;
  if (param_3 != 0) {
    lVar10 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar5 = (*param_5)(*(uint *)((longlong)param_2 + lVar10),*param_2);
      uVar8 = 0xffffffff;
      if (uVar12 == param_3 - 1) {
        uVar8 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      }
      uVar5 = uVar5 & uVar8;
      if (uVar5 != 0) {
        uVar9 = 1;
        uVar8 = uVar11;
        do {
          if ((uVar5 & 1) != 0) {
            puVar2 = param_6->SubObjectList->Storage;
            local_res20[0] = uVar8;
            if ((param_6->SubObjectList->BitCount <= uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((puVar2[uVar8 >> 5] & uVar9) == 0) {
              pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::
                        operator[]((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>
                                    *)&param_6->LocalNetRefHandleManager->ReplicatedInstances,
                                   local_res20[0])->field0_0x0;
              if (pTVar6->DebugPtr == (UObject *)0x0) {
                ::FString::FString(&local_88,L"None");
              }
              else {
                local_90 = *(FName *)((longlong)pTVar6->DebugPtr + 0x18);
                ::FName::ToString(&local_90,&local_88);
              }
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsSubObject",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                                 ,0x77e,
                                 L"Found a root object %s (Index:%u) that was created after the start of PreSendUpdate(). This is not supported"
                                );
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              if (local_res20[0] != 0) {
                pFVar7 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                       *)&param_6->LocalNetRefHandleManager->ReplicatedObjectData,
                                      local_res20[0]);
                uVar1 = pFVar7->SubObjectRootIndex;
                if (uVar1 != 0) {
                  FNetBitArrayView::SetBit(param_6->ObjectsConsideredForPolling,local_res20[0]);
                  local_68.Connections = param_6->Connections;
                  local_68.Filtering = param_6->Filtering;
                  local_68.SubObjectIndex = local_res20[0];
                  local_68.RootObjectIndex = uVar1;
                  ForAllSetBits<__UObjectReplicationBridge::ReconcileNewSubObjects_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_&>
                            ((uint *)((local_68.Connections)->ValidConnections).Storage.
                                     AllocatorInstance.Data,
                             ((local_68.Connections)->ValidConnections).Storage.ArrayNum,
                             ((local_68.Connections)->ValidConnections).BitCount,&local_68);
                  goto LAB_144262a21;
                }
              }
              local_78 = param_6->LocalNetRefHandleManager;
              local_70 = local_res20;
              ``UObjectReplicationBridge::ReconcileNewSubObjects'::__l2::<lambda_1>::operator()'::
              __l17::<lambda_1>::operator()(&local_78);
            }
          }
LAB_144262a21:
          uVar8 = uVar8 + 1;
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          uVar5 = uVar5 >> 1;
        } while (uVar5 != 0);
      }
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 1;
      uVar11 = uVar11 + 0x20;
    } while (uVar12 < param_3);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UObjectReplicationBridge::ReinitPollFrequency'::__l2::<lambda_1>_&> @ 144262aa0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::ReinitPollFrequency_::__l2::<lambda_1>_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          _func___cdecl_uint_uint_uint *param_5,<lambda_1> *param_6)

{
  FScriptContainerElement FVar1;
  TObjectPtr<UObject> TVar2;
  FObjectPollFrequencyLimiter *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TObjectPtr<UObject>_u_0 *pTVar10;
  FReplicatedObjectData *pFVar11;
  UNetObjectFactory *pUVar12;
  UObjectReplicationBridge *pUVar13;
  uint uVar14;
  uchar uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  float fVar20;
  float local_res20 [2];
  uint local_b0;
  uint local_ac;
  undefined8 local_a0;
  uint *local_98;
  TArrayView<unsigned_int_const_,int> local_90 [5];
  
  fVar6 = __real_42c80000;
  fVar5 = __real_3a83126f;
  local_ac = 0;
  local_b0 = 0;
  if (param_3 != 0) {
    lVar17 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar8 = (*param_5)(*(uint *)((longlong)param_2 + lVar17),*param_2);
      uVar18 = 0xffffffff;
      if (local_b0 == param_3 - 1) {
        uVar18 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      }
      uVar8 = uVar8 & uVar18;
      uVar18 = local_ac;
      for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
        if ((uVar8 & 1) != 0) {
          pUVar13 = param_6->__this;
          pTVar10 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                               ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>
                                 *)(pUVar13->_padding_ + 0x300),uVar18)->field0_0x0;
          TVar2.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar10->DebugPtr;
          Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                    ((FNetRefHandleManager *)pUVar13->_padding_,(uint)&local_a0);
          pFVar11 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                    ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                  *)(pUVar13->_padding_ + 0x2a0),uVar18);
          if (pFVar11->NetFactoryId == 0xff) {
            pUVar13 = param_6->__this;
            fVar20 = fVar6;
LAB_144262bc2:
            if (fVar20 <= fVar5) {
              fVar20 = fVar5;
            }
            iVar9 = (int)(longlong)(pUVar13->MaxTickRate / fVar20);
            uVar16 = iVar9 - 1;
            if (iVar9 == 0) {
              uVar16 = 0;
            }
            uVar14 = 0xff;
            if (uVar16 < 0xff) {
              uVar14 = uVar16;
            }
            uVar15 = '\0';
            if (uVar14 != 0) {
              uVar15 = (uchar)uVar14;
            }
          }
          else {
            pUVar12 = UObjectReplicationBridge::GetNetFactory(pUVar13,pFVar11->NetFactoryId);
            local_res20[0] = (float)(**(code **)(pUVar12->_padding_ + 0x2f0))(pUVar12,local_a0);
            if (TVar2.field0_0x0 != (UObject *)0x0) {
              UObjectReplicationBridge::GetClassPollFrequency
                        (pUVar13,*(UClass **)((longlong)TVar2.field0_0x0 + 0x10),local_res20);
            }
            pUVar13 = param_6->__this;
            fVar20 = local_res20[0];
            if (0.0 < local_res20[0]) goto LAB_144262bc2;
            uVar15 = '\0';
          }
          Net::Private::FObjectPollFrequencyLimiter::SetPollFramePeriod
                    (pUVar13->PollFrequencyLimiter,uVar18,uVar15);
          Net::Private::FNetRefHandleManager::GetSubObjects
                    (param_6->LocalNetRefHandleManager,local_90,uVar18);
          local_98 = local_90[0].DataPtr + local_90[0].ArrayNum;
          if (local_90[0].DataPtr != local_98) {
            puVar19 = local_90[0].DataPtr;
            do {
              uVar16 = *puVar19;
              pFVar3 = param_6->__this->PollFrequencyLimiter;
              uVar14 = uVar16;
              if (uVar16 < pFVar3->MaxInternalHandle) {
                uVar14 = pFVar3->MaxInternalHandle;
              }
              pFVar3->MaxInternalHandle = uVar14;
              uVar14 = 0;
              if ((int)uVar18 < (pFVar3->FramesBetweenUpdates).ArrayNum) {
                uVar14 = ~uVar18 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar1 = (pFVar3->FramesBetweenUpdates).AllocatorInstance.Data[(int)uVar18];
              uVar14 = 0;
              if ((int)uVar16 < (pFVar3->FramesBetweenUpdates).ArrayNum) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              (pFVar3->FramesBetweenUpdates).AllocatorInstance.Data[(int)uVar16] = FVar1;
              uVar14 = 0;
              if ((int)uVar18 < (pFVar3->FrameCounters).ArrayNum) {
                uVar14 = ~uVar18 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar1 = (pFVar3->FrameCounters).AllocatorInstance.Data[(int)uVar18];
              uVar14 = 0;
              if ((int)uVar16 < (pFVar3->FrameCounters).ArrayNum) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar19 = puVar19 + 1;
              (pFVar3->FrameCounters).AllocatorInstance.Data[(int)uVar16] = FVar1;
            } while (puVar19 != local_98);
          }
        }
        uVar18 = uVar18 + 1;
      }
      local_b0 = local_b0 + 1;
      param_2 = param_2 + 1;
      local_ac = local_ac + 0x20;
    } while (local_b0 < param_3);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UObjectReplicationBridge::BuildPollList'::__l21::<lambda_2>_&> @ 144262ed0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayView::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::BuildPollList_::__l21::<lambda_2>_&>
          (FNetBitArrayView *param_1,FNetBitArrayView *param_2,_func___cdecl_uint_uint_uint *param_3
          ,<lambda_2> *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FReplicatedObjectData *pFVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint *puVar13;
  
  if ((param_1->BitCount != param_2->BitCount) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = param_1->WordCount;
  iVar12 = 0;
  puVar13 = param_2->Storage;
  uVar9 = 0;
  uVar2 = param_1->BitCount;
  if (uVar1 != 0) {
    lVar11 = (longlong)param_1->Storage - (longlong)puVar13;
    do {
      uVar6 = (*param_3)(*(uint *)((longlong)puVar13 + lVar11),*puVar13);
      uVar7 = 0xffffffff;
      if (uVar9 == uVar1 - 1) {
        uVar7 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      iVar10 = iVar12;
      for (uVar6 = uVar6 & uVar7; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          pFVar8 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                   ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                 *)&param_4->LocalNetRefHandleManager->ReplicatedObjectData,iVar10);
          uVar7 = pFVar8->SubObjectRootIndex;
          puVar3 = param_4->ObjectsConsideredForPolling->Storage;
          if ((param_4->ObjectsConsideredForPolling->BitCount <= uVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar3[uVar7 >> 5] = puVar3[uVar7 >> 5] | 1 << (uVar7 & 0x1f);
        }
        iVar10 = iVar10 + 1;
      }
      uVar9 = uVar9 + 1;
      puVar13 = puVar13 + 1;
      iVar12 = iVar12 + 0x20;
    } while (uVar9 < uVar1);
  }
  return;
}

// ForAllSetBits<``UObjectReplicationBridge::ReconcileNewSubObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_&> @ 144263040

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<__UObjectReplicationBridge::ReconcileNewSubObjects_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_2> *param_4)

{
  FReplicationConnections *pFVar1;
  FScriptContainerElement *pFVar2;
  FReplicationFiltering *pFVar3;
  code *pcVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FNetBitArrayView local_50;
  
  uVar12 = 0;
  uVar11 = 0;
  if (param_2 != 0) {
    do {
      uVar13 = 0xffffffff;
      if (uVar11 == param_2 - 1) {
        uVar13 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar13 = uVar13 & *param_1;
      if (uVar13 != 0) {
        uVar9 = 1;
        uVar10 = uVar12;
        do {
          if ((uVar13 & 1) != 0) {
            pFVar1 = param_4->Connections;
            pFVar2 = (pFVar1->ValidConnections).Storage.AllocatorInstance.Data;
            if (((pFVar1->ValidConnections).BitCount <= uVar10) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((*(uint *)(pFVar2 + (ulonglong)(uVar10 >> 5) * 4) & uVar9) != 0) {
              uVar8 = 0;
              if ((int)uVar10 < (pFVar1->Connections).ArrayNum) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar3 = param_4->Filtering;
            uVar8 = 0;
            if ((int)uVar10 < (pFVar3->ConnectionInfos).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (pFVar3->ConnectionInfos).AllocatorInstance.Data;
            FNetBitArrayView::FNetBitArrayView
                      (&local_50,*(uint **)(pFVar2 + (longlong)(int)uVar10 * 0x160 + 0x60),
                       *(uint *)(pFVar2 + (longlong)(int)uVar10 * 0x160 + 0x70));
            puVar5 = local_50.Storage;
            uVar8 = param_4->RootObjectIndex;
            if ((local_50.BitCount <= uVar8) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar6 = local_50.Storage;
            if ((puVar5[uVar8 >> 5] >> (uVar8 & 0x1f) & 1) != 0) {
              uVar8 = param_4->SubObjectIndex;
              if ((local_50.BitCount <= uVar8) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2a2,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar6[uVar8 >> 5] = puVar6[uVar8 >> 5] | 1 << (uVar8 & 0x1f);
            }
          }
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          uVar13 = uVar13 >> 1;
        } while (uVar13 != 0);
      }
      param_1 = param_1 + 1;
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 0x20;
    } while (uVar11 < param_2);
  }
  return;
}

// GetBitsNeeded<int,-1> @ 1442632d0

uint __cdecl UE::Net::GetBitsNeeded<int,_1>(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)(uint)(param_1 >> 0x1f ^ param_1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (int)lVar2 + 1;
}

// InternalConstructor<UNetObjectBlobHandler> @ 144263410

void __cdecl InternalConstructor<UNetObjectBlobHandler>(FObjectInitializer *param_1)

{
  UNetBlobHandler *this;
  
  this = (UNetBlobHandler *)param_1->Obj;
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this);
    this->_padding_ = (longlong)&UNetObjectBlobHandler::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNetObjectBlobHandler::_vftable__for__INetBlobReceiver__;
  }
  return;
}

// InternalConstructor<UNetObjectFactory> @ 144263450

void __cdecl InternalConstructor<UNetObjectFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNetObjectFactory__6B_;
    this[1].field_0x8 = 0xff;
  }
  return;
}

// InternalConstructor<UNetRPCHandler> @ 144263490

void __cdecl InternalConstructor<UNetRPCHandler>(FObjectInitializer *param_1)

{
  UNetBlobHandler *this;
  
  this = (UNetBlobHandler *)param_1->Obj;
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNetRPCHandler::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNetRPCHandler::_vftable__for__INetBlobReceiver__;
  }
  return;
}

// InternalConstructor<UNetTokenDataStream> @ 1442634d0

void __cdecl InternalConstructor<UNetTokenDataStream>(FObjectInitializer *param_1)

{
  UDataStream *this;
  FObjectInitializer *pFVar1;
  
  this = (UDataStream *)param_1->Obj;
  if (this != (UDataStream *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDataStream::UDataStream(this,pFVar1);
    this[1].DataStreamInitParameters.DataStreamManager = (UDataStreamManager *)0xffffffffffffffff;
    this->_padding_ = (longlong)&___7UNetTokenDataStream__6B_;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].DataStreamInitParameters.Name.ComparisonIndex = 0;
    this[1].DataStreamInitParameters.Name.Number = 0;
    this[1].DataStreamInitParameters.ReplicationSystemId = 0;
    this[1].DataStreamInitParameters.ConnectionId = 0;
    *(undefined8 *)&this[1].DataStreamInitParameters.PacketWindowSize = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
  }
  return;
}

// InternalConstructor<UNetTokenTypeIdConfig> @ 144263550

void __cdecl InternalConstructor<UNetTokenTypeIdConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetTokenTypeIdConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UObjectReplicationBridge> @ 144263590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UObjectReplicationBridge>(FObjectInitializer *param_1)

{
  UReplicationBridge *this;
  FFunctionStorage *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  FFunctionStorage *pFVar10;
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *pTVar11;
  undefined8 *puVar12;
  undefined1 auStack_98 [32];
  code *pcStack_78;
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> TStack_68;
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *pTStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  FFunctionStorage FStack_38;
  ulonglong uStack_18;
  
  this = (UReplicationBridge *)param_1->Obj;
  if (this != (UReplicationBridge *)0x0) {
    uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
    UReplicationBridge::UReplicationBridge(this);
    puVar12 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&___7UObjectReplicationBridge__6B_;
    this[1]._padding_ = 0;
    this[1].ReplicationSystem = (UReplicationSystem *)0x0;
    this[1].ReplicationProtocolManager = (FReplicationProtocolManager *)0x0;
    this[1].ReplicationStateDescriptorRegistry = (FReplicationStateDescriptorRegistry *)0x0;
    this[1].Groups = (FNetObjectGroups *)0x0;
    *(undefined4 *)&this[1].LevelGroups = 0;
    *(undefined4 *)&this[1].LevelGroups.field_0x4 = 0x80;
    *(undefined4 *)&this[1].LevelGroups.field_0x8 = 0xffffffff;
    *(undefined4 *)&this[1].LevelGroups.field_0xc = 0;
    *(undefined8 *)&this[1].LevelGroups.field_0x18 = 0;
    *(undefined4 *)&this[1].LevelGroups.field_0x20 = 0;
    *(undefined4 *)&this[1].LevelGroups.field_0x28 = 0x41f00000;
    puVar9 = operator_new(0x128);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      memset(puVar9 + 1,0,0x100);
      puVar9[0x21] = 0;
      puVar9[0x22] = 0;
      puVar9[0x23] = 0;
      puVar9[0x24] = 0;
      puVar12 = puVar9;
    }
    *(undefined8 **)&this[1].LevelGroups.field_0x30 = puVar12;
    *(undefined8 *)&this[1].LevelGroups.field_0x38 = 0;
    *(undefined8 *)&this[1].LevelGroups.field_0x40 = 0;
    *(undefined8 *)&this[1].HandlesToStopReplicating = 0;
    *(undefined4 *)&this[1].HandlesToStopReplicating.field_0x8 = 0;
    *(undefined4 *)&this[1].HandlesToStopReplicating.field_0xc = 0x80;
    *(undefined4 *)&this[1].HandlesToStopReplicating.field_0x10 = 0xffffffff;
    *(undefined4 *)&this[1].HandlesToStopReplicating.field_0x14 = 0;
    *(undefined8 *)&this[1].HandlesToStopReplicating.field_0x20 = 0;
    *(undefined4 *)&this[1].HandlesToStopReplicating.field_0x28 = 0;
    *(undefined8 *)&this[1].HandlesToStopReplicating.field_0x30 = 0;
    *(undefined8 *)&this[1].HandlesToStopReplicating.field_0x38 = 0;
    this[1].HandlesPendingEndReplication.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].HandlesPendingEndReplication.ArrayNum = 0;
    this[1].HandlesPendingEndReplication.ArrayMax = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ReplicationSystem = (UReplicationSystem *)0x0;
    this[2].NetRefHandleManager = (FNetRefHandleManager *)0x0;
    *(undefined4 *)&this[2].ObjectReferenceCache = 0;
    *(undefined4 *)((longlong)&this[2].ObjectReferenceCache + 4) = 0x80;
    *(undefined4 *)&this[2].Groups = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].Groups + 4) = 0;
    *(undefined8 *)&this[2].LevelGroups.field_0x8 = 0;
    *(undefined4 *)&this[2].LevelGroups.field_0x10 = 0;
    *(undefined8 *)&this[2].LevelGroups.field_0x18 = 0;
    *(undefined8 *)&this[2].LevelGroups.field_0x20 = 0;
    *(undefined8 *)&this[2].LevelGroups.field_0x38 = 0;
    *(undefined4 *)&this[2].LevelGroups.field_0x40 = 0;
    *(undefined4 *)&this[2].LevelGroups.field_0x44 = 0x80;
    *(undefined4 *)&this[2].LevelGroups.field_0x48 = 0xffffffff;
    *(undefined4 *)&this[2].LevelGroups.field_0x4c = 0;
    *(undefined8 *)&this[2].HandlesToStopReplicating = 0;
    *(undefined4 *)&this[2].HandlesToStopReplicating.field_0x8 = 0;
    *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x10 = 0;
    *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x38 = 0;
    *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x40 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].ReplicationProtocolManager = (FReplicationProtocolManager *)0x0;
    *(undefined4 *)&this[3].ReplicationStateDescriptorRegistry = 0;
    *(undefined4 *)((longlong)&this[3].ReplicationStateDescriptorRegistry + 4) = 0x80;
    *(undefined4 *)&this[3].NetRefHandleManager = 0xffffffff;
    *(undefined4 *)((longlong)&this[3].NetRefHandleManager + 4) = 0;
    this[3].Groups = (FNetObjectGroups *)0x0;
    *(undefined4 *)&this[3].LevelGroups = 0;
    *(undefined8 *)&this[3].LevelGroups.field_0x8 = 0;
    *(undefined8 *)&this[3].LevelGroups.field_0x10 = 0;
    *(undefined8 *)&this[3].LevelGroups.field_0x28 = 0;
    *(undefined4 *)&this[3].LevelGroups.field_0x30 = 0;
    *(undefined4 *)&this[3].LevelGroups.field_0x34 = 0x80;
    *(undefined4 *)&this[3].LevelGroups.field_0x38 = 0xffffffff;
    *(undefined4 *)&this[3].LevelGroups.field_0x3c = 0;
    *(undefined8 *)&this[3].LevelGroups.field_0x48 = 0;
    *(undefined4 *)&this[3].bInReceiveUpdate = 0;
    *(undefined8 *)&this[3].HandlesToStopReplicating = 0;
    *(undefined8 *)&this[3].HandlesToStopReplicating.field_0x8 = 0;
    *(undefined8 *)&this[3].HandlesToStopReplicating.field_0x20 = 0;
    *(undefined4 *)&this[3].HandlesToStopReplicating.field_0x28 = 0;
    *(undefined4 *)&this[3].HandlesToStopReplicating.field_0x2c = 0x80;
    *(undefined4 *)&this[3].HandlesToStopReplicating.field_0x30 = 0xffffffff;
    *(undefined4 *)&this[3].HandlesToStopReplicating.field_0x34 = 0;
    *(undefined8 *)&this[3].HandlesToStopReplicating.field_0x40 = 0;
    *(undefined4 *)&this[3].HandlesToStopReplicating.field_0x48 = 0;
    this[3].HandlesPendingEndReplication.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].HandlesPendingEndReplication.ArrayNum = 0;
    this[3].HandlesPendingEndReplication.ArrayMax = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4].ReplicationProtocolManager = (FReplicationProtocolManager *)0x0;
    *(undefined4 *)&this[4].ReplicationStateDescriptorRegistry = 0;
    this[4].NetRefHandleManager = (FNetRefHandleManager *)0x0;
    this[4].ObjectReferenceCache = (FObjectReferenceCache *)0x0;
    *(undefined8 *)&this[4].LevelGroups.field_0x8 = 0;
    *(undefined4 *)&this[4].LevelGroups.field_0x10 = 0;
    *(undefined4 *)&this[4].LevelGroups.field_0x14 = 0x80;
    *(undefined4 *)&this[4].LevelGroups.field_0x18 = 0xffffffff;
    *(undefined4 *)&this[4].LevelGroups.field_0x1c = 0;
    *(undefined8 *)&this[4].LevelGroups.field_0x28 = 0;
    *(undefined4 *)&this[4].LevelGroups.field_0x30 = 0;
    *(undefined8 *)&this[4].LevelGroups.field_0x38 = 0;
    *(undefined8 *)&this[4].LevelGroups.field_0x40 = 0;
    *(undefined8 *)&this[4].HandlesToStopReplicating = 0;
    *(undefined4 *)&this[4].HandlesToStopReplicating.field_0x8 = 0;
    *(undefined4 *)&this[4].HandlesToStopReplicating.field_0xc = 0x80;
    *(undefined4 *)&this[4].HandlesToStopReplicating.field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].HandlesToStopReplicating.field_0x14 = 0;
    *(undefined8 *)&this[4].HandlesToStopReplicating.field_0x20 = 0;
    *(undefined4 *)&this[4].HandlesToStopReplicating.field_0x28 = 0;
    *(undefined8 *)&this[4].HandlesToStopReplicating.field_0x30 = 0;
    *(undefined8 *)&this[4].HandlesToStopReplicating.field_0x38 = 0;
    this[4].HandlesPendingEndReplication.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[4].HandlesPendingEndReplication.ArrayNum = 0;
    this[4].HandlesPendingEndReplication.ArrayMax = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].ReplicationSystem = (UReplicationSystem *)0x0;
    *(undefined4 *)&this[5].ReplicationProtocolManager = 0;
    this[5].ReplicationStateDescriptorRegistry = (FReplicationStateDescriptorRegistry *)0x0;
    this[5].NetRefHandleManager = (FNetRefHandleManager *)0x0;
    *(undefined4 *)&this[5].ObjectReferenceCache = 0;
    this[5].Groups = (FNetObjectGroups *)0x0;
    *(undefined4 *)&this[5].LevelGroups = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x8 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x10 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x18 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x20 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x28 = 0;
    *(undefined4 *)&this[5].LevelGroups.field_0x30 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x38 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x40 = 0;
    *(undefined8 *)&this[5].LevelGroups.field_0x48 = 0;
    this[5].bInReceiveUpdate = false;
    *(undefined3 *)&this[5].field_0xa9 = 0;
    this[5]._padding_ = 0;
    *(undefined8 *)&this[5].HandlesToStopReplicating.field_0x10 = 0;
    *(undefined4 *)&this[5].HandlesToStopReplicating.field_0x18 = 0;
    *(undefined4 *)&this[5].HandlesToStopReplicating.field_0x1c = 0x80;
    *(undefined4 *)&this[5].HandlesToStopReplicating.field_0x20 = 0xffffffff;
    *(undefined4 *)&this[5].HandlesToStopReplicating.field_0x24 = 0;
    *(undefined8 *)&this[5].HandlesToStopReplicating.field_0x30 = 0;
    *(undefined4 *)&this[5].HandlesToStopReplicating.field_0x38 = 0;
    *(undefined8 *)&this[5].HandlesToStopReplicating.field_0x40 = 0;
    *(undefined8 *)&this[5].HandlesToStopReplicating.field_0x48 = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
    this[6]._padding_ = 0;
    TStack_68._padding_ =
         (longlong)
         &___7__TFunction_OwnedObject_P6A_NPEBVUClass___Z_0A__0A__Function_Private_Core_UE__6B_;
    *(undefined4 *)&this[6].ReplicationSystem = 0;
    TStack_68.Obj =
         `UObjectReplicationBridge::UObjectReplicationBridge'::__l2::<lambda_1>::
         <lambda_invoker_cdecl>;
    this[6].ReplicationProtocolManager = (FReplicationProtocolManager *)0x0;
    this[6].ReplicationStateDescriptorRegistry = (FReplicationStateDescriptorRegistry *)0x0;
    pTStack_50 = (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0;
    pcStack_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*),bool,UClass_const_*>::Call;
    pcStack_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*),bool,UClass_const_*>::Call;
    FStack_38.HeapAllocation = (void *)0x0;
    UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::
    CloneToEmptyStorage((TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *)&TStack_68,
                        &FStack_38);
    lVar6 = *(longlong *)&this[2].HandlesToStopReplicating.field_0x10;
    uVar7 = *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x18;
    pFVar1 = *(FFunctionStorage **)&this[2].HandlesToStopReplicating.field_0x38;
    *(code **)&this[2].HandlesToStopReplicating.field_0x10 = pcStack_48;
    *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x18 = uStack_40;
    this[2].HandlesToStopReplicating.field_0x20 = FStack_38.InlineAllocation[0];
    this[2].HandlesToStopReplicating.field_0x21 = FStack_38.InlineAllocation[1];
    this[2].HandlesToStopReplicating.field_0x22 = FStack_38.InlineAllocation[2];
    this[2].HandlesToStopReplicating.field_0x23 = FStack_38.InlineAllocation[3];
    this[2].HandlesToStopReplicating.field_0x24 = FStack_38.InlineAllocation[4];
    this[2].HandlesToStopReplicating.field_0x25 = FStack_38.InlineAllocation[5];
    this[2].HandlesToStopReplicating.field_0x26 = FStack_38.InlineAllocation[6];
    this[2].HandlesToStopReplicating.field_0x27 = FStack_38.InlineAllocation[7];
    this[2].HandlesToStopReplicating.field_0x28 = FStack_38.InlineAllocation[8];
    this[2].HandlesToStopReplicating.field_0x29 = FStack_38.InlineAllocation[9];
    this[2].HandlesToStopReplicating.field_0x2a = FStack_38.InlineAllocation[10];
    this[2].HandlesToStopReplicating.field_0x2b = FStack_38.InlineAllocation[0xb];
    this[2].HandlesToStopReplicating.field_0x2c = FStack_38.InlineAllocation[0xc];
    this[2].HandlesToStopReplicating.field_0x2d = FStack_38.InlineAllocation[0xd];
    this[2].HandlesToStopReplicating.field_0x2e = FStack_38.InlineAllocation[0xe];
    this[2].HandlesToStopReplicating.field_0x2f = FStack_38.InlineAllocation[0xf];
    this[2].HandlesToStopReplicating.field_0x30 = FStack_38.InlineAllocation[0x10];
    this[2].HandlesToStopReplicating.field_0x31 = FStack_38.InlineAllocation[0x11];
    this[2].HandlesToStopReplicating.field_0x32 = FStack_38.InlineAllocation[0x12];
    this[2].HandlesToStopReplicating.field_0x33 = FStack_38.InlineAllocation[0x13];
    this[2].HandlesToStopReplicating.field_0x34 = FStack_38.InlineAllocation[0x14];
    this[2].HandlesToStopReplicating.field_0x35 = FStack_38.InlineAllocation[0x15];
    this[2].HandlesToStopReplicating.field_0x36 = FStack_38.InlineAllocation[0x16];
    this[2].HandlesToStopReplicating.field_0x37 = FStack_38.InlineAllocation[0x17];
    *(undefined4 *)&this[2].HandlesToStopReplicating.field_0x38 = FStack_38.HeapAllocation._0_4_;
    *(undefined4 *)&this[2].HandlesToStopReplicating.field_0x3c = FStack_38.HeapAllocation._4_4_;
    pcStack_48 = (code *)lVar6;
    uStack_40 = uVar7;
    FStack_38.InlineAllocation[0] = this[2].HandlesToStopReplicating.field_0x20;
    FStack_38.InlineAllocation[1] = this[2].HandlesToStopReplicating.field_0x21;
    FStack_38.InlineAllocation[2] = this[2].HandlesToStopReplicating.field_0x22;
    FStack_38.InlineAllocation[3] = this[2].HandlesToStopReplicating.field_0x23;
    FStack_38.InlineAllocation[4] = this[2].HandlesToStopReplicating.field_0x24;
    FStack_38.InlineAllocation[5] = this[2].HandlesToStopReplicating.field_0x25;
    FStack_38.InlineAllocation[6] = this[2].HandlesToStopReplicating.field_0x26;
    FStack_38.InlineAllocation[7] = this[2].HandlesToStopReplicating.field_0x27;
    FStack_38.InlineAllocation[8] = this[2].HandlesToStopReplicating.field_0x28;
    FStack_38.InlineAllocation[9] = this[2].HandlesToStopReplicating.field_0x29;
    FStack_38.InlineAllocation[10] = this[2].HandlesToStopReplicating.field_0x2a;
    FStack_38.InlineAllocation[0xb] = this[2].HandlesToStopReplicating.field_0x2b;
    FStack_38.InlineAllocation[0xc] = this[2].HandlesToStopReplicating.field_0x2c;
    FStack_38.InlineAllocation[0xd] = this[2].HandlesToStopReplicating.field_0x2d;
    FStack_38.InlineAllocation[0xe] = this[2].HandlesToStopReplicating.field_0x2e;
    FStack_38.InlineAllocation[0xf] = this[2].HandlesToStopReplicating.field_0x2f;
    FStack_38.InlineAllocation[0x10] = this[2].HandlesToStopReplicating.field_0x30;
    FStack_38.InlineAllocation[0x11] = this[2].HandlesToStopReplicating.field_0x31;
    FStack_38.InlineAllocation[0x12] = this[2].HandlesToStopReplicating.field_0x32;
    FStack_38.InlineAllocation[0x13] = this[2].HandlesToStopReplicating.field_0x33;
    FStack_38.InlineAllocation[0x14] = this[2].HandlesToStopReplicating.field_0x34;
    FStack_38.InlineAllocation[0x15] = this[2].HandlesToStopReplicating.field_0x35;
    FStack_38.InlineAllocation[0x16] = this[2].HandlesToStopReplicating.field_0x36;
    FStack_38.InlineAllocation[0x17] = this[2].HandlesToStopReplicating.field_0x37;
    FStack_38.HeapAllocation = pFVar1;
    if (lVar6 != 0) {
      pFVar10 = &FStack_38;
      if (pFVar1 != (FFunctionStorage *)0x0) {
        pFVar10 = pFVar1;
      }
      (**(code **)(*(longlong *)pFVar10->InlineAllocation + 0x10))();
    }
    if (pcStack_78 != (code *)0x0) {
      pTVar11 = &TStack_68;
      if (pTStack_50 !=
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0) {
        pTVar11 = pTStack_50;
      }
      (**(code **)(pTVar11->_padding_ + 0x10))();
    }
    pTStack_50 = (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0;
    TStack_68._padding_ =
         (longlong)
         &___7__TFunction_OwnedObject_P6A_NPEBVUClass__0_Z_0A__0A__Function_Private_Core_UE__6B_;
    FStack_38.HeapAllocation = (void *)0x0;
    TStack_68.Obj =
         `UObjectReplicationBridge::UObjectReplicationBridge'::__l2::<lambda_2>::
         <lambda_invoker_cdecl>;
    pcStack_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*,UClass_const_*),bool,UClass_const_*,UClass_const_*>
                 ::Call;
    pcStack_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*,UClass_const_*),bool,UClass_const_*,UClass_const_*>
                 ::Call;
    UE::Core::Private::Function::
    TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::CloneToEmptyStorage
              (&TStack_68,&FStack_38);
    lVar8 = *(longlong *)&this[2].HandlesToStopReplicating.field_0x40;
    uVar7 = *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x48;
    uVar2 = *(undefined4 *)&this[2].HandlesPendingEndReplication.AllocatorInstance.Data;
    uVar3 = *(undefined4 *)
             ((longlong)&this[2].HandlesPendingEndReplication.AllocatorInstance.Data + 4);
    iVar4 = this[2].HandlesPendingEndReplication.ArrayNum;
    iVar5 = this[2].HandlesPendingEndReplication.ArrayMax;
    lVar6 = this[3]._padding_;
    pFVar1 = (FFunctionStorage *)this[3]._padding_;
    *(code **)&this[2].HandlesToStopReplicating.field_0x40 = pcStack_48;
    *(undefined8 *)&this[2].HandlesToStopReplicating.field_0x48 = uStack_40;
    *(undefined4 *)&this[2].HandlesPendingEndReplication.AllocatorInstance.Data =
         FStack_38.InlineAllocation._0_4_;
    *(undefined4 *)((longlong)&this[2].HandlesPendingEndReplication.AllocatorInstance.Data + 4) =
         FStack_38.InlineAllocation._4_4_;
    this[2].HandlesPendingEndReplication.ArrayNum = FStack_38.InlineAllocation._8_4_;
    this[2].HandlesPendingEndReplication.ArrayMax = FStack_38.InlineAllocation._12_4_;
    *(undefined4 *)&this[3]._padding_ = FStack_38.InlineAllocation._16_4_;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = FStack_38.InlineAllocation._20_4_;
    *(undefined4 *)&this[3]._padding_ = FStack_38.HeapAllocation._0_4_;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = FStack_38.HeapAllocation._4_4_;
    pcStack_48 = (code *)lVar8;
    uStack_40 = uVar7;
    FStack_38.InlineAllocation._0_4_ = uVar2;
    FStack_38.InlineAllocation._4_4_ = uVar3;
    FStack_38.InlineAllocation._8_4_ = iVar4;
    FStack_38.InlineAllocation._12_4_ = iVar5;
    FStack_38.InlineAllocation._16_8_ = lVar6;
    FStack_38.HeapAllocation = pFVar1;
    if (lVar8 != 0) {
      pFVar10 = &FStack_38;
      if (pFVar1 != (FFunctionStorage *)0x0) {
        pFVar10 = pFVar1;
      }
      (**(code **)(*(longlong *)pFVar10->InlineAllocation + 0x10))();
    }
    if (pcStack_78 != (code *)0x0) {
      pTVar11 = &TStack_68;
      if (pTStack_50 !=
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0) {
        pTVar11 = pTStack_50;
      }
      (**(code **)(pTVar11->_padding_ + 0x10))();
    }
    return;
  }
  return;
}

// InternalConstructor<UPartialNetObjectAttachmentHandler> @ 1442635b0

void __cdecl InternalConstructor<UPartialNetObjectAttachmentHandler>(FObjectInitializer *param_1)

{
  UNetBlobHandler *this;
  
  this = (UNetBlobHandler *)param_1->Obj;
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPartialNetObjectAttachmentHandler::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPartialNetObjectAttachmentHandler::_vftable__for__INetBlobReceiver__;
    UE::Net::Private::FNetExports::FNetExports((FNetExports *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<UPartialNetObjectAttachmentHandlerConfig> @ 144263600

void __cdecl
InternalConstructor<UPartialNetObjectAttachmentHandlerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x400;
    *(undefined ***)this = &___7UPartialNetObjectAttachmentHandlerConfig__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x1000;
    *(undefined4 *)&this[1].field_0x8 = 0x600;
    *(undefined4 *)&this[1].field_0xc = 0x1a90;
    *(undefined4 *)&this[1].field_0x10 = 0x800;
  }
  return;
}

// InternalConstructor<USequentialPartialNetBlobHandler> @ 144263660

void __cdecl InternalConstructor<USequentialPartialNetBlobHandler>(FObjectInitializer *param_1)

{
  UNetBlobHandler *this;
  
  this = (UNetBlobHandler *)param_1->Obj;
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this);
    this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__INetBlobReceiver__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USequentialPartialNetBlobHandlerConfig> @ 1442636b0

void __cdecl
InternalConstructor<USequentialPartialNetBlobHandlerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x400;
    *(undefined ***)this = &___7USequentialPartialNetBlobHandlerConfig__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x1000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNetObjectBlobHandler> @ 1442636f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectBlobHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetBlobHandler *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectBlobHandler::GetPrivateStaticClass();
  this = (UNetBlobHandler *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this,param_1);
    this->_padding_ = (longlong)&UNetObjectBlobHandler::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNetObjectBlobHandler::_vftable__for__INetBlobReceiver__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectFactory> @ 1442637b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNetObjectFactory__6B_;
    pUVar1[1].field_0x8 = 0xff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetRPCHandler> @ 144263870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetRPCHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetBlobHandler *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetRPCHandler::GetPrivateStaticClass();
  this = (UNetBlobHandler *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNetRPCHandler::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNetRPCHandler::_vftable__for__INetBlobReceiver__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetTokenDataStream> @ 144263930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetTokenDataStream>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataStream *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetTokenDataStream::GetPrivateStaticClass();
  this = (UDataStream *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataStream *)0x0) {
    UDataStream::UDataStream(this,param_1);
    this->_padding_ = (longlong)&___7UNetTokenDataStream__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetTokenTypeIdConfig> @ 144263a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetTokenTypeIdConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetTokenTypeIdConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetTokenTypeIdConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectReplicationBridge> @ 144263ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectReplicationBridge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObjectReplicationBridge *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectReplicationBridge::GetPrivateStaticClass();
  pUVar3 = (UObjectReplicationBridge *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObjectReplicationBridge *)0x0) {
    pUVar3 = UObjectReplicationBridge::UObjectReplicationBridge(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandler> @ 144263b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetBlobHandler *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPartialNetObjectAttachmentHandler::GetPrivateStaticClass();
  this = (UNetBlobHandler *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this,param_1);
    this->_padding_ = (longlong)&UPartialNetObjectAttachmentHandler::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPartialNetObjectAttachmentHandler::_vftable__for__INetBlobReceiver__;
    UE::Net::Private::FNetExports::FNetExports((FNetExports *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandlerConfig> @ 144263c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandlerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPartialNetObjectAttachmentHandlerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x400;
    *(undefined ***)pUVar1 = &___7UPartialNetObjectAttachmentHandlerConfig__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x1000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x600;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x1a90;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x800;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandler> @ 144263cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetBlobHandler *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USequentialPartialNetBlobHandler::GetPrivateStaticClass();
  this = (UNetBlobHandler *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetBlobHandler *)0x0) {
    UNetBlobHandler::UNetBlobHandler(this,param_1);
    this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__INetBlobReceiver__
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandlerConfig> @ 144263db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandlerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USequentialPartialNetBlobHandlerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x400;
    *(undefined ***)pUVar1 = &___7USequentialPartialNetBlobHandlerConfig__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x1000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UNetObjectFactory> @ 144263e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectFactory * __cdecl
NewObject<UNetObjectFactory>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UNetObjectFactory *pUVar2;
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
  pUVar1 = UNetObjectFactory::StaticClass();
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
  pUVar2 = (UNetObjectFactory *)
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

// StaticEnum<enum_EIrisAsyncLoadingPriority> @ 144265760

UEnum * __cdecl StaticEnum<enum_EIrisAsyncLoadingPriority>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IrisCore_EIrisAsyncLoadingPriority,(UObject *)pUVar1,
                       L"EIrisAsyncLoadingPriority");
  }
  return Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.OuterSingleton;
}

// operator<< @ 144269a30

TStringBuilderBase<char> * __cdecl
operator<<(TStringBuilderBase<char> *param_1,FNetRefHandle *param_2)

{
  if (((param_2->field0_0x0).Value != 0) && (0x3fffffffffffff < (param_2->field0_0x0).Value)) {
    TStringBuilderBase<char>::AppendfImpl(param_1,"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    return param_1;
  }
  TStringBuilderBase<char>::AppendfImpl(param_1,"NetRefHandle (Id=%llu):(RepSystemId=?)");
  return param_1;
}

// operator<< @ 144269ab0

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,FNetRefHandle *param_2)

{
  if (((param_2->field0_0x0).Value != 0) && (0x3fffffffffffff < (param_2->field0_0x0).Value)) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    return param_1;
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
  return param_1;
}

// operator<< @ 144269b30

FArchive * __cdecl operator<<(FArchive *param_1,FNetRefHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  ulong64 uVar4;
  char local_res8 [16];
  char local_res18 [8];
  ulonglong local_res20;
  ulonglong local_28 [2];
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      uVar4 = 0;
      local_res18[0] = '\0';
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res18,1);
      if (local_res18[0] != '\0') {
        local_res20 = 0;
        (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1);
        if (((param_1->field_0x29 & 2) == 0) &&
           (uVar4 = local_res20 & 0x3fffffffffffff, uVar4 != local_res20)) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4467568253371153253>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                             ,0x49b,"(Id & FNetRefHandle::IdMask) == Id");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FArchive *)(*pcVar1)();
            return pFVar3;
          }
        }
      }
      (param_2->field0_0x0).Value = uVar4;
    }
  }
  else {
    local_res8[0] = (param_2->field0_0x0).Value != 0;
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,1);
    if (local_res8[0] != '\0') {
      local_28[0] = (param_2->field0_0x0).Value & 0x3fffffffffffff;
      (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1,local_28);
      return param_1;
    }
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 14426a0d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a100

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy,`UObjectReplicationBridge::InitConditionalPropertyDelegates'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy,`UObjectReplicationBridge::InitConditionalPropertyDelegates'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a190

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UObjectReplicationBridge,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UObjectReplicationBridge,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a1c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a1f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass___Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a2a0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a2d0

void * __thiscall
UE::Net::Private::FNetObjectBlob::_scalar_deleting_destructor_(FNetObjectBlob *this,uint param_1)

{
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FNetBlob::~FNetBlob((FNetBlob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a320

void * __thiscall
UE::Net::Private::FNetRPC::_scalar_deleting_destructor_(FNetRPC *this,uint param_1)

{
  TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  
  this->_padding_ = (longlong)&___7FNetRPC_Private_Net_UE__6B_;
  pTVar1 = (this->ReferencesToExport).Ptr;
  if (pTVar1 != (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    FVar2 = (pTVar1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    ::operator_delete(pTVar1,0x50);
  }
  FNetObjectAttachment::~FNetObjectAttachment((FNetObjectAttachment *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a3a0

void * __thiscall
UE::Net::FNetTokenDataStore::_scalar_deleting_destructor_(FNetTokenDataStore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetTokenDataStore_Net_UE__6B_;
  pFVar1 = (this->StoredTokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a3f0

void * __thiscall
UE::Net::FPartialNetBlob::_scalar_deleting_destructor_(FPartialNetBlob *this,uint param_1)

{
  ForElementType<UE::Net::FNetToken> FVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  FScriptContainerElement *pFVar3;
  FNetBlob *this_00;
  
  FVar1 = (this->NetTokenExportsArray).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->ObjectReferenceExportsArray).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar3 = (this->Payload).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->OriginalBlob).Reference;
  if (this_00 != (FNetBlob *)0x0) {
    FNetBlob::Release(this_00);
  }
  FNetBlob::~FNetBlob((FNetBlob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a470

void * __thiscall
UE::Net::FRawDataNetBlob::_scalar_deleting_destructor_(FRawDataNetBlob *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RawData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNetBlob::~FNetBlob((FNetBlob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a4c0

void * __thiscall
UE::Net::FShrinkWrapNetBlob::_scalar_deleting_destructor_(FShrinkWrapNetBlob *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  FNetBlob *this_00;
  
  pFVar1 = (this->SerializedBlob).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->NetTokenExportsArray).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this_00 = (this->OriginalBlob).Reference;
  if (this_00 != (FNetBlob *)0x0) {
    FNetBlob::Release(this_00);
  }
  FNetBlob::~FNetBlob((FNetBlob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a530

void * __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::_scalar_deleting_destructor_
          (FShrinkWrapNetObjectAttachment *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  FNetObjectAttachment *this_00;
  
  pFVar1 = (this->SerializedBlob).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->NetTokenExportsArray).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this_00 = (this->OriginalBlob).Reference;
  if (this_00 != (FNetObjectAttachment *)0x0) {
    FNetBlob::Release((FNetBlob *)this_00);
  }
  FNetBlob::~FNetBlob((FNetBlob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a5a0

void * __thiscall
UNetObjectBlobHandler::_scalar_deleting_destructor_(UNetObjectBlobHandler *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a610

void * __thiscall
UNetObjectFactory::_scalar_deleting_destructor_(UNetObjectFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectFactory__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a670

void * __thiscall UNetRPCHandler::_scalar_deleting_destructor_(UNetRPCHandler *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a6e0

void * __thiscall
UNetTokenDataStream::_scalar_deleting_destructor_(UNetTokenDataStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetTokenDataStream__6B_;
  TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>(&this->NetTokensPendingExport);
  TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>(&this->NetTokenExports);
  UDataStream::~UDataStream((UDataStream *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a760

void * __thiscall
UNetTokenTypeIdConfig::_scalar_deleting_destructor_(UNetTokenTypeIdConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetTokenTypeIdConfig__6B_;
  DestructItems<FNetTokenStoreTypeIdPair,int>
            ((FNetTokenStoreTypeIdPair *)(this->ReservedTypeIds).AllocatorInstance.Data,
             (this->ReservedTypeIds).ArrayNum);
  pFVar1 = (this->ReservedTypeIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a7e0

void * __thiscall
UObjectReplicationBridge::_scalar_deleting_destructor_(UObjectReplicationBridge *this,uint param_1)

{
  ~UObjectReplicationBridge(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a840

void * __thiscall
UPartialNetObjectAttachmentHandler::_scalar_deleting_destructor_
          (UPartialNetObjectAttachmentHandler *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UE::Net::Private::FNetExports::~FNetExports(&this->NetExports);
  this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a8d0

void * __thiscall
UPartialNetObjectAttachmentHandlerConfig::_scalar_deleting_destructor_
          (UPartialNetObjectAttachmentHandlerConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USequentialPartialNetBlobHandlerConfig__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a930

void * __thiscall
USequentialPartialNetBlobHandler::_scalar_deleting_destructor_
          (USequentialPartialNetBlobHandler *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14426a9a0

void * __thiscall
USequentialPartialNetBlobHandlerConfig::_scalar_deleting_destructor_
          (USequentialPartialNetBlobHandlerConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USequentialPartialNetBlobHandlerConfig__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// ConvertAsyncLoadingPriority @ 144271360

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

int __cdecl ConvertAsyncLoadingPriority(EIrisAsyncLoadingPriority param_1)

{
  undefined1 local_res8 [32];
  
  if (param_1 == High) {
    return UE::Net::Private::IrisHighAsyncLoadingPriority;
  }
  if (param_1 != Max) {
    if (param_1 == Invalid) {
      `ConvertAsyncLoadingPriority'::__l7::<lambda_1>::operator()(local_res8);
    }
    return UE::Net::Private::IrisDefaultAsyncLoadingPriority;
  }
  return UE::Net::Private::IrisVeryHighAsyncLoadingPriority;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectBlobHandler @ 144277680

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectBlobHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectFactory @ 144277690

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetRPCHandler @ 1442776a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetRPCHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetTokenDataStream @ 1442776b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetTokenDataStream(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetTokenStore @ 1442776c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetTokenStore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectReferenceTypes @ 1442776d0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectReferenceTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectReplicationBridge @ 1442776e0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectReplicationBridge(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePartialNetObjectAttachmentHandler @ 1442776f0

void __cdecl EmptyLinkFunctionForGeneratedCodePartialNetObjectAttachmentHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequentialPartialNetBlobHandler @ 144277700

void __cdecl EmptyLinkFunctionForGeneratedCodeSequentialPartialNetBlobHandler(void)

{
  return;
}

// LexToString @ 144283070

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

wchar_t * __cdecl LexToString(EIrisAsyncLoadingPriority param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Default) {
    return L"Default";
  }
  if (param_1 == High) {
    return L"High";
  }
  if (param_1 == Max) {
    return L"VeryHigh";
  }
  if (param_1 != Invalid) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6550393500897116100>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ObjectReferenceTypes.h"
                       ,0x3c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Missing";
  }
  return L"Invalid";
}

// Z_Construct_UClass_UNetObjectBlobHandler_NoRegister @ 14429dd10

UClass * __cdecl Z_Construct_UClass_UNetObjectBlobHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectBlobHandler",
               &Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton,
               UNetObjectBlobHandler::StaticRegisterNativesUNetObjectBlobHandler,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectBlobHandler>,
               InternalVTableHelperCtorCaller<UNetObjectBlobHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton;
}

// Z_Construct_UClass_UNetRPCHandler_NoRegister @ 14429ddd0

UClass * __cdecl Z_Construct_UClass_UNetRPCHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetRPCHandler",
               &Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton,
               UNetRPCHandler::StaticRegisterNativesUNetRPCHandler,0x40,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetRPCHandler>,InternalVTableHelperCtorCaller<UNetRPCHandler>,
               local_res8,UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton;
}

// Z_Construct_UClass_UNetTokenDataStream_NoRegister @ 14429de90

UClass * __cdecl Z_Construct_UClass_UNetTokenDataStream_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetTokenDataStream",
               &Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton,
               UNetTokenDataStream::StaticRegisterNativesUNetTokenDataStream,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetTokenDataStream>,
               InternalVTableHelperCtorCaller<UNetTokenDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton;
}

// Z_Construct_UClass_UNetTokenTypeIdConfig_NoRegister @ 14429df50

UClass * __cdecl Z_Construct_UClass_UNetTokenTypeIdConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetTokenTypeIdConfig",
               &Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton,
               UNetTokenTypeIdConfig::StaticRegisterNativesUNetTokenTypeIdConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetTokenTypeIdConfig>,
               InternalVTableHelperCtorCaller<UNetTokenTypeIdConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton;
}

// Z_Construct_UClass_UObjectReplicationBridge_NoRegister @ 14429e000

UClass * __cdecl Z_Construct_UClass_UObjectReplicationBridge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ObjectReplicationBridge",
               &Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton,
               UObjectReplicationBridge::StaticRegisterNativesUObjectReplicationBridge,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReplicationBridge>,
               InternalVTableHelperCtorCaller<UObjectReplicationBridge>,local_res8,
               UReplicationBridge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton;
}

// Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister @ 14429e0c0

UClass * __cdecl Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"PartialNetObjectAttachmentHandlerConfig",
               &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton,
               UPartialNetObjectAttachmentHandlerConfig::
               StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartialNetObjectAttachmentHandlerConfig>,
               InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandlerConfig>,local_res8,
               USequentialPartialNetBlobHandlerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton;
}

// Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister @ 14429e180

UClass * __cdecl Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"PartialNetObjectAttachmentHandler",
               &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton,
               UPartialNetObjectAttachmentHandler::
               StaticRegisterNativesUPartialNetObjectAttachmentHandler,0x150,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartialNetObjectAttachmentHandler>,
               InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandler>,local_res8,
               USequentialPartialNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton;
}

// Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister @ 14429e240

UClass * __cdecl Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SequentialPartialNetBlobHandlerConfig",
               &Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton,
               USequentialPartialNetBlobHandlerConfig::
               StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig,0x30,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USequentialPartialNetBlobHandlerConfig>,
               InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandlerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton;
}

// Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister @ 14429e2f0

UClass * __cdecl Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SequentialPartialNetBlobHandler",
               &Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton,
               USequentialPartialNetBlobHandler::
               StaticRegisterNativesUSequentialPartialNetBlobHandler,0x48,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequentialPartialNetBlobHandler>,
               InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton;
}

// Z_Construct_UEnum_IrisCore_EIrisAsyncLoadingPriority @ 14429e3b0

UEnum * __cdecl Z_Construct_UEnum_IrisCore_EIrisAsyncLoadingPriority(void)

{
  if (Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.InnerSingleton,
               &Z_Construct_UEnum_IrisCore_EIrisAsyncLoadingPriority_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EIrisAsyncLoadingPriority.InnerSingleton;
}

// NetFactories'' @ 15036a130

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FNetObjectFactoryRegistry::NetFactories__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowPollPeriodOverrides'' @ 15036a140

void __cdecl _dynamic_atexit_destructor_for__CVarAllowPollPeriodOverrides__(void)

{
  CVarAllowPollPeriodOverrides._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowPollPeriodOverrides);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableFilterMappings'' @ 15036a160

void __cdecl _dynamic_atexit_destructor_for__CVarEnableFilterMappings__(void)

{
  CVarEnableFilterMappings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableFilterMappings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableForceNetUpdate'' @ 15036a180

void __cdecl _dynamic_atexit_destructor_for__CVarEnableForceNetUpdate__(void)

{
  CVarEnableForceNetUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableForceNetUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableRPCStateStompDetection'' @ 15036a1a0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableRPCStateStompDetection__(void)

{
  CVarEnableRPCStateStompDetection._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableRPCStateStompDetection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreProtocolMismatchClasses'' @ 15036a1c0

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreProtocolMismatchClasses__(void)

{
  CVarIgnoreProtocolMismatchClasses._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreProtocolMismatchClasses);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInvalidLocationWarnings'' @ 15036a1e0

void __cdecl _dynamic_atexit_destructor_for__CVarInvalidLocationWarnings__(void)

{
  CVarInvalidLocationWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInvalidLocationWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisAllowAsyncLoading'' @ 15036a200

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisAllowAsyncLoading__(void)

{
  CVarIrisAllowAsyncLoading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisAllowAsyncLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisAsyncLoadingFailAllLoads'' @ 15036a220

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisAsyncLoadingFailAllLoads__(void)

{
  CVarIrisAsyncLoadingFailAllLoads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisAsyncLoadingFailAllLoads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisAsyncLoadingFailNextLoad'' @ 15036a240

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisAsyncLoadingFailNextLoad__(void)

{
  CVarIrisAsyncLoadingFailNextLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisAsyncLoadingFailNextLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisAsyncLoadingFailPackageName'' @ 15036a260

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisAsyncLoadingFailPackageName__(void)

{
  CVarIrisAsyncLoadingFailPackageName._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisAsyncLoadingFailPackageName);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisDefaultAsyncLoadingPriority'' @ 15036a280

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisDefaultAsyncLoadingPriority__(void)

{
  CVarIrisDefaultAsyncLoadingPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisDefaultAsyncLoadingPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisEnableRemoveReferenceFallbackPath'' @ 15036a2a0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisEnableRemoveReferenceFallbackPath__(void)

{
  CVarIrisEnableRemoveReferenceFallbackPath._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisEnableRemoveReferenceFallbackPath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisForceAsyncLoading'' @ 15036a2c0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisForceAsyncLoading__(void)

{
  CVarIrisForceAsyncLoading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisForceAsyncLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisHighAsyncLoadingPriority'' @ 15036a2e0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisHighAsyncLoadingPriority__(void)

{
  CVarIrisHighAsyncLoadingPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisHighAsyncLoadingPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisPreExportExistingNetTokensOnConnect'' @ 15036a300

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisPreExportExistingNetTokensOnConnect__
          (void)

{
  CVarIrisPreExportExistingNetTokensOnConnect._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisPreExportExistingNetTokensOnConnect);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisVeryHighAsyncLoadingPriority'' @ 15036a320

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisVeryHighAsyncLoadingPriority__(void)

{
  CVarIrisVeryHighAsyncLoadingPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisVeryHighAsyncLoadingPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogBlockedByAsyncLoadingErrorr'' @ 15036a340

void __cdecl _dynamic_atexit_destructor_for__CVarLogBlockedByAsyncLoadingErrorr__(void)

{
  CVarLogBlockedByAsyncLoadingErrorr._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogBlockedByAsyncLoadingErrorr)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogMissingParentsError'' @ 15036a360

void __cdecl _dynamic_atexit_destructor_for__CVarLogMissingParentsError__(void)

{
  CVarLogMissingParentsError._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogMissingParentsError);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseDormancyToFilterPolling'' @ 15036a380

void __cdecl _dynamic_atexit_destructor_for__CVarUseDormancyToFilterPolling__(void)

{
  CVarUseDormancyToFilterPolling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseDormancyToFilterPolling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseFrequencyBasedPolling'' @ 15036a3a0

void __cdecl _dynamic_atexit_destructor_for__CVarUseFrequencyBasedPolling__(void)

{
  CVarUseFrequencyBasedPolling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseFrequencyBasedPolling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseVerboseCsvStats'' @ 15036a3c0

void __cdecl _dynamic_atexit_destructor_for__CVarUseVerboseCsvStats__(void)

{
  CVarUseVerboseCsvStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseVerboseCsvStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseVeryVerboseCsvStats'' @ 15036a3e0

void __cdecl _dynamic_atexit_destructor_for__CVarUseVeryVerboseCsvStats__(void)

{
  CVarUseVeryVerboseCsvStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseVeryVerboseCsvStats);
  return;
}

// `dynamic_atexit_destructor_for_'IgnoreProtocolMismatchForClasses'' @ 15036a400

void __cdecl _dynamic_atexit_destructor_for__IgnoreProtocolMismatchForClasses__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IgnoreProtocolMismatchForClasses.Data.AllocatorInstance.Data;
  if (IgnoreProtocolMismatchForClasses.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (IgnoreProtocolMismatchForClasses.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
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

// `dynamic_atexit_destructor_for_'IrisAsyncLoadingFailPackageName'' @ 15036a420

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__IrisAsyncLoadingFailPackageName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IrisAsyncLoadingFailPackageName.Data.AllocatorInstance.Data;
  if (IrisAsyncLoadingFailPackageName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (IrisAsyncLoadingFailPackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
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

// `dynamic_atexit_destructor_for_'LogIrisFilterConfig'' @ 15036a440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisFilterConfig__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisFilterConfig);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisReferences'' @ 15036a460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisReferences__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisReferences);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisRpc'' @ 15036a480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisRpc__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisRpc);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_IrisCommon'' @ 15036a4a0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IrisCommon__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IrisCommon.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IrisCommon.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IrisCommon.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 1504b4720

bool __thiscall
``UObjectReplicationBridge::OnProtocolMismatchReported'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445109128>);
  if (bVar2) {
    (**(code **)(**(longlong **)this + 0x370))
              (*(longlong **)this,local_18,**(undefined4 **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445109128>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4792;
    }
  }
  bVar2 = false;
LAB_1504b4792:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b5a30

bool __thiscall `ConvertAsyncLoadingPriority'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8054048464461365298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8054048464461365298>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5a70

bool __thiscall
``UObjectReplicationBridge::PruneStaleObjects'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107786>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107786>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b5b30;
    }
  }
  bVar2 = false;
LAB_1504b5b30:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b5e50

bool __thiscall
``UObjectReplicationBridge::ReconcileNewSubObjects'::__l2::<lambda_1>::operator()'::__l17::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445108103>);
  if (bVar2) {
    pTVar4 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)this + 0x300),**(int **)((longlong)this + 8))->field0_0x0;
    if (pTVar4->DebugPtr == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)((longlong)pTVar4->DebugPtr + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445108103>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b5f09;
    }
  }
  bVar2 = false;
LAB_1504b5f09:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

