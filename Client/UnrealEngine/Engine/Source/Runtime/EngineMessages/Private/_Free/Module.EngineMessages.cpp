// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 83

// `dynamic_initializer_for_'ModuleRegistrantEngineMessages'' @ 140f93ef0

void __cdecl _dynamic_initializer_for__ModuleRegistrantEngineMessages__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "EngineMessages";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"EngineMessages",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FEngineMessagesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h__Script_EngineMessages_2306842349'' @ 140f93f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h__Script_EngineMessages_2306842349__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/EngineMessages",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h__Script_EngineMessages_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h__Script_EngineMessages_1593580440'' @ 140f93f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h__Script_EngineMessages_1593580440__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/EngineMessages",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h__Script_EngineMessages_Statics
             ::ScriptStructInfo,0x17,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_EngineMessages'' @ 140f93fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_EngineMessages__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xfe4d79f6;
  local_res8[0].DeclarationsHash = 0xbc186b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_EngineMessages,L"/Script/EngineMessages",
             &Z_Registration_Info_UPackage__Script_EngineMessages,local_res8);
  return;
}

// Z_Construct_UScriptStruct_FTraceChannelPreset @ 144638fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceChannelPreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceChannelPreset.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceChannelPreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceChannelPreset.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTraceChannelPreset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlStartCommon @ 144639020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlStartCommon(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlStartCommon.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlStartCommon.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlStartCommon.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlStartCommon.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlStatus @ 1446390a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlStatus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlStatus.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlStatus.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlStatus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlStatus.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTraceControlStatus.InnerSingleton;
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

// NewStructOps @ 144639120

void * __cdecl Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlStatusPing,&UE::CoreUObject::Private::Construct<FTraceControlStatusPing>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlStatusPing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAreStatNamedEventsEnabled_SetBit @ 144639160

void __cdecl
Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bAreStatNamedEventsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewProp_bIsPaused_SetBit @ 144639170

void __cdecl
Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsPaused_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x55) = 1;
  return;
}

// NewProp_bIsTracing_SetBit @ 144639180

void __cdecl
Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsTracing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  return;
}

// NewStructOps @ 144639190

void * __cdecl Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlStatus,&UE::CoreUObject::Private::Construct<FTraceControlStatus>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlStatus>,&UE::CoreUObject::Private::Destruct<FTraceControlStatus>,&UE::CoreUObject::Private::Copy<FTraceControlStatus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639210

void * __cdecl Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlSettingsPing,&UE::CoreUObject::Private::Construct<FTraceControlSettingsPing>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlSettingsPing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsReadOnly_SetBit @ 1446393f0

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_bIsReadOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 144639400

void * __cdecl Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceChannelPreset,&UE::CoreUObject::Private::Construct<FTraceChannelPreset>,&UE::CoreUObject::Private::ConstructForTests<FTraceChannelPreset>,&UE::CoreUObject::Private::Destruct<FTraceChannelPreset>,&UE::CoreUObject::Private::Copy<FTraceChannelPreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseWorkerThread_SetBit @ 144639440

void __cdecl
Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseWorkerThread_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bUseImportantCache_SetBit @ 144639450

void __cdecl
Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseImportantCache_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 144639460

void * __cdecl Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlSettings,&UE::CoreUObject::Private::Construct<FTraceControlSettings>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlSettings>,&UE::CoreUObject::Private::Destruct<FTraceControlSettings>,&UE::CoreUObject::Private::Copy<FTraceControlSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1446394a0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlChannelsPing,&UE::CoreUObject::Private::Construct<FTraceControlChannelsPing>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsPing>,&UE::CoreUObject::Private::Destruct<FTraceControlChannelsPing>,&UE::CoreUObject::Private::Copy<FTraceControlChannelsPing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639600

void * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlChannelsDesc,&UE::CoreUObject::Private::Construct<FTraceControlChannelsDesc>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsDesc>,&UE::CoreUObject::Private::Destruct<FTraceControlChannelsDesc>,&UE::CoreUObject::Private::Copy<FTraceControlChannelsDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639640

void * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlChannelsStatus,&UE::CoreUObject::Private::Construct<FTraceControlChannelsStatus>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsStatus>,&UE::CoreUObject::Private::Destruct<FTraceControlChannelsStatus>,&UE::CoreUObject::Private::Copy<FTraceControlChannelsStatus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639680

void * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlChannelsSet,&UE::CoreUObject::Private::Construct<FTraceControlChannelsSet>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsSet>,&UE::CoreUObject::Private::Destruct<FTraceControlChannelsSet>,&UE::CoreUObject::Private::Copy<FTraceControlChannelsSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1446398f0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsSetError_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlChannelsSetError,&UE::CoreUObject::Private::Construct<FTraceControlChannelsSetError>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsSetError>,&UE::CoreUObject::Private::Destruct<FTraceControlChannelsSetError>,&UE::CoreUObject::Private::Copy<FTraceControlChannelsSetError>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1446399e0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlDiscoveryPing,&UE::CoreUObject::Private::Construct<FTraceControlDiscoveryPing>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlDiscoveryPing>,&UE::CoreUObject::Private::Destruct<FTraceControlDiscoveryPing>,&UE::CoreUObject::Private::Copy<FTraceControlDiscoveryPing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639a20

void * __cdecl Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlDiscovery,&UE::CoreUObject::Private::Construct<FTraceControlDiscovery>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlDiscovery>,&UE::CoreUObject::Private::Destruct<FTraceControlDiscovery>,&UE::CoreUObject::Private::Copy<FTraceControlDiscovery>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639ab0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlStop_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlStop,&UE::CoreUObject::Private::Construct<FTraceControlStop>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlStop>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bExcludeTail_SetBit @ 144639b50

void __cdecl
Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_bExcludeTail_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 144639b60

void * __cdecl Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlStartCommon,&UE::CoreUObject::Private::Construct<FTraceControlStartCommon>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlStartCommon>,&UE::CoreUObject::Private::Destruct<FTraceControlStartCommon>,&UE::CoreUObject::Private::Copy<FTraceControlStartCommon>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639ba0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlSend_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlSend,&UE::CoreUObject::Private::Construct<FTraceControlSend>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlSend>,&UE::CoreUObject::Private::Destruct<FTraceControlSend>,&UE::CoreUObject::Private::Copy<FTraceControlSend>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTruncateFile_SetBit @ 144639be0

void __cdecl
Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_bTruncateFile_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 144639bf0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlFile,&UE::CoreUObject::Private::Construct<FTraceControlFile>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlFile>,&UE::CoreUObject::Private::Destruct<FTraceControlFile>,&UE::CoreUObject::Private::Copy<FTraceControlFile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639d30

void * __cdecl Z_Construct_UScriptStruct_FTraceControlPause_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlPause,&UE::CoreUObject::Private::Construct<FTraceControlPause>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlPause>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639d70

void * __cdecl Z_Construct_UScriptStruct_FTraceControlResume_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlResume,&UE::CoreUObject::Private::Construct<FTraceControlResume>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlResume>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639db0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlSnapshotSend,&UE::CoreUObject::Private::Construct<FTraceControlSnapshotSend>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlSnapshotSend>,&UE::CoreUObject::Private::Destruct<FTraceControlSnapshotSend>,&UE::CoreUObject::Private::Copy<FTraceControlSnapshotSend>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639df0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlSnapshotFile,&UE::CoreUObject::Private::Construct<FTraceControlSnapshotFile>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlSnapshotFile>,&UE::CoreUObject::Private::Destruct<FTraceControlSnapshotFile>,&UE::CoreUObject::Private::Copy<FTraceControlSnapshotFile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144639f30

void * __cdecl Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlBookmark,&UE::CoreUObject::Private::Construct<FTraceControlBookmark>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlBookmark>,&UE::CoreUObject::Private::Destruct<FTraceControlBookmark>,&UE::CoreUObject::Private::Copy<FTraceControlBookmark>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShowUI_SetBit @ 144639f70

void __cdecl
Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_bShowUI_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 144639f80

void * __cdecl Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlScreenshot,&UE::CoreUObject::Private::Construct<FTraceControlScreenshot>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlScreenshot>,&UE::CoreUObject::Private::Destruct<FTraceControlScreenshot>,&UE::CoreUObject::Private::Copy<FTraceControlScreenshot>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnabled_SetBit @ 144639fc0

void __cdecl
Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 144639fd0

