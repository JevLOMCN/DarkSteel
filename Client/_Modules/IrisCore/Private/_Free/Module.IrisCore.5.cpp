// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 157

// DefaultConfig'' @ 140f85440

void __cdecl `dynamic_initializer_for_'UE::Net::FBoolNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FBoolNetSerializer::DefaultConfig__);
  return;
}

// DefaultConfig'' @ 140f85460

void __cdecl `dynamic_initializer_for_'UE::Net::FDateTimeNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FDateTimeNetSerializer::DefaultConfig__);
  return;
}

// DefaultConfig'' @ 140f85480

void __cdecl `dynamic_initializer_for_'UE::Net::FDoubleNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FDoubleNetSerializer::DefaultConfig__);
  return;
}

// DefaultConfig'' @ 140f854a0

void __cdecl `dynamic_initializer_for_'UE::Net::FFieldPathNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FFieldPathNetSerializer::DefaultConfig__);
  return;
}

// DefaultConfig'' @ 140f854c0

void __cdecl `dynamic_initializer_for_'UE::Net::FFloatNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FFloatNetSerializer::DefaultConfig__);
  return;
}

// DefaultConfig'' @ 140f854e0

void __cdecl `dynamic_initializer_for_'UE::Net::FGuidNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGuidNetSerializer::DefaultConfig__);
  return;
}

// NameTokenStoreName'' @ 140f85500

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// NetSerializerRegistryDelegates'' @ 140f85520

void __cdecl
`dynamic_initializer_for_'UE::Net::FFieldPathNetSerializer::NetSerializerRegistryDelegates__(void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FFieldPathNetSerializer::NetSerializerRegistryDelegates);
  UE::Net::FFieldPathNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FFieldPathNetSerializer_Net_UE__6B_;
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FFieldPathNetSerializer::
         NetSerializerRegistryDelegates__);
  return;
}

// NetSerializerRegistryDelegates'' @ 140f85560

void __cdecl
`dynamic_initializer_for_'UE::Net::FInstancedStructNetSerializer::NetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FInstancedStructNetSerializer::NetSerializerRegistryDelegates);
  UE::Net::FInstancedStructNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FInstancedStructNetSerializer_Net_UE__6B_;
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FInstancedStructNetSerializer::
         NetSerializerRegistryDelegates__);
  return;
}

// ReplicationSystems'' @ 140f855a0

void __cdecl
`dynamic_initializer_for_'UE::Net::FReplicationSystemFactory::ReplicationSystems__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FReplicationSystemFactory::ReplicationSystems__);
  return;
}

// StringTokenStoreName'' @ 140f855c0

void __cdecl `dynamic_initializer_for_'UE::Net::FStringTokenStore::StringTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FStringTokenStore::StringTokenStoreName,L"StringTokenStore");
  return;
}

// StructNetSerializerConfig'' @ 140f855e0

void __cdecl
`dynamic_initializer_for_'UE::Net::FFieldPathNetSerializer::StructNetSerializerConfig__(void)

{
  FStructNetSerializerConfig::FStructNetSerializerConfig
            (&UE::Net::FFieldPathNetSerializer::StructNetSerializerConfig);
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FFieldPathNetSerializer::
         StructNetSerializerConfig__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAttachmentSendPolicyFlags'' @ 140f85610

void __cdecl
ReplicationSystemCVars::_dynamic_initializer_for__CVarAllowAttachmentSendPolicyFlags__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowAttachmentSendPolicyFlags,L"net.Iris.Attachments.AllowSendPolicyFlags",
             &bAllowAttachmentSendPolicyFlags,
             L"Allow use of ENetObjectAttachmentSendPolicyFlags to specify behavior of RPCs.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAttachmentSendPolicyFlags__);
  return;
}

// `dynamic_initializer_for_'CVarForcePruneBeforeUpdate'' @ 140f85660

void __cdecl ReplicationSystemCVars::_dynamic_initializer_for__CVarForcePruneBeforeUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForcePruneBeforeUpdate,L"net.Iris.ForcePruneBeforeUpdate",&bForcePruneBeforeUpdate
             ,L"Verify integrity of all tracked instances at the start of every update.",0);
  atexit(_dynamic_atexit_destructor_for__CVarForcePruneBeforeUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarMaxCachedInstancedStructDescriptors'' @ 140f856b0

void __cdecl UE::Net::_dynamic_initializer_for__CVarMaxCachedInstancedStructDescriptors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxCachedInstancedStructDescriptors,
             L"InstancedStruct.MaxCachedReplicationStateDescriptors",
             &MaxCachedInstancedStructDescriptorCount,
             L"How many ReplicationStateDescriptors the InstancedStructNetSerializer is allowed to cache for InstancedStructs without a type allow list. Warning: A value <= 0 means an unlimited amount of descriptors."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxCachedInstancedStructDescriptors__);
  return;
}

// `dynamic_initializer_for_'CVarOnlyResetDirtinessForQuantizedObjects'' @ 140f85700

void __cdecl
ReplicationSystemCVars::_dynamic_initializer_for__CVarOnlyResetDirtinessForQuantizedObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOnlyResetDirtinessForQuantizedObjects,
             L"net.Iris.OnlyResetDirtinessForQuantizedObjects",
             &bOnlyResetDirtinessForQuantizedObjects,
             L"Only Reset Dirtiness For QuantizedObjects, optimization that only resets dirtiness for objects actually considered dirty."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOnlyResetDirtinessForQuantizedObjects__);
  return;
}

// `dynamic_initializer_for_'CVarReplicationWriterCannotSendWarningInterval'' @ 140f85750

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarReplicationWriterCannotSendWarningInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReplicationWriterCannotSendWarningInterval,
             L"net.Iris.ReplicationWriterCannotSendWarningInterval",
             &GReplicationWriterCannotSendWarningInterval,
             L"Warn if we are prevented from Sending for more than a certain number of updates, setting it to 0 will disable warning"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReplicationWriterCannotSendWarningInterval__);
  return;
}

// `dynamic_initializer_for_'CVarReplicationWriterMaxDestroyObjectsPerFrame'' @ 140f857a0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarReplicationWriterMaxDestroyObjectsPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReplicationWriterMaxDestroyObjectsPerFrame,
             L"net.Iris.ReplicationWriterMaxDestroyObjectsPerFrame",
             &GReplicationWriterMaxDestroyObjectsPerFrame,
             L"How many objects can be replicated for destroy per frame. The number is for regular destruction and destruction infos combined. A value less or equal to zero means unlimited."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReplicationWriterMaxDestroyObjectsPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarReplicationWriterMaxHugeObjectsInTransit'' @ 140f857f0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarReplicationWriterMaxHugeObjectsInTransit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReplicationWriterMaxHugeObjectsInTransit,
             L"net.Iris.ReplicationWriterMaxHugeObjectsInTransit",
             &GReplicationWriterMaxHugeObjectsInTransit,
             L"How many very large objects, one whose payload doesn\'t fit in a single packet, is allowed to be scheduled for send. Needs to be at least 1."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReplicationWriterMaxHugeObjectsInTransit__);
  return;
}

// `dynamic_initializer_for_'CVarReplicationWriterReplicationRecordStarvationThreshold'' @ 140f85840

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__CVarReplicationWriterReplicationRecordStarvationThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReplicationWriterReplicationRecordStarvationThreshold,
             L"net.Iris.ReplicationWriterReplicationRecordStarvationThreshold",
             &GReplicationWriterReplicationRecordStarvationThreshold,
             L"How many ReplicationRecords need to be left in order to proceed with replication as normal. Below this threshold replication will be limited to OOB attachments and huge objects until there are more ReplicationRecords available."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReplicationWriterReplicationRecordStarvationThreshold__
        );
  return;
}

// `dynamic_initializer_for_'CVarSetFilterSetsRequiresFrequentLocationUpdates'' @ 140f85890

void __cdecl
ReplicationSystemCVars::_dynamic_initializer_for__CVarSetFilterSetsRequiresFrequentLocationUpdates__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSetFilterSetsRequiresFrequentLocationUpdates,
             L"net.Iris.SetFilterSetsRequiresFrequentLocationUpdates",
             &bSetFilterSetsRequiresFrequentLocationUpdates,
             L"Call OptionallySetObjectRequiresFrequentWorldLocationUpdate from SetFilter in case the new filter is spatial and the object needs frequent updates. This being enabled is the intended behavior, only disable in case of an unintended regression."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSetFilterSetsRequiresFrequentLocationUpdates__);
  return;
}

// `dynamic_initializer_for_'CVarWarnAboutDroppedAttachmentsToObjectsNotInScope'' @ 140f858e0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarWarnAboutDroppedAttachmentsToObjectsNotInScope__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWarnAboutDroppedAttachmentsToObjectsNotInScope,
             L"net.Iris.WarnAboutDroppedAttachmentsToObjectsNotInScope",
             &bWarnAboutDroppedAttachmentsToObjectsNotInScope,
             L"Warn when attachments are dropped due to object not in scope. Default is false.",0);
  atexit(_dynamic_atexit_destructor_for__CVarWarnAboutDroppedAttachmentsToObjectsNotInScope__);
  return;
}

// `dynamic_initializer_for_'CvarAllowSendStateWithEndReplicationForSubObjects'' @ 140f85930

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CvarAllowSendStateWithEndReplicationForSubObjects__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarAllowSendStateWithEndReplicationForSubObjects,
             L"net.Iris.AllowSendStateWithEndReplicationForSubObjects",
             &bAllowSendStateWithEndReplicationForSubObjects,
             L"Allow state to be sent together with subobject destroy. Default is false. Cannot be true if net.Iris.ImmediateDispatchEndReplicationForSubObjects is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarAllowSendStateWithEndReplicationForSubObjects__);
  return;
}

// `dynamic_initializer_for_'CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick'' @ 140f85980

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick,
             L"net.Iris.ReplicationWriter.MaxUnsentOrderedUnreliableAttachmentAtEndOfTick",
             &GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick,
             L"Drop unsent ordered unreliable attachments at the end of the tick, -1 means that that we allow them to be queued for next tick, 0 or greater means that we will drop if we have more queued unreliable attachment than the set value at the end of the tick"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick__);
  return;
}

