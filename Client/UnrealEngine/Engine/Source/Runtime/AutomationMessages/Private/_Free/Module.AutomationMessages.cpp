// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationMessages
// Functions: 74

// `dynamic_initializer_for_'ModuleRegistrantAutomationMessages'' @ 1411651b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAutomationMessages__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AutomationMessages";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AutomationMessages",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAutomationMessagesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h__Script_AutomationMessages_1101245153'' @ 141165200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h__Script_AutomationMessages_1101245153__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationMessages",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h__Script_AutomationMessages_Statics
             ::ScriptStructInfo,0x19,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AutomationMessages'' @ 141165240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AutomationMessages__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xdfee5505;
  local_res8[0].DeclarationsHash = 0x246367c3;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AutomationMessages,L"/Script/AutomationMessages",
             &Z_Registration_Info_UPackage__Script_AutomationMessages,local_res8);
  return;
}

// NewStructOps @ 148bf9520

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerPong,&UE::CoreUObject::Private::Construct<FAutomationWorkerPong>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerPong>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerPong>,&UE::CoreUObject::Private::Copy<FAutomationWorkerPong>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_DeveloperDirectoryIncluded_SetBit @ 148bf9560

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::
NewProp_DeveloperDirectoryIncluded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 148bf9570

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerRequestTests,&UE::CoreUObject::Private::Construct<FAutomationWorkerRequestTests>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerRequestTests>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerRequestTests>,&UE::CoreUObject::Private::Copy<FAutomationWorkerRequestTests>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9610

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerSingleTestReply,&UE::CoreUObject::Private::Construct<FAutomationWorkerSingleTestReply>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerSingleTestReply>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerSingleTestReply>,&UE::CoreUObject::Private::Copy<FAutomationWorkerSingleTestReply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9650

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerRequestTestsReplyComplete,&UE::CoreUObject::Private::Construct<FAutomationWorkerRequestTestsReplyComplete>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerRequestTestsReplyComplete>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerRequestTestsReplyComplete>,&UE::CoreUObject::Private::Copy<FAutomationWorkerRequestTestsReplyComplete>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSendAnalytics_SetBit @ 148bf9690

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bPruneLogsOnSuccess_SetBit @ 148bf96a0

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bPruneLogsOnSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewStructOps @ 148bf96b0

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerRunTests,&UE::CoreUObject::Private::Construct<FAutomationWorkerRunTests>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerRunTests>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerRunTests>,&UE::CoreUObject::Private::Copy<FAutomationWorkerRunTests>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9780

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerRunTestsReply,&UE::CoreUObject::Private::Construct<FAutomationWorkerRunTestsReply>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerRunTestsReply>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerRunTestsReply>,&UE::CoreUObject::Private::Copy<FAutomationWorkerRunTestsReply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf97c0

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerRequestNextNetworkCommand,&UE::CoreUObject::Private::Construct<FAutomationWorkerRequestNextNetworkCommand>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerRequestNextNetworkCommand>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerRequestNextNetworkCommand>,&UE::CoreUObject::Private::Copy<FAutomationWorkerRequestNextNetworkCommand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9800

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerNextNetworkCommandReply,&UE::CoreUObject::Private::Construct<FAutomationWorkerNextNetworkCommandReply>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerNextNetworkCommandReply>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerNextNetworkCommandReply>,&UE::CoreUObject::Private::Copy<FAutomationWorkerNextNetworkCommandReply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsStereo_SetBit @ 148bf9a10

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// NewProp_bIsSubstrate_SetBit @ 148bf9a20

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsSubstrate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  return;
}

// NewProp_bHasComparisonRules_SetBit @ 148bf9a30

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 300) = 1;
  return;
}

// NewProp_bIgnoreAntiAliasing_SetBit @ 148bf9a40

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
  return;
}

// NewProp_bIgnoreColors_SetBit @ 148bf9a50

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13d) = 1;
  return;
}

// NewStructOps @ 148bf9a60

void * __cdecl Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationScreenshotMetadata,&UE::CoreUObject::Private::Construct<FAutomationScreenshotMetadata>,&UE::CoreUObject::Private::ConstructForTests<FAutomationScreenshotMetadata>,&UE::CoreUObject::Private::Destruct<FAutomationScreenshotMetadata>,&UE::CoreUObject::Private::Copy<FAutomationScreenshotMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9b50

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerScreenImage,&UE::CoreUObject::Private::Construct<FAutomationWorkerScreenImage>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerScreenImage>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerScreenImage>,&UE::CoreUObject::Private::Copy<FAutomationWorkerScreenImage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNew_SetBit @ 148bf9c40

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bSimilar_SetBit @ 148bf9c50

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 148bf9c60

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerImageComparisonResults,&UE::CoreUObject::Private::Construct<FAutomationWorkerImageComparisonResults>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerImageComparisonResults>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerImageComparisonResults>,&UE::CoreUObject::Private::Copy<FAutomationWorkerImageComparisonResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9ca0

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerTestDataRequest,&UE::CoreUObject::Private::Construct<FAutomationWorkerTestDataRequest>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerTestDataRequest>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerTestDataRequest>,&UE::CoreUObject::Private::Copy<FAutomationWorkerTestDataRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsNew_SetBit @ 148bf9e50

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 148bf9e60

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerTestDataResponse,&UE::CoreUObject::Private::Construct<FAutomationWorkerTestDataResponse>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerTestDataResponse>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerTestDataResponse>,&UE::CoreUObject::Private::Copy<FAutomationWorkerTestDataResponse>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bf9ea0

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerPerformanceDataRequest,&UE::CoreUObject::Private::Construct<FAutomationWorkerPerformanceDataRequest>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerPerformanceDataRequest>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerPerformanceDataRequest>,&UE::CoreUObject::Private::Copy<FAutomationWorkerPerformanceDataRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSuccess_SetBit @ 148bf9ee0

