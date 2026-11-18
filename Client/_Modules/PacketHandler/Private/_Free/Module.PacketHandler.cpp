// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PacketHandler
// Functions: 82

// `dynamic_initializer_for_'CVarNetPacketHandlerCRCDump'' @ 140f94050

void __cdecl _dynamic_initializer_for__CVarNetPacketHandlerCRCDump__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPacketHandlerCRCDump,L"net.PacketHandlerCRCDump",&GPacketHandlerCRCDump,
             L"Enables or disables dumping of packet CRC\'s for every HandlerComponent, Incoming and Outgoing, for debugging."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPacketHandlerCRCDump__);
  return;
}

// `dynamic_initializer_for_'CVarNetPacketHandlerTimeguardLimit'' @ 140f940a0

void __cdecl _dynamic_initializer_for__CVarNetPacketHandlerTimeguardLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPacketHandlerTimeguardLimit,L"net.PacketHandlerTimeguardLimit",
             &GPacketHandlerTimeguardLimit,
             L"Sets the maximum number of HandlerComponent timeguard logs.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPacketHandlerTimeguardLimit__);
  return;
}

// `dynamic_initializer_for_'CVarNetPacketHandlerTimeguardThresholdMS'' @ 140f940f0

void __cdecl _dynamic_initializer_for__CVarNetPacketHandlerTimeguardThresholdMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPacketHandlerTimeguardThresholdMS,L"net.PacketHandlerTimeguardThresholdMS",
             &GPacketHandlerTimeguardThresholdMS,
             L"Threshold in milliseconds for the HandlerComponent timeguard, Incoming and Outgoing."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPacketHandlerTimeguardThresholdMS__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPacketHandler'' @ 140f94140

void __cdecl _dynamic_initializer_for__ModuleRegistrantPacketHandler__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PacketHandler";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PacketHandler",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FPacketHandlerComponentModuleInterface>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'PacketHandlerLog'' @ 140f94190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__PacketHandlerLog__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&PacketHandlerLog,L"PacketHandlerLog",Log,All);
  atexit(_dynamic_atexit_destructor_for__PacketHandlerLog__);
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_PacketHandler_Incoming_Internal'' @ 140f941d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_PacketHandler_Incoming_Internal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_PacketHandler_Incoming_Internal ==
      (FThreadSafeStaticStat<FStat_Stat_PacketHandler_Incoming_Internal>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_PacketHandler_Incoming_Internal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PacketHandler_Incoming_Internal,*pFVar1,
               L"PacketHandler Incoming_Internal","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_PacketHandler_Outgoing_Internal'' @ 140f94260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_PacketHandler_Outgoing_Internal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_PacketHandler_Outgoing_Internal ==
      (FThreadSafeStaticStat<FStat_Stat_PacketHandler_Outgoing_Internal>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_PacketHandler_Outgoing_Internal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PacketHandler_Outgoing_Internal,*pFVar1,
               L"PacketHandler Outgoing_Internal","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h__Script_PacketHandler_4041569099'' @ 140f942f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h__Script_PacketHandler_4041569099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PacketHandler",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h__Script_PacketHandler_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h__Script_PacketHandler_2333455749'' @ 140f94330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h__Script_PacketHandler_2333455749__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PacketHandler",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h__Script_PacketHandler_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_PacketHandler'' @ 140f94370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_PacketHandler__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xfbf9abfb;
  local_res8[0].DeclarationsHash = 0x98c2e732;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_PacketHandler,L"/Script/PacketHandler",
             &Z_Registration_Info_UPackage__Script_PacketHandler,local_res8);
  return;
}

// Z_Construct_UClass_UPacketHandlerProfileConfig @ 14463d260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPacketHandlerProfileConfig(void)

{
  if (Z_Registration_Info_UClass_UPacketHandlerProfileConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPacketHandlerProfileConfig.OuterSingleton,
               &Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPacketHandlerProfileConfig.OuterSingleton;
}

// Z_Construct_UPackage__Script_PacketHandler @ 14463d2a0

UPackage * __cdecl Z_Construct_UPackage__Script_PacketHandler(void)

{
  if (Z_Registration_Info_UPackage__Script_PacketHandler.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_PacketHandler.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_PacketHandler.OuterSingleton;
}

// Z_Construct_UClass_UHandlerComponentFactory @ 14463d390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHandlerComponentFactory(void)

{
  if (Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton,
               &Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton;
}

// DestructItems<TSharedPtr<HandlerComponent,1>,int> @ 14463d3d0

void __cdecl
DestructItems<TSharedPtr<HandlerComponent,1>,int>
          (TSharedPtr<HandlerComponent,1> *param_1,int param_2)

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

// IntCastLog<int,__int64> @ 14463d410

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl IntCastLog<int,__int64>(long64 param_1)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  iVar1 = (int)param_1;
  if (param_1 != iVar1) {
    `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((2 < (byte)PacketHandlerLog._0_1_) && (param_1 != iVar1)) {
    UE::Logging::Private::BasicLog<3>
              (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
               (FLogCategoryBase *)&PacketHandlerLog);
  }
  return iVar1;
}

// InternalConstructor<UHandlerComponentFactory> @ 14463d470

void __cdecl InternalConstructor<UHandlerComponentFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UHandlerComponentFactory__6B_;
  }
  return;
}

// InternalConstructor<UPacketHandlerProfileConfig> @ 14463d4a0

void __cdecl InternalConstructor<UPacketHandlerProfileConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPacketHandlerProfileConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UHandlerComponentFactory> @ 14463d4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHandlerComponentFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHandlerComponentFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHandlerComponentFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPacketHandlerProfileConfig> @ 14463d590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPacketHandlerProfileConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPacketHandlerProfileConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPacketHandlerProfileConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UHandlerComponentFactory> @ 14463d650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UHandlerComponentFactory * __cdecl
NewObject<UHandlerComponentFactory>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = UHandlerComponentFactory::StaticClass();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UHandlerComponentFactory *)pUVar2;
}

// HandlerComponent @ 14463d750

HandlerComponent * __thiscall
HandlerComponent::HandlerComponent(HandlerComponent *this,FName param_1)

{
  this->Name = param_1;
  this->_padding_ = (longlong)&___7HandlerComponent__6B_;
  this->Handler = (PacketHandler *)0x0;
  this->State = UnInitialized;
  this->MaxOutgoingBits = 0;
  this->bRequiresHandshake = false;
  this->bRequiresReliability = false;
  this->bActive = false;
  this->bInitialized = false;
  return this;
}

// HandlerComponent @ 14463d780

HandlerComponent * __thiscall HandlerComponent::HandlerComponent(HandlerComponent *this)

{
  this->_padding_ = (longlong)&___7HandlerComponent__6B_;
  this->Handler = (PacketHandler *)0x0;
  this->State = UnInitialized;
  this->MaxOutgoingBits = 0;
  this->bRequiresHandshake = false;
  this->bRequiresReliability = false;
  this->bActive = false;
  this->bInitialized = false;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  return this;
}

// PacketHandler @ 14463d7b0

PacketHandler * __thiscall PacketHandler::PacketHandler(PacketHandler *this,FDDoSDetection *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  PacketHandler *pPVar10;
  int iVar11;
  longlong lVar12;
  
  this->bRawSend = '\0';
  this->bConnectionlessHandler = '\0';
  this->bBeganHandshaking = '\0';
  pTVar9 = (TNode *)0x0;
  this->DDoS = param_1;
  this->MaxPacketBits = 0;
  this->Mode = Client;
  this->State = Uninitialized;
  *(undefined8 *)&(this->LowLevelSendDel).field_0x10 = 0;
  *(undefined8 *)&this->LowLevelSendDel = 0;
  *(undefined8 *)&(this->LowLevelSendDel).field_0x8 = 0;
  *(undefined8 *)&(this->HandshakeCompleteDel).field_0x10 = 0;
  *(undefined8 *)&this->HandshakeCompleteDel = 0;
  *(undefined8 *)&(this->HandshakeCompleteDel).field_0x8 = 0;
  *(undefined8 *)&this->AddHandlerDel = 0;
  *(undefined8 *)&(this->AddHandlerDel).field_0x8 = 0;
  *(undefined4 *)&(this->AddHandlerDel).field_0x10 = 0;
  FBitWriter::FBitWriter(&this->OutgoingPacket,0x2000,false);
  FBitReader::FBitReader(&this->IncomingPacket,(uchar *)0x0,0);
  (this->HandlerComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HandlerComponents).ArrayNum = 0;
  (this->HandlerComponents).ArrayMax = 0;
  (this->EncryptionComponent).Object = (FEncryptionComponent *)0x0;
  (this->EncryptionComponent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BufferedPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedPackets).ArrayNum = 0;
  (this->BufferedPackets).ArrayMax = 0;
  pTVar7 = ::operator_new(0x10);
  pTVar8 = pTVar9;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    pTVar7->Item = (BufferedPacket *)0x0;
    pTVar7->NextNode = (TNode *)0x0;
    pTVar8 = pTVar7;
  }
  (this->QueuedPackets).Tail = pTVar8;
  (this->QueuedPackets).Head = pTVar8;
  pTVar7 = ::operator_new(0x10);
  pTVar8 = pTVar9;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    pTVar7->Item = (BufferedPacket *)0x0;
    pTVar7->NextNode = (TNode *)0x0;
    pTVar8 = pTVar7;
  }
  (this->QueuedRawPackets).Tail = pTVar8;
  (this->QueuedRawPackets).Head = pTVar8;
  pTVar7 = ::operator_new(0x10);
  pTVar8 = pTVar9;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    pTVar7->Item = (BufferedPacket *)0x0;
    pTVar7->NextNode = (TNode *)0x0;
    pTVar8 = pTVar7;
  }
  (this->QueuedHandlerPackets).Tail = pTVar8;
  (this->QueuedHandlerPackets).Head = pTVar8;
  (this->BufferedConnectionlessPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedConnectionlessPackets).ArrayNum = 0;
  (this->BufferedConnectionlessPackets).ArrayMax = 0;
  pTVar8 = ::operator_new(0x10);
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    pTVar8->Item = (BufferedPacket *)0x0;
    pTVar8->NextNode = (TNode *)0x0;
    pTVar9 = pTVar8;
  }
  (this->QueuedConnectionlessPackets).Tail = pTVar9;
  (this->QueuedConnectionlessPackets).Head = pTVar9;
  (this->ReliabilityComponent).Object = (ReliabilityHandlerComponent *)0x0;
  (this->ReliabilityComponent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Provider).Object = (IAnalyticsProvider *)0x0;
  (this->Provider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Aggregator).Object = (FNetAnalyticsAggregator *)0x0;
  (this->Aggregator).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OutgoingPacket).bAllowResize = true;
  lVar3 = (this->OutgoingPacket).Max;
  lVar12 = (this->OutgoingPacket).Num + 1;
  if (lVar3 < lVar12) {
    lVar3 = lVar3 * 2;
    piVar2 = &(this->OutgoingPacket).Buffer.ArrayNum;
    if (lVar12 < lVar3) {
      lVar12 = lVar3;
    }
    (this->OutgoingPacket).Max = lVar12;
    iVar11 = (int)(lVar12 + 7 >> 3) - *piVar2;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar11,&(this->OutgoingPacket).Buffer.AllocatorInstance,piVar2,
                       &(this->OutgoingPacket).Buffer.ArrayMax);
    memset((this->OutgoingPacket).Buffer.AllocatorInstance.Data + iVar6,0,(longlong)iVar11);
    if (((this->OutgoingPacket).Max + 7 >> 3 != (longlong)*piVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Max+7)>>3== Buffer.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                           ,0xa5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pPVar10 = (PacketHandler *)(*pcVar4)();
      return pPVar10;
    }
  }
  return this;
}

// ~BufferedPacket @ 14463daf0

void __thiscall BufferedPacket::~BufferedPacket(BufferedPacket *this)

{
  operator_delete__(this->Data);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Address).SharedReferenceCount.ReferenceController);
  return;
}

// ~HandlerComponent @ 14463db20

void __thiscall HandlerComponent::~HandlerComponent(HandlerComponent *this)

{
  this->_padding_ = (longlong)&___7HandlerComponent__6B_;
  return;
}

// operator() @ 14463dbf0

bool __thiscall
`PacketHandler::AddHandler'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<HandlerComponent,1> *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FVar1 = *(FName *)(*(longlong *)this + 0x1c);
  if (param_1->Object == (HandlerComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return param_1->Object->Name == FVar1;
}

// `scalar_deleting_destructor' @ 14463dc80

void * __thiscall
HandlerComponent::_scalar_deleting_destructor_(HandlerComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7HandlerComponent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14463dcc0

void * __thiscall
UHandlerComponentFactory::_scalar_deleting_destructor_(UHandlerComponentFactory *this,uint param_1)

{
  *(undefined ***)this = &___7UHandlerComponentFactory__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14463dd20

void * __thiscall
UPacketHandlerProfileConfig::_scalar_deleting_destructor_
          (UPacketHandlerProfileConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPacketHandlerProfileConfig__6B_;
  DestructItems<FString,int>
            ((FString *)(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  pFVar1 = (this->Components).AllocatorInstance.Data;
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

// AddHandler @ 14463dda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSharedPtr<HandlerComponent,1> * __thiscall
PacketHandler::AddHandler
          (PacketHandler *this,TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,
          FString *param_1,bool param_2)

{
  int *piVar1;
  TArray<TSharedPtr<HandlerComponent,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  wchar_t wVar3;
  FName FVar4;
  HandlerComponent *pHVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  PacketHandler *pPVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TSharedPtr<HandlerComponent,1> *pTVar13;
  size_t sVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  FName *pFVar17;
  UPackage *pUVar18;
  UClass *pUVar19;
  FModuleManager *this_00;
  IModuleInterface *pIVar20;
  ForAnyElementType FVar21;
  longlong *plVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  ulonglong uVar26;
  wchar_t *pwVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_238 [32];
  FString local_1e0;
  FString local_1d0;
  TSharedPtr<HandlerComponent,1> *local_1c0;
  PacketHandler *local_1b8;
  FString local_1b0;
  FName local_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined8 uStack_180;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FString local_168;
  FName local_158;
  FName local_150;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  undefined1 local_118 [8];
  TReferenceControllerBase<1> *local_110;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *local_100;
  FString local_f8;
  FReadAccessScope local_e8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  ulonglong uVar25;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar25 = 0;
  __return_storage_ptr__->Object = (HandlerComponent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_1->Data).ArrayNum < 2) {
    return __return_storage_ptr__;
  }
  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.Data.ArrayNum = 0;
  local_1e0.Data.ArrayMax = 0;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
  uVar26 = uVar25;
  local_1c0 = __return_storage_ptr__;
  local_1b8 = this;
  while( true ) {
    uVar24 = (uint)uVar25;
    iVar11 = (param_1->Data).ArrayNum;
    iVar10 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar10 = 0;
    }
    iVar12 = 0;
    if (iVar10 <= (int)uVar24) break;
    if ((((iVar11 == 0) || ((int)uVar24 < 0)) || (iVar11 + -1 <= (int)uVar24)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
      return pTVar13;
    }
    wVar3 = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + uVar26 * 2);
    if (wVar3 == L'(') {
      while( true ) {
        iVar11 = (param_1->Data).ArrayNum;
        uVar24 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar24;
        uVar26 = uVar26 + 1;
        iVar10 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar10 = iVar12;
        }
        if (iVar10 <= (int)uVar24) break;
        if ((((iVar11 == 0) || ((int)uVar24 < 0)) || (iVar11 + -1 <= (int)uVar24)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
          return pTVar13;
        }
        wVar3 = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + uVar26 * 2);
        if (wVar3 == L')') break;
        ::FString::AppendChar(&local_1d0,wVar3);
      }
    }
    else if (wVar3 != L' ') {
      ::FString::AppendChar(&local_1e0,wVar3);
    }
    uVar25 = (ulonglong)(uVar24 + 1);
    uVar26 = uVar26 + 1;
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    FVar21.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"ReliabilityHandlerComponent");
  if (iVar11 == 0) {
    if (2 < (byte)PacketHandlerLog._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
    }
    goto LAB_14463e2a4;
  }
  iVar11 = ::FString::Find(&local_1e0,L".",1,IgnoreCase,FromStart,-1);
  if (iVar11 == -1) {
    FModuleManager::Get();
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_1e0.Data.ArrayNum != 0) {
      FVar21.Data = local_1e0.Data.AllocatorInstance.Data;
    }
    pFVar17 = ::FName::FName(&local_150,(wchar_t *)FVar21.Data);
    FVar4 = *pFVar17;
    this_00 = FModuleManager::Get();
    pIVar20 = FModuleManager::LoadModule(this_00,FVar4,None);
    if (pIVar20 != (IModuleInterface *)0x0) {
      pTVar13 = (TSharedPtr<HandlerComponent,1> *)
                (**(code **)((longlong)*pIVar20 + 0x40))(pIVar20,local_108,&local_1d0);
      if (__return_storage_ptr__ != pTVar13) {
        __return_storage_ptr__->Object = pTVar13->Object;
        pTVar13->Object = (HandlerComponent *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar13->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
    }
    if (__return_storage_ptr__->Object == (HandlerComponent *)0x0) {
      if (2 < (byte)PacketHandlerLog._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
      }
      goto LAB_14463e23c;
    }
  }
  else {
    ::FString::RightChop(&local_1e0,&local_168,iVar11 + 1);
    ::FString::ConcatFC(&local_1b0,&local_168,L"_Singleton");
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Data.ArrayNum == 0) {
      local_198 = (FScriptContainerElement *)0x15060d16c;
LAB_14463dfbf:
      sVar14 = wcslen((wchar_t *)local_198);
      iStack_190 = (int)sVar14;
    }
    else {
      local_198 = local_1b0.Data.AllocatorInstance.Data;
      iStack_190 = iVar12;
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14463dfbf;
    }
    pUVar15 = UHandlerComponentFactory::StaticClass();
    local_148._12_4_ = uStack_18c;
    local_148.Size = iStack_190;
    local_148.DataPtr = (wchar_t *)local_198;
    pUVar16 = StaticFindFirstObject
                        (pUVar15,&local_148,EnsureIfAmbiguous|NativeFirst,NoLogging,(wchar_t *)0x0);
    if (pUVar16 == (UObject *)0x0) {
      uStack_180._0_4_ = 0;
      uStack_180._4_4_ = 0;
      local_188 = (wchar_t *)0x0;
      if (local_1e0.Data.ArrayNum == 0) {
        local_178 = (FScriptContainerElement *)0x15060d16c;
LAB_14463e024:
        sVar14 = wcslen((wchar_t *)local_178);
        iVar12 = (int)sVar14;
      }
      else {
        local_178 = local_1e0.Data.AllocatorInstance.Data;
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14463e024;
      }
      iStack_170 = iVar12;
      pUVar15 = UHandlerComponentFactory::StaticClass();
      local_128._12_4_ = uStack_16c;
      local_128.Size = iStack_170;
      local_138.DataPtr = local_188;
      local_138.Size = (int)uStack_180;
      local_138._12_4_ = uStack_180._4_4_;
      local_128.DataPtr = (wchar_t *)local_178;
      pUVar15 = StaticLoadClass(pUVar15,(UObject *)0x0,&local_128,&local_138,0,(UPackageMap *)0x0);
      if (pUVar15 != (UClass *)0x0) {
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_1b0.Data.ArrayNum != 0) {
          FVar21.Data = local_1b0.Data.AllocatorInstance.Data;
        }
        pFVar17 = ::FName::FName(&local_158,(wchar_t *)FVar21.Data);
        FVar4 = *pFVar17;
        pUVar18 = GetTransientPackage();
        if (FVar4 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)pUVar18,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar19 = UHandlerComponentFactory::StaticClass();
        CheckIsClassChildOf_Internal(pUVar19,pUVar15);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar15);
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_c8._24_4_ = RF_NoFlags;
        local_c8._40_8_ = (UObject *)0x0;
        local_c8[0x20] = false;
        local_c8._8_8_ = pUVar18;
        local_c8._16_8_ = FVar4;
        pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar22 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar22 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        if (pUVar16 != (UObject *)0x0) goto LAB_14463e147;
      }
      if (2 < (byte)PacketHandlerLog._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
      }
    }
    else {
LAB_14463e147:
      pTVar13 = (TSharedPtr<HandlerComponent,1> *)
                (**(code **)(*(longlong *)pUVar16 + 0x2b0))(pUVar16,local_118,&local_1d0);
      if (__return_storage_ptr__ != pTVar13) {
        __return_storage_ptr__->Object = pTVar13->Object;
        pTVar13->Object = (HandlerComponent *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar13->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110)
      ;
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
LAB_14463e23c:
    if (__return_storage_ptr__->Object == (HandlerComponent *)0x0) goto LAB_14463e2a4;
  }
  if (4 < (byte)PacketHandlerLog._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
  }
  if (local_1b8->State == Uninitialized) {
    pHVar5 = __return_storage_ptr__->Object;
    if (pHVar5 != (HandlerComponent *)0x0) {
      pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar23 = (local_1b8->HandlerComponents).AllocatorInstance.Data;
      pFVar28 = pFVar23 + (longlong)(local_1b8->HandlerComponents).ArrayNum * 0x10;
      for (; pFVar23 != pFVar28; pFVar23 = pFVar23 + 0x10) {
        FVar4 = pHVar5->Name;
        if ((*(longlong *)pFVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
          return pTVar13;
        }
        if (*(FName *)(*(longlong *)pFVar23 + 0x1c) == FVar4) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          __return_storage_ptr__ = local_1c0;
          if (pFVar23 == (FScriptContainerElement *)0x0) goto LAB_14463e39a;
          if (2 < (byte)PacketHandlerLog._0_1_) {
            if ((local_1c0->Object == (HandlerComponent *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
              return pTVar13;
            }
            local_1a0 = __return_storage_ptr__->Object->Name;
            ::FName::ToString(&local_1a0,&local_f8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_14463e2a4;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14463e39a:
      pPVar8 = local_1b8;
      __return_storage_ptr__ = local_1c0;
      pTVar2 = &local_1b8->HandlerComponents;
      pTVar13 = (TSharedPtr<HandlerComponent,1> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar13 <= local_1c0) && (local_1c0 < pTVar13 + (local_1b8->HandlerComponents).ArrayMax)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
        return pTVar13;
      }
      iVar11 = (pPVar8->HandlerComponents).ArrayNum;
      piVar1 = &(pPVar8->HandlerComponents).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (pPVar8->HandlerComponents).ArrayNum = iVar11 + 1;
      pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(HandlerComponent **)pFVar23 = __return_storage_ptr__->Object;
      pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar23 + 8) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((__return_storage_ptr__->Object == (HandlerComponent *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
        return pTVar13;
      }
      __return_storage_ptr__->Object->Handler = pPVar8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pPVar8->AddHandlerDel,
                 &local_e8);
      if ((*(int *)&(pPVar8->AddHandlerDel).field_0x10 != 0) &&
         (plVar22 = *(longlong **)&(pPVar8->AddHandlerDel).field_0x8, plVar22 != (longlong *)0x0)) {
        (**(code **)(*plVar22 + 0x68))(plVar22,__return_storage_ptr__);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      if (!param_2) {
        if ((__return_storage_ptr__->Object == (HandlerComponent *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedPtr<HandlerComponent,1> *)(*pcVar7)();
          return pTVar13;
        }
        (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x48))();
      }
      goto LAB_14463e2a4;
    }
    pwVar27 = L"Failed to add handler - invalid instance.";
    iVar11 = 0x14f;
  }
  else {
    pwVar27 = L"Handler added during runtime.";
    iVar11 = 0x148;
  }
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
             ,iVar11,pwVar27);
LAB_14463e2a4:
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddHandler @ 14463e5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
PacketHandler::AddHandler(PacketHandler *this,TSharedPtr<HandlerComponent,1> *param_1,bool param_2)

{
  int *piVar1;
  TArray<TSharedPtr<HandlerComponent,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  HandlerComponent *pHVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<HandlerComponent,1> *pTVar10;
  TSharedPtr<HandlerComponent,1> *pTVar11;
  FName local_res8;
  HandlerComponent *local_78;
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  FReadAccessScope local_58;
  
  if (this->State != Uninitialized) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x148,L"Handler added during runtime.");
    return;
  }
  local_78 = param_1->Object;
  if (local_78 == (HandlerComponent *)0x0) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x14f,L"Failed to add handler - invalid instance.");
    return;
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = &this->HandlerComponents;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TSharedPtr<HandlerComponent,1> *)(pTVar2->AllocatorInstance).Data;
  pTVar11 = pTVar10 + (this->HandlerComponents).ArrayNum;
  local_70 = pTVar3;
  do {
    if (pTVar10 == pTVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_14463e6e8:
      pTVar10 = (TSharedPtr<HandlerComponent,1> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar10 <= param_1) && (param_1 < pTVar10 + (this->HandlerComponents).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->HandlerComponents).ArrayNum;
      piVar1 = &(this->HandlerComponents).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->HandlerComponents).ArrayNum = iVar7 + 1;
      pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(HandlerComponent **)pFVar9 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pHVar8 = TSharedPtr<HandlerComponent,1>::operator->(param_1);
      pHVar8->Handler = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->AddHandlerDel,
                 &local_58);
      if ((*(int *)&(this->AddHandlerDel).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->AddHandlerDel).field_0x8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (!param_2) {
        pHVar8 = TSharedPtr<HandlerComponent,1>::operator->(param_1);
        (**(code **)(pHVar8->_padding_ + 0x48))(pHVar8);
      }
      return;
    }
    bVar6 = `PacketHandler::AddHandler'::__l2::<lambda_1>::operator()(&local_78,pTVar10);
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pTVar10 != (TSharedPtr<HandlerComponent,1> *)0x0) {
        if ((byte)PacketHandlerLog._0_1_ < 3) {
          return;
        }
        pHVar8 = TSharedPtr<HandlerComponent,1>::operator->(param_1);
        local_res8 = pHVar8->Name;
        ::FName::ToString(&local_res8,&local_68);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
        if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        return;
      }
      goto LAB_14463e6e8;
    }
    pTVar10 = pTVar10 + 1;
  } while( true );
}

// BeginHandshaking @ 14463e930

void __thiscall
PacketHandler::BeginHandshaking
          (PacketHandler *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  if ((this->bBeganHandshaking != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bBeganHandshaking",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                         ,0x131,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bBeganHandshaking = '\x01';
  if (param_1 != &this->HandshakeCompleteDel) {
    local_68 = (undefined1  [8])0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_38);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HandshakeCompleteDel,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  uVar6 = (this->HandlerComponents).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->HandlerComponents).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->HandlerComponents).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar7) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar1 = *(longlong **)(pFVar2 + lVar7);
      if (((char)plVar1[3] != '\0') && (*(char *)((longlong)plVar1 + 0x1b) == '\0')) {
        (**(code **)(*plVar1 + 0x58))();
        break;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// CountBytes @ 14463eb50

void __thiscall HandlerComponent::CountBytes(HandlerComponent *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014463eb5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x28,0x28);
  return;
}

// CountBytes @ 14463eb70

void __thiscall PacketHandler::CountBytes(PacketHandler *this,FArchive *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x270,0x270);
  (**(code **)((this->OutgoingPacket)._padding_ + 0x270))(&this->OutgoingPacket,param_1);
  (**(code **)((this->IncomingPacket)._padding_ + 0x270))(&this->IncomingPacket,param_1);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->HandlerComponents).ArrayNum << 4,
             (longlong)(this->HandlerComponents).ArrayMax << 4);
  iVar1 = (this->HandlerComponents).ArrayNum;
  pFVar5 = (this->HandlerComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HandlerComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    plVar2 = *(longlong **)pFVar5;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_1);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->BufferedPackets).ArrayNum << 3,
             (longlong)(this->BufferedPackets).ArrayMax << 3);
  pFVar6 = (this->BufferedPackets).AllocatorInstance.Data;
  iVar1 = (this->BufferedPackets).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->BufferedPackets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<BufferedPacket_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    lVar3 = *(longlong *)pFVar6;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x48,0x48);
      uVar4 = *(int *)(lVar3 + 8) + 7U >> 3;
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,uVar4,uVar4);
    }
    pFVar6 = pFVar6 + 8;
  }
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->BufferedConnectionlessPackets).ArrayNum << 3,
             (longlong)(this->BufferedConnectionlessPackets).ArrayMax << 3);
  pFVar6 = (this->BufferedConnectionlessPackets).AllocatorInstance.Data;
  iVar1 = (this->BufferedConnectionlessPackets).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->BufferedConnectionlessPackets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<BufferedPacket_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    lVar3 = *(longlong *)pFVar6;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x48,0x48);
      uVar4 = *(int *)(lVar3 + 8) + 7U >> 3;
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,uVar4,uVar4);
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// DoesAnyProfileHaveComponent @ 14463ed90

bool __cdecl PacketHandler::DoesAnyProfileHaveComponent(FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  ForAnyElementType this;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  FName local_res20;
  FName local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  ::FString::FString(&local_60,L"PacketHandlerProfileConfig");
  bVar2 = FConfigCacheIni::GetPerObjectConfigSections(GConfig,&GEngineIni,&local_60,&local_80,0x400)
  ;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    uVar5 = (ulonglong)local_80.ArrayNum;
    pFVar9 = local_80.AllocatorInstance.Data + uVar5 * 0x10;
    local_res18 = local_80.ArrayNum;
    this.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      if (local_80.ArrayNum != (int)uVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this.Data == pFVar9) break;
      iVar3 = ::FString::Find((FString *)this.Data,L" ",1,IgnoreCase,FromStart,-1);
      iVar1 = *(int *)(this.Data + 8);
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      if (iVar1 == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)this.Data;
      }
      ::FString::ConstructFromPtrSize(&local_60,pwVar7,iVar3);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_60.Data.ArrayNum != 0) {
        FVar8.Data = local_60.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res20,(wchar_t *)FVar8.Data);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      local_98 = local_res20;
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      ::FName::GetPlainNameString(&local_98,&local_50);
      ::FString::PrintfImpl(&local_70,L"%s PacketHandlerProfileConfig");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar8.Data = local_70.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::GetArray(GConfig,(wchar_t *)FVar8.Data,L"Components",&local_90,&GEngineIni);
      iVar1 = local_90.ArrayNum;
      pFVar10 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x10;
      FVar8.Data = local_90.AllocatorInstance.Data;
      while( true ) {
        if (local_90.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar8.Data == pFVar10) break;
        if ((param_1->Data).ArrayNum == 0) {
          pwVar7 = L"";
LAB_14463ef8b:
          sVar6 = wcslen(pwVar7);
          iVar4 = ::FString::Find((FString *)FVar8.Data,pwVar7,(int)sVar6,CaseSensitive,FromStart,-1
                                 );
          if (iVar4 != -1) {
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum)
            ;
            if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.AllocatorInstance.Data);
            }
            bVar2 = true;
            goto LAB_14463f02a;
          }
        }
        else {
          pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          if ((FScriptContainerElement *)pwVar7 != (FScriptContainerElement *)0x0)
          goto LAB_14463ef8b;
        }
        FVar8.Data = FVar8.Data + 0x10;
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      uVar5 = (ulonglong)local_res18;
      this.Data = this.Data + 0x10;
    }
  }
  bVar2 = false;
LAB_14463f02a:
  DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return bVar2;
}

// DoesProfileHaveComponent @ 14463f090

bool __cdecl PacketHandler::DoesProfileHaveComponent(FName param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  bool bVar4;
  wchar_t *_Str;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  undefined1 local_res18 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res8 = param_1;
  ::FName::GetPlainNameString(&local_res8,&local_38);
  ::FString::PrintfImpl(&local_48,L"%s PacketHandlerProfileConfig");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetArray(GConfig,(wchar_t *)FVar6.Data,L"Components",&local_58,&GEngineIni);
  iVar1 = local_58.ArrayNum;
  pFVar5 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  FVar6.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar6.Data == pFVar5) {
      bVar4 = false;
      goto LAB_14463f1b8;
    }
    if ((param_2->Data).ArrayNum == 0) {
      _Str = L"";
LAB_14463f181:
      sVar3 = wcslen(_Str);
      iVar2 = ::FString::Find((FString *)FVar6.Data,_Str,(int)sVar3,CaseSensitive,FromStart,-1);
      if (iVar2 != -1) {
        bVar4 = true;
LAB_14463f1b8:
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        return bVar4;
      }
    }
    else {
      _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14463f181;
    }
    FVar6.Data = FVar6.Data + 0x10;
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeHandlerComponentFactory @ 14463f220

void __cdecl EmptyLinkFunctionForGeneratedCodeHandlerComponentFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePacketHandlerProfileConfig @ 14463f230

void __cdecl EmptyLinkFunctionForGeneratedCodePacketHandlerProfileConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePacketHandler_init @ 14463f240

void __cdecl EmptyLinkFunctionForGeneratedCodePacketHandler_init(void)

{
  return;
}

// GetAddComponentByNameDelegate @ 14463f250

TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy> *
__cdecl PacketHandler::GetAddComponentByNameDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PacketHandler::GetAddComponentByNameDelegate'::__l2::
             _dynamic_atexit_destructor_for__AddComponentByNameDelegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &AddComponentByNameDelegate;
}

// GetAddComponentDelegate @ 14463f2c0

TDelegate<void___cdecl(TArray<TSharedPtr<HandlerComponent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __cdecl PacketHandler::GetAddComponentDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PacketHandler::GetAddComponentDelegate'::__l2::
             _dynamic_atexit_destructor_for__AddComponentDelegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &AddComponentDelegate;
}

// GetComponentByName @ 14463f330

TSharedPtr<HandlerComponent,1> * __thiscall
PacketHandler::GetComponentByName
          (PacketHandler *this,TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  HandlerComponent *pHVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HandlerComponents).ArrayNum;
  pFVar5 = (this->HandlerComponents).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HandlerComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pHVar2 = *(HandlerComponent **)pFVar5;
    if ((pHVar2 != (HandlerComponent *)0x0) && (pHVar2->Name == param_1)) {
      __return_storage_ptr__->Object = pHVar2;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  __return_storage_ptr__->Object = (HandlerComponent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEncryptionComponent @ 14463f3e0

TSharedPtr<FEncryptionComponent,1> * __thiscall
PacketHandler::GetEncryptionComponent
          (PacketHandler *this,TSharedPtr<FEncryptionComponent,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->EncryptionComponent).Object;
  pTVar1 = (this->EncryptionComponent).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetQueuedConnectionlessPacket @ 14463f570

BufferedPacket * __thiscall PacketHandler::GetQueuedConnectionlessPacket(PacketHandler *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  BufferedPacket *pBVar3;
  
  pTVar1 = ((this->QueuedConnectionlessPackets).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->QueuedConnectionlessPackets).Tail;
    pBVar3 = pTVar1->Item;
    (this->QueuedConnectionlessPackets).Tail = pTVar1;
    pTVar1->Item = (BufferedPacket *)0x0;
    ::operator_delete(pTVar2,0x10);
    return pBVar3;
  }
  return (BufferedPacket *)0x0;
}

// GetQueuedPacket @ 14463f5d0

BufferedPacket * __thiscall PacketHandler::GetQueuedPacket(PacketHandler *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  BufferedPacket *pBVar3;
  
  pTVar1 = ((this->QueuedPackets).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->QueuedPackets).Tail;
    pBVar3 = pTVar1->Item;
    (this->QueuedPackets).Tail = pTVar1;
    pTVar1->Item = (BufferedPacket *)0x0;
    ::operator_delete(pTVar2,0x10);
    return pBVar3;
  }
  return (BufferedPacket *)0x0;
}

// GetQueuedRawPacket @ 14463f630

BufferedPacket * __thiscall PacketHandler::GetQueuedRawPacket(PacketHandler *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  BufferedPacket *pBVar3;
  
  pTVar1 = ((this->QueuedRawPackets).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->QueuedRawPackets).Tail;
    pBVar3 = pTVar1->Item;
    (this->QueuedRawPackets).Tail = pTVar1;
    pTVar1->Item = (BufferedPacket *)0x0;
    ::operator_delete(pTVar2,0x10);
    return pBVar3;
  }
  return (BufferedPacket *)0x0;
}

// GetTotalReservedPacketBits @ 14463f690

int __thiscall PacketHandler::GetTotalReservedPacketBits(PacketHandler *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar5 = 0;
  uVar7 = (this->HandlerComponents).ArrayNum - 1;
  uVar9 = this->MaxPacketBits;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->HandlerComponents).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      plVar1 = *(longlong **)((this->HandlerComponents).AllocatorInstance.Data + lVar8);
      iVar6 = (**(code **)(*plVar1 + 0x70))(plVar1);
      if (iVar6 == -1) {
        UE::Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x4b4,L"Handler returned invalid \'GetReservedPacketBits\' value.");
      }
      else {
        *(uint *)((longlong)plVar1 + 0x14) = uVar9;
        uVar9 = uVar9 - iVar6;
        iVar5 = iVar5 + iVar6;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  iVar6 = iVar5 + 1;
  if ((this->HandlerComponents).ArrayNum < 1) {
    iVar6 = iVar5;
  }
  return iVar6;
}

// HandlerComponentInitialized @ 14463f7a0

void __thiscall
PacketHandler::HandlerComponentInitialized(PacketHandler *this,HandlerComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  HandlerComponent *pHVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (this->State != Initialized) {
    bVar4 = false;
    bVar10 = false;
    uVar8 = (this->HandlerComponents).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar5 = true;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->HandlerComponents).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->HandlerComponents).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pHVar2 = *(HandlerComponent **)(pFVar1 + lVar9);
        bVar6 = false;
        if (pHVar2->bInitialized != false) {
          bVar6 = bVar5;
        }
        if (bVar10) {
          if ((((this->bBeganHandshaking != '\0') && (pHVar2->bInitialized == false)) &&
              (param_1->bRequiresHandshake != false)) &&
             ((!bVar4 && (pHVar2->bRequiresHandshake != false)))) {
            (**(code **)(pHVar2->_padding_ + 0x58))(pHVar2);
            bVar4 = true;
          }
        }
        else {
          bVar10 = pHVar2 == param_1;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
        bVar5 = bVar6;
      } while (-1 < (int)uVar8);
      if (!bVar6) {
        return;
      }
    }
    HandlerInitialized(this);
  }
  return;
}

// HandlerInitialized @ 14463f930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall PacketHandler::HandlerInitialized(PacketHandler *this)

{
  int *piVar1;
  TArray<BufferedPacket_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TNode *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TNode *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  
  if ((this->ReliabilityComponent).Object == (ReliabilityHandlerComponent *)0x0) {
    iVar3 = (this->HandlerComponents).ArrayNum;
    pFVar14 = (this->HandlerComponents).AllocatorInstance.Data;
    pFVar12 = pFVar14 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((this->HandlerComponents).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar12) goto LAB_14463f9c3;
      if ((*(longlong *)pFVar14 != 0) && (*(char *)(*(longlong *)pFVar14 + 0x19) != '\0')) break;
      pFVar14 = pFVar14 + 0x10;
    }
    if (2 < (byte)PacketHandlerLog._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
    }
  }
LAB_14463f9c3:
  uVar11 = 0;
  pTVar2 = &this->BufferedPackets;
  uVar10 = uVar11;
  uVar15 = uVar11;
  if (0 < (this->BufferedPackets).ArrayNum) {
    do {
      uVar13 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar13 < (this->BufferedPackets).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      pTVar9 = ::operator_new(0x10);
      if (pTVar9 != (TNode *)0x0) {
        pTVar9->NextNode = (TNode *)0x0;
        pTVar9->Item = *(BufferedPacket **)(pFVar14 + uVar10 * 8);
        pTVar4 = (this->QueuedPackets).Head;
        (this->QueuedPackets).Head = pTVar9;
        pTVar4->NextNode = pTVar9;
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->BufferedPackets).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
      uVar15 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (this->BufferedPackets).ArrayNum);
  }
  piVar1 = &(this->BufferedPackets).ArrayMax;
  (this->BufferedPackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar10 = uVar11;
  if (0 < (this->BufferedConnectionlessPackets).ArrayNum) {
    do {
      uVar13 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar13 < (this->BufferedConnectionlessPackets).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (this->BufferedConnectionlessPackets).AllocatorInstance.Data;
      pTVar9 = ::operator_new(0x10);
      if (pTVar9 != (TNode *)0x0) {
        pTVar9->NextNode = (TNode *)0x0;
        pTVar9->Item = *(BufferedPacket **)(pFVar14 + uVar11 * 8);
        pTVar4 = (this->QueuedConnectionlessPackets).Head;
        (this->QueuedConnectionlessPackets).Head = pTVar9;
        pTVar4->NextNode = pTVar9;
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->BufferedConnectionlessPackets).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)((this->BufferedConnectionlessPackets).AllocatorInstance.Data + uVar11 * 8) = 0
      ;
      uVar11 = uVar11 + 1;
      uVar10 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (this->BufferedConnectionlessPackets).ArrayNum);
  }
  piVar1 = &(this->BufferedConnectionlessPackets).ArrayMax;
  (this->BufferedConnectionlessPackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BufferedConnectionlessPackets).AllocatorInstance,0,piVar1);
  }
  if (this->State == Initialized) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x3fa,L"Set new Packet Processor State to the state it is currently in.");
  }
  else {
    this->State = Initialized;
  }
  if (this->bBeganHandshaking != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HandshakeCompleteDel
               ,&local_48);
    if ((*(int *)&(this->HandshakeCompleteDel).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->HandshakeCompleteDel).field_0x8, plVar5 != (longlong *)0x0))
    {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  return;
}

// Incoming @ 14463fcb0

void __thiscall HandlerComponent::Incoming(HandlerComponent *this,FBitReader *param_1)

{
  return;
}

// IncomingHigh @ 14463fcc0

void __thiscall PacketHandler::IncomingHigh(PacketHandler *this,FBitReader *param_1)

{
  return;
}

// Incoming_Internal @ 14463fcd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EIncomingResult __thiscall
PacketHandler::Incoming_Internal(PacketHandler *this,FReceivedPacketView *param_1)

{
  uchar uVar1;
  uchar *puVar2;
  FDDoSDetection *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  ForAnyElementType FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FInPacketTraits *pFVar14;
  bool bVar15;
  bool bVar16;
  EIncomingResult EVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_Stat_PacketHandler_Incoming_Internal> FVar22;
  FString *pFVar23;
  FString *pFVar24;
  undefined8 uVar25;
  void *pvVar26;
  longlong lVar27;
  ulong64 uVar28;
  FName FVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  LARGE_INTEGER LVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_13a8 [32];
  EIncomingResult local_1348;
  ForAnyElementType local_1340;
  int local_1338;
  int local_1334;
  undefined1 local_1330;
  undefined1 local_132f;
  undefined1 local_132e;
  undefined1 local_132d [5];
  longlong local_1328;
  uint local_1320;
  undefined2 uStack_131c;
  undefined2 uStack_131a;
  uint local_1318;
  undefined2 uStack_1314;
  undefined2 uStack_1312;
  undefined4 local_1310;
  undefined2 uStack_130c;
  undefined2 uStack_130a;
  FName local_1308;
  uint local_1300;
  uint local_12fc;
  uint local_12f8;
  FColor_u_0 local_12f4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_12f0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_12e0;
  FName local_12d0;
  FName local_12c8;
  FString local_12b8;
  LARGE_INTEGER local_12a8;
  LARGE_INTEGER local_12a0;
  FName local_1298;
  FReceivedPacketView *local_1290;
  FString local_1288;
  FString local_1278;
  undefined1 local_1268 [16];
  FInPacketTraits *local_1258;
  undefined8 local_1250;
  undefined4 uStack_1248;
  uint uStack_1244;
  undefined4 local_1240;
  uint uStack_123c;
  undefined8 local_1238;
  int iStack_1230;
  undefined4 uStack_122c;
  int local_1228;
  undefined4 uStack_1224;
  undefined8 local_1220;
  undefined4 uStack_1218;
  undefined4 uStack_1214;
  undefined4 local_1210;
  uint uStack_120c;
  FBitReader local_1208;
  FName local_1158 [2];
  FBitReader *local_1148;
  TSharedPtr<FInternetAddr_const_,1> *pTStack_1140;
  FInPacketTraits *local_1138;
  FBitReader *local_1128;
  TSharedPtr<FInternetAddr_const_,1> *pTStack_1120;
  FInPacketTraits *local_1118;
  FString local_1108;
  FString local_10f8;
  FString local_10e8;
  TStringBuilderBase<wchar_t> local_10d8;
  wchar_t local_10b8 [2048];
  ulonglong local_b8 [16];
  
  local_b8[0] = __security_cookie.value ^ (ulonglong)auStackY_13a8;
  local_12f4.Bits = 0;
  FVar22 = StatPtr_Stat_PacketHandler_Incoming_Internal;
  local_1290 = param_1;
  if (StatPtr_Stat_PacketHandler_Incoming_Internal ==
      (FThreadSafeStaticStat<FStat_Stat_PacketHandler_Incoming_Internal>)0x0) {
    pFVar21 = ::FName::FName(local_1158,"Stat_PacketHandler_Incoming_Internal");
    FVar22 = (FThreadSafeStaticStat<FStat_Stat_PacketHandler_Incoming_Internal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PacketHandler_Incoming_Internal,
                        *pFVar21,L"PacketHandler Incoming_Internal","STATGROUP_Net",
                        "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar22;
  bVar8 = false;
  bVar9 = false;
  local_12c8.ComparisonIndex.Value = 0;
  local_12c8.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((FVar29.ComparisonIndex.Value.Value != 0) || (FVar29.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_12f4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_12f4._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_12d0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_12d0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_12d0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x223);
        bVar8 = true;
        bVar9 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1308 = FVar29;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar15 = true;
      goto LAB_14463fe71;
    }
  }
  bVar9 = bVar16;
  bVar8 = bVar15;
  bVar15 = false;
  local_1308 = local_12c8;
  FVar29 = local_12c8;
LAB_14463fe71:
  iVar19 = (param_1->DataView).CountBits;
  local_1348 = Success;
  local_12f8 = 0;
  if (GPacketHandlerCRCDump != 0) {
    local_12f8 = (*FCrc::MemCrc32Func)
                           ((param_1->DataView).Data.DataPtr,(param_1->DataView).Data.ArrayNum,0);
  }
  if (0 < (this->HandlerComponents).ArrayNum) {
    puVar2 = (param_1->DataView).Data.DataPtr;
    if ((puVar2 == (uchar *)0x0) ||
       (uVar1 = puVar2[(longlong)(param_1->DataView).Data.ArrayNum + -1], uVar1 == '\0')) {
      local_1250 = 0;
      uStack_1248 = 0;
      local_1240 = 0;
      (param_1->DataView).Data.DataPtr = (uchar *)0x0;
      *(ulonglong *)&(param_1->DataView).Data.ArrayNum = (ulonglong)uStack_1244 << 0x20;
      local_1348 = Error;
      *(ulonglong *)&(param_1->DataView).CountBits = (ulonglong)uStack_123c << 0x20;
      if ((1 < (byte)PacketHandlerLog._0_1_) &&
         ((pFVar3 = this->DDoS, pFVar3 == (FDDoSDetection *)0x0 ||
          ((pFVar3->bDDoSLogRestrictions == false &&
           ((pFVar3->bDDoSDetection == false ||
            (pFVar3->LogHitCounter = pFVar3->LogHitCounter + 1,
            pFVar3->LogHitCounter <= pFVar3->DDoSLogSpamLimit)))))))) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
      }
    }
    else {
      for (; iVar19 = iVar19 + -1, -1 < (char)uVar1; uVar1 = uVar1 * '\x02') {
      }
    }
  }
  local_1338 = 0;
  local_1340.Data = (FScriptContainerElement *)0x0;
  local_1334 = 0;
  local_12fc = 0;
  if (local_1348 == Success) {
    FBitReader::FBitReader(&local_1208,(param_1->DataView).Data.DataPtr,(longlong)iVar19);
    local_1268._0_8_ = &local_1208;
    local_1268._8_8_ = &param_1->Address;
    local_1258 = &param_1->Traits;
    pFVar23 = ::FString::FString(&local_1108,L"PostPacketHandler");
    if (GPacketAuditor != (FPacketAudit *)0x0) {
      pFVar24 = ::FString::FString(&local_10f8,pFVar23);
      FPacketAudit::CheckStage_Internal(GPacketAuditor,pFVar24,&local_1208,false);
    }
    pFVar4 = (pFVar23->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    if (this->State == Uninitialized) {
      if ((this->HandlerComponents).ArrayNum < 1) {
        HandlerInitialized(this);
      }
      else {
        InitializeComponents(this);
      }
    }
    pFVar14 = local_1258;
    uVar13 = local_1268._8_8_;
    uVar12 = local_1268._0_8_;
    dVar10 = __real_408f400000000000;
    local_1300 = (this->HandlerComponents).ArrayNum - 1;
    if (-1 < (int)local_1300) {
      lVar30 = (longlong)(int)local_1300 << 4;
      do {
        uVar20 = 0;
        if ((int)local_1300 < (this->HandlerComponents).ArrayNum) {
          uVar20 = ~local_1300 >> 0x1f;
        }
        local_1328 = lVar30;
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          EVar17 = (*pcVar6)();
          return EVar17;
        }
        pFVar4 = (this->HandlerComponents).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar4 + lVar30) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          EVar17 = (*pcVar6)();
          return EVar17;
        }
        plVar5 = *(longlong **)(pFVar4 + lVar30);
        if (GPacketHandlerCRCDump != 0) {
          if ((local_1208._padding_._1_1_ & 2) == 0) {
            if (local_1208.Pos == 0) {
              lVar30 = local_1208.Num + 7 >> 3;
              iVar19 = (int)lVar30;
              if (lVar30 != iVar19) {
                local_1330 = 0;
                `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(&local_1330);
              }
              if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar30 != iVar19)) {
                UE::Logging::Private::BasicLog<3>
                          (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                           (FLogCategoryBase *)&PacketHandlerLog);
              }
              local_1318 = (*FCrc::MemCrc32Func)(local_1208.Buffer.AllocatorInstance.Data,iVar19,0);
              uStack_1314 = 1;
              if (((local_1340.Data <= (FScriptContainerElement *)&local_1318) &&
                  ((FScriptContainerElement *)&local_1318 <
                   local_1340.Data + (longlong)local_1334 * 8)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar6 = (code *)swi(3);
                EVar17 = (*pcVar6)();
                return EVar17;
              }
              if (local_1338 == local_1334) {
                local_1338 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&local_1340,&local_1334);
              }
              lVar27 = (longlong)local_1338;
              uVar25 = CONCAT26(uStack_1312,CONCAT24(uStack_1314,local_1318));
              lVar30 = local_1328;
              local_1338 = local_1338 + 1;
            }
            else {
              local_1310 = 0;
              uStack_130c = 0;
              if (((local_1340.Data <= (FScriptContainerElement *)&local_1310) &&
                  ((FScriptContainerElement *)&local_1310 <
                   local_1340.Data + (longlong)local_1334 * 8)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar6 = (code *)swi(3);
                EVar17 = (*pcVar6)();
                return EVar17;
              }
              if (local_1338 == local_1334) {
                local_1338 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&local_1340,&local_1334);
              }
              lVar27 = (longlong)local_1338;
              uVar25 = CONCAT26(uStack_130a,CONCAT24(uStack_130c,local_1310));
              local_1338 = local_1338 + 1;
            }
          }
          else {
            local_1320 = 0;
            uStack_131c = 0x100;
            if (((local_1340.Data <= (FScriptContainerElement *)&local_1320) &&
                ((FScriptContainerElement *)&local_1320 < local_1340.Data + (longlong)local_1334 * 8
                )) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar16)) {
              pcVar6 = (code *)swi(3);
              EVar17 = (*pcVar6)();
              return EVar17;
            }
            if (local_1338 == local_1334) {
              local_1338 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,&local_1340,&local_1334);
            }
            lVar27 = (longlong)local_1338;
            uVar25 = CONCAT26(uStack_131a,CONCAT24(uStack_131c,local_1320));
            local_1338 = local_1338 + 1;
          }
          *(undefined8 *)(local_1340.Data + lVar27 * 8) = uVar25;
        }
        cVar18 = (**(code **)(*plVar5 + 8))(plVar5);
        if (((cVar18 != '\0') && ((local_1208._padding_._1_1_ & 2) == 0)) &&
           (local_1208.Num != local_1208.Pos && -1 < local_1208.Num - local_1208.Pos)) {
          if ((local_1208.Pos != 0) &&
             (cVar18 = (**(code **)(*plVar5 + 0x40))(plVar5), cVar18 == '\0')) {
            if (local_1208.Pos != 0) {
              lVar27 = local_1208.Num - local_1208.Pos;
              lVar30 = (longlong)(int)lVar27;
              if (lVar27 != lVar30) {
                local_132f = 0;
                `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(&local_132f);
              }
              if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar27 != lVar30)) {
                UE::Logging::Private::BasicLog<3>
                          (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                           (FLogCategoryBase *)&PacketHandlerLog);
              }
              if (0 < (int)lVar27) {
                local_12f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_12f0.ArrayNum = 0;
                local_12f0.ArrayMax = 0;
                iVar19 = IntCastLog<int,__int64>((local_1208.Num - local_1208.Pos) + 7 >> 3);
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar19,&local_12f0.AllocatorInstance,&local_12f0.ArrayNum,
                           &local_12f0.ArrayMax);
                uVar31 = local_12f0.ArrayNum - 1;
                uVar20 = 0;
                if ((int)uVar31 < local_12f0.ArrayNum) {
                  uVar20 = ~uVar31 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  EVar17 = (*pcVar6)();
                  return EVar17;
                }
                local_12f0.AllocatorInstance.Data[(int)uVar31] = (FScriptContainerElement)0x0;
                (**(code **)(local_1208._padding_ + 400))
                          (&local_1208,local_12f0.AllocatorInstance.Data,lVar30);
                FBitReader::SetData(&local_1208,&local_12f0,lVar30);
                if (local_12f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_12f0.AllocatorInstance.Data);
                }
              }
            }
            if (GPacketHandlerCRCDump != 0) {
              uVar31 = local_1338 - 1;
              uVar20 = 0;
              if ((int)uVar31 < local_1338) {
                uVar20 = ~uVar31 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                EVar17 = (*pcVar6)();
                return EVar17;
              }
              FVar11.Data = local_1340.Data;
              lVar30 = local_1208.Num + 7 >> 3;
              iVar19 = (int)lVar30;
              if (lVar30 != iVar19) {
                local_132e = 0;
                `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(&local_132e);
              }
              if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar30 != iVar19)) {
                UE::Logging::Private::BasicLog<3>
                          (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                           (FLogCategoryBase *)&PacketHandlerLog);
              }
              uVar20 = (*FCrc::MemCrc32Func)(local_1208.Buffer.AllocatorInstance.Data,iVar19,0);
              *(uint *)(FVar11.Data + (longlong)(int)uVar31 * 8) = uVar20;
              FVar11.Data[(longlong)(int)uVar31 * 8 + 4] = (FScriptContainerElement)0x1;
              param_1 = local_1290;
            }
          }
          if ((param_1->Traits).bConnectionlessPacket == false) {
            dVar7 = (double)GPacketHandlerTimeguardThresholdMS;
            if ((GPacketHandlerTimeguardThresholdMS <= 0.0) || (GPacketHandlerTimeguardLimit < 1)) {
              LVar33.QuadPart = 0;
            }
            else {
              QueryPerformanceCounter(&local_12a8);
              LVar33 = local_12a8;
            }
            GPacketHandlerDiscardTimeguardMeasurement = false;
            local_1128 = (FBitReader *)uVar12;
            pTStack_1120 = (TSharedPtr<FInternetAddr_const_,1> *)uVar13;
            local_1118 = pFVar14;
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_1128);
            lVar30 = local_1328;
            if ((((0.0 < dVar7) && (0 < GPacketHandlerTimeguardLimit)) &&
                (GPacketHandlerDiscardTimeguardMeasurement == false)) &&
               (QueryPerformanceCounter(&local_12a0), lVar30 = local_1328,
               dVar7 < (double)(ulonglong)(local_12a0.QuadPart - (longlong)LVar33) *
                       FGenericPlatformTime::SecondsPerCycle64 * dVar10)) {
              local_1298 = *(FName *)((longlong)plVar5 + 0x1c);
              ::FName::ToString(&local_1298,&local_1288);
              if (2 < (byte)PacketHandlerLog._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
              }
              GPacketHandlerTimeguardLimit = GPacketHandlerTimeguardLimit + -1;
              lVar30 = local_1328;
              if (local_1288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1288.Data.AllocatorInstance.Data);
                lVar30 = local_1328;
              }
            }
          }
          else {
            local_1148 = (FBitReader *)uVar12;
            pTStack_1140 = (TSharedPtr<FInternetAddr_const_,1> *)uVar13;
            local_1138 = pFVar14;
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_1148);
            lVar30 = local_1328;
          }
        }
        local_1300 = local_1300 - 1;
        lVar30 = lVar30 + -0x10;
        FVar29 = local_1308;
        local_1328 = lVar30;
      } while (-1 < (int)local_1300);
    }
    if ((local_1208._padding_._1_1_ & 2) == 0) {
      if ((local_1208.Pos == 0) || (local_1208.Num - local_1208.Pos == 0)) {
        FBitReader::operator=(&this->IncomingPacket,&local_1208);
      }
      else {
        local_12e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_12e0.ArrayNum = 0;
        local_12e0.ArrayMax = 0;
        iVar19 = IntCastLog<int,__int64>((local_1208.Num - local_1208.Pos) + 7 >> 3);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar19,&local_12e0.AllocatorInstance,&local_12e0.ArrayNum,
                   &local_12e0.ArrayMax);
        uVar31 = local_12e0.ArrayNum - 1;
        uVar20 = 0;
        if ((int)uVar31 < local_12e0.ArrayNum) {
          uVar20 = ~uVar31 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          EVar17 = (*pcVar6)();
          return EVar17;
        }
        local_12e0.AllocatorInstance.Data[(int)uVar31] = (FScriptContainerElement)0x0;
        (**(code **)(local_1208._padding_ + 400))
                  (&local_1208,local_12e0.AllocatorInstance.Data,local_1208.Num - local_1208.Pos);
        FBitReader::SetData(&this->IncomingPacket,&local_12e0,local_1208.Num - local_1208.Pos);
        if (local_12e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_12e0.AllocatorInstance.Data);
        }
      }
      lVar30 = (this->IncomingPacket).Num;
      lVar27 = (this->IncomingPacket).Pos;
      if (lVar30 != lVar27 && -1 < lVar30 - lVar27) {
        pFVar23 = ::FString::FString(&local_10e8,L"PrePacketHandler");
        if (GPacketAuditor != (FPacketAudit *)0x0) {
          pFVar24 = ::FString::FString((FString *)local_1268,pFVar23);
          FPacketAudit::CheckStage_Internal(GPacketAuditor,pFVar24,&this->IncomingPacket,true);
        }
        pFVar4 = (pFVar23->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        if (GPacketHandlerCRCDump != 0) {
          lVar30 = ((this->IncomingPacket).Num - (this->IncomingPacket).Pos) + 7 >> 3;
          iVar19 = (int)lVar30;
          if (lVar30 != iVar19) {
            local_132d[0] = 0;
            `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(local_132d);
          }
          if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar30 != iVar19)) {
            UE::Logging::Private::BasicLog<3>
                      (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                       (FLogCategoryBase *)&PacketHandlerLog);
          }
          local_12fc = (*FCrc::MemCrc32Func)
                                 ((this->IncomingPacket).Buffer.AllocatorInstance.Data,iVar19,0);
        }
      }
      iVar32 = (int)(this->IncomingPacket).Num - (int)(this->IncomingPacket).Pos;
      local_1238 = (this->IncomingPacket).Buffer.AllocatorInstance.Data;
      iStack_1230 = (int)(iVar32 + 7 + (iVar32 + 7 >> 0x1f & 7U)) >> 3;
      if ((iStack_1230 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        EVar17 = (*pcVar6)();
        return EVar17;
      }
      lVar30 = CONCAT44(uStack_1224,iVar32);
      uVar34 = (undefined4)local_1238;
      uVar35 = local_1238._4_4_;
      iVar19 = iStack_1230;
      local_1228 = iVar32;
    }
    else {
      local_1220 = 0;
      uStack_1218 = 0;
      local_1220._0_4_ = 0;
      local_1220._4_4_ = 0;
      iVar19 = 0;
      local_1210 = 0;
      lVar30 = (ulonglong)uStack_120c << 0x20;
      local_1348 = Error;
      uVar34 = (undefined4)local_1220;
      uVar35 = local_1220._4_4_;
      uStack_122c = uStack_1214;
    }
    *(undefined4 *)&(param_1->DataView).Data.DataPtr = uVar34;
    *(undefined4 *)((longlong)&(param_1->DataView).Data.DataPtr + 4) = uVar35;
    (param_1->DataView).Data.ArrayNum = iVar19;
    *(undefined4 *)&(param_1->DataView).Data.field_0xc = uStack_122c;
    *(longlong *)&(param_1->DataView).CountBits = lVar30;
    FBitReader::~FBitReader(&local_1208);
  }
  if (GPacketHandlerCRCDump != 0) {
    local_10d8.Base = local_10b8;
    local_10d8.bIsDynamic = false;
    local_10d8.bIsExternal = false;
    uVar20 = local_1338 - 1;
    local_10d8.CurPos = local_10b8;
    local_10d8.End = (wchar_t *)local_b8;
    if (-1 < (int)uVar20) {
      lVar30 = (longlong)(int)uVar20 * 8;
      do {
        uVar31 = 0;
        if ((int)uVar20 < local_1338) {
          uVar31 = ~uVar20 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          EVar17 = (*pcVar6)();
          return EVar17;
        }
        FVar11.Data = local_1340.Data;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_10d8,L"%s%i: ");
        if (FVar11.Data[lVar30 + 5] == (FScriptContainerElement)0x0) {
          if (FVar11.Data[lVar30 + 4] == (FScriptContainerElement)0x0) {
            if (local_10d8.End < local_10d8.CurPos + 9) {
              TStringBuilderBase<wchar_t>::Extend(&local_10d8,9);
            }
            pvVar26 = FGenericPlatformString::Memcpy(local_10d8.CurPos,L"Unaligned",0x12);
            local_10d8.CurPos = (wchar_t *)((longlong)pvVar26 + 0x12);
          }
          else {
            ::FString::PrintfImpl(&local_12b8,L"%08X");
            FVar11.Data = local_12b8.Data.AllocatorInstance.Data;
            uVar31 = local_12b8.Data.ArrayNum - 1;
            if (local_12b8.Data.ArrayNum == 0) {
              uVar31 = 0;
            }
            uVar28 = (ulong64)(int)uVar31;
            if (local_10d8.End < local_10d8.CurPos + uVar28) {
              TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar28);
            }
            if (uVar31 != 0) {
              pvVar26 = FGenericPlatformString::Memcpy(local_10d8.CurPos,FVar11.Data,uVar28 * 2);
              local_10d8.CurPos = (wchar_t *)((longlong)pvVar26 + uVar28 * 2);
            }
            if (local_12b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_12b8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (local_10d8.End < local_10d8.CurPos + 5) {
            TStringBuilderBase<wchar_t>::Extend(&local_10d8,5);
          }
          pvVar26 = FGenericPlatformString::Memcpy(local_10d8.CurPos,L"Error",10);
          local_10d8.CurPos = (wchar_t *)((longlong)pvVar26 + 10);
        }
        lVar30 = lVar30 + -8;
        uVar20 = uVar20 - 1;
        FVar29 = local_1308;
      } while (-1 < (int)uVar20);
    }
    if (4 < (byte)PacketHandlerLog._0_1_) {
      if (local_10d8.End < local_10d8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_10d8,1);
      }
      *local_10d8.CurPos = L'\0';
      if (local_1348 == Success) {
        ::FString::PrintfImpl(&local_1278,L"%08X");
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
      if ((local_1348 == Success) &&
         (local_1278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1278.Data.AllocatorInstance.Data);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10d8);
  }
  if (local_1340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1340.Data);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  return local_1348;
}

// InitFaultRecovery @ 144640de0

void __thiscall
PacketHandler::InitFaultRecovery(PacketHandler *this,FNetConnectionFaultRecoveryBase *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HandlerComponents).ArrayNum;
  pFVar4 = (this->HandlerComponents).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HandlerComponents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0x50))(*(longlong **)pFVar4,param_1);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// Initialize @ 144640e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
PacketHandler::Initialize
          (PacketHandler *this,Mode param_1,uint param_2,bool param_3,
          TSharedPtr<IAnalyticsProvider,1> *param_4,FDDoSDetection *param_5,FName param_6)

{
  TSharedPtr<ReliabilityHandlerComponent,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  TSharedPtr<HandlerComponent,1> *pTVar6;
  ReliabilityHandlerComponent *this_00;
  FDDoSDetection *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<HandlerComponent,1> *pTVar10;
  int *piVar11;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TSharedPtr<HandlerComponent,1> *local_108;
  undefined8 local_100;
  FString local_f8;
  HandlerComponent *local_e8;
  FSharedReferencer<1> local_e0;
  ReliabilityHandlerComponent *local_d8;
  FSharedReferencer<1> local_d0;
  TSharedPtr<HandlerComponent,1> local_c8;
  TSharedPtr<HandlerComponent,1> local_b8;
  FString local_a8;
  FString local_98;
  TSharedPtr<HandlerComponent,1> local_88;
  TSharedPtr<HandlerComponent,1> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  this->bConnectionlessHandler = '\0';
  this->DDoS = param_5;
  this->field_0x2 = this->field_0x2 | param_3 << 2;
  this->Mode = param_1;
  this->MaxPacketBits = param_2;
  if (!param_3) {
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    ::FName::GetPlainNameString(&param_6,&local_98);
    ::FString::PrintfImpl(&local_a8,L"%s PacketHandlerProfileConfig");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar8.Data = local_a8.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::GetArray(GConfig,(wchar_t *)FVar8.Data,L"Components",&local_118,&GEngineIni);
    if (local_118.ArrayNum == 0) {
      FConfigCacheIni::GetArray
                (GConfig,L"PacketHandlerComponents",L"Components",&local_118,&GEngineIni);
    }
    piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar11 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PacketHandler::GetAddComponentByNameDelegate'::__l2::
             _dynamic_atexit_destructor_for__AddComponentByNameDelegate__);
      _Init_thread_footer(&::_TSS0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AddComponentByNameDelegate
               ,&local_68);
    if ((AddComponentByNameDelegate._16_4_ != 0) && (AddComponentByNameDelegate._8_8_ != 0)) {
      (**(code **)(*(longlong *)AddComponentByNameDelegate._8_8_ + 0x68))
                (AddComponentByNameDelegate._8_8_,&local_118);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    iVar4 = local_118.ArrayNum;
    uVar5 = (ulonglong)local_118.ArrayNum;
    pFVar9 = local_118.AllocatorInstance.Data + uVar5 * 0x10;
    FVar8.Data = local_118.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar8.Data == pFVar9) break;
      AddHandler(this,&local_88,(FString *)FVar8.Data,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      uVar5 = local_118._8_8_ & 0xffffffff;
      FVar8.Data = FVar8.Data + 0x10;
    }
    local_108 = (TSharedPtr<HandlerComponent,1> *)0x0;
    local_100 = 0;
    if ((*piVar11 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PacketHandler::GetAddComponentDelegate'::__l2::
             _dynamic_atexit_destructor_for__AddComponentDelegate__);
      _Init_thread_footer(&::_TSS0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AddComponentDelegate,
               &local_50);
    if ((AddComponentDelegate._16_4_ != 0) && (AddComponentDelegate._8_8_ != 0)) {
      (**(code **)(*(longlong *)AddComponentDelegate._8_8_ + 0x68))
                (AddComponentDelegate._8_8_,&local_108);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    iVar4 = (int)local_100;
    pTVar10 = local_108 + (int)local_100;
    pTVar6 = local_108;
    while( true ) {
      if ((int)local_100 != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pTVar6 == pTVar10) break;
      local_b8.Object = pTVar6->Object;
      local_b8.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddHandler(this,&local_b8,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      pTVar6 = pTVar6 + 1;
    }
    DestructItems<TSharedPtr<HandlerComponent,1>,int>(local_108,(int)local_100);
    if (local_108 != (TSharedPtr<HandlerComponent,1> *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  pFVar7 = (FDDoSDetection *)0x0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString
                    (GConfig,L"PacketHandlerComponents",L"EncryptionComponent",&local_f8,&GEngineIni
                    );
  if ((bVar3) && (1 < local_f8.Data.ArrayNum)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AllowEncryptionCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"net.AllowEncryption",1);
      _Init_thread_footer(&::_TSS2);
    }
    if ((AllowEncryptionCVar == (IConsoleVariable *)0x0) ||
       (iVar4 = (**(code **)(*(longlong *)AllowEncryptionCVar + 200))(), iVar4 != 0)) {
      pTVar6 = AddHandler(this,&local_78,&local_f8,true);
      local_e0.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
      local_e8 = pTVar6->Object;
      if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->EncryptionComponent != (TSharedPtr<FEncryptionComponent,1> *)&local_e8) {
        (this->EncryptionComponent).Object = (FEncryptionComponent *)local_e8;
        local_e8 = (HandlerComponent *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->EncryptionComponent).SharedReferenceCount,&local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else if (2 < (byte)PacketHandlerLog._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
    }
  }
  local_res10[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"PacketHandlerComponents",L"bEnableReliability",local_res10,&GEngineIni);
  if ((local_res10[0] != false) &&
     (pTVar1 = &this->ReliabilityComponent, pTVar1->Object == (ReliabilityHandlerComponent *)0x0)) {
    if (2 < (byte)PacketHandlerLog._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
    }
    this_00 = ::operator_new(0x58);
    if (this_00 != (ReliabilityHandlerComponent *)0x0) {
      pFVar7 = (FDDoSDetection *)ReliabilityHandlerComponent::ReliabilityHandlerComponent(this_00);
    }
    param_5 = pFVar7;
    TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><ReliabilityHandlerComponent>
              (&local_c8,(TRawPtrProxy<ReliabilityHandlerComponent> *)&param_5);
    local_d8 = (ReliabilityHandlerComponent *)local_c8.Object;
    local_d0.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<ReliabilityHandlerComponent,1> *)&local_d8) {
      pTVar1->Object = (ReliabilityHandlerComponent *)local_c8.Object;
      local_d8 = (ReliabilityHandlerComponent *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ReliabilityComponent).SharedReferenceCount,&local_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    AddHandler(this,&local_c8,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// InitializeComponents @ 1446414b0

void __thiscall PacketHandler::InitializeComponents(PacketHandler *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  
  if (this->State == Uninitialized) {
    if ((this->HandlerComponents).ArrayNum < 1) {
      HandlerInitialized(this);
    }
    else {
      this->State = InitializingComponents;
    }
  }
  iVar5 = (this->HandlerComponents).ArrayNum;
  pFVar7 = (this->HandlerComponents).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar5 * 0x10;
  while( true ) {
    if ((this->HandlerComponents).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    plVar1 = *(longlong **)pFVar7;
    if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x1b) == '\0')) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)pFVar7 + 0x78))();
    }
    pFVar7 = pFVar7 + 0x10;
  }
  uVar6 = (this->HandlerComponents).ArrayNum - 1;
  uVar10 = this->MaxPacketBits;
  if (-1 < (int)uVar6) {
    lVar9 = (longlong)(int)uVar6 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->HandlerComponents).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->HandlerComponents).AllocatorInstance.Data + lVar9);
      iVar5 = (**(code **)(*plVar1 + 0x70))(plVar1);
      if (iVar5 == -1) {
        UE::Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x4b4,L"Handler returned invalid \'GetReservedPacketBits\' value.");
      }
      else {
        *(uint *)((longlong)plVar1 + 0x14) = uVar10;
        uVar10 = uVar10 - iVar5;
      }
      lVar9 = lVar9 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// InitializeDelegates @ 144641650

void __thiscall
PacketHandler::InitializeDelegates
          (PacketHandler *this,
          TDelegate<void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy> *param_1
          ,TDelegate<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy>
           *param_2)

{
  longlong *plVar1;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  if (param_1 != &this->LowLevelSendDel) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LowLevelSendDel,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  if (param_2 != &this->AddHandlerDel) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AddHandlerDel,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// Initialized @ 144641850

void __thiscall HandlerComponent::Initialized(HandlerComponent *this)

{
  PacketHandler *this_00;
  FScriptContainerElement *pFVar1;
  HandlerComponent *pHVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  this_00 = this->Handler;
  this->bInitialized = true;
  if (this_00->State != Initialized) {
    bVar4 = false;
    bVar10 = false;
    uVar8 = (this_00->HandlerComponents).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar5 = true;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this_00->HandlerComponents).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this_00->HandlerComponents).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pHVar2 = *(HandlerComponent **)(pFVar1 + lVar9);
        bVar6 = false;
        if (pHVar2->bInitialized != false) {
          bVar6 = bVar5;
        }
        if (bVar10) {
          if ((((this_00->bBeganHandshaking != '\0') && (pHVar2->bInitialized == false)) &&
              (this->bRequiresHandshake != false)) &&
             ((!bVar4 && (pHVar2->bRequiresHandshake != false)))) {
            (**(code **)(pHVar2->_padding_ + 0x58))(pHVar2);
            bVar4 = true;
          }
        }
        else {
          bVar10 = pHVar2 == this;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
        bVar5 = bVar6;
      } while (-1 < (int)uVar8);
      if (!bVar6) {
        return;
      }
    }
    PacketHandler::HandlerInitialized(this_00);
  }
  return;
}

// IsActive @ 1446419e0

bool __thiscall HandlerComponent::IsActive(HandlerComponent *this)

{
  return this->bActive;
}

// IsInitialized @ 1446419f0

bool __thiscall HandlerComponent::IsInitialized(HandlerComponent *this)

{
  return this->bInitialized;
}

// NotifyAnalyticsProvider @ 144641a00

void __thiscall
PacketHandler::NotifyAnalyticsProvider
          (PacketHandler *this,TSharedPtr<IAnalyticsProvider,1> *param_1,
          TSharedPtr<FNetAnalyticsAggregator,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IAnalyticsProvider *pIVar3;
  FNetAnalyticsAggregator *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Provider).SharedReferenceCount.ReferenceController;
  (this->Provider).Object = pIVar3;
  (this->Provider).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar4 = param_2->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Aggregator).SharedReferenceCount.ReferenceController;
  (this->Aggregator).Object = pFVar4;
  (this->Aggregator).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (this->State != Uninitialized) {
    pFVar8 = (this->HandlerComponents).AllocatorInstance.Data;
    iVar1 = (this->HandlerComponents).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->HandlerComponents).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar9) break;
      if ((*(longlong *)pFVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(char *)(*(longlong *)pFVar8 + 0x1b) != '\0') {
        if ((*(longlong *)pFVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(**(longlong **)pFVar8 + 0x78))();
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Outgoing @ 144641b70

void __thiscall
HandlerComponent::Outgoing(HandlerComponent *this,FBitWriter *param_1,FOutPacketTraits *param_2)

{
  return;
}

// OutgoingHigh @ 144641b80

void __thiscall PacketHandler::OutgoingHigh(PacketHandler *this,FBitWriter *param_1)

{
  return;
}

// Outgoing_Internal @ 144641b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ProcessedPacket * __thiscall
PacketHandler::Outgoing_Internal
          (PacketHandler *this,ProcessedPacket *__return_storage_ptr__,uchar *param_1,int param_2,
          FOutPacketTraits *param_3,bool param_4,TSharedPtr<FInternetAddr_const_,1> *param_5)

{
  atomic<int> *paVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  ReliabilityHandlerComponent *this_00;
  long64 lVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  ForAnyElementType FVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_Stat_PacketHandler_Outgoing_Internal> FVar20;
  FString *pFVar21;
  ProcessedPacket *pPVar22;
  FString *pFVar23;
  uchar *puVar24;
  undefined8 *puVar25;
  void *pvVar26;
  FNameEntryId FVar27;
  FName FVar28;
  undefined8 *puVar29;
  longlong lVar30;
  uint uVar31;
  LARGE_INTEGER LVar32;
  ulonglong uVar33;
  TArray<BufferedPacket_*,TSizedDefaultAllocator<32>_> *pTVar34;
  PacketHandler *pPVar35;
  uint uVar36;
  undefined1 auStackY_1288 [32];
  undefined1 local_1227 [7];
  ForAnyElementType local_1220;
  uint local_1218;
  uint local_1214;
  ProcessedPacket *local_1210;
  uint local_1208;
  uint uStack_1204;
  uint local_1200;
  undefined4 uStack_11fc;
  uint local_11f8;
  uint uStack_11f4;
  FOutPacketTraits *local_11f0;
  undefined8 *local_11e8;
  undefined8 *local_11e0;
  TReferenceControllerBase<1> *local_11d8;
  PacketHandler *local_11d0;
  int iStack_11c8;
  uint uStack_11c4;
  FColor_u_0 local_11c0 [2];
  FString local_11b8;
  FName local_11a8;
  FName local_11a0;
  LARGE_INTEGER local_1190;
  LARGE_INTEGER local_1188;
  FName local_1180;
  FInternetAddr *local_1178;
  FName local_1170;
  undefined8 local_1168;
  TReferenceControllerBase<1> *pTStack_1160;
  FString local_1158;
  FString local_1148;
  FString local_1138;
  TStringBuilderBase<wchar_t> local_1128;
  wchar_t local_1108 [32];
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [2048];
  ulonglong local_a8 [13];
  
  local_a8[0] = __security_cookie.value ^ (ulonglong)auStackY_1288;
  local_11d8 = (TReferenceControllerBase<1> *)param_5;
  local_11f0 = param_3;
  FVar20 = StatPtr_Stat_PacketHandler_Outgoing_Internal;
  local_1210 = __return_storage_ptr__;
  local_11d0 = this;
  if (StatPtr_Stat_PacketHandler_Outgoing_Internal ==
      (FThreadSafeStaticStat<FStat_Stat_PacketHandler_Outgoing_Internal>)0x0) {
    pFVar19 = ::FName::FName(&local_1170,"Stat_PacketHandler_Outgoing_Internal");
    FVar20 = (FThreadSafeStaticStat<FStat_Stat_PacketHandler_Outgoing_Internal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_PacketHandler_Outgoing_Internal,
                        *pFVar19,L"PacketHandler Outgoing_Internal","STATGROUP_Net",
                        "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_11a0.ComparisonIndex.Value = 0;
  local_11a0.Number = 0;
  FVar28 = *(FName *)FVar20;
  bVar15 = false;
  bVar16 = false;
  FVar27 = FVar28.ComparisonIndex.Value;
  uVar36 = FVar28.Number;
  if ((FVar27.Value != 0) || (uVar36 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_11c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_11c0[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_11a8.ComparisonIndex.Value = FVar27.Value;
        local_11a8.Number = uVar36;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_11a8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x2da);
        bVar10 = true;
        bVar11 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1208 = FVar27.Value;
      uStack_1204 = uVar36;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar15 = true;
      goto LAB_144641d3d;
    }
  }
  bVar11 = bVar16;
  bVar10 = bVar15;
  bVar15 = false;
  FVar28 = local_11a0;
LAB_144641d3d:
  puVar29 = (undefined8 *)0x0;
  __return_storage_ptr__->Data = (uchar *)0x0;
  __return_storage_ptr__->CountBits = 0;
  __return_storage_ptr__->bError = false;
  local_1218 = 0;
  local_1208 = 0;
  local_1220.Data = (FScriptContainerElement *)0x0;
  local_1214 = 0;
  puVar25 = puVar29;
  if (GPacketHandlerCRCDump != 0) {
    local_1208 = (*FCrc::MemCrc32Func)
                           (param_1,(int)((param_2 + 7 >> 0x1f & 7U) + param_2 + 7) >> 3,0);
    puVar25 = (undefined8 *)(ulonglong)local_1218;
  }
  if (this->bRawSend == 0) {
    (**(code **)((this->OutgoingPacket)._padding_ + 0xc0))(&this->OutgoingPacket);
    if (this->State == Uninitialized) {
      if ((this->HandlerComponents).ArrayNum < 1) {
        HandlerInitialized(this);
      }
      else {
        InitializeComponents(this);
      }
    }
    if (this->State == Initialized) {
      (**(code **)((this->OutgoingPacket)._padding_ + 400))
                (&this->OutgoingPacket,param_1,(longlong)param_2);
      pFVar21 = ::FString::FString(&local_1158,L"PrePacketHandler");
      FPacketAudit::AddStage(pFVar21,&this->OutgoingPacket,true);
      dVar12 = __real_408f400000000000;
      puVar25 = puVar29;
      if (0 < (this->HandlerComponents).ArrayNum) {
        while (((this->OutgoingPacket)._padding_ & 0x200) == 0) {
          uVar31 = (uint)puVar25;
          uVar36 = 0;
          if ((int)uVar31 < (this->HandlerComponents).ArrayNum) {
            uVar36 = ~uVar31 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            pPVar22 = (ProcessedPacket *)(*pcVar6)();
            return pPVar22;
          }
          pFVar3 = (this->HandlerComponents).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar3 + (longlong)puVar29) == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            pPVar22 = (ProcessedPacket *)(*pcVar6)();
            return pPVar22;
          }
          plVar4 = *(longlong **)(pFVar3 + (longlong)puVar29);
          cVar17 = (**(code **)(*plVar4 + 8))(plVar4);
          if (cVar17 != '\0') {
            if ((longlong)(ulonglong)*(uint *)((longlong)plVar4 + 0x14) < (this->OutgoingPacket).Num
               ) {
              FArchiveState::SetError((FArchiveState *)&this->OutgoingPacket);
              if (1 < (byte)PacketHandlerLog._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
              }
              break;
            }
            if (param_4) {
              (**(code **)(*plVar4 + 0x38))(plVar4,local_11d8,&this->OutgoingPacket);
            }
            else {
              dVar7 = (double)GPacketHandlerTimeguardThresholdMS;
              if ((GPacketHandlerTimeguardThresholdMS <= 0.0) || (GPacketHandlerTimeguardLimit < 1))
              {
                LVar32.QuadPart = 0;
              }
              else {
                QueryPerformanceCounter(&local_1190);
                LVar32 = local_1190;
              }
              GPacketHandlerDiscardTimeguardMeasurement = false;
              (**(code **)(*plVar4 + 0x28))(plVar4,&this->OutgoingPacket,local_11f0);
              if ((((0.0 < dVar7) && (0 < GPacketHandlerTimeguardLimit)) &&
                  (GPacketHandlerDiscardTimeguardMeasurement == false)) &&
                 (QueryPerformanceCounter(&local_1188),
                 dVar7 < (double)(ulonglong)(local_1188.QuadPart - (longlong)LVar32) *
                         FGenericPlatformTime::SecondsPerCycle64 * dVar12)) {
                local_1180 = *(FName *)((longlong)plVar4 + 0x1c);
                ::FName::ToString(&local_1180,&local_11b8);
                if (2 < (byte)PacketHandlerLog._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
                }
                GPacketHandlerTimeguardLimit = GPacketHandlerTimeguardLimit + -1;
                if (local_11b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_11b8.Data.AllocatorInstance.Data);
                }
              }
            }
          }
          if (GPacketHandlerCRCDump != 0) {
            if (((this->OutgoingPacket)._padding_ & 0x200) == 0) {
              lVar30 = (this->OutgoingPacket).Num + 7 >> 3;
              iVar18 = (int)lVar30;
              if (lVar30 != iVar18) {
                local_1227[0] = 0;
                `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(local_1227);
              }
              if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar30 != iVar18)) {
                UE::Logging::Private::BasicLog<3>
                          (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                           (FLogCategoryBase *)&PacketHandlerLog);
              }
              if ((((this->OutgoingPacket)._padding_ & 0x200) != 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!IsError()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                      ,0x49,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                pPVar22 = (ProcessedPacket *)(*pcVar6)();
                return pPVar22;
              }
              local_11f8 = (*FCrc::MemCrc32Func)
                                     ((this->OutgoingPacket).Buffer.AllocatorInstance.Data,iVar18,0)
              ;
              uStack_11f4 = uStack_11f4 & 0xffffff00;
              if (((local_1220.Data <= (FScriptContainerElement *)&local_11f8) &&
                  ((FScriptContainerElement *)&local_11f8 <
                   local_1220.Data + (longlong)(int)local_1214 * 8)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar6 = (code *)swi(3);
                pPVar22 = (ProcessedPacket *)(*pcVar6)();
                return pPVar22;
              }
              if (local_1218 == local_1214) {
                local_1218 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&local_1220,(int *)&local_1214);
              }
              *(ulonglong *)(local_1220.Data + (longlong)(int)local_1218 * 8) =
                   CONCAT44(uStack_11f4,local_11f8);
              local_1218 = local_1218 + 1;
            }
            else {
              uStack_11fc = CONCAT31(uStack_11fc._1_3_,1);
              local_1200 = 0;
              if (((local_1220.Data <= (FScriptContainerElement *)&local_1200) &&
                  ((FScriptContainerElement *)&local_1200 <
                   local_1220.Data + (longlong)(int)local_1214 * 8)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar6 = (code *)swi(3);
                pPVar22 = (ProcessedPacket *)(*pcVar6)();
                return pPVar22;
              }
              if (local_1218 == local_1214) {
                local_1218 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&local_1220,(int *)&local_1214);
              }
              *(ulonglong *)(local_1220.Data + (longlong)(int)local_1218 * 8) =
                   CONCAT44(uStack_11fc,local_1200);
              local_1218 = local_1218 + 1;
            }
          }
          puVar29 = puVar29 + 2;
          puVar25 = (undefined8 *)(ulonglong)(uVar31 + 1);
          if ((this->HandlerComponents).ArrayNum <= (int)(uVar31 + 1)) break;
        }
      }
      if ((0 < (this->HandlerComponents).ArrayNum) && (0 < (this->OutgoingPacket).Num)) {
        pFVar21 = ::FString::FString(&local_1148,L"PostPacketHandler");
        if (GPacketAuditor != (FPacketAudit *)0x0) {
          pFVar23 = ::FString::FString(&local_1138,pFVar21);
          FPacketAudit::AddStage_Internal(GPacketAuditor,pFVar23,&this->OutgoingPacket,false);
        }
        pFVar3 = (pFVar21->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        FBitWriter::WriteBit(&this->OutgoingPacket,'\x01');
      }
      __return_storage_ptr__ = local_1210;
      if (((!param_4) &&
          (this_00 = (this->ReliabilityComponent).Object,
          this_00 != (ReliabilityHandlerComponent *)0x0)) &&
         (lVar5 = (this->OutgoingPacket).Num, 0 < lVar5)) {
        iVar18 = IntCastLog<int,__int64>(lVar5);
        puVar24 = FBitWriter::GetData(&this->OutgoingPacket);
        ReliabilityHandlerComponent::QueuePacketForResending(this_00,puVar24,iVar18,local_11f0);
        __return_storage_ptr__ = local_1210;
      }
    }
    else if ((this->State == InitializingComponents) && (0 < param_2)) {
      if (param_4) {
        pTVar34 = &this->BufferedConnectionlessPackets;
        puVar25 = ::operator_new(0x48);
        pPVar35 = this;
        if (puVar25 != (undefined8 *)0x0) {
          local_1178 = (FInternetAddr *)local_11d8->_padding_;
          local_11d8 = ((FSharedReferencer<1> *)&local_11d8->SharedReferenceCount)->
                       ReferenceController;
          paVar1 = &local_11d8->SharedReferenceCount;
          if (local_11d8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
          }
          *(int *)(puVar25 + 1) = param_2;
          uVar8 = *(undefined8 *)local_11f0;
          uVar9 = *(undefined8 *)&local_11f0->NumBunchBits;
          puVar25[4] = 0;
          *(undefined4 *)(puVar25 + 5) = 0;
          puVar25[8] = 0;
          *(undefined8 *)((longlong)puVar25 + 0xc) = uVar8;
          *(undefined8 *)((longlong)puVar25 + 0x14) = uVar9;
          puVar25[6] = 0;
          puVar25[7] = 0;
          if ((param_1 == (uchar *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCopyData != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
                                  ,0xca,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            pPVar22 = (ProcessedPacket *)(*pcVar6)();
            return pPVar22;
          }
          uVar33 = (ulonglong)(param_2 + 7U >> 3);
          pvVar26 = operator_new__(uVar33);
          *puVar25 = pvVar26;
          memcpy(pvVar26,param_1,uVar33);
          pTVar14 = local_11d8;
          if (local_11d8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
          }
          local_1168 = puVar25[6];
          pTStack_1160 = (TReferenceControllerBase<1> *)puVar25[7];
          puVar25[6] = local_1178;
          puVar25[7] = local_11d8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_1160);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          puVar29 = puVar25;
          pPVar35 = local_11d0;
        }
        pFVar3 = (pTVar34->AllocatorInstance).Data;
        local_11e8 = puVar29;
        if (((pFVar3 <= (FScriptContainerElement *)&local_11e8) &&
            ((FScriptContainerElement *)&local_11e8 <
             pFVar3 + (longlong)(this->BufferedConnectionlessPackets).ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          pPVar22 = (ProcessedPacket *)(*pcVar6)();
          return pPVar22;
        }
        iVar18 = (this->BufferedConnectionlessPackets).ArrayNum;
        piVar2 = &(this->BufferedConnectionlessPackets).ArrayMax;
        if (iVar18 == *piVar2) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar34->AllocatorInstance,piVar2);
        }
        (this->BufferedConnectionlessPackets).ArrayNum = iVar18 + 1;
        puVar25 = local_11e8;
        this = pPVar35;
      }
      else {
        pTVar34 = &this->BufferedPackets;
        puVar25 = ::operator_new(0x48);
        if (puVar25 != (undefined8 *)0x0) {
          *(int *)(puVar25 + 1) = param_2;
          uVar8 = *(undefined8 *)local_11f0;
          uVar9 = *(undefined8 *)&local_11f0->NumBunchBits;
          puVar25[4] = 0;
          *(undefined4 *)(puVar25 + 5) = 0;
          puVar25[8] = 0;
          *(undefined8 *)((longlong)puVar25 + 0xc) = uVar8;
          *(undefined8 *)((longlong)puVar25 + 0x14) = uVar9;
          puVar25[6] = 0;
          puVar25[7] = 0;
          if ((param_1 == (uchar *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCopyData != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
                                  ,0xca,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            pPVar22 = (ProcessedPacket *)(*pcVar6)();
            return pPVar22;
          }
          uVar33 = (ulonglong)(param_2 + 7U >> 3);
          pvVar26 = operator_new__(uVar33);
          *puVar25 = pvVar26;
          memcpy(pvVar26,param_1,uVar33);
          puVar29 = puVar25;
        }
        pFVar3 = (pTVar34->AllocatorInstance).Data;
        local_11e0 = puVar29;
        if (((pFVar3 <= (FScriptContainerElement *)&local_11e0) &&
            ((FScriptContainerElement *)&local_11e0 <
             pFVar3 + (longlong)(this->BufferedPackets).ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          pPVar22 = (ProcessedPacket *)(*pcVar6)();
          return pPVar22;
        }
        iVar18 = (this->BufferedPackets).ArrayNum;
        piVar2 = &(this->BufferedPackets).ArrayMax;
        if (iVar18 == *piVar2) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar34->AllocatorInstance,piVar2);
        }
        (this->BufferedPackets).ArrayNum = iVar18 + 1;
        puVar25 = local_11e0;
      }
      *(undefined8 **)((pTVar34->AllocatorInstance).Data + (longlong)iVar18 * 8) = puVar25;
      __return_storage_ptr__ = local_1210;
    }
    puVar25 = (undefined8 *)(ulonglong)local_1218;
    if (((this->OutgoingPacket)._padding_ & 0x200) == 0) {
      local_11d0 = (PacketHandler *)(this->OutgoingPacket).Buffer.AllocatorInstance.Data;
      param_2 = (int)(this->OutgoingPacket).Num;
      uStack_11c4 = (uint)uStack_11c4._1_3_ << 8;
      uVar36 = uStack_11c4;
      iStack_11c8 = param_2;
      param_1 = (uchar *)local_11d0;
    }
    else {
      local_11d0 = (PacketHandler *)0x0;
      iStack_11c8 = 0;
      uStack_11c4 = CONCAT31(uStack_11c4._1_3_,1);
      param_1 = (uchar *)0x0;
      param_2 = 0;
      uVar36 = uStack_11c4;
    }
  }
  else {
    local_11b8.Data.ArrayMax = local_11b8.Data.ArrayMax & 0xffffff00;
    uVar36 = local_11b8.Data.ArrayMax;
    local_11b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    local_11b8.Data.ArrayNum = param_2;
  }
  uVar31 = 0;
  __return_storage_ptr__->Data = param_1;
  __return_storage_ptr__->CountBits = param_2;
  *(uint *)&__return_storage_ptr__->bError = uVar36;
  if (GPacketHandlerCRCDump != 0) {
    local_10c8.Base = local_10a8;
    local_10c8.bIsDynamic = false;
    local_10c8.bIsExternal = false;
    lVar30 = 0;
    local_10c8.CurPos = local_10a8;
    local_10c8.End = (wchar_t *)local_a8;
    if (0 < (int)puVar25) {
      do {
        uVar36 = 0;
        if ((int)uVar31 < (int)puVar25) {
          uVar36 = ~uVar31 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          pPVar22 = (ProcessedPacket *)(*pcVar6)();
          return pPVar22;
        }
        FVar13.Data = local_1220.Data;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_10c8,L"%s%i: ");
        if (FVar13.Data[lVar30 + 4] == (FScriptContainerElement)0x0) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_10c8,L"%08X");
        }
        else {
          if (local_10c8.End < local_10c8.CurPos + 5) {
            TStringBuilderBase<wchar_t>::Extend(&local_10c8,5);
          }
          pvVar26 = FGenericPlatformString::Memcpy(local_10c8.CurPos,L"Error",10);
          local_10c8.CurPos = (wchar_t *)((longlong)pvVar26 + 10);
        }
        puVar25 = (undefined8 *)(ulonglong)local_1218;
        uVar31 = uVar31 + 1;
        lVar30 = lVar30 + 8;
        __return_storage_ptr__ = local_1210;
      } while ((int)uVar31 < (int)local_1218);
    }
    local_1128.Base = local_1108;
    local_1128.CurPos = local_1108;
    local_1128.End = (wchar_t *)&local_10c8;
    local_1128.bIsDynamic = false;
    local_1128.bIsExternal = false;
    if (__return_storage_ptr__->bError == false) {
      iVar18 = __return_storage_ptr__->CountBits + 7;
      (*FCrc::MemCrc32Func)
                (__return_storage_ptr__->Data,(int)((iVar18 >> 0x1f & 7U) + iVar18) >> 3,0);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_1128,L"%08X");
    }
    else {
      pvVar26 = FGenericPlatformString::Memcpy(local_1108,L"Error",10);
      local_1128.CurPos = (wchar_t *)((longlong)pvVar26 + 10);
    }
    if (4 < (byte)PacketHandlerLog._0_1_) {
      if (local_1128.End < (TStringBuilderBase<wchar_t> *)(local_1128.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1128,1);
      }
      *local_1128.CurPos = L'\0';
      if (local_10c8.End < local_10c8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_10c8,1);
      }
      *local_10c8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1128);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
  }
  if (local_1220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1220.Data);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// RealignPacket @ 144642980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall PacketHandler::RealignPacket(PacketHandler *this,FBitReader *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1->Pos != 0) {
    lVar5 = param_1->Num - param_1->Pos;
    lVar7 = (longlong)(int)lVar5;
    if (lVar5 != lVar7) {
      local_res10[0] = 0;
      `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar5 != lVar7)) {
      UE::Logging::Private::BasicLog<3>
                (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                 (FLogCategoryBase *)&PacketHandlerLog);
    }
    if (0 < (int)lVar5) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      iVar3 = IntCastLog<int,__int64>((param_1->Num - param_1->Pos) + 7 >> 3);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,&local_18.AllocatorInstance,&local_18.ArrayNum,&local_18.ArrayMax);
      uVar6 = local_18.ArrayNum - 1;
      uVar4 = 0;
      if ((int)uVar6 < local_18.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_18.AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x0;
      (**(code **)(param_1->_padding_ + 400))(param_1,local_18.AllocatorInstance.Data,lVar7);
      FBitReader::SetData(param_1,&local_18,lVar7);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ReplaceIncomingPacket @ 144642af0

void __thiscall PacketHandler::ReplaceIncomingPacket(PacketHandler *this,FBitReader *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Pos == 0) || (lVar4 = param_1->Num - param_1->Pos, lVar4 == 0)) {
    FBitReader::operator=(&this->IncomingPacket,param_1);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar3 = IntCastLog<int,__int64>(lVar4 + 7 >> 3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,&local_18.AllocatorInstance,&local_18.ArrayNum,&local_18.ArrayMax);
    uVar6 = local_18.ArrayNum - 1;
    uVar5 = 0;
    if ((int)uVar6 < local_18.ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18.AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x0;
    lVar4 = param_1->Num - param_1->Pos;
    (**(code **)(param_1->_padding_ + 400))(param_1,local_18.AllocatorInstance.Data,lVar4);
    FBitReader::SetData(&this->IncomingPacket,&local_18,lVar4);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SendHandlerPacket @ 144642c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
PacketHandler::SendHandlerPacket
          (PacketHandler *this,HandlerComponent *param_1,FBitWriter *param_2,
          FOutPacketTraits *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  HandlerComponent *pHVar4;
  ReliabilityHandlerComponent *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  FString *pFVar11;
  FString *pFVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  HandlerComponent *local_res10;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  local_res10 = param_1;
  if ((this->State == Uninitialized) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State != UE::Handler::State::Uninitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                         ,0x3b0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->LowLevelSendDel,
             &local_70);
  if (((*(int *)&(this->LowLevelSendDel).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->LowLevelSendDel).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(*plVar2 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x3f2,L"Called SendHandlerPacket when no LowLevelSend delegate is bound");
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  uVar15 = 0;
  bVar7 = false;
  uVar16 = uVar15;
  if (0 < (this->HandlerComponents).ArrayNum) {
    do {
      if ((param_2->_padding_ & 0x200) != 0) {
        return;
      }
      uVar14 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar14 < (this->HandlerComponents).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->HandlerComponents).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar3 + uVar16) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pHVar4 = *(HandlerComponent **)(pFVar3 + uVar16);
      if (bVar7) {
        cVar8 = (**(code **)(pHVar4->_padding_ + 8))(pHVar4);
        if (cVar8 != '\0') {
          if ((longlong)(ulonglong)pHVar4->MaxOutgoingBits < param_2->Num) {
            FArchiveState::SetError((FArchiveState *)param_2);
            if (1 < (byte)PacketHandlerLog._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&PacketHandlerLog)
              ;
            }
            break;
          }
          (**(code **)(pHVar4->_padding_ + 0x28))(pHVar4,param_2,param_3);
        }
      }
      else if (pHVar4 == local_res10) {
        bVar7 = true;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x10;
    } while ((int)(uVar14 + 1) < (this->HandlerComponents).ArrayNum);
  }
  if (((param_2->_padding_ & 0x200) == 0) && (0 < param_2->Num)) {
    pFVar11 = ::FString::FString(&local_90,L"PostPacketHandler");
    if (GPacketAuditor != (FPacketAudit *)0x0) {
      pFVar12 = ::FString::FString(&local_80,pFVar11);
      FPacketAudit::AddStage_Internal(GPacketAuditor,pFVar12,param_2,false);
    }
    pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    FBitWriter::WriteBit(param_2,'\x01');
    this_00 = (this->ReliabilityComponent).Object;
    if (this_00 != (ReliabilityHandlerComponent *)0x0) {
      lVar5 = param_2->Num;
      iVar13 = (int)lVar5;
      if (lVar5 != iVar13) {
        local_res8[0] = 0;
        `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((2 < (byte)PacketHandlerLog._0_1_) && (lVar5 != iVar13)) {
        UE::Logging::Private::BasicLog<3>
                  (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                   (FLogCategoryBase *)&PacketHandlerLog);
      }
      if (((param_2->_padding_ & 0x200) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                             ,0x49,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ReliabilityHandlerComponent::QueuePacketForResending
                (this_00,(uchar *)(param_2->Buffer).AllocatorInstance.Data,iVar13,param_3);
      iVar13 = (this_00->BufferedPackets).ArrayNum;
      uVar14 = iVar13 - 1;
      uVar10 = 0;
      if ((int)uVar14 < iVar13) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(HandlerComponent **)
       (*(longlong *)((this_00->BufferedPackets).AllocatorInstance.Data + (longlong)(int)uVar14 * 8)
       + 0x40) = local_res10;
    }
    this->bRawSend = '\x01';
    uVar16 = param_2->Num;
    if (uVar16 != (longlong)(int)uVar16) {
      local_98[0] = 0;
      `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(local_98);
    }
    if ((2 < (byte)PacketHandlerLog._0_1_) && (uVar16 != (longlong)(int)uVar16)) {
      UE::Logging::Private::BasicLog<3>
                (&`int___cdecl_IntCastLog<int,__int64>(__int64)'::__l3::LOG_Static,
                 (FLogCategoryBase *)&PacketHandlerLog);
    }
    if (((param_2->_padding_ & 0x200) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                           ,0x49,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_2->Buffer).AllocatorInstance.Data;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->LowLevelSendDel,
               &local_58);
    if ((*(int *)&(this->LowLevelSendDel).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->LowLevelSendDel).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pFVar3,uVar16 & 0xffffffff,param_3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    this->field_0x2 = this->field_0x2 ^ (this->bRawSend ^ this->bRawSend) & 1;
  }
  return;
}

