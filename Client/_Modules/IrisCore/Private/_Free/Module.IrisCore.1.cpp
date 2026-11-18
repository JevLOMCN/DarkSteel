// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 236

// NameTokenStoreName'' @ 140f81130

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// Registry'' @ 140f81150

void __cdecl `dynamic_initializer_for_'UE::Net::FPropertyNetSerializerInfoRegistry::Registry__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FPropertyNetSerializerInfoRegistry::Registry__);
  return;
}

// StringTokenStoreName'' @ 140f81170

void __cdecl `dynamic_initializer_for_'UE::Net::FStringTokenStore::StringTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FStringTokenStore::StringTokenStoreName,L"StringTokenStore");
  return;
}

// UniqueClassNames'' @ 140f81190

void __cdecl
`dynamic_initializer_for_'UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
UniqueClassNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::Private::
         FPropertyReplicationStateDescriptorBuilder::UniqueClassNames__);
  return;
}

// `dynamic_initializer_for_'CVarClientToServerUnreliableRPCQueueSize'' @ 140f811b0

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::
_dynamic_initializer_for__CVarClientToServerUnreliableRPCQueueSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClientToServerUnreliableRPCQueueSize,L"net.ClientToServerUnreliableRPCQueueSize",
             &ClientToServerUnreliableRPCQueueSize,
             L"Maximum number of unreliable RPCs queued for sending from the client to the server. If more RPCs are queued then older ones will be dropped."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClientToServerUnreliableRPCQueueSize__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDetailedClientProfilerRef'' @ 140f81200

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarEnableDetailedClientProfilerRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableDetailedClientProfilerRef,L"net.Iris.EnableDetailedClientProfiler",
             &bEnableDetailedClientProfiler,L"Generates detailed CSV Iris stats (client only).",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDetailedClientProfilerRef__);
  return;
}

// `dynamic_initializer_for_'CVarIrisUseChangeMaskForTArray'' @ 140f81250

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisUseChangeMaskForTArray__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisUseChangeMaskForTArray,L"net.Iris.UseChangeMaskForTArray",
             &bIrisUseChangeMaskForTArray,
             L"Enable or disable the use of a changemask for individual elements in TArrays. When enabled and packet loss occurs the received array may not reflect a state which was ever present on the sending side since the array won\'t be replicated atomically. Enabled by default."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisUseChangeMaskForTArray__);
  return;
}

// `dynamic_initializer_for_'CVarIrisUseNativeFastArray'' @ 140f812a0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisUseNativeFastArray__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisUseNativeFastArray,L"net.Iris.UseNativeFastArray",&bIrisUseNativeFastArray,
             L"Enable or disable IrisNativeFastArray.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisUseNativeFastArray__);
  return;
}

// `dynamic_initializer_for_'CVarIrisUseSupportsStructNetSerializerList'' @ 140f812f0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarIrisUseSupportsStructNetSerializerList__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisUseSupportsStructNetSerializerList,
             L"net.Iris.UseSupportsStructNetSerializerList",&bUseSupportsStructNetSerializerList,
             L"If enabled structs in the SupportsStructNetSerializerList will not raise warnings even if the struct has a NetSerialize/NetDeltaSerialize but has no custom NetSerializer."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisUseSupportsStructNetSerializerList__);
  return;
}

// `dynamic_initializer_for_'CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties'' @ 140f81340

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties,
             L"net.Iris.bWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties",
             &bWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties,
             L"Try to detect if a struct replicated as a property might contain unannotated members, disabled by default."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties__
        );
  return;
}

// `dynamic_initializer_for_'CVarIrisWarnAboutStructsWithCustomSerialization'' @ 140f81390

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarIrisWarnAboutStructsWithCustomSerialization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisWarnAboutStructsWithCustomSerialization,
             L"net.Iris.WarnAboutStructsWithCustomSerialization",
             &bWarnAboutStructsWithCustomSerialization,
             L"Warn when generating descriptors for structs with custom serialization.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisWarnAboutStructsWithCustomSerialization__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSimultaneousObjectsWithRPCs'' @ 140f813e0

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::
_dynamic_initializer_for__CVarMaxSimultaneousObjectsWithRPCs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSimultaneousObjectsWithRPCs,L"net.MaxSimultaneousObjectsWithRPCs",
             &MaxSimultaneousObjectsWithRPCs,
             L"Maximum number of objects that can have unsent RPCs at the same time. ",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSimultaneousObjectsWithRPCs__);
  return;
}

// `dynamic_initializer_for_'CVarReliableRPCQueueSize'' @ 140f81430

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::_dynamic_initializer_for__CVarReliableRPCQueueSize__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReliableRPCQueueSize,L"net.ReliableRPCQueueSize",&ReliableRPCQueueSize,
             L"Maximum number of reliable RPCs queued per object. This is in addition to the send window size. This is to support very large RPCs that are split into smaller pieces."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReliableRPCQueueSize__);
  return;
}

// `dynamic_initializer_for_'CVarUnreliableRPCQueueSize'' @ 140f81480

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::_dynamic_initializer_for__CVarUnreliableRPCQueueSize__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUnreliableRPCQueueSize,L"net.UnreliableRPCQueueSize",&UnreliableRPCQueueSize,
             L"Maximum number of unreliable RPCs queued per object. If more RPCs are queued then older ones will be dropped."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUnreliableRPCQueueSize__);
  return;
}

// `dynamic_initializer_for_'CVarUseIrisReplicationRef'' @ 140f814d0

void __cdecl UE::Net::_dynamic_initializer_for__CVarUseIrisReplicationRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseIrisReplicationRef,L"net.Iris.UseIrisReplication",&CVarUseIrisReplication,
             L"Enables Iris replication system. 0 will fallback to legacy replicationsystem.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseIrisReplicationRef__);
  return;
}

// `dynamic_initializer_for_'CVarbPruneReplicationStateDescriptorsWithArchetype'' @ 140f81520

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarbPruneReplicationStateDescriptorsWithArchetype__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbPruneReplicationStateDescriptorsWithArchetype,
             L"net.Iris.PruneReplicationStateDescriptorsWithArchetype",
             &bPruneReplicationStateDescriptorsWithArchetype,
             L"If true, we will invalidate registered descriptors if archetype is no longer resolvable, otherwise we will keep them around until CDO is no longer valid."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbPruneReplicationStateDescriptorsWithArchetype__);
  return;
}

// `dynamic_initializer_for_'GIrisDebugName'' @ 140f81570

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::_dynamic_initializer_for__GIrisDebugName__(void)

{
  atexit(_dynamic_atexit_destructor_for__GIrisDebugName__);
  return;
}

// `dynamic_initializer_for_'GIrisDebugRPCName'' @ 140f81590

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::_dynamic_initializer_for__GIrisDebugRPCName__
          (void)

{
  atexit(_dynamic_atexit_destructor_for__GIrisDebugRPCName__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Iris'' @ 140f815b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Iris__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_IrisLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FVar4 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar3,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_IrisLLM;
  if (StatPtr_STAT_IrisLLM == (FThreadSafeStaticStat<FStat_STAT_IrisLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_IrisLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_IrisLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisLLM,*pFVar3,L"Iris",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar5;
  local_res10.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res10.Number = FVar1.Number;
  local_res18 = 0;
  local_res20 = 0;
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Iris,L"Iris",(FName)0x0,(FName)0x0,FVar1,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_IrisConnection'' @ 140f81720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_IrisConnection__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_IrisConnectionLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar4,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_IrisConnectionLLM;
  if (StatPtr_STAT_IrisConnectionLLM == (FThreadSafeStaticStat<FStat_STAT_IrisConnectionLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_IrisConnectionLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_IrisConnectionLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisConnectionLLM,*pFVar4,
                       L"IrisConnection","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
                       false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,"Iris");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"Connection");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_IrisConnection,L"IrisConnection",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_IrisInitialization'' @ 140f818a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_IrisInitialization__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_IrisInitializationLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar4,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_IrisInitializationLLM;
  if (StatPtr_STAT_IrisInitializationLLM ==
      (FThreadSafeStaticStat<FStat_STAT_IrisInitializationLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_IrisInitializationLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_IrisInitializationLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisInitializationLLM,*pFVar4,
                       L"IrisInitialization","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true
                       ,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,"Iris");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"Initialization");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_IrisInitialization,L"IrisInitialization",*pFVar4,FVar1,FVar3,FVar2,
             None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_IrisState'' @ 140f81a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_IrisState__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_IrisStateLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar4,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_IrisStateLLM;
  if (StatPtr_STAT_IrisStateLLM == (FThreadSafeStaticStat<FStat_STAT_IrisStateLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_IrisStateLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_IrisStateLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisStateLLM,*pFVar4,L"IrisState",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,"Iris");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"State");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_IrisState,L"IrisState",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_NetTokenStructState'' @ 140f81ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_NetTokenStructState__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_NetTokenStructStateLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar4,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_NetTokenStructStateLLM;
  if (StatPtr_STAT_NetTokenStructStateLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetTokenStructStateLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_NetTokenStructStateLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_NetTokenStructStateLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetTokenStructStateLLM,*pFVar4,
                       L"NetTokenStructState","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,"Iris");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"NetTokenStructState");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_NetTokenStructState,L"NetTokenStructState",*pFVar4,FVar1,FVar3,FVar2
             ,None);
  return;
}

// `dynamic_initializer_for_'LogIris'' @ 140f81d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIris__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIris,L"LogIris",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIris__);
  return;
}

// `dynamic_initializer_for_'LogIrisFiltering'' @ 140f81d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisFiltering__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisFiltering,L"LogIrisFiltering",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisFiltering__);
  return;
}

// `dynamic_initializer_for_'LogIrisNetCull'' @ 140f81da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisNetCull__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIrisNetCull,L"LogIrisNetCull",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisNetCull__);
  return;
}

// `dynamic_initializer_for_'LogIrisRepNotify'' @ 140f81de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisRepNotify__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisRepNotify,L"LogIrisRepNotify",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisRepNotify__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIrisCore'' @ 140f81e20

