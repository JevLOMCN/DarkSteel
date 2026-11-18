// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 98

// `dynamic_initializer_for_'LogAppleARKitFace'' @ 1413c84a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAppleARKitFace__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAppleARKitFace,L"LogAppleARKitFace",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAppleARKitFace__);
  return;
}

// `dynamic_initializer_for_'LogMrMesh'' @ 1413c84e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMrMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMrMesh,L"LogMrMesh",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMrMesh__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAppleARKitFaceSupport'' @ 1413c8520

void __cdecl _dynamic_initializer_for__ModuleRegistrantAppleARKitFaceSupport__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AppleARKitFaceSupport";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AppleARKitFaceSupport",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAppleARKitFaceSupportModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves'' @ 1413c8570

void __cdecl
_dynamic_initializer_for__NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves__(void)

{
  FName::FName(&NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves,L"ServerUpdateFaceCurves");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Component_Update'' @ 1413c8590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Component_Update__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Component_Update ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Component_Update>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Component_Update");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Component_Update,*pFVar1,L"Update",
               "STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Conversion'' @ 1413c8620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Conversion__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Conversion == (FThreadSafeStaticStat<FStat_STAT_FaceAR_Conversion>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Conversion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Conversion,*pFVar1,L"Conversion",
               "STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_LiveLink_BytesRecv'' @ 1413c86b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_LiveLink_BytesRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_LiveLink_BytesRecv ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_LiveLink_BytesRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_BytesRecv,*pFVar1,
               L"LiveLink Bytes Recv","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_LiveLink_BytesSent'' @ 1413c8740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_LiveLink_BytesSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_LiveLink_BytesSent ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_LiveLink_BytesSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_BytesSent,*pFVar1,
               L"LiveLink Bytes Sent","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_LiveLink_PacketsRecv'' @ 1413c87d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_LiveLink_PacketsRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_LiveLink_PacketsRecv ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_LiveLink_PacketsRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_PacketsRecv,*pFVar1,
               L"LiveLink Packets Recv","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_LiveLink_PacketsSent'' @ 1413c8860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_LiveLink_PacketsSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_LiveLink_PacketsSent ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_LiveLink_PacketsSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_PacketsSent,*pFVar1,
               L"LiveLink Packets Sent","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Local_PublishLiveLink'' @ 1413c88f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Local_PublishLiveLink__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Local_PublishLiveLink ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Local_PublishLiveLink>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Local_PublishLiveLink");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Local_PublishLiveLink,*pFVar1,
               L"Publish Local LiveLink","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_ReceiveLiveLink'' @ 1413c8980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_ReceiveLiveLink__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_ReceiveLiveLink ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_ReceiveLiveLink>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_ReceiveLiveLink");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_ReceiveLiveLink,*pFVar1,
               L"Receive LiveLink","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Remote_PublishLiveLink'' @ 1413c8a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Remote_PublishLiveLink__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Remote_PublishLiveLink ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Remote_PublishLiveLink>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Remote_PublishLiveLink");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Remote_PublishLiveLink,*pFVar1,
               L"Publish Remote LiveLink","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv'' @ 1413c8aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Total_LiveLink_BytesRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv,*pFVar1,
               L"Total LiveLink Bytes Recv","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent'' @ 1413c8b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Total_LiveLink_BytesSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent,*pFVar1,
               L"Total LiveLink Bytes Sent","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv'' @ 1413c8bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Total_LiveLink_PacketsRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv,*pFVar1,
               L"Total LiveLink Packets Recv","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent'' @ 1413c8c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FaceAR_Total_LiveLink_PacketsSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent,*pFVar1,
               L"Total LiveLink Packets Sent","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Private_AppleARKitLiveLinkConnectionSettings_h__Script_AppleARKitFaceSupport_855936706'' @ 1413c8ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Private_AppleARKitLiveLinkConnectionSettings_h__Script_AppleARKitFaceSupport_855936706__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKitFaceSupport",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Private_AppleARKitLiveLinkConnectionSettings_h__Script_AppleARKitFaceSupport_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h__Script_AppleARKitFaceSupport_1881309611'' @ 1413c8d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h__Script_AppleARKitFaceSupport_1881309611__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKitFaceSupport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h__Script_AppleARKitFaceSupport_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h__Script_AppleARKitFaceSupport_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h__Script_AppleARKitFaceSupport_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitLiveLinkSourceFactory_h__Script_AppleARKitFaceSupport_1148903151'' @ 1413c8d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitLiveLinkSourceFactory_h__Script_AppleARKitFaceSupport_1148903151__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKitFaceSupport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitLiveLinkSourceFactory_h__Script_AppleARKitFaceSupport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AppleARKitFaceSupport'' @ 1413c8db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AppleARKitFaceSupport__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x102a416a;
  local_res8[0].DeclarationsHash = 0xc17fe2bf;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AppleARKitFaceSupport,L"/Script/AppleARKitFaceSupport",
             &Z_Registration_Info_UPackage__Script_AppleARKitFaceSupport,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14d281090