// SetActive @ 1446430c0

void __thiscall HandlerComponent::SetActive(HandlerComponent *this,bool param_1)

{
  this->bActive = param_1;
  return;
}

// SetState @ 1446430d0

void __thiscall HandlerComponent::SetState(HandlerComponent *this,State param_1)

{
  this->State = param_1;
  return;
}

// SetState @ 1446430e0

void __thiscall PacketHandler::SetState(PacketHandler *this,State param_1)

{
  if (param_1 == this->State) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x3fa,L"Set new Packet Processor State to the state it is currently in.");
    return;
  }
  this->State = param_1;
  return;
}

// Tick @ 144643130

void __thiscall HandlerComponent::Tick(HandlerComponent *this,float param_1)

{
  return;
}

// Tick @ 144643140

void __thiscall PacketHandler::Tick(PacketHandler *this,float param_1)

{
  int iVar1;
  longlong *plVar2;
  TNode *pTVar3;
  BufferedPacket *pBVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FBitWriter local_d8;
  
  iVar1 = (this->HandlerComponents).ArrayNum;
  pFVar8 = (this->HandlerComponents).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HandlerComponents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    plVar2 = *(longlong **)pFVar8;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  while( true ) {
    pTVar3 = ((this->QueuedHandlerPackets).Tail)->NextNode;
    if (pTVar3 == (TNode *)0x0) {
      return;
    }
    pBVar4 = pTVar3->Item;
    pTVar5 = (this->QueuedHandlerPackets).Tail;
    (this->QueuedHandlerPackets).Tail = pTVar3;
    pTVar3->Item = (BufferedPacket *)0x0;
    ::operator_delete(pTVar5,0x10);
    if ((pBVar4->FromComponent == (HandlerComponent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("QueuedPacket->FromComponent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                           ,0x8f,L""), bVar7)) break;
    FBitWriter::FBitWriter(&local_d8);
    FBitWriter::SerializeBits(&local_d8,pBVar4->Data,(ulonglong)pBVar4->CountBits);
    SendHandlerPacket(this,pBVar4->FromComponent,&local_d8,&pBVar4->Traits);
    FBitWriter::~FBitWriter(&local_d8);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// UpdateInitialState @ 144643290

void __thiscall PacketHandler::UpdateInitialState(PacketHandler *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackX_8 [8];
  
  if (this->State != Uninitialized) {
    return;
  }
  if (0 < (this->HandlerComponents).ArrayNum) {
    if (this->State == Uninitialized) {
      if ((this->HandlerComponents).ArrayNum < 1) {
        HandlerInitialized(this);
      }
      else {
        this->State = InitializingComponents;
      }
    }
    iVar5 = (this->HandlerComponents).ArrayNum;
    pFVar7 = (this->HandlerComponents).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->HandlerComponents).ArrayNum != iVar5) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<HandlerComponent,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (pFVar7 == pFVar8) break;
      plVar1 = *(longlong **)pFVar7;
      if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x1b) == '\0')) {
        (**(code **)(*plVar1 + 0x48))(plVar1);
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(**(longlong **)pFVar7 + 0x78))();
      }
      pFVar7 = pFVar7 + 0x10;
    }
    uVar6 = (this->HandlerComponents).ArrayNum - 1;
    uVar10 = this->MaxPacketBits;
    if (-1 < (int)uVar6) {
      lVar9 = (longlong)(int)uVar6 << 4;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->HandlerComponents).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->HandlerComponents).AllocatorInstance.Data + lVar9);
        iVar5 = (**(code **)(*plVar1 + 0x70))(plVar1);
        if (iVar5 == -1) {
          UE::Assert::Private::ProcessLowLevelFatalError
                    ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                     ,0x4b4,L"Handler returned invalid \'GetReservedPacketBits\' value.");
        }
        else {
          *(uint *)((longlong)plVar1 + 0x14) = uVar10;
          uVar10 = uVar10 - iVar5;
        }
        lVar9 = lVar9 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    return;
  }
  HandlerInitialized(this);
  return;
}

