// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 80

// CompressedPayloadSupport'' @ 1413c47b0

void __cdecl `dynamic_initializer_for_'FLiveLinkMessageAnnotation::CompressedPayloadSupport__(void)

{
  ::FName::FName(&FLiveLinkMessageAnnotation::CompressedPayloadSupport,L"CompressedPayloadSupport");
  return;
}

// OriginalSourceAnnotation'' @ 1413c47d0

void __cdecl `dynamic_initializer_for_'FLiveLinkMessageAnnotation::OriginalSourceAnnotation__(void)

{
  ::FName::FName(&FLiveLinkMessageAnnotation::OriginalSourceAnnotation,L"OriginalSource");
  return;
}

// RoleAnnotation'' @ 1413c47f0

void __cdecl `dynamic_initializer_for_'FLiveLinkMessageAnnotation::RoleAnnotation__(void)

{
  ::FName::FName(&FLiveLinkMessageAnnotation::RoleAnnotation,L"Role");
  return;
}

// SubjectAnnotation'' @ 1413c4810

void __cdecl `dynamic_initializer_for_'FLiveLinkMessageAnnotation::SubjectAnnotation__(void)

{
  ::FName::FName(&FLiveLinkMessageAnnotation::SubjectAnnotation,L"SubjectName");
  return;
}

// TopologyModeAnnotation'' @ 1413c4830

void __cdecl `dynamic_initializer_for_'FLiveLinkMessageAnnotation::TopologyModeAnnotation__(void)

{
  ::FName::FName(&FLiveLinkMessageAnnotation::TopologyModeAnnotation,L"TopologyMode");
  return;
}

// `dynamic_initializer_for_'CVarCompressionFlags'' @ 1413c4850

void __cdecl UE::LiveLink::Compression::_dynamic_initializer_for__CVarCompressionFlags__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCompressionFlags,L"LiveLink.SetCompressionFlags",local_res8,
             L"Specify the flags to use when compression is enabled. A value of 0 means no flags. A value of 1 favors smaller sizes. Any other value favors faster encoding."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompressionFlags__);
  return;
}

// `dynamic_initializer_for_'CVarCompressionType'' @ 1413c48a0

void __cdecl UE::LiveLink::Compression::_dynamic_initializer_for__CVarCompressionType__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCompressionType,L"LiveLink.SetCompressionType",local_res8,
             L"Specify the type of compression to use when serializing data. A value of 0 means compression is off. A value of 1 = Oodle. All other values = Zlib."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompressionType__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkCompressAnimData'' @ 1413c48f0

void __cdecl _dynamic_initializer_for__CVarLiveLinkCompressAnimData__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLiveLinkCompressAnimData,L"LiveLink.CompressAnimationData",local_res8,
             L"Whether to compress animation data that goes through the provider.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkCompressAnimData__);
  return;
}

// `dynamic_initializer_for_'LogLiveLinkMessageBus'' @ 1413c4940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLinkMessageBus__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveLinkMessageBus,L"LogLiveLinkMessageBus",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveLinkMessageBus__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLiveLinkMessageBusFramework'' @ 1413c4980

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveLinkMessageBusFramework__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveLinkMessageBusFramework";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveLinkMessageBusFramework",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLiveLinkMessageBusFrameworkModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h__Script_LiveLinkMessageBusFramework_3049695581'' @ 1413c49d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h__Script_LiveLinkMessageBusFramework_3049695581__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMessageBusFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h__Script_LiveLinkMessageBusFramework_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkCompression_h__Script_LiveLinkMessageBusFramework_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h__Script_LiveLinkMessageBusFramework_1894933020'' @ 1413c4a20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h__Script_LiveLinkMessageBusFramework_1894933020__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMessageBusFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h__Script_LiveLinkMessageBusFramework_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h__Script_LiveLinkMessageBusFramework_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveLinkMessageBusFramework'' @ 1413c4a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveLinkMessageBusFramework__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x30e1b334;
  local_res8[0].DeclarationsHash = 0xbd692ee3;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
             L"/Script/LiveLinkMessageBusFramework",
             &Z_Registration_Info_UPackage__Script_LiveLinkMessageBusFramework,local_res8);
  return;
}

// NewStructOps @ 14cfe6f00

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkPongMessage,&UE::CoreUObject::Private::Construct<FLiveLinkPongMessage>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkPongMessage>,&UE::CoreUObject::Private::Destruct<FLiveLinkPongMessage>,&UE::CoreUObject::Private::Copy<FLiveLinkPongMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfe6fd0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkConnectMessage,&UE::CoreUObject::Private::Construct<FLiveLinkConnectMessage>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkConnectMessage>,&UE::CoreUObject::Private::Destruct<FLiveLinkConnectMessage>,&UE::CoreUObject::Private::Copy<FLiveLinkConnectMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfe7010

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkHeartbeatMessage,&UE::CoreUObject::Private::Construct<FLiveLinkHeartbeatMessage>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkHeartbeatMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfe7050

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkClearSubject,&UE::CoreUObject::Private::Construct<FLiveLinkClearSubject>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkClearSubject>,&UE::CoreUObject::Private::Destruct<FLiveLinkClearSubject>,&UE::CoreUObject::Private::Copy<FLiveLinkClearSubject>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfe7090

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubjectDataMessage,&UE::CoreUObject::Private::Construct<FLiveLinkSubjectDataMessage>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectDataMessage>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubjectDataMessage>,&UE::CoreUObject::Private::Copy<FLiveLinkSubjectDataMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfe70d0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubjectFrameMessage,&UE::CoreUObject::Private::Construct<FLiveLinkSubjectFrameMessage>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectFrameMessage>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubjectFrameMessage>,&UE::CoreUObject::Private::Copy<FLiveLinkSubjectFrameMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionBias @ 14cfe76b0