void __cdecl _dynamic_initializer_for__ModuleRegistrantIrisCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "IrisCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"IrisCore",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FIrisCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NetError_TooManyObjectsWithFunctionCalls'' @ 140f81e70

void __cdecl
UE::Net::Private::_dynamic_initializer_for__NetError_TooManyObjectsWithFunctionCalls__(void)

{
  ::FName::FName(&NetError_TooManyObjectsWithFunctionCalls,
                 "Too many objects being targeted by RPCs at the same time.");
  return;
}

// `dynamic_initializer_for_'NetError_UnreliableQueueFull'' @ 140f81e90

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_UnreliableQueueFull__(void)

{
  ::FName::FName(&NetError_UnreliableQueueFull,"Unreliable attachment queue full");
  return;
}

// `dynamic_initializer_for_'NetError_UnsupportedNetBlob'' @ 140f81eb0

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetError_UnsupportedNetBlob__(void)

{
  ::FName::FName(&NetError_UnsupportedNetBlob,"Unsupported NetBlob type");
  return;
}

// `dynamic_initializer_for_'NetIrisDebugName'' @ 140f81ed0

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::_dynamic_initializer_for__NetIrisDebugName__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&NetIrisDebugName,L"Net.Iris.DebugName",&GIrisDebugName,
             L"Set a class name or object name to break on.",0);
  atexit(_dynamic_atexit_destructor_for__NetIrisDebugName__);
  return;
}

// `dynamic_initializer_for_'NetIrisDebugNetInternalIndex'' @ 140f81f20

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_initializer_for__NetIrisDebugNetInternalIndex__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::IrisDebugHelper::IrisDebugHelperInternal::<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&NetIrisDebugNetInternalIndex,L"Net.Iris.DebugNetInternalIndex",
             L"Specify an internal index that we will break on (or none to turn off).",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__NetIrisDebugNetInternalIndex__);
  return;
}

// `dynamic_initializer_for_'NetIrisDebugNetRefHandle'' @ 140f82050

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_initializer_for__NetIrisDebugNetRefHandle__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::IrisDebugHelper::IrisDebugHelperInternal::<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&NetIrisDebugNetRefHandle,L"Net.Iris.DebugNetRefHandle",
             L"Specify a NetRefHandle ID that we will break on (or none to turn off).",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__NetIrisDebugNetRefHandle__);
  return;
}

// `dynamic_initializer_for_'NetRPCSetDebugRPCName'' @ 140f82180

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::_dynamic_initializer_for__NetRPCSetDebugRPCName__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&NetRPCSetDebugRPCName,L"Net.Iris.DebugRPCName",&GIrisDebugRPCName,
             L"Set the name of an RPC to break on.",0);
  atexit(_dynamic_atexit_destructor_for__NetRPCSetDebugRPCName__);
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_ChangeMaskStorage'' @ 140f821d0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_ChangeMaskStorage__
          (void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_ChangeMaskStorage,"ChangeMaskStorage");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_DateTime'' @ 140f821f0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_DateTime__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_DateTime,"DateTime");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_Guid'' @ 140f82210

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_Guid__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_Guid,"Guid");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_NetRole'' @ 140f82230

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_NetRole__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_NetRole,L"ENetRole");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_RemoteObjectId'' @ 140f82250

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_RemoteObjectId__
          (void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_RemoteObjectId,"RemoteObjectId");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_RemoteObjectReference'' @ 140f82270

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_RemoteObjectReference__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_RemoteObjectReference,"RemoteObjectReference");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_RemoteServerId'' @ 140f82290

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_RemoteServerId__
          (void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_RemoteServerId,"RemoteServerId");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_ReplicationID'' @ 140f822b0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_ReplicationID__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_ReplicationID,"ReplicationID");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_SoftClassPath'' @ 140f822d0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_SoftClassPath__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_SoftClassPath,"SoftClassPath");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_SoftObjectPath'' @ 140f822f0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_SoftObjectPath__
          (void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_SoftObjectPath,"SoftObjectPath");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100'' @ 140f82310

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100,"Vector_NetQuantize100");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10'' @ 140f82330

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10,"Vector_NetQuantize10");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_Vector_NetQuantize'' @ 140f82350

void __cdecl
UE::Net::Private::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_Vector_NetQuantize__
          (void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_Vector_NetQuantize,"Vector_NetQuantize");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal'' @ 140f82370

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal,
                 "Vector_NetQuantizeNormal");
  return;
}

// `dynamic_initializer_for_'ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared'' @ 140f82390

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared__(void)

{
  ::FName::FName(&ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared,
                 "NetCullDistanceSquared");
  return;
}

// `dynamic_initializer_for_'ReplicationStateDescriptorBuilder_NAME_RoleGroup'' @ 140f823b0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__ReplicationStateDescriptorBuilder_NAME_RoleGroup__(void)