void * __cdecl Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceControlSetStatNamedEvents,&UE::CoreUObject::Private::Construct<FTraceControlSetStatNamedEvents>,&UE::CoreUObject::Private::ConstructForTests<FTraceControlSetStatNamedEvents>,&UE::CoreUObject::Private::Destruct<FTraceControlSetStatNamedEvents>,&UE::CoreUObject::Private::Copy<FTraceControlSetStatNamedEvents>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14463a0d0

void * __thiscall
FEngineMessagesModule::_scalar_deleting_destructor_(FEngineMessagesModule *this,uint param_1)

{
  *this = (FEngineMessagesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_EngineMessages @ 14463a270

UPackage * __cdecl Z_Construct_UPackage__Script_EngineMessages(void)

{
  if (Z_Registration_Info_UPackage__Script_EngineMessages.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_EngineMessages.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_EngineMessages.OuterSingleton;
}

// NewStructOps @ 14463a4d0

void * __cdecl Z_Construct_UScriptStruct_FEngineServicePing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServicePing,&UE::CoreUObject::Private::Construct<FEngineServicePing>,&UE::CoreUObject::Private::ConstructForTests<FEngineServicePing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_HasBegunPlay_SetBit @ 14463a510

void __cdecl
Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 14463a520

void * __cdecl Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServicePong,&UE::CoreUObject::Private::Construct<FEngineServicePong>,&UE::CoreUObject::Private::ConstructForTests<FEngineServicePong>,&UE::CoreUObject::Private::Destruct<FEngineServicePong>,&UE::CoreUObject::Private::Copy<FEngineServicePong>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14463a640

void * __cdecl Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServiceAuthDeny,&UE::CoreUObject::Private::Construct<FEngineServiceAuthDeny>,&UE::CoreUObject::Private::ConstructForTests<FEngineServiceAuthDeny>,&UE::CoreUObject::Private::Destruct<FEngineServiceAuthDeny>,&UE::CoreUObject::Private::Copy<FEngineServiceAuthDeny>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14463a800

void * __cdecl Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServiceAuthGrant,&UE::CoreUObject::Private::Construct<FEngineServiceAuthGrant>,&UE::CoreUObject::Private::ConstructForTests<FEngineServiceAuthGrant>,&UE::CoreUObject::Private::Destruct<FEngineServiceAuthGrant>,&UE::CoreUObject::Private::Copy<FEngineServiceAuthGrant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14463a840

void * __cdecl Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServiceExecuteCommand,&UE::CoreUObject::Private::Construct<FEngineServiceExecuteCommand>,&UE::CoreUObject::Private::ConstructForTests<FEngineServiceExecuteCommand>,&UE::CoreUObject::Private::Destruct<FEngineServiceExecuteCommand>,&UE::CoreUObject::Private::Copy<FEngineServiceExecuteCommand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14463a910

void * __cdecl Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServiceTerminate,&UE::CoreUObject::Private::Construct<FEngineServiceTerminate>,&UE::CoreUObject::Private::ConstructForTests<FEngineServiceTerminate>,&UE::CoreUObject::Private::Destruct<FEngineServiceTerminate>,&UE::CoreUObject::Private::Copy<FEngineServiceTerminate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14463a9e0

void * __cdecl Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEngineServiceNotification,&UE::CoreUObject::Private::Construct<FEngineServiceNotification>,&UE::CoreUObject::Private::ConstructForTests<FEngineServiceNotification>,&UE::CoreUObject::Private::Destruct<FEngineServiceNotification>,&UE::CoreUObject::Private::Copy<FEngineServiceNotification>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FTraceChannelPreset,FTraceChannelPreset,int> @ 14463b2e0

void __cdecl
ConstructItems<FTraceChannelPreset,FTraceChannelPreset,int>
          (void *param_1,FTraceChannelPreset *param_2,int param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  bool *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = &param_2->bIsReadOnly;
    puVar2 = (undefined1 *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)(puVar2 + -0x20),
                       (FString *)(puVar2 + (longlong)param_2 + (-0x20 - (longlong)param_1)));
      FString::FString((FString *)(puVar2 + -0x10),(FString *)(pbVar3 + -0x10));
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 0x28;
      *puVar2 = bVar1;
      puVar2 = puVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FTraceChannelPreset,int> @ 14463b360

void __cdecl DestructItems<FTraceChannelPreset,int>(FTraceChannelPreset *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ChannelList).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeEngineMessages_init @ 14463b730

void __cdecl EmptyLinkFunctionForGeneratedCodeEngineMessages_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEngineServiceMessages @ 14463b740

void __cdecl EmptyLinkFunctionForGeneratedCodeEngineServiceMessages(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTraceControlMessages @ 14463b750

void __cdecl EmptyLinkFunctionForGeneratedCodeTraceControlMessages(void)

{
  return;
}

// Z_Construct_UScriptStruct_FEngineServiceAuthDeny @ 14463b790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServiceAuthDeny(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEngineServiceAuthGrant @ 14463b810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServiceAuthGrant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceAuthGrant.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServiceAuthGrant.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServiceAuthGrant.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServiceAuthGrant.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEngineServiceExecuteCommand @ 14463b890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServiceExecuteCommand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceExecuteCommand.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServiceExecuteCommand.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServiceExecuteCommand.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServiceExecuteCommand.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEngineServiceNotification @ 14463b910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServiceNotification(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceNotification.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServiceNotification.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServiceNotification.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServiceNotification.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEngineServicePing @ 14463b990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServicePing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServicePing.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServicePing.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServicePing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServicePing.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServicePing.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEngineServicePong @ 14463ba10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServicePong(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServicePong.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServicePong.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServicePong_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServicePong.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServicePong.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEngineServiceTerminate @ 14463ba90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEngineServiceTerminate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.InnerSingleton,
               &Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlBookmark @ 14463bb10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlBookmark(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlBookmark.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlBookmark.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlBookmark.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTraceControlBookmark.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlChannelsDesc @ 14463bb90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlChannelsPing @ 14463bc10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsPing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsPing.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlChannelsPing.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsPing.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlChannelsPing.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlChannelsSet @ 14463bc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsSet.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlChannelsSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsSet.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlChannelsSet.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlChannelsSetError @ 14463bd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsSetError(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsSetError.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlChannelsSetError.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlChannelsSetError_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsSetError.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlChannelsSetError.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlChannelsStatus @ 14463bd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlChannelsStatus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsStatus.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlChannelsStatus.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsStatus.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlChannelsStatus.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlDiscovery @ 14463be10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlDiscovery(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlDiscovery.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlDiscovery.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlDiscovery.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlDiscovery.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlDiscoveryPing @ 14463be90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlDiscoveryPing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlDiscoveryPing.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlDiscoveryPing.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlDiscoveryPing.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlDiscoveryPing.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlFile @ 14463bf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlFile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlFile.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlFile.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlFile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlFile.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlFile.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlPause @ 14463bf90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlPause(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlPause.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlPause.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlPause_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlPause.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlPause.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlResume @ 14463c010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlResume(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlResume.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlResume.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlResume_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlResume.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTraceControlResume.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlScreenshot @ 14463c090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlScreenshot(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlScreenshot.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlScreenshot.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlScreenshot.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlScreenshot.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlSend @ 14463c110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlSend(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSend.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlSend.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlSend_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlSend.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlSend.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents @ 14463c190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSetStatNamedEvents.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlSetStatNamedEvents.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlSetStatNamedEvents.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlSetStatNamedEvents.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlSettings @ 14463c210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTraceControlSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlSettingsPing @ 14463c290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlSettingsPing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSettingsPing.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlSettingsPing.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlSettingsPing.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlSettingsPing.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlSnapshotFile @ 14463c310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlSnapshotFile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlSnapshotFile.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlSnapshotSend @ 14463c390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlSnapshotSend(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSnapshotSend.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlSnapshotSend.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlSnapshotSend.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlSnapshotSend.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlStatusPing @ 14463c410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlStatusPing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlStatusPing.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlStatusPing.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlStatusPing.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlStatusPing.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTraceControlStop @ 14463c490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceControlStop(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlStop.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceControlStop.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceControlStop_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceControlStop.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceControlStop.InnerSingleton;
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

// IMPLEMENT_MODULE_EngineMessages @ 14463c510

void __cdecl IMPLEMENT_MODULE_EngineMessages(void)

{
  return;
}