UEnum * __cdecl Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionBias(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkCompressionBias.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkCompressionBias.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionBias_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkCompressionBias.InnerSingleton;
}

// Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionMethod @ 14cfe76f0

UEnum * __cdecl Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionMethod(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.InnerSingleton;
}

// Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadSerializationMethod @ 14cfe7730

UEnum * __cdecl
Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadSerializationMethod(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadSerializationMethod_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkByteArray @ 14cfe7770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkByteArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkByteArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.InnerSingleton;
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

// NewStructOps @ 14cfe7820

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkByteArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkByteArray,&UE::CoreUObject::Private::Construct<FLiveLinkByteArray>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkByteArray>,&UE::CoreUObject::Private::Destruct<FLiveLinkByteArray>,&UE::CoreUObject::Private::SerializeArchive<FLiveLinkByteArray>,&UE::CoreUObject::Private::Copy<FLiveLinkByteArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ELiveLinkCompressionMethod_StaticEnum @ 14cfe7860

UEnum * __cdecl ELiveLinkCompressionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionMethod,
                       (UObject *)pUVar1,L"ELiveLinkCompressionMethod");
  }
  return Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.OuterSingleton;
}

// ELiveLinkCompressionBias_StaticEnum @ 14cfe78a0

UEnum * __cdecl ELiveLinkCompressionBias_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkCompressionBias.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkCompressionBias.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionBias,
                       (UObject *)pUVar1,L"ELiveLinkCompressionBias");
  }
  return Z_Registration_Info_UEnum_ELiveLinkCompressionBias.OuterSingleton;
}

// ELiveLinkPayloadSerializationMethod_StaticEnum @ 14cfe78e0

UEnum * __cdecl ELiveLinkPayloadSerializationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadSerializationMethod
                       ,(UObject *)pUVar1,L"ELiveLinkPayloadSerializationMethod");
  }
  return Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.OuterSingleton;
}

// ELiveLinkPayloadCompressionType_StaticEnum @ 14cfe7920

UEnum * __cdecl ELiveLinkPayloadCompressionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadCompressionType
                       ,(UObject *)pUVar1,L"ELiveLinkPayloadCompressionType");
  }
  return Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.OuterSingleton;
}

// NewStructOps @ 14cfe7960

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSerializedFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkSerializedFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSerializedFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkSerializedFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkSerializedFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfe79d0

void * __thiscall
FLiveLinkMessageBusFrameworkModule::_scalar_deleting_destructor_
          (FLiveLinkMessageBusFrameworkModule *this,uint param_1)

{
  *this = (FLiveLinkMessageBusFrameworkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_LiveLinkMessageBusFramework @ 14cfe7a70

UPackage * __cdecl Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveLinkMessageBusFramework.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveLinkMessageBusFramework.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LiveLinkMessageBusFramework.OuterSingleton;
}

// ELiveLinkTopologyMode_StaticEnum @ 14cfe7e60

UEnum * __cdecl ELiveLinkTopologyMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkTopologyMode,
                       (UObject *)pUVar1,L"ELiveLinkTopologyMode");
  }
  return Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton;
}

// NewStructOps @ 14cfe7ea0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkPingMessage,&UE::CoreUObject::Private::Construct<FLiveLinkPingMessage>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkPingMessage>,&UE::CoreUObject::Private::Destruct<FLiveLinkPingMessage>,&UE::CoreUObject::Private::Copy<FLiveLinkPingMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// DestructItems<FTrackedFrameData,int> @ 14cfe8640

void __cdecl DestructItems<FTrackedFrameData,int>(FTrackedFrameData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Annotations).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      FStructOnScope::~FStructOnScope((FStructOnScope *)(puVar1 + -0xd));
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTrackedStaticData,int> @ 14cfe86b0

void __cdecl DestructItems<FTrackedStaticData,int>(FTrackedStaticData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Annotations).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      FStructOnScope::~FStructOnScope((FStructOnScope *)(puVar1 + -0xd));
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindBy<TArray<FTrackedAddress,TSizedDefaultAllocator<32>_>_&,FMessageAddress,FMessageAddress_FTrackedAddress::*> @ 14cfe8ca0