void * __thiscall
FAppleARKitFaceSupportModule::_scalar_deleting_destructor_
          (FAppleARKitFaceSupportModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkSource).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FaceSupportInstance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UAppleARKitFaceMeshComponent @ 14d281310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitFaceMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.OuterSingleton;
}

// Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing @ 14d281350

UEnum * __cdecl Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing(void)

{
  if (Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.InnerSingleton,
               &Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNetQuantizeFaceCurve @ 14d281390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetQuantizeFaceCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNetQuantizeFaceCurve.InnerSingleton;
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

// Z_Construct_UPackage__Script_AppleARKitFaceSupport @ 14d281410

UPackage * __cdecl Z_Construct_UPackage__Script_AppleARKitFaceSupport(void)

{
  if (Z_Registration_Info_UPackage__Script_AppleARKitFaceSupport.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AppleARKitFaceSupport.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AppleARKitFaceSupport.OuterSingleton;
}

// EARFaceComponentTransformMixing_StaticEnum @ 14d281450

UEnum * __cdecl EARFaceComponentTransformMixing_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
    Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing,
                       (UObject *)pUVar1,L"EARFaceComponentTransformMixing");
  }
  return Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton;
}

// NewStructOps @ 14d281490

void * __cdecl Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetQuantizeFaceCurve,&UE::CoreUObject::Private::Construct<FNetQuantizeFaceCurve>,&UE::CoreUObject::Private::ConstructForTests<FNetQuantizeFaceCurve>,&UE::CoreUObject::Private::Destruct<FNetQuantizeFaceCurve>,&UE::CoreUObject::Private::NetSerialize<FNetQuantizeFaceCurve>,&UE::CoreUObject::Private::Copy<FNetQuantizeFaceCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh @ 14d281630

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount @ 14d281670

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber @ 14d2816b0

UFunction * __cdecl
Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp @ 14d2816f0

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform @ 14d281730

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves @ 14d281770

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink @ 14d2817b0

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves @ 14d2817f0

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoBind_SetBit @ 14d281830

void __cdecl
Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind @ 14d281840

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount @ 14d281880

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes @ 14d2818c0

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh @ 14d281900

UFunction * __cdecl Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes @ 14d281940

UFunction * __cdecl
Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWantsMeshUpdates_SetBit @ 14d281980

void __cdecl
Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x610) = 1;
  return;
}

// NewProp_bWantsCollision_SetBit @ 14d281990

void __cdecl
Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x611) = 1;
  return;
}

// NewProp_bAutoBindToLocalFaceMesh_SetBit @ 14d2819a0

void __cdecl
Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x612) = 1;
  return;
}

// NewProp_bFlipTrackedRotation_SetBit @ 14d2819b0

void __cdecl
Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x614) = 1;
  return;
}

// NewStructOps @ 14d281a00