// Z_Construct_UClass_UHandlerComponentFactory_NoRegister @ 1446432b0

UClass * __cdecl Z_Construct_UClass_UHandlerComponentFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PacketHandler",L"HandlerComponentFactory",
               &Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton,
               UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHandlerComponentFactory>,
               InternalVTableHelperCtorCaller<UHandlerComponentFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHandlerComponentFactory.InnerSingleton;
}

// Z_Construct_UClass_UPacketHandlerProfileConfig_NoRegister @ 144643360

UClass * __cdecl Z_Construct_UClass_UPacketHandlerProfileConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PacketHandler",L"PacketHandlerProfileConfig",
               &Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton,
               UPacketHandlerProfileConfig::StaticRegisterNativesUPacketHandlerProfileConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPacketHandlerProfileConfig>,
               InternalVTableHelperCtorCaller<UPacketHandlerProfileConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton;
}

// IMPLEMENT_MODULE_PacketHandler @ 144643410

void __cdecl IMPLEMENT_MODULE_PacketHandler(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AddComponentByNameDelegate'' @ 15036e5f0

void __cdecl
`PacketHandler::GetAddComponentByNameDelegate'::__l2::
_dynamic_atexit_destructor_for__AddComponentByNameDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AddComponentByNameDelegate,
             (FWriteAccessScope *)&local_28);
  if ((AddComponentByNameDelegate._16_4_ != 0) && (AddComponentByNameDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)AddComponentByNameDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&AddComponentByNameDelegate.field_0x8,0,0,0x10);
    AddComponentByNameDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (AddComponentByNameDelegate._8_8_ != 0) {
    FMemory::Free((void *)AddComponentByNameDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AddComponentByNameDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'AddComponentDelegate'' @ 15036e690

void __cdecl
`PacketHandler::GetAddComponentDelegate'::__l2::
_dynamic_atexit_destructor_for__AddComponentDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AddComponentDelegate,
             (FWriteAccessScope *)&local_28);
  if ((AddComponentDelegate._16_4_ != 0) && (AddComponentDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)AddComponentDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&AddComponentDelegate.field_0x8,0,0,0x10);
    AddComponentDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (AddComponentDelegate._8_8_ != 0) {
    FMemory::Free((void *)AddComponentDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AddComponentDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPacketHandlerCRCDump'' @ 15036e730

void __cdecl _dynamic_atexit_destructor_for__CVarNetPacketHandlerCRCDump__(void)

{
  CVarNetPacketHandlerCRCDump._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPacketHandlerCRCDump);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPacketHandlerTimeguardLimit'' @ 15036e750

void __cdecl _dynamic_atexit_destructor_for__CVarNetPacketHandlerTimeguardLimit__(void)

{
  CVarNetPacketHandlerTimeguardLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPacketHandlerTimeguardLimit)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPacketHandlerTimeguardThresholdMS'' @ 15036e770

void __cdecl _dynamic_atexit_destructor_for__CVarNetPacketHandlerTimeguardThresholdMS__(void)

{
  CVarNetPacketHandlerTimeguardThresholdMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetPacketHandlerTimeguardThresholdMS);
  return;
}

// `dynamic_atexit_destructor_for_'PacketHandlerLog'' @ 15036e790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__PacketHandlerLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&PacketHandlerLog);
  return;
}

// operator() @ 1504c2030

bool __thiscall `IntCastLog<int,__int64>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1315351300816240557>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1315351300816240557>,
                       &`public:___cdecl_`int___cdecl_IntCastLog<int,__int64>(__int64)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