{
  ::FName::FName(&ReplicationStateDescriptorBuilder_NAME_RoleGroup,"RoleGroup");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IrisConnectionLLM'' @ 140f823d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IrisConnectionLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IrisConnectionLLM == (FThreadSafeStaticStat<FStat_STAT_IrisConnectionLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IrisConnectionLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisConnectionLLM,*pFVar1,
               L"IrisConnection","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IrisInitializationLLM'' @ 140f82460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IrisInitializationLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IrisInitializationLLM ==
      (FThreadSafeStaticStat<FStat_STAT_IrisInitializationLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IrisInitializationLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisInitializationLLM,*pFVar1,
               L"IrisInitialization","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IrisLLM'' @ 140f824f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IrisLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IrisLLM == (FThreadSafeStaticStat<FStat_STAT_IrisLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IrisLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisLLM,*pFVar1,L"Iris",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IrisStateLLM'' @ 140f82580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IrisStateLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IrisStateLLM == (FThreadSafeStaticStat<FStat_STAT_IrisStateLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IrisStateLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IrisStateLLM,*pFVar1,L"IrisState",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetTokenStructStateLLM'' @ 140f82610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetTokenStructStateLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetTokenStructStateLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetTokenStructStateLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetTokenStructStateLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetTokenStructStateLLM,*pFVar1,
               L"NetTokenStructState","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_DataStream_DataStreamDefinitions_h__Script_IrisCore_897005388'' @ 140f826a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_DataStream_DataStreamDefinitions_h__Script_IrisCore_897005388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_DataStream_DataStreamDefinitions_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_DataStream_DataStreamDefinitions_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h__Script_IrisCore_3451817677'' @ 140f826f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h__Script_IrisCore_3451817677__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStreamManager_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h__Script_IrisCore_1710996476'' @ 140f82730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h__Script_IrisCore_1710996476__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h__Script_IrisCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_IrisFastArraySerializer_h__Script_IrisCore_938244507'' @ 140f82780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_IrisFastArraySerializer_h__Script_IrisCore_938244507__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_IrisFastArraySerializer_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h__Script_IrisCore_4108667208'' @ 140f827c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h__Script_IrisCore_4108667208__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h__Script_IrisCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h__Script_IrisCore_1505223842'' @ 140f82810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h__Script_IrisCore_1505223842__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_NetSerializerConfig_h__Script_IrisCore_2661332302'' @ 140f82860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_NetSerializerConfig_h__Script_IrisCore_2661332302__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_NetSerializerConfig_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_IrisCore'' @ 140f828a0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_IrisCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb3f3a78f;
  local_res8[0].DeclarationsHash = 0xdbe54553;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_IrisCore,L"/Script/IrisCore",
             &Z_Registration_Info_UPackage__Script_IrisCore,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Iris'' @ 140f828e0

void __cdecl _dynamic_initializer_for___GCsvCategory_Iris__(void)

{
  FString::operator=(&_GCsvCategory_Iris.Name,L"Iris");
  _GCsvCategory_Iris.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Iris.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Iris__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IrisClient'' @ 140f82930

void __cdecl _dynamic_initializer_for___GCsvCategory_IrisClient__(void)

{
  FString::operator=(&_GCsvCategory_IrisClient.Name,L"IrisClient");
  _GCsvCategory_IrisClient.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IrisClient.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IrisClient__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IrisClientBlockedByAsyncLoading'' @ 140f82980

void __cdecl _dynamic_initializer_for___GCsvCategory_IrisClientBlockedByAsyncLoading__(void)

{
  FString::operator=(&_GCsvCategory_IrisClientBlockedByAsyncLoading.Name,
                     L"IrisClientBlockedByAsyncLoading");
  _GCsvCategory_IrisClientBlockedByAsyncLoading.Index =
       FCsvProfiler::RegisterCategory
                 (&_GCsvCategory_IrisClientBlockedByAsyncLoading.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IrisClientBlockedByAsyncLoading__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IrisClientDetailObjectCreate'' @ 140f829d0

void __cdecl _dynamic_initializer_for___GCsvCategory_IrisClientDetailObjectCreate__(void)

{
  FString::operator=(&_GCsvCategory_IrisClientDetailObjectCreate.Name,
                     L"IrisClientDetailObjectCreate");
  _GCsvCategory_IrisClientDetailObjectCreate.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IrisClientDetailObjectCreate.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IrisClientDetailObjectCreate__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IrisClientDetailRPC'' @ 140f82a20

void __cdecl _dynamic_initializer_for___GCsvCategory_IrisClientDetailRPC__(void)

{
  FString::operator=(&_GCsvCategory_IrisClientDetailRPC.Name,L"IrisClientDetailRPC");
  _GCsvCategory_IrisClientDetailRPC.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IrisClientDetailRPC.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IrisClientDetailRPC__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IrisClientDetailRepNotify'' @ 140f82a70

void __cdecl _dynamic_initializer_for___GCsvCategory_IrisClientDetailRepNotify__(void)

{
  FString::operator=(&_GCsvCategory_IrisClientDetailRepNotify.Name,L"IrisClientDetailRepNotify");
  _GCsvCategory_IrisClientDetailRepNotify.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IrisClientDetailRepNotify.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IrisClientDetailRepNotify__);
  return;
}

// `dynamic_initializer_for_'s_IrisObjectReferencePackageMap'' @ 140f82ac0

void __cdecl UE::Net::Private::_dynamic_initializer_for__s_IrisObjectReferencePackageMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__s_IrisObjectReferencePackageMap__);
  return;
}

// Z_Construct_UClass_UDataStreamManager @ 1441f2040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataStreamManager(void)

{
  if (Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton,
               &Z_Construct_UClass_UDataStreamManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton;
}

// NewStructOps @ 1441f20c0

void * __cdecl Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIrisFastArraySerializer,&UE::CoreUObject::Private::Construct<FIrisFastArraySerializer>,&UE::CoreUObject::Private::ConstructForTests<FIrisFastArraySerializer>,&UE::CoreUObject::Private::Destruct<FIrisFastArraySerializer>,&UE::CoreUObject::Private::Copy<FIrisFastArraySerializer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1441f2620

void * __thiscall FIrisCoreModule::_scalar_deleting_destructor_(FIrisCoreModule *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// Z_Construct_UClass_UDataStream @ 1441f2750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataStream(void)

{
  if (Z_Registration_Info_UClass_UDataStream.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataStream.OuterSingleton,
               &Z_Construct_UClass_UDataStream_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataStream.OuterSingleton;
}

// Z_Construct_UEnum_IrisCore_EDataStreamSendStatus @ 1441f2790

UEnum * __cdecl Z_Construct_UEnum_IrisCore_EDataStreamSendStatus(void)

{
  if (Z_Registration_Info_UEnum_EDataStreamSendStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataStreamSendStatus.InnerSingleton,
               &Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataStreamSendStatus.InnerSingleton;
}

// EDataStreamSendStatus_StaticEnum @ 1441f27d0

UEnum * __cdecl EDataStreamSendStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IrisCore_EDataStreamSendStatus,(UObject *)pUVar1,
                       L"EDataStreamSendStatus");
  }
  return Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton;
}

// Z_Construct_UClass_UDataStreamDefinitions @ 1441f2960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataStreamDefinitions(void)

{
  if (Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton,
               &Z_Construct_UClass_UDataStreamDefinitions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDataStreamDefinition @ 1441f29a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataStreamDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataStreamDefinition.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataStreamDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataStreamDefinition.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataStreamDefinition.InnerSingleton;
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

// NewProp_bAutoCreate_SetBit @ 1441f2a20

void __cdecl
Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bDynamicCreate_SetBit @ 1441f2a30

void __cdecl
Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bDynamicCreate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewStructOps @ 1441f2a40

void * __cdecl Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataStreamDefinition,&UE::CoreUObject::Private::Construct<FDataStreamDefinition>,&UE::CoreUObject::Private::ConstructForTests<FDataStreamDefinition>,&UE::CoreUObject::Private::Destruct<FDataStreamDefinition>,&UE::CoreUObject::Private::Copy<FDataStreamDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_IrisCore @ 1441f2c30

UPackage * __cdecl Z_Construct_UPackage__Script_IrisCore(void)

{
  if (Z_Registration_Info_UPackage__Script_IrisCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_IrisCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_IrisCore.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1441f2ef0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::IrisDebugHelper::IrisDebugHelperInternal::<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::IrisDebugHelper::IrisDebugHelperInternal::<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f31a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::IrisDebugHelper::IrisDebugHelperInternal::<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::IrisDebugHelper::IrisDebugHelperInternal::<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f3440

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f37e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f38c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f3910

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f3bd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441f3df0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIrisCoreModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 1441f3e20

void * __cdecl Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetSerializerConfig,&UE::CoreUObject::Private::Construct<FNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UReplicationStateDescriptorConfig @ 1441f3f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplicationStateDescriptorConfig(void)

{
  if (Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton,
               &Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig @ 1441f3f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig.
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

// Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig @ 1441f4010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSupportsStructNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSupportsStructNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSupportsStructNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSupportsStructNetSerializerConfig.InnerSingleton;
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

// NewStructOps @ 1441f4090

void * __cdecl
Z_Construct_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FReplicationStateDescriptorClassPushModelConfig,&UE::CoreUObject::Private::Construct<FReplicationStateDescriptorClassPushModelConfig>,&UE::CoreUObject::Private::ConstructForTests<FReplicationStateDescriptorClassPushModelConfig>,&UE::CoreUObject::Private::Destruct<FReplicationStateDescriptorClassPushModelConfig>,&UE::CoreUObject::Private::Copy<FReplicationStateDescriptorClassPushModelConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1441f4360

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_bCanUseStructNetSerializer_SetBit @ 1441f4400

void __cdecl
Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::
NewProp_bCanUseStructNetSerializer_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 1441f4410

void * __cdecl
Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSupportsStructNetSerializerConfig,&UE::CoreUObject::Private::Construct<FSupportsStructNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FSupportsStructNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FSupportsStructNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FSupportsStructNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UReplicationFilteringConfig @ 1441f4500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplicationFilteringConfig(void)

{
  if (Z_Registration_Info_UClass_UReplicationFilteringConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplicationFilteringConfig.OuterSingleton,
               &Z_Construct_UClass_UReplicationFilteringConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplicationFilteringConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile @ 1441f4540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectScopeHysteresisProfile.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectScopeHysteresisProfile.InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectScopeHysteresisProfile.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectScopeHysteresisProfile.InnerSingleton;
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

// NewStructOps @ 1441f45c0

void * __cdecl Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectScopeHysteresisProfile,&UE::CoreUObject::Private::Construct<FObjectScopeHysteresisProfile>,&UE::CoreUObject::Private::ConstructForTests<FObjectScopeHysteresisProfile>,&UE::CoreUObject::Private::Destruct<FObjectScopeHysteresisProfile>,&UE::CoreUObject::Private::Copy<FObjectScopeHysteresisProfile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnsureAllClassesAreFullyPushModel_SetBit @ 1441f4600

void __cdecl
Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::
NewProp_bEnsureAllClassesAreFullyPushModel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bEnableObjectScopeHysteresis_SetBit @ 1441f4610

void __cdecl
Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_bEnableObjectScopeHysteresis_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// AddLambda<`FIrisCoreModule::StartupModule'::__l2::<lambda_1>_> @ 1441f4840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_FIrisCoreModule::StartupModule_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  FDelegateAllocation local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  InitializeCriticalSectionAndSpinCount(&local_60,4000);
  uVar8 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  EnterCriticalSection(&local_60);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1__StartupModule_FIrisCoreModule__EEAAXXZ___V__6B_
    ;
  }
  LeaveCriticalSection(&local_60);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_60);
  if (((local_38.DelegateSize != 0) &&
      (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_38.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_60);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_60);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_38.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_60);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_60);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_38.DelegateAllocator;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_38.DelegateSize;
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_60);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  DeleteCriticalSection(&local_60);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<UPartialNetObjectAttachmentHandlerConfig_const_,USequentialPartialNetBlobHandlerConfig_const_> @ 1441f5450

UPartialNetObjectAttachmentHandlerConfig * __cdecl
CastChecked<UPartialNetObjectAttachmentHandlerConfig_const_,USequentialPartialNetBlobHandlerConfig_const_>
          (USequentialPartialNetBlobHandlerConfig *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USequentialPartialNetBlobHandlerConfig *)0x0) {
    if (param_2 != NullChecked) {
      return (UPartialNetObjectAttachmentHandlerConfig *)0x0;
    }
    pFVar3 = GetTypeName<UPartialNetObjectAttachmentHandlerConfig_const_>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPartialNetObjectAttachmentHandlerConfig *)param_1;
  }
  pFVar3 = GetTypeName<UPartialNetObjectAttachmentHandlerConfig_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USequentialPartialNetBlobHandlerConfig_const_>
                     (&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UDataStreamManager,UObject> @ 1441f5530

UDataStreamManager * __cdecl CastChecked<UDataStreamManager,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDataStreamManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UDataStreamManager::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UDataStreamManager *)param_1;
  }
  pFVar3 = GetTypeName<UDataStreamManager>(&local_28);
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

// ConstructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int> @ 1441f5690

void __cdecl
ConstructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
          (void *param_1,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *param_2,
          int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb8) & 8) != 0)) {
        LOCK();
        *(int *)(lVar1 + 0xbc) = *(int *)(lVar1 + 0xbc) + 1;
        UNLOCK();
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int> @ 1441f56d0

void __cdecl
ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
          (void *param_1,TRefCountPtr<UE::Net::FNetBlob> *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int> @ 1441f5710

void __cdecl
DefaultConstructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(uint *)(puVar1 + 6) = *(uint *)(puVar1 + 6) & 0xfffffff0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int> @ 1441f5750

void __cdecl
DefaultConstructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UDataStreamManager::FImpl::FRecord,int> @ 1441f5780

void __cdecl
DefaultConstructItems<UDataStreamManager::FImpl::FRecord,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 8;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetObjectReference,int> @ 1441f57b0

void __cdecl DefaultConstructItems<UE::Net::FNetObjectReference,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetRefHandle,int> @ 1441f57e0

void __cdecl DefaultConstructItems<UE::Net::FNetRefHandle,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetToken,int> @ 1441f5800

void __cdecl DefaultConstructItems<UE::Net::FNetToken,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int> @ 1441f5870

void __cdecl
DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int>
          (FMemberCacheEntry *param_1,int param_2)

{
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Descriptor;
    do {
      if (pTVar1->Reference != (FReplicationStateDescriptor *)0x0) {
        UE::Net::FReplicationStateDescriptor::Release(pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int> @ 1441f58b0

void __cdecl
DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int>
          (FMemberFunctionCacheEntry *param_1,int param_2)

{
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Descriptor;
    do {
      if (pTVar1->Reference != (FReplicationStateDescriptor *)0x0) {
        UE::Net::FReplicationStateDescriptor::Release(pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UDataStreamManager::FImpl::FRecord,int> @ 1441f58f0

void __cdecl DestructItems<UDataStreamManager::FImpl::FRecord,int>(FRecord *param_1,int param_2)

{
  ForElementType<FDataStreamRecord_const_*> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->DataStreamRecords).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FDataStreamRecord_const_*>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int> @ 1441f5930

void __cdecl
DestructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
          (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FReplicationStateDescriptor *)0x0) {
      UE::Net::FReplicationStateDescriptor::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int> @ 1441f5970

void __cdecl
DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
          (TRefCountPtr<UE::Net::FNetBlob> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FNetBlob *)0x0) {
      UE::Net::FNetBlob::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned_int> @ 1441f59b0

void __cdecl
DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned_int>
          (TRefCountPtr<UE::Net::FNetBlob> *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    if (param_1->Reference != (FNetBlob *)0x0) {
      UE::Net::FNetBlob::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned___int64> @ 1441f59f0

void __cdecl
DestructItems<TRefCountPtr<UE::Net::FNetBlob>,unsigned___int64>
          (TRefCountPtr<UE::Net::FNetBlob> *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    if (param_1->Reference != (FNetBlob *)0x0) {
      UE::Net::FNetBlob::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ForAllUnsetBits<`UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l51::<lambda_1>_&> @ 1441f6320

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllUnsetBits<_UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass_::__l51::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint local_res18 [4];
  UClass **local_50;
  uint *local_48;
  
  uVar9 = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      uVar8 = 0xffffffff;
      if (uVar6 == param_2 - 1) {
        uVar8 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar5 = uVar9;
      for (uVar8 = uVar8 & ~*param_1; uVar8 != 0; uVar8 = uVar8 >> 1) {
        if ((uVar8 & 1) != 0) {
          pTVar1 = param_4->LifeTimeProperties;
          uVar4 = 0;
          if ((int)uVar5 < pTVar1->ArrayNum) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          local_res18[0] = uVar5;
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined2 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x18) =
               (undefined2)local_res18[0];
          if (bAutoRegisterReplicatedProperties == false) {
            lVar7 = (longlong)(int)local_res18[0];
            pTVar1 = param_4->LifeTimeProperties;
            uVar4 = 0;
            if ((int)local_res18[0] < pTVar1->ArrayNum) {
              uVar4 = ~local_res18[0] >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar7 * 0x18 + 4) = 0xf;
            if (bEnsureForMissingProperties != false) {
              local_50 = &param_4->InObjectClass;
              local_48 = local_res18;
              ``UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l51::
              <lambda_1>::operator()'::__l8::<lambda_1>::operator()(&local_50);
            }
          }
        }
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      param_1 = param_1 + 1;
      uVar9 = uVar9 + 0x20;
    } while (uVar6 < param_2);
  }
  return;
}

// GetDefault<UReplicationStateDescriptorConfig> @ 1441f6520

UReplicationStateDescriptorConfig * __cdecl GetDefault<UReplicationStateDescriptorConfig>(void)

{
  UClass *this;
  
  this = UReplicationStateDescriptorConfig::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UReplicationStateDescriptorConfig *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UReplicationStateDescriptorConfig *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetFullNameForCastLogError<USequentialPartialNetBlobHandlerConfig_const_> @ 1441f6560

FString * __cdecl
GetFullNameForCastLogError<USequentialPartialNetBlobHandlerConfig_const_>
          (FString *__return_storage_ptr__,USequentialPartialNetBlobHandlerConfig *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UPartialNetObjectAttachmentHandlerConfig_const_> @ 1441f6590

FString * __cdecl
GetTypeName<UPartialNetObjectAttachmentHandlerConfig_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UDataStreamManager> @ 1441f65d0

FString * __cdecl GetTypeName<UDataStreamManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UDataStreamManager::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,`UE::Net::FPropertyNetSerializerInfoRegistry::Freeze'::__l5::<lambda_1>_>_> @ 1441f6610

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
          (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *param_1,
          int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_public:_static_void___cdecl_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze(void)_::_5_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1441f6703:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar12->field_0x8;
            iVar10 = 0;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar12;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar12 = uVar3;
            *(undefined8 *)&pTVar12->field_0x8 = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (*(ulonglong *)(param_1 + (longlong)iVar11 + 2) <
                      *(ulonglong *)(param_1 + iVar6)) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (*(ulonglong *)(param_1 + iVar6) <= *(ulonglong *)(param_1 + iVar10)) break;
                uVar2 = *(undefined8 *)&param_1[iVar6].field_0x8;
                uVar3 = *(undefined8 *)(param_1 + iVar10);
                uVar4 = *(undefined8 *)&param_1[iVar10].field_0x8;
                *(undefined8 *)(param_1 + iVar10) = *(undefined8 *)(param_1 + iVar6);
                *(undefined8 *)&param_1[iVar10].field_0x8 = uVar2;
                *(undefined8 *)(param_1 + iVar6) = uVar3;
                *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(ulonglong *)(param_1 + (longlong)iVar7 + 2) < *(ulonglong *)(param_1 + iVar8)) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (*(ulonglong *)(param_1 + iVar8) <= *(ulonglong *)(param_1 + iVar6)) goto LAB_1441f6703;
    uVar2 = *(undefined8 *)&param_1[iVar8].field_0x8;
    iVar7 = iVar8 * 2 + 1;
    uVar3 = *(undefined8 *)(param_1 + iVar6);
    uVar4 = *(undefined8 *)&param_1[iVar6].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar8);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar2;
    *(undefined8 *)(param_1 + iVar8) = uVar3;
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<UDataStream> @ 1441f67e0

void __cdecl InternalConstructor<UDataStream>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDataStream__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UDataStreamDefinitions> @ 1441f6830

void __cdecl InternalConstructor<UDataStreamDefinitions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UDataStreamDefinitions__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDataStreamManager> @ 1441f6870

void __cdecl InternalConstructor<UDataStreamManager>(FObjectInitializer *param_1)

{
  UObject *pUVar1;
  UObject *this;
  longlong lVar2;
  FObjectInitializer *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar3 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar3);
  puVar5 = (undefined8 *)0x0;
  pUVar1 = this + 2;
  *(undefined ***)this = &___7UDataStreamManager__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined4 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(longlong *)pUVar1 = 0;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    puVar4 = operator_new(0x1b0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      *puVar4 = UE::Core::Private::PimplPtr::DeleterFunc<UDataStreamManager::FImpl>;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x13] = 0;
      *(undefined4 *)(puVar4 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xa4) = 0x80;
      *(undefined4 *)(puVar4 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
      puVar4[0x17] = 0;
      *(undefined4 *)(puVar4 + 0x18) = 0;
      puVar4[0x19] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1d] = 0;
      *(undefined4 *)(puVar4 + 0x1e) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xf4) = 0x80;
      *(undefined4 *)(puVar4 + 0x1f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0xfc) = 0;
      puVar4[0x21] = 0;
      *(undefined4 *)(puVar4 + 0x22) = 0;
      puVar4[0x23] = 0;
      puVar4[0x24] = 0;
      puVar4[0x25] = 0;
      puVar4[0x26] = 0;
      puVar4[0x27] = 0;
      puVar4[0x28] = 0;
      puVar4[0x29] = 0;
      puVar4[0x2a] = 0;
      puVar4[0x2b] = 0;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x2d] = 0;
      puVar4[0x2e] = 0;
      puVar4[0x2f] = 0;
      puVar4[0x30] = 0;
      puVar4[0x31] = 0;
      *(undefined4 *)(puVar4 + 0x32) = 0;
      puVar4[0x33] = 0;
      *(undefined4 *)(puVar4 + 0x34) = 0;
      puVar5 = puVar4;
    }
    if ((UObject *)&stack0xffffffffffffffe8 == pUVar1) {
      if (puVar5 + 2 == (undefined8 *)0x0) {
        return;
      }
    }
    else {
      lVar2 = *(longlong *)pUVar1;
      *(undefined8 **)pUVar1 = puVar5 + 2;
      if (lVar2 == 0) {
        return;
      }
      puVar5 = (undefined8 *)(lVar2 + -0x10);
    }
    (*(code *)*puVar5)();
  }
  return;
}

// InternalConstructor<UReplicationFilteringConfig> @ 1441f6890

void __cdecl InternalConstructor<UReplicationFilteringConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 1;
    *(undefined ***)this = &___7UReplicationFilteringConfig__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x2 = 1;
  }
  return;
}

// InternalConstructor<UReplicationStateDescriptorConfig> @ 1441f68e0

void __cdecl InternalConstructor<UReplicationStateDescriptorConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UReplicationStateDescriptorConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDataStream> @ 1441f6930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataStream>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataStream::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataStream__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataStreamDefinitions> @ 1441f69f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataStreamDefinitions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataStreamDefinitions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataStreamDefinitions__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataStreamManager> @ 1441f6ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataStreamManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataStreamManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDataStreamManager__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReplicationFilteringConfig> @ 1441f6b80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UReplicationFilteringConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplicationFilteringConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UReplicationFilteringConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    pUVar1[1].field_0x2 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReplicationStateDescriptorConfig> @ 1441f6c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UReplicationStateDescriptorConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplicationStateDescriptorConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x20 = 0;
    *(undefined ***)pUVar1 = &___7UReplicationStateDescriptorConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,`UE::Net::FPropertyNetSerializerInfoRegistry::Freeze'::__l5::<lambda_1>_>_> @ 1441f6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
          (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *param_1,
          int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_public:_static_void___cdecl_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze(void)_::_5_::<lambda_1>_>
          param_4)

{
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar6;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> **ppTVar7;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar8;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar9;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar10;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar11;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *local_338;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *local_328;
  TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_1441f6db0:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar11->field_0x8;
          pTVar8 = pTVar10 + 1;
          uVar3 = *(ulonglong *)(pTVar11 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8;
          *(ulonglong *)(pTVar11 + iVar5 / 2) = *(ulonglong *)pTVar11;
          *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8 = uVar2;
          *(ulonglong *)pTVar11 = uVar3;
          *(undefined8 *)&pTVar11->field_0x8 = uVar4;
          pTVar12 = pTVar11;
LAB_1441f6de0:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x0001441f6de9;
          goto LAB_1441f6df1;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            if (*(ulonglong *)pTVar12 < *(ulonglong *)pTVar1) {
              pTVar12 = pTVar1;
            }
          }
          uVar3 = *(ulonglong *)pTVar12;
          uVar2 = *(undefined8 *)&pTVar12->field_0x8;
          uVar4 = *(undefined8 *)&pTVar10->field_0x8;
          *(ulonglong *)pTVar12 = *(ulonglong *)pTVar10;
          *(undefined8 *)&pTVar12->field_0x8 = uVar4;
          *(ulonglong *)pTVar10 = uVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar2;
        }
        goto LAB_1441f6eb0;
      }
LAB_1441f6e9f:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_1441f6eb0:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x0001441f6de9:
  if (*(ulonglong *)pTVar12 <= *(ulonglong *)pTVar11) goto LAB_1441f6de0;
LAB_1441f6df1:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while (*(ulonglong *)pTVar11 <= *(ulonglong *)pTVar8);
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar12 <= pTVar8) {
    uVar3 = *(ulonglong *)pTVar12;
    uVar4 = *(undefined8 *)&pTVar6[1].field_0x8;
    *(ulonglong *)pTVar12 = *(ulonglong *)pTVar8;
    *(undefined8 *)&pTVar6[1].field_0x8 = uVar2;
    *(ulonglong *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_1441f6de0;
  }
  uVar3 = *(ulonglong *)pTVar11;
  uVar4 = *(undefined8 *)&pTVar11->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(ulonglong *)pTVar11 = *(ulonglong *)pTVar8;
  *(undefined8 *)&pTVar11->field_0x8 = uVar2;
  *(ulonglong *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_1441f6eb0;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_1441f6eb0;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_1441f6e9f;
  goto LAB_1441f6db0;
}

// NewObject<UDataStream> @ 1441f6f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDataStream * __cdecl
NewObject<UDataStream>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDataStream *pUVar2;
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
  pUVar1 = UDataStream::StaticClass();
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
  pUVar2 = (UDataStream *)
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

// NewObject<UIrisObjectReferencePackageMap> @ 1441f7040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UIrisObjectReferencePackageMap * __cdecl NewObject<UIrisObjectReferencePackageMap>(UObject *param_1)

{
  UClass *pUVar1;
  UIrisObjectReferencePackageMap *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UIrisObjectReferencePackageMap *)
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

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors'::__l2::FChangeMaskGroupInfo>_> @ 1441f7250

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors_::__l2::FChangeMaskGroupInfo>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors'::__l2::FChangeMaskGroupInfo>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// StaticEnum<enum_EDataStreamSendStatus> @ 1441f8090

UEnum * __cdecl StaticEnum<enum_EDataStreamSendStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IrisCore_EDataStreamSendStatus,(UObject *)pUVar1,
                       L"EDataStreamSendStatus");
  }
  return Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton;
}

// WriteToString<128,TStringView<wchar_t>_> @ 1441f80d0

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,TStringView<wchar_t>_>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  pwVar1 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar1;
  __return_storage_ptr__->_padding_ = (longlong)pwVar1;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  pwVar2 = param_1->DataPtr;
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar5;
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,128> *)(pwVar1 + uVar4)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,uVar4)
    ;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy
                       ((void *)__return_storage_ptr__->_padding_,pwVar2,uVar4 * 2);
    __return_storage_ptr__->_padding_ = (longlong)((longlong)pvVar3 + uVar4 * 2);
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 1441fac30

void * __thiscall
FBitfieldNetSerializerConfig::_scalar_deleting_destructor_
          (FBitfieldNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fac70

void * __thiscall
FEnumInt16NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumInt16NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441facb0

void * __thiscall
FEnumInt32NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumInt32NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441facf0

void * __thiscall
FEnumInt64NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumInt64NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fad30

void * __thiscall
FEnumInt8NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumInt8NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fad70

void * __thiscall
FEnumUint16NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumUint16NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fadb0

void * __thiscall
FEnumUint32NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumUint32NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fadf0

void * __thiscall
FEnumUint64NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumUint64NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fae30

void * __thiscall
FEnumUint8NetSerializerConfig::_scalar_deleting_destructor_
          (FEnumUint8NetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fae70

void * __thiscall
FLastResortPropertyNetSerializerConfig::_scalar_deleting_destructor_
          (FLastResortPropertyNetSerializerConfig *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Property).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441faec0

void * __thiscall
FNetRoleNetSerializerConfig::_scalar_deleting_destructor_
          (FNetRoleNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441faf00

void * __thiscall
FNetSerializerConfig::_scalar_deleting_destructor_(FNetSerializerConfig *this,uint param_1)

{
  ~FNetSerializerConfig(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441faf40

void * __thiscall
FObjectNetSerializerConfig::_scalar_deleting_destructor_
          (FObjectNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441faf80

void * __thiscall
FObjectPtrNetSerializerConfig::_scalar_deleting_destructor_
          (FObjectPtrNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fafc0

void * __thiscall
FScriptInterfaceNetSerializerConfig::_scalar_deleting_destructor_
          (FScriptInterfaceNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fb000

void * __thiscall
FWeakObjectNetSerializerConfig::_scalar_deleting_destructor_
          (FWeakObjectNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fb040

void * __thiscall UDataStream::_scalar_deleting_destructor_(UDataStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataStream__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441fb0a0

void * __thiscall
UDataStreamDefinitions::_scalar_deleting_destructor_(UDataStreamDefinitions *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataStreamDefinitions__6B_;
  pFVar1 = (this->DataStreamDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 1441fb110

void * __thiscall
UDataStreamManager::_scalar_deleting_destructor_(UDataStreamManager *this,uint param_1)

{
  FImpl *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataStreamManager__6B_;
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FImpl *)0x0) {
    (*(code *)pFVar1[-1].InitParameters.DataStreamManager)
              (&pFVar1[-1].InitParameters.DataStreamManager);
  }
  this->_padding_ = (longlong)&___7UDataStream__6B_;
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

// `scalar_deleting_destructor' @ 1441fb190

void * __thiscall
UReplicationFilteringConfig::_scalar_deleting_destructor_
          (UReplicationFilteringConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UReplicationFilteringConfig__6B_;
  pFVar1 = (this->HysteresisProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 1441fb200

void * __thiscall
UReplicationStateDescriptorConfig::_scalar_deleting_destructor_
          (UReplicationStateDescriptorConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UReplicationStateDescriptorConfig__6B_;
  pFVar1 = (this->EnsureFullyPushModelClassNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportsStructNetSerializerList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDataStream @ 1442083c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataStream(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataStreamDefinitions @ 1442083d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataStreamDefinitions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataStreamManager @ 1442083e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataStreamManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIrisCore_init @ 1442083f0

void __cdecl EmptyLinkFunctionForGeneratedCodeIrisCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIrisFastArraySerializer @ 144208400

void __cdecl EmptyLinkFunctionForGeneratedCodeIrisFastArraySerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetSerializer @ 144208410

void __cdecl EmptyLinkFunctionForGeneratedCodeNetSerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetSerializerConfig @ 144208420

void __cdecl EmptyLinkFunctionForGeneratedCodeNetSerializerConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplicationFilteringConfig @ 144208430

void __cdecl EmptyLinkFunctionForGeneratedCodeReplicationFilteringConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplicationStateDescriptorConfig @ 144208440

void __cdecl EmptyLinkFunctionForGeneratedCodeReplicationStateDescriptorConfig(void)

{
  return;
}

// GetBitStreamPositionForNetTrace @ 144209f60

uint __cdecl GetBitStreamPositionForNetTrace(FNetBitStreamReader *param_1)

{
  return param_1->BufferBitPosition;
}

// GetBitStreamPositionForNetTrace @ 144209f70

uint __cdecl GetBitStreamPositionForNetTrace(FNetBitStreamWriter *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->BufferBitPosition;
  if (param_1->OverflowBitCount != 0) {
    uVar1 = 0;
  }
  return uVar1;
}

// LexToString @ 144212420

wchar_t * __cdecl LexToString(EDataStreamState param_1)

{
  if (param_1 < Count) {
    return Names[param_1];
  }
  return L"";
}

// Z_Construct_UClass_UDataStreamDefinitions_NoRegister @ 14421d950

UClass * __cdecl Z_Construct_UClass_UDataStreamDefinitions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStreamDefinitions",
               &Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton,
               UDataStreamDefinitions::StaticRegisterNativesUDataStreamDefinitions,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStreamDefinitions>,
               InternalVTableHelperCtorCaller<UDataStreamDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton;
}

// Z_Construct_UClass_UDataStreamManager_NoRegister @ 14421da00

UClass * __cdecl Z_Construct_UClass_UDataStreamManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataStreamManager::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStreamManager",
               &Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton,
               UDataStreamManager::StaticRegisterNativesUDataStreamManager,0x58,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStreamManager>,
               InternalVTableHelperCtorCaller<UDataStreamManager>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton;
}

// Z_Construct_UClass_UDataStream_NoRegister @ 14421dac0

UClass * __cdecl Z_Construct_UClass_UDataStream_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStream",
               &Z_Registration_Info_UClass_UDataStream.InnerSingleton,
               UDataStream::StaticRegisterNativesUDataStream,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStream>,InternalVTableHelperCtorCaller<UDataStream>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStream.InnerSingleton;
}

// Z_Construct_UClass_UReplicationFilteringConfig_NoRegister @ 14421db70

UClass * __cdecl Z_Construct_UClass_UReplicationFilteringConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationFilteringConfig",
               &Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton,
               UReplicationFilteringConfig::StaticRegisterNativesUReplicationFilteringConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationFilteringConfig>,
               InternalVTableHelperCtorCaller<UReplicationFilteringConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton;
}

// Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister @ 14421dc20

UClass * __cdecl Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationStateDescriptorConfig",
               &Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton,
               UReplicationStateDescriptorConfig::
               StaticRegisterNativesUReplicationStateDescriptorConfig,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationStateDescriptorConfig>,
               InternalVTableHelperCtorCaller<UReplicationStateDescriptorConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.InnerSingleton;
}

// Z_Construct_UScriptStruct_FIrisFastArraySerializer @ 14421dcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIrisFastArraySerializer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.InnerSingleton,
               &Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetSerializerConfig @ 14421dd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetSerializerConfig.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetSerializerConfig.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNetSerializerConfig.InnerSingleton;
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

// DebugInternalNetRefIndex @ 14421ddd0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetReplicatedObjectDebugInfo * __cdecl
DebugInternalNetRefIndex
          (FNetReplicatedObjectDebugInfo *__return_storage_ptr__,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  FReplicationProtocol *pFVar3;
  FReplicationInstanceProtocol *pFVar4;
  code *pcVar5;
  bool bVar6;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar7;
  FNetReplicatedObjectDebugInfo *pFVar8;
  FReplicatedObjectData *pFVar9;
  TObjectPtr<UObject>_u_0 *pTVar10;
  
  __return_storage_ptr__->RefHandle = (FNetRefHandle *)0x0;
  *(undefined8 *)&__return_storage_ptr__->InternalNetRefIndex = 0;
  __return_storage_ptr__->ReplicationSystem = (UReplicationSystem *)0x0;
  __return_storage_ptr__->Protocol = (FReplicationProtocol *)0x0;
  __return_storage_ptr__->InstanceProtocol = (FReplicationInstanceProtocol *)0x0;
  __return_storage_ptr__->Object = (UObject *)0x0;
  this = UE::Net::GetReplicationSystem(param_2);
  if (this != (UReplicationSystem *)0x0) {
    pFVar7 = UReplicationSystem::GetReplicationSystemInternal(this);
    if (param_1 != 0) {
      pFVar1 = (pFVar7->NetRefHandleManager).AssignedInternalIndices.Storage.AllocatorInstance.Data;
      if ((pFVar7->NetRefHandleManager).AssignedInternalIndices.BitCount <= param_1) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FNetReplicatedObjectDebugInfo *)(*pcVar5)();
          return pFVar8;
        }
      }
      if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("AssignedInternalIndices.GetBit(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                           ,0x245,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FNetReplicatedObjectDebugInfo *)(*pcVar5)();
          return pFVar8;
        }
      }
      pFVar9 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (&pFVar7->NetRefHandleManager,param_1);
      uVar2 = (pFVar9->RefHandle).field0_0x0.Value;
      pFVar9 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (&pFVar7->NetRefHandleManager,param_1);
      if (((uVar2 ^ (pFVar9->RefHandle).field0_0x0.Value) & 0x3fffffffffffff) == 0) {
        pFVar3 = pFVar9->Protocol;
        __return_storage_ptr__->RefHandle = &pFVar9->RefHandle;
        pFVar4 = pFVar9->InstanceProtocol;
        __return_storage_ptr__->Protocol = pFVar3;
        __return_storage_ptr__->InternalNetRefIndex = param_1;
        __return_storage_ptr__->InstanceProtocol = pFVar4;
        __return_storage_ptr__->ReplicationSystem = this;
        pTVar10 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                             ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                              &(pFVar7->NetRefHandleManager).ReplicatedInstances,param_1)->
                   field0_0x0;
        __return_storage_ptr__->Object = (UObject *)*pTVar10;
      }
    }
  }
  return __return_storage_ptr__;
}

// DebugNetObject @ 14421df20

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetReplicatedObjectDebugInfo * __cdecl
DebugNetObject(FNetReplicatedObjectDebugInfo *__return_storage_ptr__,UObject *param_1)

{
  UReplicationSystem *this;
  FReplicationInstanceProtocol *pFVar1;
  uint uVar2;
  UObjectReplicationBridge *this_00;
  FReplicationSystemInternal *pFVar3;
  FReplicatedObjectData *pFVar4;
  TObjectPtr<UObject>_u_0 *pTVar5;
  UReplicationSystem **ppUVar6;
  FNetRefHandle_u_0 local_res8;
  TArrayView<UReplicationSystem_*,int> local_28;
  
  __return_storage_ptr__->RefHandle = (FNetRefHandle *)0x0;
  *(undefined8 *)&__return_storage_ptr__->InternalNetRefIndex = 0;
  __return_storage_ptr__->ReplicationSystem = (UReplicationSystem *)0x0;
  __return_storage_ptr__->Protocol = (FReplicationProtocol *)0x0;
  __return_storage_ptr__->InstanceProtocol = (FReplicationInstanceProtocol *)0x0;
  __return_storage_ptr__->Object = (UObject *)0x0;
  UE::Net::FReplicationSystemFactory::GetAllReplicationSystems(&local_28);
  ppUVar6 = local_28.DataPtr;
  while( true ) {
    if (ppUVar6 == local_28.DataPtr + local_28.ArrayNum) {
      return __return_storage_ptr__;
    }
    this = *ppUVar6;
    if (((this != (UReplicationSystem *)0x0) &&
        (this_00 = UReplicationSystem::GetReplicationBridge(this),
        this_00 != (UObjectReplicationBridge *)0x0)) &&
       (UObjectReplicationBridge::GetReplicatedRefHandle
                  (this_00,(UObject *)&local_res8._s_0,(EGetRefHandleFlags)param_1),
       local_res8.Value != 0)) break;
    ppUVar6 = ppUVar6 + 1;
  }
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this);
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar3->NetRefHandleManager,(FNetRefHandle)local_res8);
  __return_storage_ptr__->InternalNetRefIndex = uVar2;
  pFVar4 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                     (&pFVar3->NetRefHandleManager,uVar2);
  __return_storage_ptr__->RefHandle = &pFVar4->RefHandle;
  __return_storage_ptr__->ReplicationSystem = this;
  pFVar1 = pFVar4->InstanceProtocol;
  __return_storage_ptr__->Protocol = pFVar4->Protocol;
  __return_storage_ptr__->InstanceProtocol = pFVar1;
  pTVar5 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                      ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                       &(pFVar3->NetRefHandleManager).ReplicatedInstances,
                       __return_storage_ptr__->InternalNetRefIndex)->field0_0x0;
  __return_storage_ptr__->Object = (UObject *)*pTVar5;
  return __return_storage_ptr__;
}

// DebugNetObjectById @ 14421e020

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetReplicatedObjectDebugInfo * __cdecl
DebugNetObjectById(FNetReplicatedObjectDebugInfo *__return_storage_ptr__,UObject *param_1,
                  uint param_2)

{
  FReplicationInstanceProtocol *pFVar1;
  uint uVar2;
  UReplicationSystem *this;
  UObjectReplicationBridge *this_00;
  FReplicationSystemInternal *pFVar3;
  FReplicatedObjectData *pFVar4;
  TObjectPtr<UObject>_u_0 *pTVar5;
  FNetRefHandle_u_0 local_res8;
  
  __return_storage_ptr__->RefHandle = (FNetRefHandle *)0x0;
  *(undefined8 *)&__return_storage_ptr__->InternalNetRefIndex = 0;
  __return_storage_ptr__->ReplicationSystem = (UReplicationSystem *)0x0;
  __return_storage_ptr__->Protocol = (FReplicationProtocol *)0x0;
  __return_storage_ptr__->InstanceProtocol = (FReplicationInstanceProtocol *)0x0;
  __return_storage_ptr__->Object = (UObject *)0x0;
  this = UE::Net::GetReplicationSystem(param_2);
  if (this != (UReplicationSystem *)0x0) {
    this_00 = UReplicationSystem::GetReplicationBridge(this);
    if (this_00 != (UObjectReplicationBridge *)0x0) {
      UObjectReplicationBridge::GetReplicatedRefHandle
                (this_00,(UObject *)&local_res8._s_0,(EGetRefHandleFlags)param_1);
      if (local_res8.Value != 0) {
        pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this);
        uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                          (&pFVar3->NetRefHandleManager,(FNetRefHandle)local_res8);
        __return_storage_ptr__->InternalNetRefIndex = uVar2;
        pFVar4 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                           (&pFVar3->NetRefHandleManager,uVar2);
        __return_storage_ptr__->RefHandle = &pFVar4->RefHandle;
        __return_storage_ptr__->ReplicationSystem = this;
        pFVar1 = pFVar4->InstanceProtocol;
        __return_storage_ptr__->Protocol = pFVar4->Protocol;
        __return_storage_ptr__->InstanceProtocol = pFVar1;
        pTVar5 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                            ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                             &(pFVar3->NetRefHandleManager).ReplicatedInstances,
                             __return_storage_ptr__->InternalNetRefIndex)->field0_0x0;
        __return_storage_ptr__->Object = (UObject *)*pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// DebugNetObjectProtocolReferencesToString @ 14421e0f0

wchar_t * __cdecl DebugNetObjectProtocolReferencesToString(uint param_1,uint param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`DebugNetObjectProtocolReferencesToString'::__l2::
             _dynamic_atexit_destructor_for__StringBuilder__);
      _Init_thread_footer(&_TSS0);
    }
  }
  StringBuilder._padding_ = StringBuilder._padding_;
  UE::Net::IrisDebugHelper::NetObjectProtocolReferencesToString
            ((TStringBuilderBase<wchar_t> *)&StringBuilder,param_1,param_2);
  if ((ulonglong)StringBuilder._padding_ < StringBuilder._padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&StringBuilder,1);
  }
  *(undefined2 *)StringBuilder._padding_ = 0;
  return (wchar_t *)StringBuilder._padding_;
}

// DebugNetObjectStateToString @ 14421e1c0

wchar_t * __cdecl DebugNetObjectStateToString(uint param_1,uint param_2)

{
  FNetRefHandle_u_0 local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`DebugNetObjectStateToString'::__l2::_dynamic_atexit_destructor_for__StringBuilder__);
      _Init_thread_footer(&_TSS0);
    }
  }
  StringBuilder._padding_ = StringBuilder._padding_;
  UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle((ulong64)local_res18,param_1);
  UE::Net::IrisDebugHelper::NetObjectStateToString
            ((TStringBuilderBase<wchar_t> *)&StringBuilder,(FNetRefHandle)local_res18[0]);
  if ((ulonglong)StringBuilder._padding_ < StringBuilder._padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&StringBuilder,1);
  }
  *(undefined2 *)StringBuilder._padding_ = 0;
  return (wchar_t *)StringBuilder._padding_;
}

// DebugNetRefHandle @ 14421e2a0

FNetReplicatedObjectDebugInfo * __cdecl
DebugNetRefHandle(FNetReplicatedObjectDebugInfo *__return_storage_ptr__,FNetRefHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FNetReplicatedObjectDebugInfo *pFVar3;
  
  if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ReplicationSystemId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNetReplicatedObjectDebugInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  DebugNetRefHandleById
            (__return_storage_ptr__,(ulonglong)param_1.field0_0x0 & 0x3fffffffffffff,
             (param_1.field0_0x0._4_4_ >> 0x16) - 1);
  return __return_storage_ptr__;
}

// DebugNetRefHandleById @ 14421e320

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetReplicatedObjectDebugInfo * __cdecl
DebugNetRefHandleById
          (FNetReplicatedObjectDebugInfo *__return_storage_ptr__,ulong64 param_1,uint param_2)

{
  FReplicationProtocol *pFVar1;
  FReplicationInstanceProtocol *pFVar2;
  uint uVar3;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar4;
  FReplicatedObjectData *pFVar5;
  TObjectPtr<UObject>_u_0 *pTVar6;
  FNetRefHandle_u_0 local_res8;
  
  __return_storage_ptr__->RefHandle = (FNetRefHandle *)0x0;
  *(undefined8 *)&__return_storage_ptr__->InternalNetRefIndex = 0;
  __return_storage_ptr__->ReplicationSystem = (UReplicationSystem *)0x0;
  __return_storage_ptr__->Protocol = (FReplicationProtocol *)0x0;
  __return_storage_ptr__->InstanceProtocol = (FReplicationInstanceProtocol *)0x0;
  __return_storage_ptr__->Object = (UObject *)0x0;
  this = UE::Net::GetReplicationSystem(param_2);
  if (this != (UReplicationSystem *)0x0) {
    pFVar4 = UReplicationSystem::GetReplicationSystemInternal(this);
    UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle((ulong64)&local_res8,(uint)param_1);
    uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar4->NetRefHandleManager,(FNetRefHandle)local_res8._s_0);
    __return_storage_ptr__->InternalNetRefIndex = uVar3;
    if (uVar3 != 0) {
      pFVar5 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                         (&pFVar4->NetRefHandleManager,uVar3);
      if (((local_res8.Value ^ (pFVar5->RefHandle).field0_0x0.Value) & 0x3fffffffffffff) == 0) {
        pFVar1 = pFVar5->Protocol;
        __return_storage_ptr__->RefHandle = &pFVar5->RefHandle;
        pFVar2 = pFVar5->InstanceProtocol;
        __return_storage_ptr__->Protocol = pFVar1;
        __return_storage_ptr__->InternalNetRefIndex = uVar3;
        __return_storage_ptr__->InstanceProtocol = pFVar2;
        __return_storage_ptr__->ReplicationSystem = this;
        pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                            ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                             &(pFVar4->NetRefHandleManager).ReplicatedInstances,uVar3)->field0_0x0;
        __return_storage_ptr__->Object = (UObject *)*pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// DebugOutputNetObjectProtocolReferences @ 14421e400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl DebugOutputNetObjectProtocolReferences(uint param_1,uint param_2)

{
  undefined1 auStack_2058 [32];
  TStringBuilderBase<wchar_t> local_2038;
  wchar_t local_2018 [4096];
  ulonglong local_18 [2];
  undefined8 uStack_8;
  
  uStack_8 = 0x14421e40a;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_2058;
  local_2038.Base = local_2018;
  local_2038.bIsDynamic = false;
  local_2038.bIsExternal = false;
  local_2038.End = (wchar_t *)local_18;
  local_2038.CurPos = local_2018;
  UE::Net::IrisDebugHelper::NetObjectProtocolReferencesToString(&local_2038,param_1,param_2);
  if (local_2038.End < local_2038.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_2038,1);
  }
  *local_2038.CurPos = L'\0';
  FGenericPlatformMisc::LowLevelOutputDebugString(local_2038.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2038);
  return;
}

// DebugOutputNetObjectState @ 14421e4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl DebugOutputNetObjectState(ulong64 param_1,uint param_2)

{
  undefined1 auStack_2068 [32];
  FNetRefHandle_u_0 local_2048 [2];
  TStringBuilderBase<wchar_t> local_2038;
  wchar_t local_2018 [4096];
  ulonglong local_18 [2];
  undefined8 uStack_8;
  
  uStack_8 = 0x14421e4ca;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_2068;
  UE::Net::Private::FNetRefHandleManager::MakeNetRefHandle((ulong64)local_2048,(uint)param_1);
  local_2038.Base = local_2018;
  local_2038.CurPos = local_2018;
  local_2038.bIsDynamic = false;
  local_2038.bIsExternal = false;
  local_2038.End = (wchar_t *)local_18;
  UE::Net::IrisDebugHelper::NetObjectStateToString(&local_2038,(FNetRefHandle)local_2048[0]);
  if (local_2038.End < local_2038.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_2038,1);
  }
  *local_2038.CurPos = L'\0';
  FGenericPlatformMisc::LowLevelOutputDebugString(local_2038.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2038);
  return;
}

// GetReplicationSystemForDebug @ 14421e590

UReplicationSystem * __cdecl GetReplicationSystemForDebug(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  UReplicationSystem *pUVar3;
  uint uVar4;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  if ((uint)UE::Net::FReplicationSystemFactory::ReplicationSystems.ArrayNum <= param_1) {
    return (UReplicationSystem *)0x0;
  }
  uVar4 = 0;
  if ((int)param_1 < UE::Net::FReplicationSystemFactory::ReplicationSystems.ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UReplicationSystem *)(*pcVar1)();
      return pUVar3;
    }
  }
  pTVar5 = &UE::Net::FReplicationSystemFactory::ReplicationSystems;
  if (UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData !=
      (ForElementType<UReplicationSystem_*>)0x0) {
    pTVar5 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.
                SecondaryData;
  }
  return *(UReplicationSystem **)((longlong)pTVar5 + (longlong)(int)param_1 * 8);
}