void * __cdecl
Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAppleARKitLiveLinkConnectionSettings,&UE::CoreUObject::Private::Construct<FAppleARKitLiveLinkConnectionSettings>,&UE::CoreUObject::Private::ConstructForTests<FAppleARKitLiveLinkConnectionSettings>,&UE::CoreUObject::Private::Destruct<FAppleARKitLiveLinkConnectionSettings>,&UE::CoreUObject::Private::Copy<FAppleARKitLiveLinkConnectionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAppleARKitLiveLinkSourceFactory @ 14d281a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitLiveLinkSourceFactory(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitLiveLinkSourceFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.OuterSingleton;
}

// operator_new<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> @ 14d281b60

void * __cdecl
operator_new<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xfba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = param_2->ArrayNum;
  if (uVar3 == param_2->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x102,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = uVar3 + 1;
  uVar5 = 0;
  if ((int)uVar3 < (int)(uVar3 + 1)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 2;
}

// DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int> @ 14d281ee0

void __cdecl
DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
          (FFaceTrackingFrame *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->BlendShapes).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (puVar1 + -8);
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UAppleARKitFaceMeshComponent> @ 14d282410

void __cdecl InternalConstructor<UAppleARKitFaceMeshComponent>(FObjectInitializer *param_1)

{
  if ((UAppleARKitFaceMeshComponent *)param_1->Obj != (UAppleARKitFaceMeshComponent *)0x0) {
    UAppleARKitFaceMeshComponent::UAppleARKitFaceMeshComponent
              ((UAppleARKitFaceMeshComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAppleARKitLiveLinkSourceFactory> @ 14d282430

void __cdecl InternalConstructor<UAppleARKitLiveLinkSourceFactory>(FObjectInitializer *param_1)

{
  ULiveLinkSourceFactory *this;
  
  this = (ULiveLinkSourceFactory *)param_1->Obj;
  if (this != (ULiveLinkSourceFactory *)0x0) {
    ULiveLinkSourceFactory::ULiveLinkSourceFactory(this,param_1);
    *(undefined ***)this = &___7UAppleARKitLiveLinkSourceFactory__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAppleARKitFaceMeshComponent> @ 14d282460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitFaceMeshComponent>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UProceduralMeshComponent *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UAppleARKitFaceMeshComponent::GetPrivateStaticClass();
  this = (UProceduralMeshComponent *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UProceduralMeshComponent *)0x0) {
    UProceduralMeshComponent::UProceduralMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UAppleARKitFaceMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAppleARKitFaceMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAppleARKitFaceMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UAppleARKitFaceMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UAppleARKitFaceMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UAppleARKitFaceMeshComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UAppleARKitFaceMeshComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitLiveLinkSourceFactory> @ 14d282630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitLiveLinkSourceFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitLiveLinkSourceFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkSourceFactory::ULiveLinkSourceFactory((ULiveLinkSourceFactory *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAppleARKitLiveLinkSourceFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<FAppleARKitLiveLinkSource,1,FAppleARKitLiveLinkConnectionSettings_const_&> @ 14d2826e0

TSharedRef<FAppleARKitLiveLinkSource,1> * __cdecl
MakeShared<FAppleARKitLiveLinkSource,1,FAppleARKitLiveLinkConnectionSettings_const_&>
          (TSharedRef<FAppleARKitLiveLinkSource,1> *__return_storage_ptr__,
          FAppleARKitLiveLinkConnectionSettings *param_1)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar2 = operator_new(0xb0);
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleARKitLiveLinkSource___00_SharedPointerInternals__6B_
    ;
    aVar1 = (atomic<int>)param_1->Port;
    pTVar2[1]._padding_ =
         (longlong)&FAppleARKitLiveLinkSource::_vftable__for__IARKitBlendShapePublisher__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &FAppleARKitLiveLinkSource::_vftable__for__ILiveLinkSource__;
    pTVar2[2]._padding_ = 0;
    pTVar2[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[4]._padding_ = 0;
    pTVar2[5]._padding_ = 0;
    pTVar2[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[7]._padding_ = 0;
    pTVar2[3]._padding_ = 0;
    pTVar2[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[7].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar2[8]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar2[8]._padding_ + 4) = 0;
    pTVar2[9]._padding_ = 0;
    pTVar2[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[10]._padding_ = 0;
    pTVar2[10].SharedReferenceCount = aVar1;
    pTVar3 = pTVar2;
  }
  TSharedRef<FAppleARKitLiveLinkSource,1>::TSharedRef<FAppleARKitLiveLinkSource,1>
            (__return_storage_ptr__,(FAppleARKitLiveLinkSource *)(pTVar3 + 1),pTVar3);
  return __return_storage_ptr__;
}

// MakeTDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> @ 14d2827c0

TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// StaticEnum<enum_EARFaceComponentTransformMixing> @ 14d282870

UEnum * __cdecl StaticEnum<enum_EARFaceComponentTransformMixing>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
    Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing,
                       (UObject *)pUVar1,L"EARFaceComponentTransformMixing");
  }
  return Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton;
}

// operator>> @ 14d284450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

FNboSerializeFromBuffer * __cdecl operator>>(FNboSerializeFromBuffer *param_1,FString *param_2)

{
  uint uVar1;
  uchar uVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  ulonglong uVar6;
  size_t sVar7;
  ForAnyElementType FVar8;
  uchar *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uchar *_Str;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_188 [32];
  FScriptContainerElement local_168 [8];
  uchar auStack_160 [248];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  puVar10 = auStack_188;
  puVar11 = auStack_188;
  local_48 = __security_cookie.value ^ (ulonglong)local_168;
  _Str = (uchar *)0x0;
  iVar14 = 0;
  if (param_1->bHasOverflowed == false) {
    iVar13 = param_1->CurrentOffset + 4;
    if (param_1->NumBytes < iVar13) goto LAB_14d2844fc;
    puVar9 = param_1->Data + param_1->CurrentOffset;
    uVar2 = *puVar9;
    iVar14 = CONCAT31(CONCAT21(CONCAT11(uVar2,puVar9[1]),puVar9[2]),puVar9[3]);
    param_1->CurrentOffset = iVar13;
    bVar3 = false;
    bVar5 = false;
    if (-1 < (char)uVar2) goto LAB_14d284502;
LAB_14d2844d4:
    bVar3 = bVar5;
    bVar5 = false;
  }
  else {
LAB_14d2844fc:
    param_1->bHasOverflowed = true;
    bVar3 = true;
LAB_14d284502:
    iVar13 = param_1->CurrentOffset;
    bVar5 = bVar3;
    if (param_1->NumBytes - iVar13 < iVar14) goto LAB_14d2844d4;
    bVar5 = true;
  }
  if ((bVar3) || (!bVar5)) {
    param_1->bHasOverflowed = true;
    goto LAB_14d28462f;
  }
  if (iVar14 < 1) {
    FString::Empty(param_2);
    puVar11 = auStack_188;
    goto LAB_14d28462f;
  }
  if (iVar14 != -1) {
    uVar6 = (longlong)(iVar14 + 0x10) + 0xf;
    if (uVar6 <= (ulonglong)(longlong)(iVar14 + 0x10)) {
      uVar6 = 0xffffffffffffff0;
    }
    puVar10 = auStack_188 + -(uVar6 & 0xfffffffffffffff0);
    _Str = auStack_160 + -(uVar6 & 0xfffffffffffffff0);
  }
  puVar9 = param_1->Data;
  *(undefined8 *)(puVar10 + -8) = 0x14d28455c;
  memcpy(_Str,puVar9 + iVar13,(longlong)iVar14);
  _Str[iVar14] = '\0';
  local_68.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  else {
    *(undefined8 *)(puVar10 + -8) = 0x14d284578;
    sVar7 = strlen((char *)_Str);
    *(undefined8 *)(puVar10 + -8) = 0x14d284588;
    local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar7);
    uVar1 = local_58 + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14d2845ad;
      }
    }
    else {
LAB_14d2845ad:
      *(undefined8 *)(puVar10 + -8) = 0x14d2845c1;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,2);
    }
    FVar8.Data = local_168;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = local_68.Data;
    }
    local_60 = FVar8.Data;
    *(undefined8 *)(puVar10 + -8) = 0x14d2845e8;
    UE::Core::Private::Convert((wchar_t *)FVar8.Data,uVar1,_Str,(int)sVar7 + 1);
  }
  pFVar4 = local_60;
  *(undefined8 *)(puVar10 + -8) = 0x14d28460a;
  FString::operator=(param_2,(wchar_t *)pFVar4);
  FVar8.Data = local_68.Data;
  param_1->CurrentOffset = param_1->CurrentOffset + iVar14;
  puVar11 = puVar10;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(puVar10 + -8) = 0x14d28461f;
    FMemory::Free(FVar8.Data);
  }
LAB_14d28462f:
  *(undefined8 *)(puVar11 + -8) = 0x14d284641;
  return param_1;
}

// operator<< @ 14d284670

FNboSerializeToBuffer * __cdecl operator<<(FNboSerializeToBuffer *param_1,uint *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNboSerializeToBuffer *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1->bHasOverflowed == false) {
    uVar4 = param_1->NumBytes;
    uVar7 = (param_1->Data).ArrayNum;
    if (uVar4 + 4 <= uVar7) {
      FVar1 = *(FScriptContainerElement *)((longlong)param_2 + 3);
      uVar6 = 0;
      if ((int)uVar4 < (int)uVar7) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FNboSerializeToBuffer *)(*pcVar2)();
          return pFVar5;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar4] = FVar1;
      uVar7 = param_1->NumBytes + 1;
      FVar1 = *(FScriptContainerElement *)((longlong)param_2 + 2);
      uVar4 = 0;
      if ((int)uVar7 < (param_1->Data).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FNboSerializeToBuffer *)(*pcVar2)();
          return pFVar5;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar7] = FVar1;
      uVar7 = param_1->NumBytes + 2;
      FVar1 = *(FScriptContainerElement *)((longlong)param_2 + 1);
      uVar4 = 0;
      if ((int)uVar7 < (param_1->Data).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FNboSerializeToBuffer *)(*pcVar2)();
          return pFVar5;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar7] = FVar1;
      uVar7 = param_1->NumBytes + 3;
      FVar1 = *(FScriptContainerElement *)param_2;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->Data).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FNboSerializeToBuffer *)(*pcVar2)();
          return pFVar5;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar7] = FVar1;
      param_1->NumBytes = param_1->NumBytes + 4;
      return param_1;
    }
  }
  param_1->bHasOverflowed = true;
  return param_1;
}