// `dynamic_initializer_for_'CvarValidateObjectsWithDirtyChanges'' @ 140f859d0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CvarValidateObjectsWithDirtyChanges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarValidateObjectsWithDirtyChanges,
             L"net.Iris.ReplicationWriter.ValidateObjectsWithDirtyChanges",
             &bValidateObjectsWithDirtyChanges,
             L"Ensure that we don\'t try to mark invalid objects as dirty when they shouldn\'t.",0);
  atexit(_dynamic_atexit_destructor_for__CvarValidateObjectsWithDirtyChanges__);
  return;
}

// `dynamic_initializer_for_'CvarWriteBatchSizePerObject'' @ 140f85a20

void __cdecl UE::Net::Private::_dynamic_initializer_for__CvarWriteBatchSizePerObject__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarWriteBatchSizePerObject,L"net.Iris.ReplicationWriter.WriteBatchSizePerObject",
             &bDebugBatchSizePerObjectEnabled,
             L"Write batch size per object. Helps tracking down bitstream errors. Requires code to be compiled with UE_NET_REPLICATIONDATASTREAM_DEBUG to be enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarWriteBatchSizePerObject__);
  return;
}

// `dynamic_initializer_for_'CvarWriteSentinels'' @ 140f85a70

void __cdecl UE::Net::Private::_dynamic_initializer_for__CvarWriteSentinels__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarWriteSentinels,L"net.Iris.ReplicationWriter.WriteSentinels",
             &bDebugSentinelsEnabled,
             L"Write sentinels at carefully chosen points in the stream. Helps tracking down bitstream errors. Requires code to be compiled with UE_NET_REPLICATIONDATASTREAM_DEBUG to be enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarWriteSentinels__);
  return;
}

// `dynamic_initializer_for_'NetError_InstancedStructNetSerializer_InvalidStructType'' @ 140f85ac0

void __cdecl
UE::Net::_dynamic_initializer_for__NetError_InstancedStructNetSerializer_InvalidStructType__(void)

{
  ::FName::FName(&NetError_InstancedStructNetSerializer_InvalidStructType,"Invalid struct type");
  return;
}

// `dynamic_initializer_for_'NetError_ObjectStateTooLarge'' @ 140f85ae0

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_ObjectStateTooLarge__(void)