// IMPLEMENT_MODULE_IrisCore @ 14421e5a0

void __cdecl IMPLEMENT_MODULE_IrisCore(void)

{
  return;
}

// SetIrisDebugInternalNetRefIndex @ 14421e5b0

void __cdecl SetIrisDebugInternalNetRefIndex(uint param_1)

{
  UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugInternalIndex = param_1;
  return;
}

// SetIrisDebugInternalNetRefIndexViaNetHandle @ 14421e5c0

void __cdecl SetIrisDebugInternalNetRefIndexViaNetHandle(FNetRefHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar4;
  
  if (param_1.field0_0x0 == 0) {
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0 =
         (FNetRefHandle_u_0)(FNetRefHandle_u_0_s_0)0x0;
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugInternalIndex = 0;
    return;
  }
  if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ReplicationSystemId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = UE::Net::GetReplicationSystem((param_1.field0_0x0._4_4_ >> 0x16) - 1);
  if (this != (UReplicationSystem *)0x0) {
    pFVar4 = UReplicationSystem::GetReplicationSystemInternal(this);
    uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar4->NetRefHandleManager,param_1);
    if (uVar3 != 0) {
      UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugInternalIndex = uVar3;
      UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0 =
           param_1.field0_0x0;
    }
  }
  return;
}