// operator<< @ 14d284860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNboSerializeToBuffer * __cdecl operator<<(FNboSerializeToBuffer *param_1,FString *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  size_t sVar5;
  FNboSerializeToBuffer *pFVar6;
  wchar_t *_Str;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  uint local_e8 [4];
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_58.Data = (FScriptContainerElement *)0x0;
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
LAB_14d2848b9:
    sVar5 = wcslen(_Str);
    local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar5);
    uVar1 = local_48 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14d2848f8;
      }
    }
    else {
LAB_14d2848f8:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,1);
    }
    local_50 = local_d8;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((uchar *)local_50,uVar1,_Str,(int)sVar5 + 1);
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14d2848b9;
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
  }
  uVar1 = local_48;
  local_e8[0] = local_48;
  operator<<(param_1,local_e8);
  _Src = local_50;
  if (param_1->bHasOverflowed == false) {
    uVar8 = param_1->NumBytes;
    uVar2 = (param_1->Data).ArrayNum;
    if (uVar8 + uVar1 <= uVar2) {
      if (0 < (int)uVar1) {
        uVar7 = 0;
        if ((int)uVar8 < (int)uVar2) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_f8 = (longlong)(int)uVar8, local_f0 = (longlong)(int)uVar2,
           bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNboSerializeToBuffer *)(*pcVar3)();
          return pFVar6;
        }
        memcpy((param_1->Data).AllocatorInstance.Data + (int)uVar8,_Src,(longlong)(int)uVar1);
        param_1->NumBytes = param_1->NumBytes + uVar1;
      }
      goto LAB_14d2849e8;
    }
  }
  param_1->bHasOverflowed = true;