{
  ::FName::FName(&NetError_ObjectStateTooLarge,"Object state is too large to be split.");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ReplicationSystem_h__Script_IrisCore_3320079306'' @ 140f85b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ReplicationSystem_h__Script_IrisCore_3320079306__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ReplicationSystem_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_WorldLocations_h__Script_IrisCore_3906997217'' @ 140f85b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_WorldLocations_h__Script_IrisCore_3906997217__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_WorldLocations_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_DateTimeNetSerializer_h__Script_IrisCore_1767907830'' @ 140f85b80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_DateTimeNetSerializer_h__Script_IrisCore_1767907830__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_DateTimeNetSerializer_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_EnumNetSerializers_h__Script_IrisCore_226478672'' @ 140f85bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_EnumNetSerializers_h__Script_IrisCore_226478672__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_EnumNetSerializers_h__Script_IrisCore_Statics
             ::ScriptStructInfo,8,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_FloatNetSerializers_h__Script_IrisCore_914116031'' @ 140f85c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_FloatNetSerializers_h__Script_IrisCore_914116031__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_FloatNetSerializers_h__Script_IrisCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_GuidNetSerializer_h__Script_IrisCore_2851863904'' @ 140f85c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_GuidNetSerializer_h__Script_IrisCore_2851863904__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_GuidNetSerializer_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_InstancedStructNetSerializer_h__Script_IrisCore_2211264130'' @ 140f85c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_InstancedStructNetSerializer_h__Script_IrisCore_2211264130__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_InstancedStructNetSerializer_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `scalar_deleting_destructor' @ 1442ed950

void * __thiscall
FFloatNetSerializerConfig::_scalar_deleting_destructor_
          (FFloatNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442eda10

void * __thiscall
FDoubleNetSerializerConfig::_scalar_deleting_destructor_
          (FDoubleNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442edaf0

void * __thiscall
FGuidNetSerializerConfig::_scalar_deleting_destructor_(FGuidNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 1442edbf0

void * __cdecl Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGuidNetSerializerConfig,&UE::CoreUObject::Private::Construct<FGuidNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FGuidNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FGuidNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FGuidNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442eddf0

void * __cdecl
Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x168;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInstancedStructNetSerializerConfig,&UE::CoreUObject::Private::Construct<FInstancedStructNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FInstancedStructNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FInstancedStructNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1442edf60

void * __thiscall
UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::
_scalar_deleting_destructor_(FNetSerializerRegistryDelegates *this,uint param_1)

{
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FInstancedStructNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UReplicationSystem @ 1442edfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplicationSystem(void)

{
  if (Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton,
               &Z_Construct_UClass_UReplicationSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1442ee130

void * __thiscall
FDateTimeNetSerializerConfig::_scalar_deleting_destructor_
          (FDateTimeNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 1442ee170

void * __cdecl Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDateTimeNetSerializerConfig,&UE::CoreUObject::Private::Construct<FDateTimeNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FDateTimeNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FDateTimeNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FDateTimeNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee2e0

void * __cdecl Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumInt8NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumInt8NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumInt8NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumInt8NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumInt8NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1442ee320

void * __thiscall
UE::Net::FFieldPathNetSerializer::FNetSerializerRegistryDelegates::_scalar_deleting_destructor_
          (FNetSerializerRegistryDelegates *this,uint param_1)

{
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 1442ee3d0

void * __cdecl Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumInt16NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumInt16NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumInt16NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumInt16NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumInt16NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee470

void * __cdecl Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumInt32NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumInt32NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumInt32NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumInt32NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumInt32NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee4b0

void * __cdecl Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumInt64NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumInt64NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumInt64NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumInt64NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumInt64NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee600

void * __cdecl Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumUint8NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumUint8NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumUint8NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumUint8NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumUint8NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee6b0

void * __cdecl Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumUint16NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumUint16NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumUint16NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumUint16NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumUint16NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee6f0

void * __cdecl Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumUint32NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumUint32NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumUint32NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumUint32NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumUint32NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1442ee730

void * __thiscall
FBoolNetSerializerConfig::_scalar_deleting_destructor_(FBoolNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 1442ee7c0

void * __cdecl Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnumUint64NetSerializerConfig,&UE::CoreUObject::Private::Construct<FEnumUint64NetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnumUint64NetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FEnumUint64NetSerializerConfig>,&UE::CoreUObject::Private::Copy<FEnumUint64NetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee870

void * __cdecl Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFloatNetSerializerConfig,&UE::CoreUObject::Private::Construct<FFloatNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FFloatNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FFloatNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FFloatNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1442ee8b0

void * __cdecl Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDoubleNetSerializerConfig,&UE::CoreUObject::Private::Construct<FDoubleNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FDoubleNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FDoubleNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FDoubleNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldLocationsConfig @ 1442eea70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldLocationsConfig(void)

{
  if (Z_Registration_Info_UClass_UWorldLocationsConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldLocationsConfig.OuterSingleton,
               &Z_Construct_UClass_UWorldLocationsConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldLocationsConfig.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1442eeb20

void * __thiscall
FFieldPathNetSerializerConfig::_scalar_deleting_destructor_
          (FFieldPathNetSerializerConfig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Property).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CastChecked<UReplicationSystem,UObject> @ 1442ef650

UReplicationSystem * __cdecl CastChecked<UReplicationSystem,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UReplicationSystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UReplicationSystem::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UReplicationSystem *)param_1;
  }
  pFVar3 = GetTypeName<UReplicationSystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,UE::Net::Private::FReplicationRecord::FSubObjectRecord,int> @ 1442ef710

void __cdecl
ConstructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
          (void *param_1,FSubObjectRecord *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FReplicationWriter::FObjectRecord,int> @ 1442ef7c0

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationWriter::FObjectRecord,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    do {
      *(undefined8 *)(lVar1 + -0x14) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FReplicationView,int> @ 1442ef7f0

void __cdecl DefaultConstructItems<UE::Net::FReplicationView,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x128);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 4;
      puVar1 = puVar1 + 0x4c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord::FSubObjectInfo,int> @ 1442ef820

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord::FSubObjectInfo,int>
          (void *param_1,int param_2)

{
  return;
}

// DestructItems<TSoftObjectPtr<UScriptStruct>,int> @ 1442efa20

void __cdecl
DestructItems<TSoftObjectPtr<UScriptStruct>,int>(TSoftObjectPtr<UScriptStruct> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationFiltering::FFilterInfo,int> @ 1442efa60

void __cdecl
DestructItems<UE::Net::Private::FReplicationFiltering::FFilterInfo,int>
          (FFilterInfo *param_1,int param_2)

{
  UObject *pUVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pUVar1 = (param_1->Filter).Object;
    if (pUVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
      (param_1->Filter).Object = (UObject *)0x0;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int> @ 1442efab0

void __cdecl
DestructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerInfo,int>
          (FPrioritizerInfo *param_1,int param_2)

{
  UObject *pUVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pUVar1 = (param_1->Prioritizer).Object;
    if (pUVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
      (param_1->Prioritizer).Object = (UObject *)0x0;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::FReplicationView,int> @ 1442efb00

void __cdecl DestructItems<UE::Net::FReplicationView,int>(FReplicationView *param_1,int param_2)

{
  ForElementType<UE::Net::FReplicationView::FView> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Views).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,int> @ 1442efb50

void __cdecl
DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,int>
          (FSubObjectRecord *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SubObjectInfos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned_int> @ 1442efb90

void __cdecl
DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned_int>
          (FSubObjectRecord *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar1 = (param_1->SubObjectInfos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned___int64> @ 1442efbd0

void __cdecl
DestructItems<UE::Net::Private::FReplicationRecord::FSubObjectRecord,unsigned___int64>
          (FSubObjectRecord *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar1 = (param_1->SubObjectInfos).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UE::Net::Private::FReplicationWriter::ScheduleObjects'::__l2::<lambda_1>_&> @ 1442f1040

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationWriter::ScheduleObjects_::__l2::<lambda_1>_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          _func___cdecl_uint_uint_uint *param_5,<lambda_1> *param_6)

{
  float fVar1;
  FReplicationWriter *pFVar2;
  FScheduleObjectInfo *pFVar3;
  FNetRefHandleManager *pFVar4;
  code *pcVar5;
  float fVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  FNetBitArrayView local_70 [3];
  
  fVar6 = __real_3f800000;
  uVar14 = 0;
  uVar15 = 0;
  if (param_3 != 0) {
    lVar13 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar9 = (*param_5)(*(uint *)(lVar13 + (longlong)param_2),*param_2);
      uVar11 = 0xffffffff;
      if (uVar15 == param_3 - 1) {
        uVar11 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      }
      uVar9 = uVar9 & uVar11;
      if (uVar9 != 0) {
        uVar12 = 1;
        uVar11 = uVar14;
        do {
          if ((uVar9 & 1) != 0) {
            pFVar2 = param_6->__this;
            uVar10 = 0;
            if ((int)uVar11 < (pFVar2->SchedulingPriorities).ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)((pFVar2->SchedulingPriorities).AllocatorInstance.Data +
                              (longlong)(int)uVar11 * 4);
            uVar10 = *param_6->ScheduledObjectCount;
            pFVar3 = *param_6->ScheduledObjectIndices;
            pFVar3[uVar10].SortKey = fVar1;
            pFVar3[uVar10].Index = uVar11;
            if (fVar6 <= fVar1) {
              *param_6->ScheduledObjectCount = *param_6->ScheduledObjectCount + 1;
              pFVar4 = param_6->__this->NetRefHandleManager;
              FNetBitArrayView::FNetBitArrayView
                        (local_70,(uint *)(pFVar4->ObjectsWithDependentObjectsInternalIndices).
                                          Storage.AllocatorInstance.Data,
                         (pFVar4->ObjectsWithDependentObjectsInternalIndices).BitCount);
              puVar7 = local_70[0].Storage;
              if ((local_70[0].BitCount <= uVar11) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2c1,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((puVar7[uVar11 >> 5] & uVar12) != 0) {
                Net::Private::FReplicationWriter::ScheduleDependentObjects
                          (param_6->__this,uVar11,fVar1,&param_6->__this->SchedulingPriorities,
                           *param_6->ScheduledObjectIndices,param_6->ScheduledObjectCount);
              }
            }
          }
          uVar11 = uVar11 + 1;
          uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
          uVar9 = uVar9 >> 1;
        } while (uVar9 != 0);
      }
      uVar15 = uVar15 + 1;
      param_2 = param_2 + 1;
      uVar14 = uVar14 + 0x20;
    } while (uVar15 < param_3);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UReplicationSystem::SendUpdate'::__l12::<lambda_1>_> @ 1442f1280

void __cdecl
UE::Net::FNetBitArray::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UReplicationSystem::SendUpdate_::__l12::<lambda_1>_>
          (FNetBitArray *param_1,FNetBitArray *param_2,_func___cdecl_uint_uint_uint *param_3,
          <lambda_1> *param_4)

{
  uint uVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int local_48 [4];
  
  if ((param_1->BitCount != param_2->BitCount) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x555,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = (param_1->Storage).ArrayNum;
  iVar15 = 0;
  uVar2 = param_1->BitCount;
  uVar12 = 0;
  pFVar14 = (param_2->Storage).AllocatorInstance.Data;
  if (uVar1 != 0) {
    lVar8 = (longlong)(param_1->Storage).AllocatorInstance.Data - (longlong)pFVar14;
    do {
      uVar6 = (*param_3)(*(uint *)(pFVar14 + lVar8),*(uint *)pFVar14);
      uVar10 = 0xffffffff;
      if (uVar12 == uVar1 - 1) {
        uVar10 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      iVar13 = iVar15;
      for (uVar6 = uVar6 & uVar10; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          FVar11 = (ForElementType<unsigned_int>)param_4->ConnectionToUpdate;
          FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x200);
          FVar9 = FVar11;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar3;
          }
          local_48[0] = iVar13;
          if ((ulonglong)FVar9 <= local_48) {
            FVar9 = FVar11;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = FVar3;
            }
            if ((local_48 <
                 (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar11 + 0x20c) * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar7 = *(int *)((longlong)FVar11 + 0x208);
          if (iVar7 == *(int *)((longlong)FVar11 + 0x20c)) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)FVar11,
                               (int *)((longlong)FVar11 + 0x20c));
          }
          *(int *)((longlong)FVar11 + 0x208) = iVar7 + 1;
          if (*(ForElementType<unsigned_int> **)((longlong)FVar11 + 0x200) !=
              (ForElementType<unsigned_int> *)0x0) {
            FVar11 = (ForElementType<unsigned_int>)
                     *(ForElementType<unsigned_int> **)((longlong)FVar11 + 0x200);
          }
          *(int *)(((ForElementType<unsigned_int> *)FVar11)->InlineData + (longlong)iVar7 * 4) =
               local_48[0];
        }
        iVar13 = iVar13 + 1;
      }
      uVar12 = uVar12 + 1;
      pFVar14 = pFVar14 + 4;
      iVar15 = iVar15 + 0x20;
    } while (uVar12 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::PropagateDirtyChanges'::__l2::<lambda_1>_&> @ 1442f1470

/* WARNING: Enum "EFlushFlags": Some values do not have unique names */

void __thiscall
UE::Net::FNetBitArray::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::PropagateDirtyChanges_::__l2::<lambda_1>_&>
          (FNetBitArray *this,<lambda_1> *param_1)

{
  uint uVar1;
  uint uVar2;
  FReplicationConnection *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar1 = (this->Storage).ArrayNum;
  uVar7 = 0;
  pFVar8 = (this->Storage).AllocatorInstance.Data;
  uVar2 = this->BitCount;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = 0xffffffff;
      if (uVar5 == uVar1 - 1) {
        uVar4 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar6 = uVar7;
      for (uVar4 = uVar4 & *(uint *)pFVar8; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if (((uVar4 & 1) != 0) &&
           (pFVar3 = Net::Private::FReplicationConnections::GetConnection
                               (*(FReplicationConnections **)param_1,uVar6),
           pFVar3->bIsClosing == false)) {
          Net::Private::FReplicationWriter::InternalUpdateDirtyChangeMasks
                    (pFVar3->ReplicationWriter,*(FChangeMaskCache **)(param_1 + 8),FlushFlags_None,
                     false);
        }
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      pFVar8 = pFVar8 + 4;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData'::__l2::<lambda_1>_&> @ 1442f1540

void __thiscall
UE::Net::FNetBitArrayView::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData_::__l2::<lambda_1>_&>
          (FNetBitArrayView *this,<lambda_1> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar1 = this->WordCount;
  uVar7 = 0;
  puVar8 = this->Storage;
  uVar2 = this->BitCount;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = 0xffffffff;
      if (uVar5 == uVar1 - 1) {
        uVar4 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar6 = uVar7;
      for (uVar4 = uVar4 & *puVar8; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((uVar4 & 1) != 0) {
          uVar3 = Net::Private::FReplicationInstanceOperationsInternal::QuantizeObjectStateData
                            (param_1->ChangeMaskWriter,param_1->Cache,param_1->NetRefHandleManager,
                             param_1->SerializationContext,uVar6);
          *param_1->QuantizedObjectCount = *param_1->QuantizedObjectCount + uVar3;
        }
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams'::__l2::<lambda_1>_&> @ 1442f1610

void __thiscall
UE::Net::FNetBitArray::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams_::__l2::<lambda_1>_&>
          (FNetBitArray *this,<lambda_1> *param_1)

{
  uint uVar1;
  uint uVar2;
  FReplicationConnection *pFVar3;
  UObject *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar1 = (this->Storage).ArrayNum;
  uVar9 = 0;
  pFVar8 = (this->Storage).AllocatorInstance.Data;
  uVar2 = this->BitCount;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 0xffffffff;
      if (uVar6 == uVar1 - 1) {
        uVar5 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar7 = uVar9;
      for (uVar5 = uVar5 & *(uint *)pFVar8; uVar5 != 0; uVar5 = uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          pFVar3 = Net::Private::FReplicationConnections::GetConnection(param_1->Connections,uVar7);
          pUVar4 = FWeakObjectPtr::Get(&(pFVar3->DataStreamManager).WeakPtr);
          if (pUVar4 != (UObject *)0x0) {
            pUVar4 = FWeakObjectPtr::Get(&(pFVar3->DataStreamManager).WeakPtr);
            (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,param_1->UpdateParameters);
          }
        }
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar6 + 1;
      pFVar8 = pFVar8 + 4;
      uVar9 = uVar9 + 0x20;
    } while (uVar6 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::UpdateUnresolvableReferenceTracking'::__l2::<lambda_1>_&> @ 1442f16f0

void __thiscall
UE::Net::FNetBitArray::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::UpdateUnresolvableReferenceTracking_::__l2::<lambda_1>_&>
          (FNetBitArray *this,<lambda_1> *param_1)

{
  uint uVar1;
  uint uVar2;
  FReplicationConnection *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar1 = (this->Storage).ArrayNum;
  uVar7 = 0;
  pFVar8 = (this->Storage).AllocatorInstance.Data;
  uVar2 = this->BitCount;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = 0xffffffff;
      if (uVar5 == uVar1 - 1) {
        uVar4 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar6 = uVar7;
      for (uVar4 = uVar4 & *(uint *)pFVar8; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((uVar4 & 1) != 0) {
          pFVar3 = Net::Private::FReplicationConnections::GetConnection
                             (*(FReplicationConnections **)param_1,uVar6);
          Net::Private::FReplicationReader::ProcessQueuedBatches(pFVar3->ReplicationReader);
          Net::Private::FReplicationReader::UpdateUnresolvableReferenceTracking
                    (pFVar3->ReplicationReader);
        }
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      pFVar8 = pFVar8 + 4;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes'::__l3::<lambda_1>_&> @ 1442f17c0

void __thiscall
UE::Net::FNetBitArray::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes_::__l3::<lambda_1>_&>
          (FNetBitArray *this,<lambda_1> *param_1)

{
  uint uVar1;
  uint uVar2;
  FReplicationFiltering *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FReplicationConnection *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FNetBitArrayView local_48;
  
  uVar1 = (this->Storage).ArrayNum;
  pFVar13 = (this->Storage).AllocatorInstance.Data;
  uVar2 = this->BitCount;
  uVar12 = 0;
  uVar10 = 0;
  if (uVar1 != 0) {
    do {
      uVar9 = 0xffffffff;
      if (uVar10 == uVar1 - 1) {
        uVar9 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar11 = uVar12;
      for (uVar9 = uVar9 & *(uint *)pFVar13; uVar9 != 0; uVar9 = uVar9 >> 1) {
        if ((uVar9 & 1) != 0) {
          pFVar7 = Net::Private::FReplicationConnections::GetConnection(param_1->Connections,uVar11)
          ;
          pFVar3 = param_1->Filtering;
          uVar8 = 0;
          if ((int)uVar11 < (pFVar3->ConnectionInfos).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pFVar3->ConnectionInfos).AllocatorInstance.Data;
          FNetBitArrayView::FNetBitArrayView
                    (&local_48,*(uint **)(pFVar4 + (longlong)(int)uVar11 * 0x160 + 0x60),
                     *(uint *)(pFVar4 + (longlong)(int)uVar11 * 0x160 + 0x70));
          Net::Private::FReplicationWriter::UpdateScope(pFVar7->ReplicationWriter,&local_48);
        }
        uVar11 = uVar11 + 1;
      }
      uVar10 = uVar10 + 1;
      pFVar13 = pFVar13 + 4;
      uVar12 = uVar12 + 0x20;
    } while (uVar10 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness'::__l8::<lambda_1>_> @ 1442f1930

void __thiscall
UE::Net::FNetBitArrayView::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness_::__l8::<lambda_1>_>
          (FNetBitArrayView *this,<lambda_1> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar1 = this->WordCount;
  uVar4 = 0;
  puVar7 = this->Storage;
  uVar2 = this->BitCount;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0xffffffff;
      if (uVar5 == uVar1 - 1) {
        uVar3 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar6 = uVar4;
      for (uVar3 = uVar3 & *puVar7; uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          Net::Private::FReplicationInstanceOperationsInternal::ResetObjectStateDirtiness
                    (param_1->NetRefHandleManager,uVar6);
        }
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
      uVar4 = uVar4 + 0x20;
    } while (uVar5 < uVar1);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness'::__l10::<lambda_2>_> @ 1442f19e0

void __thiscall
UE::Net::FNetBitArrayView::
ForAllSetBits<_UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness_::__l10::<lambda_2>_>
          (FNetBitArrayView *this,<lambda_2> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar1 = this->WordCount;
  uVar4 = 0;
  puVar7 = this->Storage;
  uVar2 = this->BitCount;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0xffffffff;
      if (uVar5 == uVar1 - 1) {
        uVar3 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar6 = uVar4;
      for (uVar3 = uVar3 & *puVar7; uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          Net::Private::FReplicationInstanceOperationsInternal::ResetObjectStateDirtiness
                    (param_1->NetRefHandleManager,uVar6);
        }
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
      uVar4 = uVar4 + 0x20;
    } while (uVar5 < uVar1);
  }
  return;
}

// GetBitsNeeded<__int64,-1> @ 1442f1ab0

uint __cdecl UE::Net::GetBitsNeeded<__int64,_1>(long64 param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 >> 0x3f ^ param_1;
  lVar1 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar2 = (int)lVar1;
  if (uVar3 == 0) {
    iVar2 = -1;
  }
  return iVar2 + 2;
}

// GetTypeName<UReplicationSystem> @ 1442f1ad0

FString * __cdecl GetTypeName<UReplicationSystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UReplicationSystem::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UReplicationSystem> @ 1442f2980

void __cdecl InternalConstructor<UReplicationSystem>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)&this[1].field_0x20 = 0xffffffffffffffff;
    *(undefined ***)this = &___7UReplicationSystem__6B_;
    *(uint *)(this + 2) = *(uint *)(this + 2) & 0xfffffff8;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UWorldLocationsConfig> @ 1442f29d0

void __cdecl InternalConstructor<UWorldLocationsConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[2].field_0x8 = 0x48127c00;
    *(undefined ***)this = &___7UWorldLocationsConfig__6B_;
    *(undefined8 *)(this + 1) = 0xc130000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0xc130000000000000;
    *(undefined8 *)&this[1].field_0x10 = 0xc130000000000000;
    *(undefined8 *)&this[1].field_0x18 = 0x4130000000000000;
    *(undefined8 *)&this[1].field_0x20 = 0x4130000000000000;
    *(undefined8 *)(this + 2) = 0x4130000000000000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UReplicationSystem> @ 1442f2a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReplicationSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplicationSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UReplicationSystem__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldLocationsConfig> @ 1442f2b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldLocationsConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldLocationsConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[2].field_0x8 = 0x48127c00;
    *(undefined ***)pUVar1 = &___7UWorldLocationsConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0xc130000000000000;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0xc130000000000000;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xc130000000000000;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0x4130000000000000;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0x4130000000000000;
    *(undefined8 *)(pUVar1 + 2) = 0x4130000000000000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UReplicationSystem> @ 1442f3030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UReplicationSystem * __cdecl NewObject<UReplicationSystem>(UObject *param_1)

{
  UClass *pUVar1;
  UReplicationSystem *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UReplicationSystem::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UReplicationSystem *)
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

// Process<`UE::Net::Private::FReplicationWriter::DiscardAllRecords'::__l7::<lambda_1>_> @ 1442f30d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::TReplicationRecordHelper::
Process<_UE::Net::Private::FReplicationWriter::DiscardAllRecords_::__l7::<lambda_1>_>
          (TReplicationRecordHelper *this,uint param_1,<lambda_1> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  FReplicationRecord *pFVar5;
  TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar6
  ;
  FScriptContainerElement *pFVar7;
  TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_> *pTVar8;
  FReplicationWriter *pFVar9;
  void *pvVar10;
  code *pcVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_f8 [32];
  ulonglong local_c0;
  FReplicationWriter *local_b8;
  FReplicationWriter *local_b0;
  uint *local_a8;
  FScriptContainerElement *local_a0;
  code *local_98;
  FReplicationWriter **local_90;
  code *local_88;
  FReplicationWriter **local_80;
  FReplicationRecord local_78;
  FReplicationRecord local_70;
  uint local_68 [4];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48 [2];
  
  if (param_1 != 0) {
    local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_f8;
    local_c0 = (ulonglong)param_1;
    do {
      pFVar5 = this->ReplicationRecord;
      if (((pFVar5->RecordInfos).Head == (pFVar5->RecordInfos).Tail) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset < Count()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0x4c,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar20 = (pFVar5->RecordInfos).Storage.AllocatorInstance.Data +
                (ulonglong)((pFVar5->RecordInfos).IndexMask & (pFVar5->RecordInfos).Tail) * 0x10;
      if ((*(uint *)(pFVar20 + 8) & 0x4000000) == 0) {
        uVar18 = 0;
      }
      else {
        pFVar5 = this->ReplicationRecord;
        if (((pFVar5->AttachmentRecords).Head == (pFVar5->AttachmentRecords).Tail) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Offset < Count()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                                ,0x4c,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar14 = (pFVar5->AttachmentRecords).Tail;
        uVar18 = *(ulonglong *)
                  ((pFVar5->AttachmentRecords).Storage.AllocatorInstance.Data +
                  (ulonglong)((pFVar5->AttachmentRecords).IndexMask & uVar14) * 8);
        if ((pFVar5->AttachmentRecords).Head == uVar14) {
          bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1638566698149740322>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0xde,"Count() > 0");
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          (pFVar5->AttachmentRecords).Tail = uVar14 + 1;
        }
      }
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[0],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[1],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[2],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[3],0,0,10);
      puVar16 = local_68;
      local_68[0] = 3;
      local_68[1] = 2;
      local_68[2] = 1;
      local_68[3] = 0;
      do {
        uVar14 = *puVar16;
        puVar16 = puVar16 + 1;
        local_78.Sequences[uVar14] = SUB82(uVar18,0);
        uVar18 = uVar18 >> 0x10;
      } while (puVar16 != local_68 + 4);
      pTVar6 = this->ReplicationInfos;
      uVar14 = *(uint *)(pFVar20 + 8);
      if ((pTVar6->ArrayNum <= (int)(uVar14 & 0xfffff)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      pTVar8 = this->ReplicationInfosRecordInfoLists;
      uVar3 = *(uint *)(pFVar20 + 8);
      if ((pTVar8->ArrayNum <= (int)(uVar3 & 0xfffff)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar15 = *(uint *)(pFVar20 + 8) >> 0x14 & 0x1f;
      pFVar19 = (pTVar8->AllocatorInstance).Data + (ulonglong)(uVar3 & 0xfffff) * 4;
      uVar2 = *(ushort *)(pFVar7 + (ulonglong)(uVar14 & 0xfffff) * 0x10 + 8);
      pFVar9 = param_2->__this;
      local_a0 = pFVar19;
      if ((uVar15 != 1) && (uVar15 == 2)) {
        if (((*(uint *)(pFVar20 + 8) & 0xfffff) != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObjectIndexForOOBAttachment(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                                ,0x58b,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
                  (&pFVar9->Attachments,Discard,HugeObject,0,&local_78);
        local_90 = &local_b8;
        local_98 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
                   ::Call;
        local_b8 = pFVar9;
        FReplicationWriter::FHugeObjectSendQueue::AckObjects
                  (&pFVar9->HugeObjectSendQueue,
                   (TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
                    *)&local_98);
      }
      if (((*(uint *)(pFVar20 + 8) & 0x2000000) != 0) && (0x40 < uVar2)) {
        FGlobalChangeMaskAllocator::Free(&s_DefaultChangeMaskAllocator,*(void **)pFVar20);
      }
      if (*(int *)(pFVar20 + 8) < 0) {
        local_58._0_4_ = 3;
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[0],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[1],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[2],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[3],0,0,10);
        local_58._4_4_ = 2;
        puVar17 = (ulonglong *)(local_68 + 4);
        local_50 = 1;
        do {
          uVar18 = *puVar17;
          puVar17 = (ulonglong *)((longlong)puVar17 + 4);
          *(undefined2 *)((longlong)local_68 + (ulonglong)(uint)uVar18 * 2 + -8) = 0;
        } while (puVar17 != local_48);
        pFVar5 = this->ReplicationRecord;
        uVar14 = 0;
        if (((pFVar5->SubObjectRecords).Head == (pFVar5->SubObjectRecords).Tail) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Offset < Count()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                                ,0x4f,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar18 = (ulonglong)((pFVar5->SubObjectRecords).Tail & (pFVar5->SubObjectRecords).IndexMask)
        ;
        pFVar20 = (pFVar5->SubObjectRecords).Storage.AllocatorInstance.Data;
        puVar16 = *(uint **)(pFVar20 + uVar18 * 0x10);
        *(undefined8 *)(pFVar20 + uVar18 * 0x10) = 0;
        iVar4 = *(int *)(pFVar20 + uVar18 * 0x10 + 8);
        *(undefined8 *)(pFVar20 + uVar18 * 0x10 + 8) = 0;
        uVar3 = (pFVar5->SubObjectRecords).Tail;
        local_a8 = puVar16;
        if ((pFVar5->SubObjectRecords).Head == uVar3) {
          bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1638566698149740322>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0xde,"Count() > 0");
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          pvVar10 = *(void **)((pFVar5->SubObjectRecords).Storage.AllocatorInstance.Data +
                              (ulonglong)(uVar3 & (pFVar5->SubObjectRecords).IndexMask) * 0x10);
          if (pvVar10 != (void *)0x0) {
            FMemory::Free(pvVar10);
          }
          puVar1 = &(pFVar5->SubObjectRecords).Tail;
          *puVar1 = *puVar1 + 1;
        }
        puVar1 = puVar16 + iVar4;
        for (; pFVar19 = local_a0, puVar16 != puVar1; puVar16 = puVar16 + 1) {
          uVar3 = *puVar16;
          if ((this->ReplicationInfos->ArrayNum <= (int)(uVar3 & 0xfffff)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = param_2->__this;
          uVar14 = (uVar14 ^ uVar3) & 0x1ffffff ^ uVar14;
          if ((uVar14 >> 0x14 != 1) && (uVar14 >> 0x14 == 2)) {
            if (((uVar14 & 0xfffff) != 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsObjectIndexForOOBAttachment(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                                    ,0x58b,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
                      (&pFVar9->Attachments,Discard,HugeObject,0,&local_70);
            local_80 = &local_b0;
            local_88 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
                       ::Call;
            local_b0 = pFVar9;
            FReplicationWriter::FHugeObjectSendQueue::AckObjects
                      (&pFVar9->HugeObjectSendQueue,
                       (TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
                        *)&local_88);
          }
        }
        if (local_a8 != (uint *)0x0) {
          FMemory::Free(local_a8);
        }
      }
      pFVar5 = this->ReplicationRecord;
      uVar2 = pFVar5->FrontIndex;
      if (((pFVar5->RecordInfos).Head == (pFVar5->RecordInfos).Tail) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset < Count()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0x4c,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar13 = *(ushort *)pFVar19;
      *(short *)(pFVar19 + 2) =
           *(short *)((pFVar5->RecordInfos).Storage.AllocatorInstance.Data +
                     (ulonglong)((pFVar5->RecordInfos).IndexMask & (pFVar5->RecordInfos).Tail) *
                     0x10 + 0xc);
      if (uVar13 == uVar2) {
        uVar13 = 0xffff;
      }
      *(ushort *)pFVar19 = uVar13;
      uVar14 = pFVar5->FrontIndex + 1;
      pFVar5->FrontIndex = (short)uVar14 + (short)(uVar14 / 0xffff);
      uVar14 = (pFVar5->RecordInfos).Tail;
      if ((pFVar5->RecordInfos).Head == uVar14) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1638566698149740322>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                            ,0xde,"Count() > 0");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else {
        (pFVar5->RecordInfos).Tail = uVar14 + 1;
      }
      local_c0 = local_c0 - 1;
    } while (local_c0 != 0);
  }
  return;
}

// Process<`UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification'::__l15::<lambda_1>_> @ 1442f36d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::TReplicationRecordHelper::
Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l15::<lambda_1>_>
          (TReplicationRecordHelper *this,uint param_1,<lambda_1> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  FReplicationRecord *pFVar4;
  TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar5
  ;
  TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_> *pTVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  ulonglong *puVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  FReplicationInfo *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FRecordInfo *pFVar18;
  undefined1 auStackY_d8 [32];
  FRecordInfo local_98;
  ulonglong local_88;
  uint *local_80;
  FScriptContainerElement *local_78;
  FReplicationRecord local_70;
  FReplicationRecord local_68;
  uint local_60 [4];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  if (param_1 != 0) {
    local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
    local_88 = (ulonglong)param_1;
    do {
      pFVar4 = this->ReplicationRecord;
      if (((pFVar4->RecordInfos).Head == (pFVar4->RecordInfos).Tail) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar18 = (FRecordInfo *)
                ((pFVar4->RecordInfos).Storage.AllocatorInstance.Data +
                (ulonglong)((pFVar4->RecordInfos).IndexMask & (pFVar4->RecordInfos).Tail) * 0x10);
      if (pFVar18->HasAttachments == 0) {
        uVar14 = 0;
      }
      else {
        pFVar4 = this->ReplicationRecord;
        if (((pFVar4->AttachmentRecords).Head == (pFVar4->AttachmentRecords).Tail) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar12 = (pFVar4->AttachmentRecords).Tail;
        uVar14 = *(ulonglong *)
                  ((pFVar4->AttachmentRecords).Storage.AllocatorInstance.Data +
                  (ulonglong)((pFVar4->AttachmentRecords).IndexMask & uVar12) * 8);
        if ((pFVar4->AttachmentRecords).Head == uVar12) {
          bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1638566698149740322>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0xde,"Count() > 0");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          (pFVar4->AttachmentRecords).Tail = uVar12 + 1;
        }
      }
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[0],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[1],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[2],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[3],0,0,10);
      puVar13 = local_60;
      local_60[0] = 3;
      local_60[1] = 2;
      local_60[2] = 1;
      local_60[3] = 0;
      do {
        uVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        local_70.Sequences[uVar12] = SUB82(uVar14,0);
        uVar14 = uVar14 >> 0x10;
      } while (puVar13 != local_60 + 4);
      pTVar5 = this->ReplicationInfos;
      uVar12 = pFVar18->Index;
      if ((pTVar5->ArrayNum <= (int)uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar6 = this->ReplicationInfosRecordInfoLists;
      pFVar15 = (FReplicationInfo *)((pTVar5->AllocatorInstance).Data + (ulonglong)uVar12 * 0x10);
      uVar12 = pFVar18->Index;
      if ((pTVar6->ArrayNum <= (int)uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar17 = (pTVar6->AllocatorInstance).Data + (ulonglong)uVar12 * 4;
      uVar2 = (pFVar15->field1_0x8)._s_1.ChangeMaskBitCount;
      local_78 = pFVar17;
      FReplicationWriter::HandleDeliveredRecord(param_2->__this,pFVar18,pFVar15,&local_70);
      if ((pFVar18->HasChangeMask != 0) && (0x40 < uVar2)) {
        FGlobalChangeMaskAllocator::Free
                  (&s_DefaultChangeMaskAllocator,
                   (void *)(pFVar18->ChangeMaskOrPtr).ChangeMaskOrPointer);
      }
      if ((BADTYPE)pFVar18->HasSubObjectRecord) {
        local_50._0_4_ = 3;
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[0],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[1],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[2],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[3],0,0,10);
        local_50._4_4_ = 2;
        puVar11 = (ulonglong *)(local_60 + 4);
        local_48 = 1;
        do {
          uVar14 = *puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
          *(undefined2 *)((longlong)local_60 + (ulonglong)(uint)uVar14 * 2 + -8) = 0;
        } while (puVar11 != &local_40);
        pFVar4 = this->ReplicationRecord;
        local_98.ChangeMaskOrPtr.ChangeMaskOrPointer = 0;
        local_98._8_4_ = 0x40000000;
        local_98.NextIndex = 0;
        local_98.Padding = 0;
        if (((pFVar4->SubObjectRecords).Head == (pFVar4->SubObjectRecords).Tail) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4f,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar14 = (ulonglong)((pFVar4->SubObjectRecords).Tail & (pFVar4->SubObjectRecords).IndexMask)
        ;
        pFVar17 = (pFVar4->SubObjectRecords).Storage.AllocatorInstance.Data;
        puVar13 = *(uint **)(pFVar17 + uVar14 * 0x10);
        *(undefined8 *)(pFVar17 + uVar14 * 0x10) = 0;
        iVar3 = *(int *)(pFVar17 + uVar14 * 0x10 + 8);
        *(undefined8 *)(pFVar17 + uVar14 * 0x10 + 8) = 0;
        uVar12 = (pFVar4->SubObjectRecords).Tail;
        local_80 = puVar13;
        if ((pFVar4->SubObjectRecords).Head == uVar12) {
          bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1638566698149740322>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0xde,"Count() > 0");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          pvVar7 = *(void **)((pFVar4->SubObjectRecords).Storage.AllocatorInstance.Data +
                             (ulonglong)((pFVar4->SubObjectRecords).IndexMask & uVar12) * 0x10);
          if (pvVar7 != (void *)0x0) {
            FMemory::Free(pvVar7);
          }
          puVar1 = &(pFVar4->SubObjectRecords).Tail;
          *puVar1 = *puVar1 + 1;
        }
        puVar1 = puVar13 + iVar3;
        for (; pFVar17 = local_78, puVar13 != puVar1; puVar13 = puVar13 + 1) {
          pTVar5 = this->ReplicationInfos;
          uVar12 = *puVar13;
          uVar16 = uVar12 & 0xfffff;
          if ((pTVar5->ArrayNum <= (int)uVar16) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_98._8_4_ = uVar12 & 0x1ffffff | local_98._8_4_ & 0xfe000000;
          FReplicationWriter::HandleDeliveredRecord
                    (param_2->__this,&local_98,
                     (FReplicationInfo *)
                     ((pTVar5->AllocatorInstance).Data + (ulonglong)uVar16 * 0x10),&local_68);
        }
        if (local_80 != (uint *)0x0) {
          FMemory::Free(local_80);
        }
      }
      pFVar4 = this->ReplicationRecord;
      uVar2 = pFVar4->FrontIndex;
      if (((pFVar4->RecordInfos).Head == (pFVar4->RecordInfos).Tail) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = *(ushort *)pFVar17;
      *(short *)(pFVar17 + 2) =
           *(short *)((pFVar4->RecordInfos).Storage.AllocatorInstance.Data +
                     (ulonglong)((pFVar4->RecordInfos).IndexMask & (pFVar4->RecordInfos).Tail) *
                     0x10 + 0xc);
      if (uVar10 == uVar2) {
        uVar10 = 0xffff;
      }
      *(ushort *)pFVar17 = uVar10;
      uVar12 = pFVar4->FrontIndex + 1;
      pFVar4->FrontIndex = (short)uVar12 + (short)(uVar12 / 0xffff);
      uVar12 = (pFVar4->RecordInfos).Tail;
      if ((pFVar4->RecordInfos).Head == uVar12) {
        bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        (pFVar4->RecordInfos).Tail = uVar12 + 1;
      }
      local_88 = local_88 - 1;
    } while (local_88 != 0);
  }
  return;
}

// Process<`UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification'::__l19::<lambda_2>_> @ 1442f3be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::TReplicationRecordHelper::
Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l19::<lambda_2>_>
          (TReplicationRecordHelper *this,uint param_1,<lambda_2> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  FReplicationRecord *pFVar4;
  TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar5
  ;
  TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_> *pTVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  ulonglong *puVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  FReplicationInfo *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FRecordInfo *pFVar18;
  undefined1 auStackY_d8 [32];
  FRecordInfo local_98;
  ulonglong local_88;
  uint *local_80;
  FScriptContainerElement *local_78;
  FReplicationRecord local_70;
  FReplicationRecord local_68;
  uint local_60 [4];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  if (param_1 != 0) {
    local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
    local_88 = (ulonglong)param_1;
    do {
      pFVar4 = this->ReplicationRecord;
      if (((pFVar4->RecordInfos).Head == (pFVar4->RecordInfos).Tail) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar18 = (FRecordInfo *)
                ((pFVar4->RecordInfos).Storage.AllocatorInstance.Data +
                (ulonglong)((pFVar4->RecordInfos).IndexMask & (pFVar4->RecordInfos).Tail) * 0x10);
      if (pFVar18->HasAttachments == 0) {
        uVar14 = 0;
      }
      else {
        pFVar4 = this->ReplicationRecord;
        if (((pFVar4->AttachmentRecords).Head == (pFVar4->AttachmentRecords).Tail) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar12 = (pFVar4->AttachmentRecords).Tail;
        uVar14 = *(ulonglong *)
                  ((pFVar4->AttachmentRecords).Storage.AllocatorInstance.Data +
                  (ulonglong)((pFVar4->AttachmentRecords).IndexMask & uVar12) * 8);
        if ((pFVar4->AttachmentRecords).Head == uVar12) {
          bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1638566698149740322>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0xde,"Count() > 0");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          (pFVar4->AttachmentRecords).Tail = uVar12 + 1;
        }
      }
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[0],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[1],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[2],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_70.Sequences[3],0,0,10);
      puVar13 = local_60;
      local_60[0] = 3;
      local_60[1] = 2;
      local_60[2] = 1;
      local_60[3] = 0;
      do {
        uVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        local_70.Sequences[uVar12] = SUB82(uVar14,0);
        uVar14 = uVar14 >> 0x10;
      } while (puVar13 != local_60 + 4);
      pTVar5 = this->ReplicationInfos;
      uVar12 = pFVar18->Index;
      if ((pTVar5->ArrayNum <= (int)uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar6 = this->ReplicationInfosRecordInfoLists;
      pFVar15 = (FReplicationInfo *)((pTVar5->AllocatorInstance).Data + (ulonglong)uVar12 * 0x10);
      uVar12 = pFVar18->Index;
      if ((pTVar6->ArrayNum <= (int)uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar17 = (pTVar6->AllocatorInstance).Data + (ulonglong)uVar12 * 4;
      uVar2 = (pFVar15->field1_0x8)._s_1.ChangeMaskBitCount;
      local_78 = pFVar17;
      FReplicationWriter::HandleDroppedRecord(param_2->__this,pFVar18,pFVar15,&local_70);
      if ((pFVar18->HasChangeMask != 0) && (0x40 < uVar2)) {
        FGlobalChangeMaskAllocator::Free
                  (&s_DefaultChangeMaskAllocator,
                   (void *)(pFVar18->ChangeMaskOrPtr).ChangeMaskOrPointer);
      }
      if ((BADTYPE)pFVar18->HasSubObjectRecord) {
        local_50._0_4_ = 3;
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[0],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[1],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[2],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_68.Sequences[3],0,0,10);
        local_50._4_4_ = 2;
        puVar11 = (ulonglong *)(local_60 + 4);
        local_48 = 1;
        do {
          uVar14 = *puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
          *(undefined2 *)((longlong)local_60 + (ulonglong)(uint)uVar14 * 2 + -8) = 0;
        } while (puVar11 != &local_40);
        pFVar4 = this->ReplicationRecord;
        local_98.ChangeMaskOrPtr.ChangeMaskOrPointer = 0;
        local_98._8_4_ = 0x40000000;
        local_98.NextIndex = 0;
        local_98.Padding = 0;
        if (((pFVar4->SubObjectRecords).Head == (pFVar4->SubObjectRecords).Tail) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4f,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar14 = (ulonglong)((pFVar4->SubObjectRecords).Tail & (pFVar4->SubObjectRecords).IndexMask)
        ;
        pFVar17 = (pFVar4->SubObjectRecords).Storage.AllocatorInstance.Data;
        puVar13 = *(uint **)(pFVar17 + uVar14 * 0x10);
        *(undefined8 *)(pFVar17 + uVar14 * 0x10) = 0;
        iVar3 = *(int *)(pFVar17 + uVar14 * 0x10 + 8);
        *(undefined8 *)(pFVar17 + uVar14 * 0x10 + 8) = 0;
        uVar12 = (pFVar4->SubObjectRecords).Tail;
        local_80 = puVar13;
        if ((pFVar4->SubObjectRecords).Head == uVar12) {
          bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1638566698149740322>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0xde,"Count() > 0");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          pvVar7 = *(void **)((pFVar4->SubObjectRecords).Storage.AllocatorInstance.Data +
                             (ulonglong)((pFVar4->SubObjectRecords).IndexMask & uVar12) * 0x10);
          if (pvVar7 != (void *)0x0) {
            FMemory::Free(pvVar7);
          }
          puVar1 = &(pFVar4->SubObjectRecords).Tail;
          *puVar1 = *puVar1 + 1;
        }
        puVar1 = puVar13 + iVar3;
        for (; pFVar17 = local_78, puVar13 != puVar1; puVar13 = puVar13 + 1) {
          pTVar5 = this->ReplicationInfos;
          uVar12 = *puVar13;
          uVar16 = uVar12 & 0xfffff;
          if ((pTVar5->ArrayNum <= (int)uVar16) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_98._8_4_ = uVar12 & 0x1ffffff | local_98._8_4_ & 0xfe000000;
          FReplicationWriter::HandleDroppedRecord
                    (param_2->__this,&local_98,
                     (FReplicationInfo *)
                     ((pTVar5->AllocatorInstance).Data + (ulonglong)uVar16 * 0x10),&local_68);
        }
        if (local_80 != (uint *)0x0) {
          FMemory::Free(local_80);
        }
      }
      pFVar4 = this->ReplicationRecord;
      uVar2 = pFVar4->FrontIndex;
      if (((pFVar4->RecordInfos).Head == (pFVar4->RecordInfos).Tail) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = *(ushort *)pFVar17;
      *(short *)(pFVar17 + 2) =
           *(short *)((pFVar4->RecordInfos).Storage.AllocatorInstance.Data +
                     (ulonglong)((pFVar4->RecordInfos).IndexMask & (pFVar4->RecordInfos).Tail) *
                     0x10 + 0xc);
      if (uVar10 == uVar2) {
        uVar10 = 0xffff;
      }
      *(ushort *)pFVar17 = uVar10;
      uVar12 = pFVar4->FrontIndex + 1;
      pFVar4->FrontIndex = (short)uVar12 + (short)(uVar12 / 0xffff);
      uVar12 = (pFVar4->RecordInfos).Tail;
      if ((pFVar4->RecordInfos).Head == uVar12) {
        bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        (pFVar4->RecordInfos).Tail = uVar12 + 1;
      }
      local_88 = local_88 - 1;
    } while (local_88 != 0);
  }
  return;
}

// Process<`UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification'::__l23::<lambda_3>_> @ 1442f4100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::TReplicationRecordHelper::
Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l23::<lambda_3>_>
          (TReplicationRecordHelper *this,uint param_1,<lambda_3> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  FReplicationRecord *pFVar5;
  TArray<UE::Net::Private::FReplicationWriter::FReplicationInfo,TSizedDefaultAllocator<32>_> *pTVar6
  ;
  FScriptContainerElement *pFVar7;
  TArray<UE::Net::Private::FReplicationRecord::FRecordInfoList,TSizedDefaultAllocator<32>_> *pTVar8;
  FReplicationWriter *pFVar9;
  void *pvVar10;
  code *pcVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_f8 [32];
  ulonglong local_c0;
  FReplicationWriter *local_b8;
  FReplicationWriter *local_b0;
  uint *local_a8;
  FScriptContainerElement *local_a0;
  code *local_98;
  FReplicationWriter **local_90;
  code *local_88;
  FReplicationWriter **local_80;
  FReplicationRecord local_78;
  FReplicationRecord local_70;
  uint local_68 [4];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48 [2];
  
  if (param_1 != 0) {
    local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_f8;
    local_c0 = (ulonglong)param_1;
    do {
      pFVar5 = this->ReplicationRecord;
      if (((pFVar5->RecordInfos).Head == (pFVar5->RecordInfos).Tail) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset < Count()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0x4c,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar20 = (pFVar5->RecordInfos).Storage.AllocatorInstance.Data +
                (ulonglong)((pFVar5->RecordInfos).IndexMask & (pFVar5->RecordInfos).Tail) * 0x10;
      if ((*(uint *)(pFVar20 + 8) & 0x4000000) == 0) {
        uVar18 = 0;
      }
      else {
        pFVar5 = this->ReplicationRecord;
        if (((pFVar5->AttachmentRecords).Head == (pFVar5->AttachmentRecords).Tail) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Offset < Count()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                                ,0x4c,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar14 = (pFVar5->AttachmentRecords).Tail;
        uVar18 = *(ulonglong *)
                  ((pFVar5->AttachmentRecords).Storage.AllocatorInstance.Data +
                  (ulonglong)((pFVar5->AttachmentRecords).IndexMask & uVar14) * 8);
        if ((pFVar5->AttachmentRecords).Head == uVar14) {
          bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1638566698149740322>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0xde,"Count() > 0");
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          (pFVar5->AttachmentRecords).Tail = uVar14 + 1;
        }
      }
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[0],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[1],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[2],0,0,10);
      INSERT(0,0,10,6);
      INSERT(local_78.Sequences[3],0,0,10);
      puVar16 = local_68;
      local_68[0] = 3;
      local_68[1] = 2;
      local_68[2] = 1;
      local_68[3] = 0;
      do {
        uVar14 = *puVar16;
        puVar16 = puVar16 + 1;
        local_78.Sequences[uVar14] = SUB82(uVar18,0);
        uVar18 = uVar18 >> 0x10;
      } while (puVar16 != local_68 + 4);
      pTVar6 = this->ReplicationInfos;
      uVar14 = *(uint *)(pFVar20 + 8);
      if ((pTVar6->ArrayNum <= (int)(uVar14 & 0xfffff)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      pTVar8 = this->ReplicationInfosRecordInfoLists;
      uVar3 = *(uint *)(pFVar20 + 8);
      if ((pTVar8->ArrayNum <= (int)(uVar3 & 0xfffff)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar15 = *(uint *)(pFVar20 + 8) >> 0x14 & 0x1f;
      pFVar19 = (pTVar8->AllocatorInstance).Data + (ulonglong)(uVar3 & 0xfffff) * 4;
      uVar2 = *(ushort *)(pFVar7 + (ulonglong)(uVar14 & 0xfffff) * 0x10 + 8);
      pFVar9 = param_2->__this;
      local_a0 = pFVar19;
      if ((uVar15 != 1) && (uVar15 == 2)) {
        if (((*(uint *)(pFVar20 + 8) & 0xfffff) != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObjectIndexForOOBAttachment(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                                ,0x58b,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
                  (&pFVar9->Attachments,Discard,HugeObject,0,&local_78);
        local_90 = &local_b8;
        local_98 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
                   ::Call;
        local_b8 = pFVar9;
        FReplicationWriter::FHugeObjectSendQueue::AckObjects
                  (&pFVar9->HugeObjectSendQueue,
                   (TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
                    *)&local_98);
      }
      if (((*(uint *)(pFVar20 + 8) & 0x2000000) != 0) && (0x40 < uVar2)) {
        FGlobalChangeMaskAllocator::Free(&s_DefaultChangeMaskAllocator,*(void **)pFVar20);
      }
      if (*(int *)(pFVar20 + 8) < 0) {
        local_58._0_4_ = 3;
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[0],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[1],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[2],0,0,10);
        INSERT(0,0,10,6);
        INSERT(local_70.Sequences[3],0,0,10);
        local_58._4_4_ = 2;
        puVar17 = (ulonglong *)(local_68 + 4);
        local_50 = 1;
        do {
          uVar18 = *puVar17;
          puVar17 = (ulonglong *)((longlong)puVar17 + 4);
          *(undefined2 *)((longlong)local_68 + (ulonglong)(uint)uVar18 * 2 + -8) = 0;
        } while (puVar17 != local_48);
        pFVar5 = this->ReplicationRecord;
        uVar14 = 0;
        if (((pFVar5->SubObjectRecords).Head == (pFVar5->SubObjectRecords).Tail) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Offset < Count()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                                ,0x4f,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar18 = (ulonglong)((pFVar5->SubObjectRecords).Tail & (pFVar5->SubObjectRecords).IndexMask)
        ;
        pFVar20 = (pFVar5->SubObjectRecords).Storage.AllocatorInstance.Data;
        puVar16 = *(uint **)(pFVar20 + uVar18 * 0x10);
        *(undefined8 *)(pFVar20 + uVar18 * 0x10) = 0;
        iVar4 = *(int *)(pFVar20 + uVar18 * 0x10 + 8);
        *(undefined8 *)(pFVar20 + uVar18 * 0x10 + 8) = 0;
        uVar3 = (pFVar5->SubObjectRecords).Tail;
        local_a8 = puVar16;
        if ((pFVar5->SubObjectRecords).Head == uVar3) {
          bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1638566698149740322>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0xde,"Count() > 0");
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          pvVar10 = *(void **)((pFVar5->SubObjectRecords).Storage.AllocatorInstance.Data +
                              (ulonglong)(uVar3 & (pFVar5->SubObjectRecords).IndexMask) * 0x10);
          if (pvVar10 != (void *)0x0) {
            FMemory::Free(pvVar10);
          }
          puVar1 = &(pFVar5->SubObjectRecords).Tail;
          *puVar1 = *puVar1 + 1;
        }
        puVar1 = puVar16 + iVar4;
        for (; pFVar19 = local_a0, puVar16 != puVar1; puVar16 = puVar16 + 1) {
          uVar3 = *puVar16;
          if ((this->ReplicationInfos->ArrayNum <= (int)(uVar3 & 0xfffff)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = param_2->__this;
          uVar14 = (uVar14 ^ uVar3) & 0x1ffffff ^ uVar14;
          if ((uVar14 >> 0x14 != 1) && (uVar14 >> 0x14 == 2)) {
            if (((uVar14 & 0xfffff) != 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsObjectIndexForOOBAttachment(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                                    ,0x58b,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
                      (&pFVar9->Attachments,Discard,HugeObject,0,&local_70);
            local_80 = &local_b0;
            local_88 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
                       ::Call;
            local_b0 = pFVar9;
            FReplicationWriter::FHugeObjectSendQueue::AckObjects
                      (&pFVar9->HugeObjectSendQueue,
                       (TFunctionRef<void___cdecl(UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&)>
                        *)&local_88);
          }
        }
        if (local_a8 != (uint *)0x0) {
          FMemory::Free(local_a8);
        }
      }
      pFVar5 = this->ReplicationRecord;
      uVar2 = pFVar5->FrontIndex;
      if (((pFVar5->RecordInfos).Head == (pFVar5->RecordInfos).Tail) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset < Count()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                              ,0x4c,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar13 = *(ushort *)pFVar19;
      *(short *)(pFVar19 + 2) =
           *(short *)((pFVar5->RecordInfos).Storage.AllocatorInstance.Data +
                     (ulonglong)((pFVar5->RecordInfos).IndexMask & (pFVar5->RecordInfos).Tail) *
                     0x10 + 0xc);
      if (uVar13 == uVar2) {
        uVar13 = 0xffff;
      }
      *(ushort *)pFVar19 = uVar13;
      uVar14 = pFVar5->FrontIndex + 1;
      pFVar5->FrontIndex = (short)uVar14 + (short)(uVar14 / 0xffff);
      uVar14 = (pFVar5->RecordInfos).Tail;
      if ((pFVar5->RecordInfos).Head == uVar14) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1638566698149740322>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                            ,0xde,"Count() > 0");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else {
        (pFVar5->RecordInfos).Tail = uVar14 + 1;
      }
      local_c0 = local_c0 - 1;
    } while (local_c0 != 0);
  }
  return;
}

// _Pop_heap_hole_by_index<UE::Net::Private::FReplicationWriter::FScheduleObjectInfo_*,UE::Net::Private::FReplicationWriter::FScheduleObjectInfo,`UE::Net::Private::FReplicationWriter::SortScheduledObjects'::__l10::<lambda_1>_> @ 1442f54d0

void __cdecl
std::
_Pop_heap_hole_by_index<UE::Net::Private::FReplicationWriter::FScheduleObjectInfo_*,UE::Net::Private::FReplicationWriter::FScheduleObjectInfo,_UE::Net::Private::FReplicationWriter::SortScheduledObjects_::__l10::<lambda_1>_>
          (FScheduleObjectInfo *param_1,long64 param_2,long64 param_3,FScheduleObjectInfo *param_4,
          <lambda_1> param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_3 + -1 >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar3) {
    lVar1 = lVar4 * 2;
    lVar2 = lVar1 + 2;
    if (param_1[lVar1 + 1].SortKey < param_1[lVar1 + 2].SortKey) {
      lVar2 = lVar1 + 1;
    }
    param_1[lVar4] = param_1[lVar2];
    lVar4 = lVar2;
  }
  if ((lVar4 == lVar3) && ((param_3 & 1U) == 0)) {
    param_1[lVar4] = param_1[param_3 + -1];
    lVar4 = param_3 + -1;
  }
  if (param_2 < lVar4) {
    while (lVar3 = lVar4 + -1 >> 1, param_4->SortKey < param_1[lVar3].SortKey) {
      param_1[lVar4] = param_1[lVar3];
      lVar4 = lVar3;
      if (lVar3 <= param_2) {
        param_1[lVar3] = *param_4;
        return;
      }
    }
  }
  param_1[lVar4] = *param_4;
  return;
}

// `scalar_deleting_destructor' @ 1442fa230

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa260

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa290

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa2c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa2f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UReplicationSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UReplicationSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa320

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa350

void * __thiscall
TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::
_scalar_deleting_destructor_
          (TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TDoubleLinkedList_UFHugeObjectContext_FReplicationWriter_Private_Net_UE____6B_;
  Empty(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa3a0

void * __thiscall
FInstancedStructNetSerializerConfig::_scalar_deleting_destructor_
          (FInstancedStructNetSerializerConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FInstancedStructNetSerializerConfig__6B_;
  UE::Net::Private::FInstancedStructDescriptorCache::~FInstancedStructDescriptorCache
            (&this->DescriptorCache);
  DestructItems<TSoftObjectPtr<UScriptStruct>,int>
            ((TSoftObjectPtr<UScriptStruct> *)(this->SupportedTypes).AllocatorInstance.Data,
             (this->SupportedTypes).ArrayNum);
  pFVar1 = (this->SupportedTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa410

void * __thiscall
UE::Net::FStringTokenStore::_scalar_deleting_destructor_(FStringTokenStore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if ((!GIsCriticalError) && ((this->Allocator).NumMarks != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  FMemStackBase::FreeChunks(&this->Allocator,(FTaggedMemory *)0x0);
  pFVar1 = (this->StoredStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->HashToKey).field_0x48 = 0;
  pvVar4 = *(void **)&(this->HashToKey).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HashToKey);
  FNetTokenDataStore::~FNetTokenDataStore((FNetTokenDataStore *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa4d0

void * __thiscall
UReplicationSystem::_scalar_deleting_destructor_(UReplicationSystem *this,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  
  this->_padding_ = (longlong)&___7UReplicationSystem__6B_;
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FReplicationSystemImpl *)0x0) {
    (**(code **)&pFVar1[-1].MetricNameAvgHugeObjectSendQueue.Number)
              (&pFVar1[-1].MetricNameAvgHugeObjectSendQueue.Number);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442fa550

void * __thiscall
UWorldLocationsConfig::_scalar_deleting_destructor_(UWorldLocationsConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWorldLocationsConfig__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDateTimeNetSerializer @ 1443019c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDateTimeNetSerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnumNetSerializers @ 1443019d0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnumNetSerializers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFloatNetSerializers @ 1443019e0

void __cdecl EmptyLinkFunctionForGeneratedCodeFloatNetSerializers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGuidNetSerializer @ 1443019f0

void __cdecl EmptyLinkFunctionForGeneratedCodeGuidNetSerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInstancedStructNetSerializer @ 144301a00

void __cdecl EmptyLinkFunctionForGeneratedCodeInstancedStructNetSerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplicationSystem @ 144301a10

void __cdecl EmptyLinkFunctionForGeneratedCodeReplicationSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldLocations @ 144301a20

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldLocations(void)

{
  return;
}

// Z_Construct_UClass_UReplicationSystem_NoRegister @ 14431d960

UClass * __cdecl Z_Construct_UClass_UReplicationSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UReplicationSystem::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationSystem",
               &Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton,
               UReplicationSystem::StaticRegisterNativesUReplicationSystem,0x58,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationSystem>,
               InternalVTableHelperCtorCaller<UReplicationSystem>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationSystem.InnerSingleton;
}

// Z_Construct_UClass_UWorldLocationsConfig_NoRegister @ 14431da10

UClass * __cdecl Z_Construct_UClass_UWorldLocationsConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"WorldLocationsConfig",
               &Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton,
               UWorldLocationsConfig::StaticRegisterNativesUWorldLocationsConfig,0x60,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldLocationsConfig>,
               InternalVTableHelperCtorCaller<UWorldLocationsConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig @ 14431dac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDateTimeNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDateTimeNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDateTimeNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDateTimeNetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDoubleNetSerializerConfig @ 14431db40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDoubleNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDoubleNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDoubleNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDoubleNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDoubleNetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig @ 14431dbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumInt16NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumInt16NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumInt16NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumInt16NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig @ 14431dc40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumInt32NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig @ 14431dcc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumInt64NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumInt64NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumInt64NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumInt64NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig @ 14431dd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumInt8NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumInt8NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumInt8NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumInt8NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig @ 14431ddc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumUint16NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumUint16NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumUint16NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumUint16NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig @ 14431de40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumUint32NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumUint32NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumUint32NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumUint32NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig @ 14431dec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumUint64NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumUint64NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumUint64NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumUint64NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig @ 14431df40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnumUint8NetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnumUint8NetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnumUint8NetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnumUint8NetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFloatNetSerializerConfig @ 14431dfc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFloatNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFloatNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFloatNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFloatNetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGuidNetSerializerConfig @ 14431e040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGuidNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGuidNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGuidNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGuidNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGuidNetSerializerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig @ 14431e0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.InnerSingleton
               ,&Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.InnerSingleton;
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

// DefaultConfig'' @ 15036a940

void __cdecl `dynamic_atexit_destructor_for_'UE::Net::FBoolNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FBoolNetSerializer::DefaultConfig);
  return;
}

// DefaultConfig'' @ 15036a960

void __cdecl `dynamic_atexit_destructor_for_'UE::Net::FDateTimeNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FDateTimeNetSerializer::DefaultConfig);
  return;
}

// DefaultConfig'' @ 15036a980

void __cdecl `dynamic_atexit_destructor_for_'UE::Net::FDoubleNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FDoubleNetSerializer::DefaultConfig);
  return;
}

// DefaultConfig'' @ 15036a9a0

void __cdecl `dynamic_atexit_destructor_for_'UE::Net::FFieldPathNetSerializer::DefaultConfig__(void)

{
  if (UE::Net::FFieldPathNetSerializer::DefaultConfig.Property._16_8_ != 0) {
    FMemory::Free((void *)UE::Net::FFieldPathNetSerializer::DefaultConfig.Property._16_8_);
  }
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FFieldPathNetSerializer::DefaultConfig);
  return;
}

// DefaultConfig'' @ 15036a9d0

void __cdecl `dynamic_atexit_destructor_for_'UE::Net::FFloatNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FFloatNetSerializer::DefaultConfig);
  return;
}

// DefaultConfig'' @ 15036a9f0

void __cdecl `dynamic_atexit_destructor_for_'UE::Net::FGuidNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FGuidNetSerializer::DefaultConfig);
  return;
}

// NetSerializerRegistryDelegates'' @ 15036aa10

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FFieldPathNetSerializer::NetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FFieldPathNetSerializer::NetSerializerRegistryDelegates);
  return;
}

// NetSerializerRegistryDelegates'' @ 15036aa30

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FInstancedStructNetSerializer::
NetSerializerRegistryDelegates__(void)

{
  UE::Net::FInstancedStructNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FInstancedStructNetSerializer_Net_UE__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FInstancedStructNetSerializer::NetSerializerRegistryDelegates);
  return;
}

// ReplicationSystems'' @ 15036aa50

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FReplicationSystemFactory::ReplicationSystems__(void)

{
  ForElementType<UReplicationSystem_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData;
  if (UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData ==
      (ForElementType<UReplicationSystem_*>)0x0) {
    return;
  }
  if (UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData !=
      (ForElementType<UReplicationSystem_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// StructNetSerializerConfig'' @ 15036aa70

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FFieldPathNetSerializer::StructNetSerializerConfig__(void)

{
  FStructNetSerializerConfig::~FStructNetSerializerConfig
            (&UE::Net::FFieldPathNetSerializer::StructNetSerializerConfig);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAttachmentSendPolicyFlags'' @ 15036aa90

void __cdecl
ReplicationSystemCVars::_dynamic_atexit_destructor_for__CVarAllowAttachmentSendPolicyFlags__(void)

{
  CVarAllowAttachmentSendPolicyFlags._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAttachmentSendPolicyFlags)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarForcePruneBeforeUpdate'' @ 15036aab0

void __cdecl
ReplicationSystemCVars::_dynamic_atexit_destructor_for__CVarForcePruneBeforeUpdate__(void)

{
  CVarForcePruneBeforeUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForcePruneBeforeUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxCachedInstancedStructDescriptors'' @ 15036aad0

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__CVarMaxCachedInstancedStructDescriptors__(void)

{
  CVarMaxCachedInstancedStructDescriptors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxCachedInstancedStructDescriptors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOnlyResetDirtinessForQuantizedObjects'' @ 15036aaf0

void __cdecl
ReplicationSystemCVars::_dynamic_atexit_destructor_for__CVarOnlyResetDirtinessForQuantizedObjects__
          (void)

{
  CVarOnlyResetDirtinessForQuantizedObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarOnlyResetDirtinessForQuantizedObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplicationWriterCannotSendWarningInterval'' @ 15036ab10

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarReplicationWriterCannotSendWarningInterval__
          (void)

{
  CVarReplicationWriterCannotSendWarningInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplicationWriterCannotSendWarningInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplicationWriterMaxDestroyObjectsPerFrame'' @ 15036ab30

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarReplicationWriterMaxDestroyObjectsPerFrame__
          (void)

{
  CVarReplicationWriterMaxDestroyObjectsPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplicationWriterMaxDestroyObjectsPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplicationWriterMaxHugeObjectsInTransit'' @ 15036ab50

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarReplicationWriterMaxHugeObjectsInTransit__
          (void)

{
  CVarReplicationWriterMaxHugeObjectsInTransit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplicationWriterMaxHugeObjectsInTransit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplicationWriterReplicationRecordStarvationThreshold'' @ 15036ab70

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarReplicationWriterReplicationRecordStarvationThreshold__(void)

{
  CVarReplicationWriterReplicationRecordStarvationThreshold._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplicationWriterReplicationRecordStarvationThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetFilterSetsRequiresFrequentLocationUpdates'' @ 15036ab90

void __cdecl
ReplicationSystemCVars::
_dynamic_atexit_destructor_for__CVarSetFilterSetsRequiresFrequentLocationUpdates__(void)

{
  CVarSetFilterSetsRequiresFrequentLocationUpdates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSetFilterSetsRequiresFrequentLocationUpdates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWarnAboutDroppedAttachmentsToObjectsNotInScope'' @ 15036abb0

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarWarnAboutDroppedAttachmentsToObjectsNotInScope__(void)

{
  CVarWarnAboutDroppedAttachmentsToObjectsNotInScope._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWarnAboutDroppedAttachmentsToObjectsNotInScope);
  return;
}

// `dynamic_atexit_destructor_for_'CvarAllowSendStateWithEndReplicationForSubObjects'' @ 15036abd0

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CvarAllowSendStateWithEndReplicationForSubObjects__(void)

{
  CvarAllowSendStateWithEndReplicationForSubObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarAllowSendStateWithEndReplicationForSubObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick'' @ 15036abf0

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick__(void)

{
  CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarMaxUnsentOrderedUnreliableAttachmentAtEndOfTick);
  return;
}

// `dynamic_atexit_destructor_for_'CvarValidateObjectsWithDirtyChanges'' @ 15036ac10

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CvarValidateObjectsWithDirtyChanges__(void)

{
  CvarValidateObjectsWithDirtyChanges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarValidateObjectsWithDirtyChanges);
  return;
}

// `dynamic_atexit_destructor_for_'CvarWriteBatchSizePerObject'' @ 15036ac30

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CvarWriteBatchSizePerObject__(void)

{
  CvarWriteBatchSizePerObject._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CvarWriteBatchSizePerObject);
  return;
}

// `dynamic_atexit_destructor_for_'CvarWriteSentinels'' @ 15036ac50

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CvarWriteSentinels__(void)

{
  CvarWriteSentinels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CvarWriteSentinels);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 15036ac70

void __cdecl
`UE::Net::FReplicationSystemFactory::GetReplicationSystemCreatedDelegate'::__l2::
_dynamic_atexit_destructor_for__Delegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)::Delegate._8_8_,
             ::Delegate._16_4_);
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 15036acb0

void __cdecl
`UE::Net::FReplicationSystemFactory::GetReplicationSystemDestroyedDelegate'::__l2::
_dynamic_atexit_destructor_for__Delegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)::Delegate._8_8_,
             ::Delegate._16_4_);
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// operator() @ 1504bafb0

bool __thiscall
``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l27::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514678>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963514678>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb0f0

bool __thiscall
``UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy'::__l2::<lambda_2>::
operator()'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963515819>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7868239365963515819>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb6b0

bool __thiscall
``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l27::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514679>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963514679>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bbb80

bool __thiscall
``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l43::
<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514713>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963514713>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bbeb0

bool __thiscall
``UE::Net::Private::FReplicationWriter::UpdateScope'::__l2::<lambda_1>::operator()'::__l43::
<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7868239365963514714>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7868239365963514714>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