// SetIrisDebugInternalNetRefIndexViaObject @ 14421e660

void __cdecl SetIrisDebugInternalNetRefIndexViaObject(UObject *param_1)

{
  UReplicationSystem *this;
  UObjectReplicationBridge *this_00;
  FReplicationSystemInternal *pFVar1;
  UReplicationSystem **ppUVar2;
  FNetRefHandle_u_0 local_res8;
  TArrayView<UReplicationSystem_*,int> local_18;
  
  if (param_1 == (UObject *)0x0) {
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0 =
         (FNetRefHandle_u_0)(FNetRefHandle_u_0_s_0)0x0;
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugInternalIndex = 0;
    return;
  }
  UE::Net::FReplicationSystemFactory::GetAllReplicationSystems(&local_18);
  ppUVar2 = local_18.DataPtr;
  while( true ) {
    if (ppUVar2 == local_18.DataPtr + local_18.ArrayNum) {
      return;
    }
    this = *ppUVar2;
    if (((this != (UReplicationSystem *)0x0) &&
        (this_00 = UReplicationSystem::GetReplicationBridge(this),
        this_00 != (UObjectReplicationBridge *)0x0)) &&
       (UObjectReplicationBridge::GetReplicatedRefHandle
                  (this_00,(UObject *)&local_res8._s_0,(EGetRefHandleFlags)param_1),
       local_res8.Value != 0)) break;
    ppUVar2 = ppUVar2 + 1;
  }
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal(this);
  UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugInternalIndex =
       UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                 (&pFVar1->NetRefHandleManager,(FNetRefHandle)local_res8._s_0);
  UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugNetRefHandle =
       (FNetRefHandle)local_res8;
  return;
}