void __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 148bf9ef0

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerPerformanceDataResponse,&UE::CoreUObject::Private::Construct<FAutomationWorkerPerformanceDataResponse>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerPerformanceDataResponse>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerPerformanceDataResponse>,&UE::CoreUObject::Private::Copy<FAutomationWorkerPerformanceDataResponse>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfa130

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerTelemetryItem,&UE::CoreUObject::Private::Construct<FAutomationWorkerTelemetryItem>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerTelemetryItem>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerTelemetryItem>,&UE::CoreUObject::Private::Copy<FAutomationWorkerTelemetryItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfa170

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerTelemetryData,&UE::CoreUObject::Private::Construct<FAutomationWorkerTelemetryData>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerTelemetryData>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerTelemetryData>,&UE::CoreUObject::Private::Copy<FAutomationWorkerTelemetryData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148bfa270

void * __thiscall
FAutomationMessagesModule::_scalar_deleting_destructor_
          (FAutomationMessagesModule *this,uint param_1)

{
  *this = (FAutomationMessagesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_AutomationMessages @ 148bfa530

UPackage * __cdecl Z_Construct_UPackage__Script_AutomationMessages(void)

{
  if (Z_Registration_Info_UPackage__Script_AutomationMessages.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AutomationMessages.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AutomationMessages.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAutomationScreenshotMetadata @ 148bfb590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationScreenshotMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationScreenshotMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationScreenshotMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationScreenshotMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationScreenshotMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerMessageBase @ 148bfb610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerMessageBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerMessageBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerMessageBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerMessageBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerMessageBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply @ 148bfb690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerSingleTestReply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerSingleTestReply.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerSingleTestReply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerSingleTestReply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem @ 148bfb710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryItem.InnerSingleton;
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

// NewStructOps @ 148bfb790

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerMessageBase,&UE::CoreUObject::Private::Construct<FAutomationWorkerMessageBase>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerMessageBase>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerMessageBase>,&UE::CoreUObject::Private::Copy<FAutomationWorkerMessageBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfb9b0

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerFindWorkers,&UE::CoreUObject::Private::Construct<FAutomationWorkerFindWorkers>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerFindWorkers>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerFindWorkers>,&UE::CoreUObject::Private::Copy<FAutomationWorkerFindWorkers>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfbb30

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerFindWorkersResponse,&UE::CoreUObject::Private::Construct<FAutomationWorkerFindWorkersResponse>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerFindWorkersResponse>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerFindWorkersResponse>,&UE::CoreUObject::Private::Copy<FAutomationWorkerFindWorkersResponse>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfbb70

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerWorkerOffline,&UE::CoreUObject::Private::Construct<FAutomationWorkerWorkerOffline>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerWorkerOffline>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerWorkerOffline>,&UE::CoreUObject::Private::Copy<FAutomationWorkerWorkerOffline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfbd10

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerPing,&UE::CoreUObject::Private::Construct<FAutomationWorkerPing>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerPing>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerPing>,&UE::CoreUObject::Private::Copy<FAutomationWorkerPing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfbdb0

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerStartTestSession,&UE::CoreUObject::Private::Construct<FAutomationWorkerStartTestSession>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerStartTestSession>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerStartTestSession>,&UE::CoreUObject::Private::Copy<FAutomationWorkerStartTestSession>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfbdf0

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerStopTestSession,&UE::CoreUObject::Private::Construct<FAutomationWorkerStopTestSession>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerStopTestSession>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerStopTestSession>,&UE::CoreUObject::Private::Copy<FAutomationWorkerStopTestSession>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148bfc0f0

void * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWorkerStopTests,&UE::CoreUObject::Private::Construct<FAutomationWorkerStopTests>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWorkerStopTests>,&UE::CoreUObject::Private::Destruct<FAutomationWorkerStopTests>,&UE::CoreUObject::Private::Copy<FAutomationWorkerStopTests>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FAutomationWorkerSingleTestReply,FAutomationWorkerSingleTestReply,int> @ 148bfc130

void __cdecl
ConstructItems<FAutomationWorkerSingleTestReply,FAutomationWorkerSingleTestReply,int>
          (void *param_1,FAutomationWorkerSingleTestReply *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  FString *this;
  FString *pFVar3;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    pFVar3 = &param_2->FullTestPath;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar2 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar2;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
      FString::FString(this + -1,pFVar3 + -1);
      FString::FString(this,pFVar3);
      FString::FString(this + 1,pFVar3 + 1);
      FString::FString(this + 2,pFVar3 + 2);
      FString::FString(this + 3,pFVar3 + 3);
      *(int *)&this[4].Data.AllocatorInstance.Data = *(int *)(pFVar3 + 4);
      FString::FString((FString *)&this[4].Data.ArrayNum,(FString *)((longlong)(pFVar3 + 4) + 8));
      FString::FString((FString *)&this[5].Data.ArrayNum,(FString *)((longlong)(pFVar3 + 5) + 8));
      this[6].Data.ArrayNum = *(int *)((longlong)(pFVar3 + 6) + 8);
      this[6].Data.ArrayMax = *(int *)((longlong)(pFVar3 + 6) + 0xc);
      FString::FString(this + 7,pFVar3 + 7);
      pFVar3 = pFVar3 + 10;
      this = this + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomationWorkerTelemetryItem,FAutomationWorkerTelemetryItem,int> @ 148bfc220

void __cdecl
ConstructItems<FAutomationWorkerTelemetryItem,FAutomationWorkerTelemetryItem,int>
          (void *param_1,FAutomationWorkerTelemetryItem *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  
  if (param_3 != 0) {
    pdVar3 = (double *)((longlong)param_1 + 0x20);
    pdVar4 = &param_2->Measurement;
    do {
      pdVar1 = (double *)((longlong)pdVar3 + (longlong)param_2 + (-0x20 - (longlong)param_1));
      dVar2 = pdVar1[1];
      pdVar3[-4] = *pdVar1;
      pdVar3[-3] = dVar2;
      FString::FString((FString *)(pdVar3 + -2),(FString *)(pdVar4 + -2));
      *pdVar3 = *pdVar4;
      FString::FString((FString *)(pdVar3 + 1),(FString *)(pdVar4 + 1));
      pdVar4 = pdVar4 + 7;
      pdVar3 = pdVar3 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FAutomationWorkerSingleTestReply,int> @ 148bfc2b0

void __cdecl
DestructItems<FAutomationWorkerSingleTestReply,int>
          (FAutomationWorkerSingleTestReply *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->OpenCommand;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -3) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -4) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -5) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -6) + 8));
      }
      pFVar1 = (((FString *)((longlong)(pFVar2 + -7) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomationWorkerTelemetryItem,int> @ 148bfc360

void __cdecl
DestructItems<FAutomationWorkerTelemetryItem,int>
          (FAutomationWorkerTelemetryItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DataPoint;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationMessages_init @ 148bfca10

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationMessages_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationWorkerMessages @ 148bfca20

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationWorkerMessages(void)

{
  return;
}

// Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers @ 148bfca60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkers.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkers.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkers.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkers.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse @ 148bfcae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkersResponse.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkersResponse.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkersResponse.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerFindWorkersResponse.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults @ 148bfcb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply @ 148bfcbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerNextNetworkCommandReply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerNextNetworkCommandReply.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerNextNetworkCommandReply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerNextNetworkCommandReply.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest @ 148bfcc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataRequest.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse @ 148bfcce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataResponse.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataResponse.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataResponse.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerPerformanceDataResponse.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FAutomationWorkerPing @ 148bfcd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerPing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPing.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerPing.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPing.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerPing.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerPong @ 148bfcde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerPong(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPong.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerPong.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerPong.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerPong.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand @ 148bfce60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand.
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

// Z_Construct_UScriptStruct_FAutomationWorkerRequestTests @ 148bfcee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRequestTests(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTests.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTests.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTests.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTests.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete @ 148bfcf60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete.
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

// Z_Construct_UScriptStruct_FAutomationWorkerRunTests @ 148bfcfe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRunTests(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTests.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTests.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTests.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTests.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply @ 148bfd060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTestsReply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTestsReply.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTestsReply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerRunTestsReply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerScreenImage @ 148bfd0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerScreenImage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerScreenImage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerScreenImage.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerScreenImage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerScreenImage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession @ 148bfd160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStartTestSession.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerStartTestSession.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStartTestSession.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerStartTestSession.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession @ 148bfd1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerStopTests @ 148bfd260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerStopTests(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTests.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTests.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTests.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTests.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData @ 148bfd2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest @ 148bfd360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse @ 148bfd3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline @ 148bfd460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerWorkerOffline.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWorkerWorkerOffline.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerWorkerOffline.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWorkerWorkerOffline.InnerSingleton;
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

// IMPLEMENT_MODULE_AutomationMessages @ 148bfd4e0

void __cdecl IMPLEMENT_MODULE_AutomationMessages(void)

{
  return;
}