FTrackedAddress * __cdecl
AlgoImpl::
FindBy<TArray<FTrackedAddress,TSizedDefaultAllocator<32>_>_&,FMessageAddress,FMessageAddress_FTrackedAddress::*>
          (TArray<FTrackedAddress,TSizedDefaultAllocator<32>_> *param_1,FMessageAddress *param_2,
          pdm_de207915 param_3)

{
  uint *puVar1;
  int iVar2;
  FTrackedAddress *pFVar3;
  FTrackedAddress *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (FTrackedAddress *)(param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTrackedAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    puVar1 = (uint *)((longlong)&(pFVar3->Address).UniqueId.A + (longlong)(int)param_3);
    if (((*(uint *)((longlong)&(pFVar3->Address).UniqueId.D + (longlong)(int)param_3) ==
          (param_2->UniqueId).D && puVar1[2] == (param_2->UniqueId).C) &&
        puVar1[1] == (param_2->UniqueId).B) && *puVar1 == (param_2->UniqueId).A) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FTrackedAddress *)0x0;
}

// StaticEnum<enum_ELiveLinkCompressionBias> @ 14cfe9120

UEnum * __cdecl StaticEnum<enum_ELiveLinkCompressionBias>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkCompressionBias.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkCompressionBias.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionBias,
                       (UObject *)pUVar1,L"ELiveLinkCompressionBias");
  }
  return Z_Registration_Info_UEnum_ELiveLinkCompressionBias.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkCompressionMethod> @ 14cfe9160

UEnum * __cdecl StaticEnum<enum_ELiveLinkCompressionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkCompressionMethod,
                       (UObject *)pUVar1,L"ELiveLinkCompressionMethod");
  }
  return Z_Registration_Info_UEnum_ELiveLinkCompressionMethod.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkPayloadCompressionType> @ 14cfe91a0

UEnum * __cdecl StaticEnum<enum_ELiveLinkPayloadCompressionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadCompressionType
                       ,(UObject *)pUVar1,L"ELiveLinkPayloadCompressionType");
  }
  return Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkPayloadSerializationMethod> @ 14cfe91e0

UEnum * __cdecl StaticEnum<enum_ELiveLinkPayloadSerializationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadSerializationMethod
                       ,(UObject *)pUVar1,L"ELiveLinkPayloadSerializationMethod");
  }
  return Z_Registration_Info_UEnum_ELiveLinkPayloadSerializationMethod.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkTopologyMode> @ 14cfe9220

UEnum * __cdecl StaticEnum<enum_ELiveLinkTopologyMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkTopologyMode,
                       (UObject *)pUVar1,L"ELiveLinkTopologyMode");
  }
  return Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton;
}

// Transform<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,`FLiveLinkFloatAnimationFrameData::FromAnimData'::__l2::<lambda_1>_> @ 14cfe9260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Algo::
Transform<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,_FLiveLinkFloatAnimationFrameData::FromAnimData_::__l2::<lambda_1>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_c8 [32];
  float *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar7 = pFVar8 + 0x20;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_78[0] = 0;
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_78);
    }
    if (pFVar8 == pFVar9) break;
    local_68 = (float)*(double *)pFVar8;
    fStack_64 = (float)*(double *)(pFVar8 + 8);
    pFVar2 = (param_2->AllocatorInstance).Data;
    fStack_60 = (float)*(double *)(pFVar8 + 0x10);
    fStack_5c = (float)*(double *)(pFVar8 + 0x18);
    local_58 = (float)*(double *)pFVar7;
    fStack_54 = (float)*(double *)(pFVar7 + 8);
    fStack_50 = (float)*(double *)(pFVar7 + 0x10);
    fStack_4c = (float)*(double *)(pFVar7 + 0x18);
    local_48 = (float)*(double *)(pFVar7 + 0x20);
    fStack_44 = (float)*(double *)(pFVar7 + 0x28);
    fStack_40 = (float)*(double *)(pFVar7 + 0x30);
    fStack_3c = (float)*(double *)(pFVar7 + 0x38);
    if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)param_2->ArrayMax * 0x30)) {
      local_90 = (longlong)param_2->ArrayNum;
      local_88 = 0x30;
      local_a8 = &local_68;
      local_a0 = pFVar2;
      local_98 = (longlong)param_2->ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar8 = pFVar8 + 0x60;
    lVar6 = (longlong)iVar5;
    pFVar2 = (param_2->AllocatorInstance).Data;
    pFVar7 = pFVar7 + 0x60;
    *(ulonglong *)(pFVar2 + lVar6 * 0x30) = CONCAT44(fStack_64,local_68);
    *(ulonglong *)(pFVar2 + lVar6 * 0x30 + 8) = CONCAT44(fStack_5c,fStack_60);
    *(ulonglong *)(pFVar2 + lVar6 * 0x30 + 0x10) = CONCAT44(fStack_54,local_58);
    *(ulonglong *)(pFVar2 + lVar6 * 0x30 + 0x10 + 8) = CONCAT44(fStack_4c,fStack_50);
    *(ulonglong *)(pFVar2 + lVar6 * 0x30 + 0x20) = CONCAT44(fStack_44,local_48);
    *(ulonglong *)(pFVar2 + lVar6 * 0x30 + 0x20 + 8) = CONCAT44(fStack_3c,fStack_40);
  }
  return;
}