// SetIrisDebugNetRefHandle @ 14421e730

void __cdecl SetIrisDebugNetRefHandle(ulong64 param_1)

{
  FNetRefHandle FVar1;
  undefined1 local_res10 [24];
  
  FVar1 = UE::Net::Private::FNetRefHandleManager::MakeNetRefHandleFromId((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
  UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0 =
       (FNetRefHandle_u_0)(FNetRefHandle_u_0)*FVar1.field0_0x0;
  return;
}

// SetIrisDebugObjectName @ 14421e760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SetIrisDebugObjectName(char *param_1)

{
  size_t sVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_1 == (char *)0x0) {
    if (UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.AllocatorInstance.
        Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.
                    AllocatorInstance.Data);
    }
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum = 0;
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.ArrayMax = 0;
  }
  else {
    local_138._padding_ = 0;
    sVar1 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar1,Yes);
    FString::operator=(&UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName,
                       local_138.Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// SetIrisDebugRPCName @ 14421e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SetIrisDebugRPCName(char *param_1)

{
  size_t sVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_1 == (char *)0x0) {
    if (UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugRPCName.Data.AllocatorInstance.
        Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugRPCName.Data.
                    AllocatorInstance.Data);
    }
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugRPCName.Data.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugRPCName.Data.ArrayNum = 0;
    UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugRPCName.Data.ArrayMax = 0;
  }
  else {
    local_138._padding_ = 0;
    sVar1 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar1,Yes);
    FString::operator=(&UE::Net::IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugRPCName,
                       local_138.Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// Registry'' @ 150369a80

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FPropertyNetSerializerInfoRegistry::Registry__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Net::FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data;
  if (UE::Net::FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Net::FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data !=
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

// UniqueClassNames'' @ 150369aa0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
UniqueClassNames__(void)

{
  UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::UniqueClassNames.HashSize = 0;
  if (UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::UniqueClassNames.Hash.
      SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
                          UniqueClassNames.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::UniqueClassNames.
              Elements);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClientToServerUnreliableRPCQueueSize'' @ 150369ae0

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::
_dynamic_atexit_destructor_for__CVarClientToServerUnreliableRPCQueueSize__(void)

{
  CVarClientToServerUnreliableRPCQueueSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarClientToServerUnreliableRPCQueueSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDetailedClientProfilerRef'' @ 150369b00

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableDetailedClientProfilerRef__(void)

{
  CVarEnableDetailedClientProfilerRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableDetailedClientProfilerRef);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisUseChangeMaskForTArray'' @ 150369b20

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisUseChangeMaskForTArray__(void)

{
  CVarIrisUseChangeMaskForTArray._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisUseChangeMaskForTArray);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisUseNativeFastArray'' @ 150369b40

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisUseNativeFastArray__(void)

{
  CVarIrisUseNativeFastArray._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisUseNativeFastArray);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisUseSupportsStructNetSerializerList'' @ 150369b60

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisUseSupportsStructNetSerializerList__(void)

{
  CVarIrisUseSupportsStructNetSerializerList._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisUseSupportsStructNetSerializerList);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties'' @ 150369b80

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties__
          (void)

{
  CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarIrisWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisWarnAboutStructsWithCustomSerialization'' @ 150369ba0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisWarnAboutStructsWithCustomSerialization__
          (void)

{
  CVarIrisWarnAboutStructsWithCustomSerialization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIrisWarnAboutStructsWithCustomSerialization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSimultaneousObjectsWithRPCs'' @ 150369bc0

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::
_dynamic_atexit_destructor_for__CVarMaxSimultaneousObjectsWithRPCs__(void)

{
  CVarMaxSimultaneousObjectsWithRPCs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSimultaneousObjectsWithRPCs)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarReliableRPCQueueSize'' @ 150369be0

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::
_dynamic_atexit_destructor_for__CVarReliableRPCQueueSize__(void)

{
  CVarReliableRPCQueueSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReliableRPCQueueSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUnreliableRPCQueueSize'' @ 150369c00

void __cdecl
UE::Net::Private::AttachmentReplicationCVars::
_dynamic_atexit_destructor_for__CVarUnreliableRPCQueueSize__(void)

{
  CVarUnreliableRPCQueueSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUnreliableRPCQueueSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseIrisReplicationRef'' @ 150369c20

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarUseIrisReplicationRef__(void)

{
  CVarUseIrisReplicationRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseIrisReplicationRef);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbPruneReplicationStateDescriptorsWithArchetype'' @ 150369c40

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarbPruneReplicationStateDescriptorsWithArchetype__(void)

{
  CVarbPruneReplicationStateDescriptorsWithArchetype._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarbPruneReplicationStateDescriptorsWithArchetype);
  return;
}

// `dynamic_atexit_destructor_for_'CriticalErrorDelegate'' @ 150369c60

void __cdecl
`UE::Net::FIrisDelegates::GetCriticalErrorDetectedDelegate'::__l2::
_dynamic_atexit_destructor_for__CriticalErrorDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)CriticalErrorDelegate._8_8_,
             CriticalErrorDelegate._16_4_);
  if (CriticalErrorDelegate._8_8_ != 0) {
    FMemory::Free((void *)CriticalErrorDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&CriticalErrorDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'GIrisDebugName'' @ 150369ca0

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::_dynamic_atexit_destructor_for__GIrisDebugName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GIrisDebugName.Data.AllocatorInstance.Data;
  if (GIrisDebugName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GIrisDebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GIrisDebugRPCName'' @ 150369cc0

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_atexit_destructor_for__GIrisDebugRPCName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GIrisDebugRPCName.Data.AllocatorInstance.Data;
  if (GIrisDebugRPCName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GIrisDebugRPCName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogIris'' @ 150369ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIris__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIris);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisFiltering'' @ 150369d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisFiltering__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisFiltering);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisNetCull'' @ 150369d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisNetCull__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisNetCull);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisRepNotify'' @ 150369d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisRepNotify__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisRepNotify);
  return;
}

// `dynamic_atexit_destructor_for_'NetIrisDebugName'' @ 150369d60

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_atexit_destructor_for__NetIrisDebugName__(void)

{
  NetIrisDebugName._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetIrisDebugName);
  return;
}

// `dynamic_atexit_destructor_for_'NetIrisDebugNetInternalIndex'' @ 150369d80

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_atexit_destructor_for__NetIrisDebugNetInternalIndex__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetIrisDebugNetInternalIndex);
  return;
}

// `dynamic_atexit_destructor_for_'NetIrisDebugNetRefHandle'' @ 150369da0

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_atexit_destructor_for__NetIrisDebugNetRefHandle__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetIrisDebugNetRefHandle);
  return;
}

// `dynamic_atexit_destructor_for_'NetRPCSetDebugRPCName'' @ 150369dc0

void __cdecl
UE::Net::IrisDebugHelper::IrisDebugHelperInternal::
_dynamic_atexit_destructor_for__NetRPCSetDebugRPCName__(void)

{
  NetRPCSetDebugRPCName._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetRPCSetDebugRPCName);
  return;
}

// `dynamic_atexit_destructor_for_'StringBuilder'' @ 150369de0

void __cdecl
`DebugNetObjectProtocolReferencesToString'::__l2::_dynamic_atexit_destructor_for__StringBuilder__
          (void)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&StringBuilder);
  return;
}

// `dynamic_atexit_destructor_for_'StringBuilder'' @ 150369e00

void __cdecl
`DebugNetObjectStateToString'::__l2::_dynamic_atexit_destructor_for__StringBuilder__(void)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&StringBuilder);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Iris'' @ 150369e20

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Iris__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Iris.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Iris.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Iris.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_IrisClient'' @ 150369e40

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IrisClient__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IrisClient.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IrisClient.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IrisClient.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_IrisClientBlockedByAsyncLoading'' @ 150369e60

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IrisClientBlockedByAsyncLoading__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IrisClientBlockedByAsyncLoading.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IrisClientBlockedByAsyncLoading.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IrisClientBlockedByAsyncLoading.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_IrisClientDetailObjectCreate'' @ 150369e80

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IrisClientDetailObjectCreate__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IrisClientDetailObjectCreate.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IrisClientDetailObjectCreate.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IrisClientDetailObjectCreate.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_IrisClientDetailRPC'' @ 150369ea0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IrisClientDetailRPC__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IrisClientDetailRPC.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IrisClientDetailRPC.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IrisClientDetailRPC.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_IrisClientDetailRepNotify'' @ 150369ec0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IrisClientDetailRepNotify__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IrisClientDetailRepNotify.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IrisClientDetailRepNotify.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IrisClientDetailRepNotify.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'s_IrisObjectReferencePackageMap'' @ 150369ee0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__s_IrisObjectReferencePackageMap__(void)

{
  if (s_IrisObjectReferencePackageMap.Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(s_IrisObjectReferencePackageMap.Object);
    s_IrisObjectReferencePackageMap.Object = (UObject *)0x0;
  }
  return;
}

// operator() @ 1504b2880

bool __thiscall
``UE::Net::FReplicationStateDescriptorBuilder::CreateDescriptorsForClass'::__l51::<lambda_1>::
operator()'::__l8::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  UClass *pUVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar6 = false;
  bVar5 = false;
  bVar8 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747185415>);
  if (bVar7) {
    lVar2 = **(longlong **)this;
    uVar1 = **(uint **)((longlong)this + 8);
    uVar11 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pUVar10 = FField::GetOwnerClass
                        (*(FField **)(*(longlong *)(lVar2 + 0xf0) + (longlong)(int)uVar1 * 0x10));
    if (pUVar10 == (UClass *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res10 = (FName)pUVar10->_padding_;
      ::FName::ToString(&local_res10,&local_38);
    }
    lVar2 = **(longlong **)this;
    uVar1 = **(uint **)((longlong)this + 8);
    uVar11 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pvVar3 = *(void **)(*(longlong *)(lVar2 + 0xf0) + (longlong)(int)uVar1 * 0x10);
    if (pvVar3 == (void *)0x0) {
      pwVar12 = L"none";
LAB_1504b2a29:
      ::FString::FString(&local_58,pwVar12);
    }
    else {
      bVar8 = IsThisNotNull(pvVar3,"FField::GetName");
      if (!bVar8) {
        pwVar12 = L"None";
        goto LAB_1504b2a29;
      }
      ::FName::ToString((FName *)((longlong)pvVar3 + 0x20),&local_58);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res18,&local_48);
    }
    bVar6 = true;
    bVar5 = true;
    bVar8 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449277768747185415>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_1504b2ac1;
    }
  }
  bVar7 = false;
LAB_1504b2ac1:
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  return false;
}