LAB_14d2849e8:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return param_1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d284a3c

/* [thunk]:public: virtual void * __ptr64 __cdecl FAppleARKitFaceSupport::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAppleARKitFaceSupport::_vector_deleting_destructor__adjustor_8__
          (FAppleARKitFaceSupport *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAppleARKitFaceSupport *)(this[-1].AnchorIdLock.CriticalSection.Opaque3 + 2),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d284a4c

/* [thunk]:public: virtual void * __ptr64 __cdecl FAppleARKitLiveLinkSource::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAppleARKitLiveLinkSource::_vector_deleting_destructor__adjustor_8__
          (FAppleARKitLiveLinkSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAppleARKitLiveLinkSource *)&this[-1].ConnectionSettings,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d284a5c

/* [thunk]:public: virtual void * __ptr64 __cdecl ILiveLinkSourceARKit::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
ILiveLinkSourceARKit::_vector_deleting_destructor__adjustor_8__
          (ILiveLinkSourceARKit *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ILiveLinkSourceARKit *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14d284a6c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitFaceMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitFaceMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UAppleARKitFaceMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitFaceMeshComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14d284a80

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitFaceMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitFaceMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UAppleARKitFaceMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitFaceMeshComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14d284a94

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitFaceMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitFaceMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UAppleARKitFaceMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitFaceMeshComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d284aa8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitFaceMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitFaceMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UAppleARKitFaceMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitFaceMeshComponent *)
                      (this[-1].LocalToWorldTransform.Scale3D.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 14d284ab8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitFaceMeshComponent::`vector deleting
   destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitFaceMeshComponent::_vector_deleting_destructor__adjustor_1424__
          (UAppleARKitFaceMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitFaceMeshComponent *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d284ad0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284b00

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitFaceSupportModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAppleARKitFaceSupportModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284b30

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284b70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284bb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleARKitFaceSupport,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAppleARKitFaceSupport,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284bf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleARKitLiveLinkSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAppleARKitLiveLinkSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284c30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAppleARKitLiveLinkSourceFactory,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAppleARKitLiveLinkSourceFactory,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284c70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitLiveLinkFileWriter,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkFileWriter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAppleARKitLiveLinkFileWriter,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkFileWriter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284cb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitLiveLinkSource,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkSource>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAppleARKitLiveLinkSource,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkSource>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284cf0

void * __thiscall
FAppleARKitFaceSupport::_scalar_deleting_destructor_(FAppleARKitFaceSupport *this,uint param_1)

{
  ~FAppleARKitFaceSupport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284d30

void * __thiscall
FAppleARKitLiveLinkFileWriter::_scalar_deleting_destructor_
          (FAppleARKitLiveLinkFileWriter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
            ((FFaceTrackingFrame *)(this->FrameHistory).AllocatorInstance.Data,
             (this->FrameHistory).ArrayNum);
  pFVar1 = (this->FrameHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileExtension).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284dc0

void * __thiscall
FAppleARKitLiveLinkFileWriterCsv::_scalar_deleting_destructor_
          (FAppleARKitLiveLinkFileWriterCsv *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  pFVar1 = (this->CsvFrameHeader).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__FSelfRegisteringExec__;
  this->_padding_ =
       (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
            ((FFaceTrackingFrame *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284e70

void * __thiscall
FAppleARKitLiveLinkFileWriterJson::_scalar_deleting_destructor_
          (FAppleARKitLiveLinkFileWriterJson *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FString,int>
            ((FString *)(this->BlendShapeJsonKeyNames).AllocatorInstance.Data,
             (this->BlendShapeJsonKeyNames).ArrayNum);
  pFVar1 = (this->BlendShapeJsonKeyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__FSelfRegisteringExec__;
  this->_padding_ =
       (longlong)&FAppleARKitLiveLinkFileWriter::_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
            ((FFaceTrackingFrame *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d284f30

void * __thiscall
FAppleARKitLiveLinkRemoteListener::_scalar_deleting_destructor_
          (FAppleARKitLiveLinkRemoteListener *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ISocketSubsystem *pIVar6;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemoteListener__6B_;
  if (this->RecvSocket != (FSocket *)0x0) {
    (**(code **)(this->RecvSocket->_padding_ + 0x10))();
    if (GIsRequestingExit == false) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pIVar6 = ISocketSubsystem::Get(&local_res8);
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,this->RecvSocket);
    }
  }
  pTVar3 = (this->Source).WeakReferenceCount.ReferenceController;
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
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BlendShapes).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->BlendShapes);
  pFVar5 = (this->RecvBuffer).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d285010

void * __thiscall
FAppleARKitLiveLinkRemotePublisher::_scalar_deleting_destructor_
          (FAppleARKitLiveLinkRemotePublisher *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemotePublisher__6B_;
  if (this->SendSocket != (FSocket *)0x0) {
    (**(code **)(this->SendSocket->_padding_ + 0x10))();
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pIVar2 = ISocketSubsystem::Get(&local_res8);
    (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,this->SendSocket);
  }
  pFVar1 = (this->SendBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemoteIp).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2850a0

void * __thiscall
FAppleARKitLiveLinkSource::_scalar_deleting_destructor_
          (FAppleARKitLiveLinkSource *this,uint param_1)

{
  ~FAppleARKitLiveLinkSource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2850e0

void * __thiscall
ILiveLinkSourceARKit::_scalar_deleting_destructor_(ILiveLinkSourceARKit *this,uint param_1)

{
  *(undefined ***)&this->field_0x8 = &___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d285120

void * __thiscall
SAppleARKitLiveLinkSourceFactory::_scalar_deleting_destructor_
          (SAppleARKitLiveLinkSourceFactory *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnConnectionSettingsAccepted);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d285190

void * __thiscall
UAppleARKitFaceMeshComponent::_scalar_deleting_destructor_
          (UAppleARKitFaceMeshComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UAppleARKitFaceMeshComponent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkSource).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlendShapes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->BlendShapes);
  pFVar2 = (this->RemoteCurves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UProceduralMeshComponent::~UProceduralMeshComponent((UProceduralMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x710);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2852a0

void * __thiscall
UAppleARKitLiveLinkSourceFactory::_scalar_deleting_destructor_
          (UAppleARKitLiveLinkSourceFactory *this,uint param_1)

{
  *(undefined ***)this = &___7UAppleARKitLiveLinkSourceFactory__6B_;
  ULiveLinkSourceFactory::~ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitFaceMeshComponent @ 14d286e80

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitFaceMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitFaceSupport_init @ 14d286e90

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitFaceSupport_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitLiveLinkConnectionSettings @ 14d286ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitLiveLinkConnectionSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitLiveLinkSourceFactory @ 14d286eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitLiveLinkSourceFactory(void)

{
  return;
}

// Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister @ 14d28cff0

UClass * __cdecl Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitFaceSupport",L"AppleARKitFaceMeshComponent",
               &Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton,
               UAppleARKitFaceMeshComponent::StaticRegisterNativesUAppleARKitFaceMeshComponent,0x710
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitFaceMeshComponent>,
               InternalVTableHelperCtorCaller<UAppleARKitFaceMeshComponent>,local_res8,
               UProceduralMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitLiveLinkSourceFactory_NoRegister @ 14d28d0b0

UClass * __cdecl Z_Construct_UClass_UAppleARKitLiveLinkSourceFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitFaceSupport",L"AppleARKitLiveLinkSourceFactory",
               &Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton,
               UAppleARKitLiveLinkSourceFactory::
               StaticRegisterNativesUAppleARKitLiveLinkSourceFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitLiveLinkSourceFactory>,
               InternalVTableHelperCtorCaller<UAppleARKitLiveLinkSourceFactory>,local_res8,
               ULiveLinkSourceFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings @ 14d28d170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.InnerSingleton;
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

// IMPLEMENT_MODULE_AppleARKitFaceSupport @ 14d28db50

void __cdecl IMPLEMENT_MODULE_AppleARKitFaceSupport(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAppleARKitFace'' @ 150455c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAppleARKitFace__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAppleARKitFace);
  return;
}

// `dynamic_atexit_destructor_for_'LogMrMesh'' @ 150455c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMrMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMrMesh);
  return;
}