// `vcall'{56,{flat}}'_}' @ 14cfea444

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl FLiveLinkProvider::`vcall'{56,{flat}}' }' */

void __thiscall FLiveLinkProvider::_vcall__56__flat______(FLiveLinkProvider *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cfea447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// `scalar_deleting_destructor' @ 14cfea450

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkProvider,void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveLinkProvider,void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea480

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkProvider,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FLiveLinkProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>::_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea500

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>::_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea540

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>::_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea580

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLiveLinkProvider,SharedPointerInternals::DefaultDeleter<FLiveLinkProvider>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLiveLinkProvider,SharedPointerInternals::DefaultDeleter<FLiveLinkProvider>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea600

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea640

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea680

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FLiveLinkProvider::_scalar_deleting_destructor_(FLiveLinkProvider *this,uint param_1)

{
  ~FLiveLinkProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfea6c0

void * __thiscall
ILiveLinkProvider::_scalar_deleting_destructor_(ILiveLinkProvider *this,uint param_1)

{
  *this = (ILiveLinkProvider)&___7ILiveLinkProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DecompressImpl @ 14cfeb7b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> * __cdecl
PayloadDetail::DecompressImpl
          (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FLiveLinkSerializedFrameData *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName FVar6;
  ECompressionFlags EVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  EVar7 = COMPRESS_NoFlags;
  if (param_1->CompressionMethod != Uncompressed) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId105,"LiveLink::TryDecompress",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                 ,0x69);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId105);
    }
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_38,param_1->PayloadSize,Default);
    if (param_1->CompressionBias == Size) {
      EVar7 = COMPRESS_BiasMemory;
    }
    else if (param_1->CompressionBias == Speed) {
      EVar7 = COMPRESS_BiasSpeed;
    }
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    bVar3 = FCompression::UncompressMemory
                      (FVar6,local_38.AllocatorInstance.Data,(longlong)local_38.ArrayNum,
                       (param_1->PayloadBytes).Bytes.AllocatorInstance.Data,
                       (longlong)(param_1->PayloadBytes).Bytes.ArrayNum,EVar7,0);
    if (bVar3) {
      *(FScriptContainerElement **)&__return_storage_ptr__->field0_0x0 =
           local_38.AllocatorInstance.Data;
      (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = local_38.ArrayNum;
      iVar2 = local_38.ArrayMax;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.ArrayMax = local_38.ArrayMax;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      if ((iVar2 == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar5;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      if (!bVar8) {
        return __return_storage_ptr__;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return __return_storage_ptr__;
    }
    if (2 < (byte)LogTemp._0_1_) {
      ::FName::ToString(&param_1->PayloadTypeName,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = 0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayMax = -1;
  return __return_storage_ptr__;
}

// DeserializeAndDecompress @ 14cfeb9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __cdecl
PayloadDetail::DeserializeAndDecompress
          (UScriptStruct *param_1,void *param_2,FLiveLinkSerializedFrameData *param_3)

{
  bool bVar1;
  longlong *plVar2;
  byte bVar3;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 *pTVar4;
  undefined1 auStack_268 [32];
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 local_248;
  FArchiveState local_238;
  undefined8 local_1a8;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 *local_1a0;
  undefined8 local_198;
  FArchiveState local_188;
  undefined8 local_f8;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 *local_f0;
  undefined8 local_e8;
  FCborStructDeserializerBackend local_d8;
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  DecompressImpl((TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *)
                 &local_248.TypedValue,param_3);
  if (param_3->CompressionMethod == Uncompressed) {
    if (local_248.TypedValue.ArrayMax != -1) goto LAB_14cfeba03;
    pTVar4 = (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 *)
             &param_3->PayloadBytes;
  }
  else {
    if (local_248.TypedValue.ArrayMax == -1) {
      bVar1 = false;
      goto LAB_14cfebbd8;
    }
LAB_14cfeba03:
    pTVar4 = &local_248;
  }
  if (param_3->SerializationMethod == Cbor) {
    local_188._padding_ = 0;
    local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_188._40_8_ = 0;
    local_188.ArSerializingDefaults = 0;
    local_188.ArPortFlags = 0;
    local_188.ArMaxSerializeSize = 0;
    local_188.ArUEVer.FileVersionUE4 = 0;
    local_188.ArUEVer.FileVersionUE5 = 0;
    local_188.ArLicenseeUEVer = 0;
    local_188.ArEngineVer.Major = 0;
    local_188.ArEngineVer.Minor = 0;
    local_188.ArEngineVer.Patch = 0;
    local_188.ArEngineVer._6_2_ = 0;
    local_188.ArEngineVer.Changelist = 0;
    local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_188.SerializedProperty = (FProperty *)0x0;
    local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_188.bCustomVersionsAreReset = false;
    local_188._129_7_ = 0;
    local_188.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_188);
    local_188._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_e8 = 0x7fffffffffffffff;
    local_f8 = 0;
    local_f0 = pTVar4;
    FArchiveState::SetIsLoading(&local_188,true);
    (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
    FCborStructDeserializerBackend::FCborStructDeserializerBackend
              (&local_d8,(FArchive *)&local_188,Platform,false);
    local_78._0_4_ = Ignore;
    local_78._4_4_ = KeyValuePair;
    local_78._16_8_ = 0;
    local_40 = (longlong *)0x0;
    bVar1 = FStructDeserializer::Deserialize
                      (param_2,(UStruct *)param_1,(IStructDeserializerBackend *)&local_d8,
                       (FStructDeserializerPolicies *)local_78);
    if (local_78._16_8_ != 0) {
      plVar2 = (longlong *)(local_78 + 0x20);
      if (local_40 != (longlong *)0x0) {
        plVar2 = local_40;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if ((bVar1) && (local_188.ArIsError == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    FCborStructDeserializerBackend::~FCborStructDeserializerBackend(&local_d8);
    FArchive::~FArchive((FArchive *)&local_188);
  }
  else {
    local_238._padding_ = 0;
    local_238.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_238.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_238.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_238.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_238._40_8_ = 0;
    local_238.ArSerializingDefaults = 0;
    local_238.ArPortFlags = 0;
    local_238.ArMaxSerializeSize = 0;
    local_238.ArUEVer.FileVersionUE4 = 0;
    local_238.ArUEVer.FileVersionUE5 = 0;
    local_238.ArLicenseeUEVer = 0;
    local_238.ArEngineVer.Major = 0;
    local_238.ArEngineVer.Minor = 0;
    local_238.ArEngineVer.Patch = 0;
    local_238.ArEngineVer._6_2_ = 0;
    local_238.ArEngineVer.Changelist = 0;
    local_238.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_238.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_238.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_238.SerializedProperty = (FProperty *)0x0;
    local_238.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_238.bCustomVersionsAreReset = false;
    local_238._129_7_ = 0;
    local_238.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_238);
    local_238._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_198 = 0x7fffffffffffffff;
    local_1a8 = 0;
    local_1a0 = pTVar4;
    FArchiveState::SetIsLoading(&local_238,true);
    (**(code **)(local_238._padding_ + 0x108))(&local_238,0);
    (**(code **)(local_238._padding_ + 0xf0))(&local_238,1);
    UScriptStruct::SerializeItem(param_1,(FArchive *)&local_238,param_2,(void *)0x0);
    bVar3 = local_238.ArIsError;
    FArchive::~FArchive((FArchive *)&local_238);
    bVar1 = (bool)(bVar3 ^ 1);
  }
LAB_14cfebbd8:
  if ((local_248.TypedValue.ArrayMax != -1) &&
     (local_248.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_248.TypedValue.AllocatorInstance.Data);
  }
  return bVar1;
}

// DeserializeImpl @ 14cfebc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __cdecl
PayloadDetail::DeserializeImpl
          (UScriptStruct *param_1,void *param_2,ELiveLinkPayloadSerializationMethod param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  longlong *plVar2;
  byte bVar3;
  undefined1 auStack_248 [32];
  FArchiveState local_228;
  undefined8 local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_190;
  undefined8 local_188;
  FArchiveState local_178;
  undefined8 local_e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_e0;
  undefined8 local_d8;
  FCborStructDeserializerBackend local_c8;
  undefined1 local_68 [56];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  if (param_3 == Cbor) {
    local_178._padding_ = 0;
    local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_178._40_8_ = 0;
    local_178.ArSerializingDefaults = 0;
    local_178.ArPortFlags = 0;
    local_178.ArMaxSerializeSize = 0;
    local_178.ArUEVer.FileVersionUE4 = 0;
    local_178.ArUEVer.FileVersionUE5 = 0;
    local_178.ArLicenseeUEVer = 0;
    local_178.ArEngineVer.Major = 0;
    local_178.ArEngineVer.Minor = 0;
    local_178.ArEngineVer.Patch = 0;
    local_178.ArEngineVer._6_2_ = 0;
    local_178.ArEngineVer.Changelist = 0;
    local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_178.SerializedProperty = (FProperty *)0x0;
    local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_178.bCustomVersionsAreReset = false;
    local_178._129_7_ = 0;
    local_178.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_178);
    local_178._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_d8 = 0x7fffffffffffffff;
    local_e8 = 0;
    local_e0 = param_4;
    FArchiveState::SetIsLoading(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    FCborStructDeserializerBackend::FCborStructDeserializerBackend
              (&local_c8,(FArchive *)&local_178,Platform,false);
    local_68._0_4_ = Ignore;
    local_68._4_4_ = KeyValuePair;
    local_68._16_8_ = 0;
    local_30 = (longlong *)0x0;
    bVar1 = FStructDeserializer::Deserialize
                      (param_2,(UStruct *)param_1,(IStructDeserializerBackend *)&local_c8,
                       (FStructDeserializerPolicies *)local_68);
    if (local_68._16_8_ != 0) {
      plVar2 = (longlong *)(local_68 + 0x20);
      if (local_30 != (longlong *)0x0) {
        plVar2 = local_30;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if ((bVar1) && (local_178.ArIsError == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    FCborStructDeserializerBackend::~FCborStructDeserializerBackend(&local_c8);
    FArchive::~FArchive((FArchive *)&local_178);
  }
  else {
    local_228._padding_ = 0;
    local_228.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_228.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_228.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_228.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_228._40_8_ = 0;
    local_228.ArSerializingDefaults = 0;
    local_228.ArPortFlags = 0;
    local_228.ArMaxSerializeSize = 0;
    local_228.ArUEVer.FileVersionUE4 = 0;
    local_228.ArUEVer.FileVersionUE5 = 0;
    local_228.ArLicenseeUEVer = 0;
    local_228.ArEngineVer.Major = 0;
    local_228.ArEngineVer.Minor = 0;
    local_228.ArEngineVer.Patch = 0;
    local_228.ArEngineVer._6_2_ = 0;
    local_228.ArEngineVer.Changelist = 0;
    local_228.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_228.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_228.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_228.SerializedProperty = (FProperty *)0x0;
    local_228.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_228.bCustomVersionsAreReset = false;
    local_228._129_7_ = 0;
    local_228.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_228);
    local_228._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_188 = 0x7fffffffffffffff;
    local_198 = 0;
    local_190 = param_4;
    FArchiveState::SetIsLoading(&local_228,true);
    (**(code **)(local_228._padding_ + 0x108))(&local_228,0);
    (**(code **)(local_228._padding_ + 0xf0))(&local_228,1);
    UScriptStruct::SerializeItem(param_1,(FArchive *)&local_228,param_2,(void *)0x0);
    bVar3 = local_228.ArIsError;
    FArchive::~FArchive((FArchive *)&local_228);
    bVar1 = (bool)(bVar3 ^ 1);
  }
  return bVar1;
}

// DeserializePreChecks @ 14cfebe60

bool __cdecl
PayloadDetail::DeserializePreChecks
          (UScriptStruct *param_1,void *param_2,FLiveLinkSerializedFrameData *param_3)

{
  if ((param_1 != (UScriptStruct *)0x0) && (param_2 != (void *)0x0)) {
    return true;
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkCompression @ 14cfebff0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkCompression(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusFramework_init @ 14cfec000

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusFramework_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMessages @ 14cfec010

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMessages(void)

{
  return;
}

// SerializeImpl @ 14cfef7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

bool __cdecl
PayloadDetail::SerializeImpl
          (UScriptStruct *param_1,void *param_2,FLiveLinkSerializedFrameData *param_3)

{
  byte bVar1;
  longlong *plVar2;
  FArchiveState *this;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  FArchiveState local_218;
  undefined8 local_188;
  FLiveLinkByteArray *local_180;
  undefined8 local_178;
  FArchiveState local_168;
  undefined8 local_d8;
  FLiveLinkByteArray *local_d0;
  undefined8 local_c8;
  FCborStructSerializerBackend local_b8;
  undefined1 local_68 [56];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_228 = 0;
  if (param_3->SerializationMethod == Cbor) {
    local_168._padding_ = 0;
    local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_168._40_8_ = 0;
    local_168.ArSerializingDefaults = 0;
    local_168.ArPortFlags = 0;
    local_168.ArMaxSerializeSize = 0;
    local_168.ArUEVer.FileVersionUE4 = 0;
    local_168.ArUEVer.FileVersionUE5 = 0;
    local_168.ArLicenseeUEVer = 0;
    local_168.ArEngineVer.Major = 0;
    local_168.ArEngineVer.Minor = 0;
    local_168.ArEngineVer.Patch = 0;
    local_168.ArEngineVer._6_2_ = 0;
    local_168.ArEngineVer.Changelist = 0;
    local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_168.SerializedProperty = (FProperty *)0x0;
    local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_168.bCustomVersionsAreReset = false;
    local_168._129_7_ = 0;
    local_168.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_168);
    local_d8 = 0;
    local_168._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_c8 = 0;
    local_d0 = &param_3->PayloadBytes;
    FArchiveState::SetIsSaving(&local_168,true);
    (**(code **)(local_168._padding_ + 0x108))(&local_168,0);
    local_168._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FCborStructSerializerBackend::FCborStructSerializerBackend
              (&local_b8,(FArchive *)&local_168,Default);
    local_68._0_4_ = Serialize;
    local_68._4_4_ = Ignore;
    local_68._8_4_ = KeyValuePair;
    local_68._16_8_ = 0;
    local_30 = (longlong *)0x0;
    FStructSerializer::Serialize
              (param_2,(UStruct *)param_1,(IStructSerializerBackend *)&local_b8,
               (FStructSerializerPolicies *)local_68);
    if (local_68._16_8_ != 0) {
      plVar2 = (longlong *)(local_68 + 0x20);
      if (local_30 != (longlong *)0x0) {
        plVar2 = local_30;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    bVar1 = local_168._41_1_;
    FCborStructSerializerBackend::~FCborStructSerializerBackend(&local_b8);
    this = &local_168;
  }
  else {
    local_218._padding_ = 0;
    local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_218._40_8_ = 0;
    local_218.ArSerializingDefaults = 0;
    local_218.ArPortFlags = 0;
    local_218.ArMaxSerializeSize = 0;
    local_218.ArUEVer.FileVersionUE4 = 0;
    local_218.ArUEVer.FileVersionUE5 = 0;
    local_218.ArLicenseeUEVer = 0;
    local_218.ArEngineVer.Major = 0;
    local_218.ArEngineVer.Minor = 0;
    local_218.ArEngineVer.Patch = 0;
    local_218.ArEngineVer._6_2_ = 0;
    local_218.ArEngineVer.Changelist = 0;
    local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_218.SerializedProperty = (FProperty *)0x0;
    local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_218.bCustomVersionsAreReset = false;
    local_218._129_7_ = 0;
    local_218.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_218);
    local_188 = 0;
    local_218._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_178 = local_228;
    local_180 = &param_3->PayloadBytes;
    FArchiveState::SetIsSaving(&local_218,true);
    (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
    local_218._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveState::SetWantBinaryPropertySerialization(&local_218,true);
    UScriptStruct::SerializeItem(param_1,(FArchive *)&local_218,param_2,(void *)0x0);
    this = &local_218;
    bVar1 = local_218._41_1_;
  }
  FArchive::~FArchive((FArchive *)this);
  return (bool)(bVar1 >> 1 & 1 ^ 1);
}

// SerializePreChecks @ 14cfefa20

bool __cdecl
PayloadDetail::SerializePreChecks
          (UScriptStruct *param_1,void *param_2,FLiveLinkSerializedFrameData *param_3)

{
  int *piVar1;
  int iVar2;
  
  param_3->PayloadSize = 0;
  piVar1 = &(param_3->PayloadBytes).Bytes.ArrayMax;
  iVar2 = *piVar1;
  (param_3->PayloadBytes).Bytes.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&param_3->PayloadBytes,0,piVar1);
  }
  if ((param_1 != (UScriptStruct *)0x0) && (param_2 != (void *)0x0)) {
    return true;
  }
  return false;
}

// ShouldCompress @ 14cff02f0

bool __cdecl
PayloadDetail::ShouldCompress
          (FLiveLinkSerializedFrameData *param_1,ELiveLinkPayloadCompressionType param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_2 == None) {
    return false;
  }
  if (param_2 == Heuristic) {
    return param_1->PayloadSize - 0x201U < 0x1fffe00;
  }
  if (param_2 != Always) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressionType == ELiveLinkPayloadCompressionType::Always",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < param_1->PayloadSize;
}

// TryCompressImpl @ 14cff0370

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
PayloadDetail::TryCompressImpl
          (UScriptStruct *param_1,void *param_2,FLiveLinkSerializedFrameData *param_3,
          ELiveLinkPayloadCompressionType param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  TConsoleVariableData<int> *pTVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  FNameEntryId FVar8;
  int iVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  EName EVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  ELiveLinkCompressionBias EVar14;
  ECompressionFlags EVar15;
  uint uVar16;
  FLiveLinkByteArray *pFVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  FNameEntryId local_68;
  uint uStack_64;
  FName local_60;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  iVar9 = (param_3->PayloadBytes).Bytes.ArrayNum;
  param_3->PayloadSize = iVar9;
  if (param_4 == None) {
LAB_14cff073b:
    param_3->CompressionMethod = Uncompressed;
    return true;
  }
  if (param_4 == Heuristic) {
    bVar20 = iVar9 - 0x201U < 0x1fffe00;
  }
  else {
    if ((param_4 != Always) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompressionType == ELiveLinkPayloadCompressionType::Always",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                            ,0x37,L""), bVar20)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    bVar20 = 0 < param_3->PayloadSize;
  }
  if (!bVar20) goto LAB_14cff073b;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId67,"LiveLink::TryCompressImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
               ,0x43);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
  }
  pTVar4 = UE::LiveLink::Compression::CVarCompressionType.Ref;
  EVar15 = COMPRESS_NoFlags;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar19 = 4;
    if (!bVar6) goto LAB_14cff046c;
  }
  lVar19 = 0;
LAB_14cff046c:
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar19) == 1) {
    EVar10 = (EName)local_res18;
  }
  else {
    EVar10 = (EName)local_78;
  }
  FVar8 = FNameEntryId::FromValidEName(EVar10);
  pTVar4 = UE::LiveLink::Compression::CVarCompressionFlags.Ref;
  uStack_64 = 0;
  local_68.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), lVar19 = 4, bVar6)) {
    lVar19 = 0;
  }
  iVar9 = *(int *)((longlong)pTVar4->ShadowedValue + lVar19);
  if ((iVar9 != 0) && (EVar15 = COMPRESS_BiasSpeed, iVar9 == 1)) {
    EVar15 = COMPRESS_BiasMemory;
  }
  FVar3.Number = uStack_64;
  FVar3.ComparisonIndex.Value = local_68.Value;
  local_res20[0] = FCompression::CompressMemoryBound(FVar3,param_3->PayloadSize,EVar15,0);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_58,local_res20[0],Default);
  bVar6 = FCompression::CompressMemory
                    (FVar3,local_58.AllocatorInstance.Data,(int *)local_res20,
                     (param_3->PayloadBytes).Bytes.AllocatorInstance.Data,
                     (param_3->PayloadBytes).Bytes.ArrayNum,EVar15,0);
  uVar5 = local_res20[0];
  EVar14 = None;
  if (bVar6) {
    lVar19 = (longlong)(int)local_res20[0];
    if (local_58.ArrayNum < (int)local_res20[0]) {
      iVar18 = local_res20[0] - local_58.ArrayNum;
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar18,&local_58.AllocatorInstance,&local_58.ArrayNum,
                         &local_58.ArrayMax);
      memset(local_58.AllocatorInstance.Data + iVar9,0,(longlong)iVar18);
      iVar9 = local_58.ArrayNum;
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      iVar9 = local_58.ArrayNum;
      if ((int)local_res20[0] < local_58.ArrayNum) {
        uVar16 = local_58.ArrayNum - local_res20[0];
        if ((int)(uVar16 | local_res20[0]) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          iVar9 = local_58.ArrayNum;
        }
        if (uVar16 != 0) {
          iVar18 = (iVar9 - uVar16) - uVar5;
          if (iVar18 != 0) {
            memmove(local_58.AllocatorInstance.Data + lVar19,
                    local_58.AllocatorInstance.Data + lVar19 + (int)uVar16,(longlong)iVar18);
            iVar9 = local_58.ArrayNum;
          }
          iVar9 = iVar9 - uVar16;
          local_58.ArrayNum = iVar9;
        }
      }
    }
    pFVar17 = &param_3->PayloadBytes;
    if (&pFVar17->Bytes != &local_58) {
      pFVar1 = (pFVar17->Bytes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
        iVar9 = local_58.ArrayNum;
      }
      (pFVar17->Bytes).AllocatorInstance.Data = local_58.AllocatorInstance.Data;
      (param_3->PayloadBytes).Bytes.ArrayMax = local_58.ArrayMax;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->PayloadBytes).Bytes.ArrayNum = iVar9;
    }
    FVar8 = FNameEntryId::FromValidEName((EName)local_74);
    FVar11.Number = 0;
    FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar8.Value);
    if (((FVar3 != FVar11) &&
        (FVar8 = FNameEntryId::FromValidEName((EName)local_70), FVar12.Number = 0,
        FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar8.Value),
        FVar3 != FVar12)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NamedMethod == NAME_Oodle || NamedMethod == NAME_Zlib",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Public\\LiveLinkCompression.h"
                           ,0xa0,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FVar8 = FNameEntryId::FromValidEName((EName)local_6c);
    FVar13.Number = 0;
    FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar8.Value);
    param_3->CompressionMethod = (FVar3 != FVar13) + Oodle;
    if (EVar15 == COMPRESS_BiasMemory) {
      param_3->CompressionBias = Size;
    }
    else {
      if (EVar15 == COMPRESS_BiasSpeed) {
        EVar14 = Speed;
      }
      param_3->CompressionBias = EVar14;
    }
  }
  else {
    if (2 < (byte)LogTemp._0_1_) {
      local_60 = (FName)param_1->_padding_;
      ::FName::ToString(&local_60,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    param_3->CompressionMethod = Uncompressed;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (!bVar20) {
    return true;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return true;
}

// Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadCompressionType @ 14cff23d0

UEnum * __cdecl Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadCompressionType(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkPayloadCompressionType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkPayloadCompressionType.InnerSingleton;
}

// Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkTopologyMode @ 14cff2410

UEnum * __cdecl Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkTopologyMode(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkTopologyMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkTopologyMode.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkTopologyMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkTopologyMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkClearSubject @ 14cff2450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkClearSubject(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkConnectMessage @ 14cff24d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkConnectMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkConnectMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage @ 14cff2550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkPingMessage @ 14cff25d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkPingMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkPongMessage @ 14cff2650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkPongMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData @ 14cff26d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage @ 14cff2750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage @ 14cff27d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.InnerSingleton;
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

// IMPLEMENT_MODULE_LiveLinkMessageBusFramework @ 14cff2850

void __cdecl IMPLEMENT_MODULE_LiveLinkMessageBusFramework(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompressionFlags'' @ 1504554a0

void __cdecl UE::LiveLink::Compression::_dynamic_atexit_destructor_for__CVarCompressionFlags__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompressionFlags);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompressionType'' @ 1504554c0

void __cdecl UE::LiveLink::Compression::_dynamic_atexit_destructor_for__CVarCompressionType__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompressionType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkCompressAnimData'' @ 1504554e0

void __cdecl _dynamic_atexit_destructor_for__CVarLiveLinkCompressAnimData__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLiveLinkCompressAnimData);
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLinkMessageBus'' @ 150455500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLinkMessageBus__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLinkMessageBus);
  return;
}

