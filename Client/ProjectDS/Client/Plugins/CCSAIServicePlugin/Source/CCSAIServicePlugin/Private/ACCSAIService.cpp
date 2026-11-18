// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 20

// StaticClass @ 14ac841a0

UClass * __cdecl ACCSAIService::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACCSAIService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CCSAIServicePlugin",L"CCSAIService",
               &Z_Registration_Info_UClass_ACCSAIService.InnerSingleton,
               StaticRegisterNativesACCSAIService,0x350,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACCSAIService>,
               InternalVTableHelperCtorCaller<ACCSAIService>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACCSAIService.InnerSingleton;
}

// ACCSAIService @ 14ac85880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACCSAIService * __thiscall ACCSAIService::ACCSAIService(ACCSAIService *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->OpenDebug = true;
  this->_padding_ = (longlong)&___7ACCSAIService__6B_;
  this->GameId = 0;
  *(undefined8 *)&this->OnLoginRequestReceived = 0;
  *(undefined8 *)&(this->OnLoginRequestReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginRequestReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnLogoutRequestReceived = 0;
  *(undefined8 *)&(this->OnLogoutRequestReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnLogoutRequestReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnAICommandReceived = 0;
  *(undefined8 *)&(this->OnAICommandReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnAICommandReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnCharEntityRegistrationResponse = 0;
  *(undefined8 *)&(this->OnCharEntityRegistrationResponse).field_0x8 = 0;
  *(undefined8 *)&(this->OnCharEntityRegistrationResponse).field_0x10 = 0;
  (this->TCPClient).Object = (FCCSAITCPClient *)0x0;
  (this->TCPClient).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MaxConnectionRetries = 100;
  this->ReconnectDelay = 2.0;
  this->MaxPacketSize = 0xa00000;
  this->ReceiveBufferSize = 0x10000;
  return this;
}

// ACCSAIService @ 14ac85950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACCSAIService * __thiscall ACCSAIService::ACCSAIService(ACCSAIService *this)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this);
  this->OpenDebug = true;
  this->_padding_ = (longlong)&___7ACCSAIService__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->GameId = 0;
  *(undefined8 *)&this->OnLoginRequestReceived = 0;
  *(undefined8 *)&(this->OnLoginRequestReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginRequestReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnLogoutRequestReceived = 0;
  *(undefined8 *)&(this->OnLogoutRequestReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnLogoutRequestReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnAICommandReceived = 0;
  *(undefined8 *)&(this->OnAICommandReceived).field_0x8 = 0;
  *(undefined8 *)&(this->OnAICommandReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnCharEntityRegistrationResponse = 0;
  *(undefined8 *)&(this->OnCharEntityRegistrationResponse).field_0x8 = 0;
  *(undefined8 *)&(this->OnCharEntityRegistrationResponse).field_0x10 = 0;
  (this->TCPClient).Object = (FCCSAITCPClient *)0x0;
  (this->TCPClient).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MaxConnectionRetries = 100;
  this->ReconnectDelay = 2.0;
  this->MaxPacketSize = 0xa00000;
  this->ReceiveBufferSize = 0x10000;
  return this;
}

// ~ACCSAIService @ 14ac85c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACCSAIService::~ACCSAIService(ACCSAIService *this)

{
  void *pvVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7ACCSAIService__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TCPClient != (TSharedPtr<FCCSAITCPClient,1> *)&local_18) {
    (this->TCPClient).Object = (FCCSAITCPClient *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TCPClient).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TCPClient).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnCharEntityRegistrationResponse).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharEntityRegistrationResponse);
  pvVar1 = *(void **)&(this->OnAICommandReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAICommandReceived);
  pvVar1 = *(void **)&(this->OnLogoutRequestReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLogoutRequestReceived);
  pvVar1 = *(void **)&(this->OnLoginRequestReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginRequestReceived);
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 14ac861d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACCSAIService::BeginPlay(ACCSAIService *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  ACCSAIService *pAVar5;
  UClass *pUVar6;
  ACCSAIService *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ACCSAIService *pAVar10;
  undefined1 auStack_128 [32];
  ACCSAIService *pAStack_108;
  undefined1 auStack_100 [8];
  ACCSAIService **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (ACCSAIService *)0x0;
  pAVar10 = (ACCSAIService *)0x0;
  pAVar5 = this;
  if (this == (ACCSAIService *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (ACCSAIService *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (bVar3) {
      FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
    }
  }
  if ((this->_padding_ & 0x180000000000) != 0x80000000000) {
    pAStack_108 = this;
    `AActor::BeginPlay'::__l2::<lambda_1>::operator()(&pAStack_108);
  }
  (**(code **)(this->_padding_ + 0x400))(this,*(undefined4 *)((longlong)&this->_padding_ + 4));
  AActor::RegisterAllActorTickFunctions((AActor *)this,true,false);
  puStack_30 = (undefined8 *)0x0;
  uStack_24 = 0x18;
  iStack_28 = 0;
  pAVar5 = (ACCSAIService *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (ACCSAIService *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (ACCSAIService *)0x0) goto LAB_147385169;
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar10 = pAVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pAVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pAVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pAVar10 = pAVar5;
    }
  }
LAB_147385169:
  pAVar7 = (ACCSAIService *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ACCSAIService *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ACCSAIService *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  iVar2 = iStack_28;
  puVar9 = auStack_f0;
  if (puStack_30 != (undefined8 *)0x0) {
    puVar9 = puStack_30;
  }
  puVar1 = puVar9 + iStack_28;
  while( true ) {
    if (iStack_28 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_100);
    }
    if (puVar9 == puVar1) break;
    pAStack_108 = (ACCSAIService *)*puVar9;
    if (((pAStack_108->_padding_ & 1) != 0) && ((pAStack_108->_padding_ & 0x20000000) == 0)) {
      UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)pAStack_108,true);
      (**(code **)(pAStack_108->_padding_ + 0x3f8))();
      if ((pAStack_108->_padding_ & 0x20000000) == 0) {
        ppAStack_f8 = &pAStack_108;
        `AActor::BeginPlay'::__l12::<lambda_2>::operator()(&ppAStack_f8);
      }
    }
    puVar9 = puVar9 + 1;
  }
  if ((((this->_padding_ & 0x20000) != 0) &&
      (pUVar4 = AActor::GetWorld((AActor *)this), pUVar4 != (UWorld *)0x0)) &&
     (this_00 = UWorld::GetSubsystem<UAutoDestroySubsystem>(pUVar4),
     this_00 != (UAutoDestroySubsystem *)0x0)) {
    UAutoDestroySubsystem::RegisterActor(this_00,(AActor *)this);
  }
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveBeginPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,0);
  *(byte *)((longlong)&this->_padding_ + 5) =
       *(byte *)((longlong)&this->_padding_ + 5) & 0xf7 | 0x10;
  if (puStack_30 != (undefined8 *)0x0) {
    FMemory::Free(puStack_30);
  }
  return;
}

// ConnectToServer @ 14ac86580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ACCSAIService::ConnectToServer(ACCSAIService *this,FString *param_1,bool param_2)

{
  FString *pFVar1;
  int *piVar2;
  TSharedPtr<FCCSAITCPClient,1> *pTVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  FRunnableThread *pFVar12;
  ForAnyElementType FVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  FCCSAITCPClient *pFVar16;
  FIPv4Address local_res20 [2];
  FString local_98;
  FCCSAITCPClient *local_88;
  FSharedReferencer<1> FStack_80;
  FString local_78;
  longlong local_68;
  FSharedReferencer<1> FStack_60;
  FString local_58 [2];
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::FString(local_58,L":");
  bVar8 = ::FString::Split(param_1,local_58,&local_98,&local_78);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar13.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar10 = _wtoi((wchar_t *)FVar13.Data);
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    pTVar3 = &this->TCPClient;
    local_68 = 0;
    FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TSharedPtr<FCCSAITCPClient,1> *)&local_68) {
      pTVar3->Object = (FCCSAITCPClient *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TCPClient).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
    pTVar11 = ::operator_new(0x130);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pFVar16 = (FCCSAITCPClient *)&DAT_00000010;
      local_88 = ___xmm_00000000000000000000000000000010;
      FStack_80.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFCCSAITCPClient___00_SharedPointerInternals__6B_;
      FCCSAITCPClient::FCCSAITCPClient((FCCSAITCPClient *)(pTVar11 + 1));
      pFVar16 = (FCCSAITCPClient *)(pTVar11 + 1);
      if ((pFVar16 == (FCCSAITCPClient *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      FStack_80.ReferenceController = pTVar11;
      pTVar14 = pTVar11;
      local_88 = pFVar16;
    }
    if (pTVar3 != (TSharedPtr<FCCSAITCPClient,1> *)&local_88) {
      pTVar3->Object = pFVar16;
      local_88 = (FCCSAITCPClient *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TCPClient).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    iVar5 = this->MaxPacketSize;
    if ((pTVar3->Object == (FCCSAITCPClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pTVar3->Object->MaxPacketSize = iVar5;
    iVar5 = this->ReceiveBufferSize;
    if ((pTVar3->Object == (FCCSAITCPClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pTVar3->Object->ReceiveBufferSize = iVar5;
    fVar4 = this->ReconnectDelay;
    if ((pTVar3->Object == (FCCSAITCPClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pTVar3->Object->ReconnectDelay = fVar4;
    iVar5 = this->MaxConnectionRetries;
    if ((pTVar3->Object == (FCCSAITCPClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pTVar3->Object->MaxConnectionRetries = iVar5;
    if ((pTVar3->Object == (FCCSAITCPClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    FVar13.Data = local_98.Data.AllocatorInstance.Data;
    pFVar16 = pTVar3->Object;
    pFVar1 = &pFVar16->ServerIP;
    if (pFVar1 != &local_98) {
      iVar7 = local_98.Data.ArrayNum;
      lVar15 = (longlong)local_98.Data.ArrayNum;
      piVar2 = &(pFVar16->ServerIP).Data.ArrayMax;
      iVar5 = *piVar2;
      (pFVar16->ServerIP).Data.ArrayNum = local_98.Data.ArrayNum;
      if ((local_98.Data.ArrayNum == 0) && (iVar5 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_98.Data.ArrayNum,iVar5,(ForAnyElementType *)pFVar1,
                   local_98.Data.ArrayNum,piVar2);
        if (iVar7 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar13.Data,lVar15 * 2);
        }
      }
    }
    bVar8 = FIPv4Address::Parse(&local_98,local_res20);
    if (bVar8) {
      pFVar16->ServerPort = iVar10;
      if (pFVar16->NetworkThread != (FRunnableThread *)0x0) {
        LOCK();
        pFVar16->bShouldRun = (FThreadSafeBool)0x0;
        UNLOCK();
        (**(code **)(pFVar16->NetworkThread->_padding_ + 0x18))(pFVar16->NetworkThread,1);
        pFVar12 = pFVar16->NetworkThread;
        if (pFVar12 != (FRunnableThread *)0x0) {
          (**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,1);
        }
        pFVar16->NetworkThread = (FRunnableThread *)0x0;
      }
      FCCSAITCPClient::Connect(pFVar16);
      LOCK();
      pFVar16->bShouldRun = (FThreadSafeBool)0x1;
      UNLOCK();
      pFVar16->bAutoConnect = param_2;
      pFVar12 = FRunnableThread::Create
                          ((FRunnable *)pFVar16,L"CCSAITCPClientNetwork",0x20000,TPri_AboveNormal,
                           0xffffffffffffffff,None);
      pFVar16->NetworkThread = pFVar12;
      bVar8 = true;
    }
    else {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      bVar8 = false;
    }
  }
  else {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar8 = false;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// EndPlay @ 14ac87020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACCSAIService::EndPlay(ACCSAIService *this,Type param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar6;
  UWorld *pUVar7;
  FStopReplicatingActorParams *pFVar8;
  UFunction *pUVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  ACCSAIService *pAVar11;
  UClass *pUVar12;
  ACCSAIService *pAVar13;
  longlong *plVar14;
  ACCSAIService *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ACCSAIService *pAStack_148;
  ACCSAIService *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ACCSAIService *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->_padding_ & 0x180000000000) != 0x100000000000) {
    return;
  }
  pAVar13 = (ACCSAIService *)0x0;
  pAVar15 = (ACCSAIService *)0x0;
  pAVar11 = this;
  if (this == (ACCSAIService *)0x0) {
    pAVar11 = pAVar13;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar11);
  if (bVar6) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (bVar6) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xe7;
  pFVar8 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar8);
  uStack_168 = (char)param_1;
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar5);
    FStack_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar10->Object;
    if (FStack_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&FStack_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_108.SharedReferenceCount.ReferenceController);
  }
  this_00 = pTStack_158;
  if (pTStack_158 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((pTStack_158 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAStack_120 = this;
    uStack_118 = (char)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,&pAStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_150.ReferenceController);
  plStack_38 = (longlong *)0x0;
  uStack_2c = 0x18;
  iStack_30 = 0;
  pAVar11 = (ACCSAIService *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ACCSAIService *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ACCSAIService *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar15 = pAVar13;
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if (((int)pAVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pAVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar15 = pAVar11;
    }
  }
LAB_147390f4f:
  pAVar13 = (ACCSAIService *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (ACCSAIService *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (ACCSAIService *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar3 = iStack_30;
  plVar14 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar14 = plStack_38;
  }
  plVar2 = plVar14 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar14 == plVar2) break;
    plStack_160 = (longlong *)*plVar14;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar14 = plVar14 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// GetPrivateStaticClass @ 14ac873a0

UClass * __cdecl ACCSAIService::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACCSAIService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CCSAIServicePlugin",L"CCSAIService",
               &Z_Registration_Info_UClass_ACCSAIService.InnerSingleton,
               StaticRegisterNativesACCSAIService,0x350,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACCSAIService>,
               InternalVTableHelperCtorCaller<ACCSAIService>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACCSAIService.InnerSingleton;
}

// IsConnected @ 14ac87490

bool __thiscall ACCSAIService::IsConnected(ACCSAIService *this)

{
  FCCSAITCPClient *pFVar1;
  
  pFVar1 = (this->TCPClient).Object;
  if ((pFVar1 != (FCCSAITCPClient *)0x0) && (pFVar1->bIsConnected != (FThreadSafeBool)0x0)) {
    return true;
  }
  return false;
}

// ProcessAICommandRequest @ 14ac87520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ACCSAIService::ProcessAICommandRequest(ACCSAIService *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  double dVar4;
  FJsonObject *pFVar5;
  ForAnyElementType _Src;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  FString *pFVar12;
  longlong lVar13;
  TSharedPtr<FJsonObject,1> *local_res8;
  TSharedPtr<FJsonObject,1> local_278;
  FCCS_AICommandRequest local_268;
  StackState local_208;
  double local_1d0;
  double dStack_1c8;
  float local_1c0;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac [3];
  ulong64 local_1a0;
  ulong64 local_198;
  int local_190;
  TVector2<double>_u_0 local_188;
  int local_160;
  FString local_158;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  if ((this->OpenDebug != false) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  local_268.messageType = AICommandRequest;
  local_268.command.moveInputVector.field0_0x0._s_0 =
       UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_268.gameId = 0;
  local_268.charEntityId = 0;
  local_268.frameNo = 0;
  local_268.command.cameraYaw = 0.0;
  local_268.command.inputList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.command.inputList.ArrayNum = 0;
  local_268.command.inputList.ArrayMax = 0;
  local_268.errorCode = 0;
  local_268.errorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.errorMessage.Data.ArrayNum = 0;
  local_268.errorMessage.Data.ArrayMax = 0;
  bVar7 = FJsonObjectConverter::JsonObjectStringToUStruct<FCCS_AICommandRequest>
                    (param_1,&local_268,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
  if (!bVar7) {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar7 = false;
    goto LAB_14ac87cdd;
  }
  if (local_268.messageType == AICommandRequest) {
LAB_14ac87c06:
    _Src.Data = local_268.command.inputList.AllocatorInstance.Data;
    if (local_268.errorCode == 0) {
      lVar13 = (longlong)local_268.command.inputList.ArrayNum;
      local_1c0 = local_268.command.cameraYaw;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1ac[0] = 0;
      local_1b0 = local_268.command.inputList.ArrayNum;
      local_1d0 = local_268.command.moveInputVector.field0_0x0._s_0.X;
      dStack_1c8 = local_268.command.moveInputVector.field0_0x0._s_0.Y;
      if (local_268.command.inputList.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,1,local_268.command.inputList.ArrayNum,0,&local_1b8,
                   local_268.command.inputList.ArrayNum,local_1ac);
        memcpy(local_1b8.Data,_Src.Data,lVar13 * 2);
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAICommandReceived,
                 &local_1d0);
      if (local_1b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      bVar7 = true;
      goto LAB_14ac87cdd;
    }
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = 0;
    local_188 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_278.Object = (FJsonObject *)0x0;
    local_278.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = TJsonStringReader<wchar_t>::Create(&local_c8,param_1);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    local_208.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Identifier.Data.ArrayNum = 0;
    local_208.Identifier.Data.ArrayMax = 0;
    local_208.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Array.ArrayNum = 0;
    local_208.Array.ArrayMax = 0;
    local_208.Object.Object = (FJsonObject *)0x0;
    local_208.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar7 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_208,None);
    if (bVar7) {
      bVar7 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_208,&local_278);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_208.Array.AllocatorInstance.Data,
                 local_208.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_208.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_208.Array.AllocatorInstance.Data);
      }
      if (local_208.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)local_278.Object !=
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)0x0)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_278.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pFVar5 = local_278.Object;
        uStack_140 = 7;
        local_148 = L"command";
        local_b8._12_4_ = uStack_13c;
        local_b8.Size = 7;
        local_b8.DataPtr = L"command";
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"command");
        pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>
                            ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                              *)pFVar5,uVar9,&local_b8);
        if ((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0))
        {
          if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)local_278.Object ==
               (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          pFVar5 = local_278.Object;
          local_138 = L"charEntityId";
          uStack_130 = 0xc;
          local_a8._12_4_ = uStack_12c;
          local_a8.Size = 0xc;
          local_a8.DataPtr = L"charEntityId";
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(0xc,L"charEntityId");
          pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>
                              ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                *)pFVar5,uVar9,&local_a8);
          if ((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)
             ) {
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_278.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_128 = L"gameId";
            uStack_120 = 6;
            local_98._12_4_ = uStack_11c;
            local_98.Size = 6;
            local_98.DataPtr = L"gameId";
            dVar4 = FJsonObject::GetNumberField(local_278.Object,&local_98);
            lVar13 = 0;
            if ((__real_43e0000000000000 <= dVar4) &&
               (dVar4 = dVar4 - __real_43e0000000000000, dVar4 < __real_43e0000000000000)) {
              lVar13 = -0x8000000000000000;
            }
            local_1a0 = (longlong)dVar4 + lVar13;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_278.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_118 = L"charEntityId";
            uStack_110 = 0xc;
            local_88._12_4_ = uStack_10c;
            local_88.Size = 0xc;
            local_88.DataPtr = L"charEntityId";
            dVar4 = FJsonObject::GetNumberField(local_278.Object,&local_88);
            local_198 = (ulong64)(int)dVar4;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_278.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_108 = L"frameNo";
            uStack_100 = 7;
            local_78._12_4_ = uStack_fc;
            local_78.Size = 7;
            local_78.DataPtr = L"frameNo";
            dVar4 = FJsonObject::GetNumberField(local_278.Object,&local_78);
            local_190 = (int)dVar4;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_278.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_f8 = L"errorCode";
            uStack_f0 = 9;
            local_68._12_4_ = uStack_ec;
            local_68.Size = 9;
            local_68.DataPtr = L"errorCode";
            dVar4 = FJsonObject::GetNumberField(local_278.Object,&local_68);
            local_160 = (int)dVar4;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_278.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_e8 = L"errorMessage";
            uStack_e0 = 0xc;
            local_58._12_4_ = uStack_dc;
            local_58.Size = 0xc;
            local_58.DataPtr = L"errorMessage";
            pFVar12 = FJsonObject::GetStringField(local_278.Object,&local_48,&local_58);
            if (&local_158 != pFVar12) {
              local_158.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
              (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_158.Data.ArrayNum = (pFVar12->Data).ArrayNum;
              (pFVar12->Data).ArrayNum = 0;
              (pFVar12->Data).ArrayMax = 0;
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_278.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_d8 = L"command";
            uStack_d0 = 7;
            local_38._12_4_ = uStack_cc;
            local_38.Size = 7;
            local_38.DataPtr = L"command";
            bVar7 = FJsonObject::TryGetObjectField(local_278.Object,&local_38,&local_res8);
            if (bVar7) {
              iVar6 = local_268.command.inputList.ArrayMax;
              local_268.gameId = local_1a0;
              local_268.charEntityId = local_198;
              local_268.frameNo = local_190;
              local_268.messageType = AICommandRequest;
              local_268.command.moveInputVector.field0_0x0 = local_188;
              local_268.command.cameraYaw = 0.0;
              local_268.command.inputList._8_8_ =
                   (ulonglong)(uint)local_268.command.inputList.ArrayMax << 0x20;
              if (iVar6 == 0) {
                local_268.command.inputList.ArrayNum = 0;
                local_268.command.inputList.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,1,0,iVar6,&local_268.command.inputList.AllocatorInstance,0,
                           &local_268.command.inputList.ArrayMax);
              }
              iVar6 = local_158.Data.ArrayNum;
              local_268.errorCode = local_160;
              local_268.errorMessage.Data.ArrayNum = local_158.Data.ArrayNum;
              if ((local_158.Data.ArrayNum == 0) && (local_268.errorMessage.Data.ArrayMax == 0)) {
                local_268.errorMessage.Data.ArrayNum = 0;
                local_268.errorMessage.Data.ArrayMax = 0;
              }
              else {
                lVar13 = (longlong)local_158.Data.ArrayNum;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_158.Data.ArrayNum,local_268.errorMessage.Data.ArrayMax,
                           (ForAnyElementType *)&local_268.errorMessage,local_158.Data.ArrayNum,
                           &local_268.errorMessage.Data.ArrayMax);
                if (iVar6 != 0) {
                  memcpy(local_268.errorMessage.Data.AllocatorInstance.Data,
                         local_158.Data.AllocatorInstance.Data,lVar13 * 2);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_278.SharedReferenceCount.ReferenceController);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              goto LAB_14ac87c06;
            }
          }
        }
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_208.Array.AllocatorInstance.Data,
                 local_208.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_208.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_208.Array.AllocatorInstance.Data);
      }
      if (local_208.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
      bVar7 = false;
      goto LAB_14ac87cdd;
    }
  }
  bVar7 = false;
LAB_14ac87cdd:
  if (local_268.errorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.errorMessage.Data.AllocatorInstance.Data);
  }
  if (local_268.command.inputList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.command.inputList.AllocatorInstance.Data);
  }
  return bVar7;
}

// ProcessLoginRequest @ 14ac87d30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ACCSAIService::ProcessLoginRequest(ACCSAIService *this,FString *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  code *pcVar4;
  double dVar5;
  FJsonObject *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  undefined1 local_res18 [16];
  int local_178 [2];
  FCCS_LoginRequest local_170;
  TSharedPtr<FJsonObject,1> local_150;
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  ECCS_MessageType local_130 [4];
  int local_12c;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  undefined1 local_118;
  StackState local_110;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  local_170.messageType = LoginRequest;
  local_170.selectedCharId = 0;
  local_170.deckCharId.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.deckCharId.ArrayNum = 0;
  local_170.deckCharId.ArrayMax = 0;
  local_170.isLeader = false;
  bVar7 = FJsonObjectConverter::JsonObjectStringToUStruct<FCCS_LoginRequest>
                    (param_1,&local_170,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
  if (bVar7) {
LAB_14ac8823c:
    if (local_170.messageType == LoginRequest) {
      if ((this->OpenDebug != false) && (4 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      FVar14.Data = local_170.deckCharId.AllocatorInstance.Data;
      lVar15 = (longlong)local_170.deckCharId.ArrayNum;
      local_128.Data = (FScriptContainerElement *)0x0;
      local_11c = 0;
      local_118 = 0;
      local_12c = local_170.selectedCharId;
      local_120 = local_170.deckCharId.ArrayNum;
      local_130[0] = local_170.messageType;
      if (local_170.deckCharId.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_170.deckCharId.ArrayNum,0,&local_128,local_170.deckCharId.ArrayNum,
                   &local_11c);
        memcpy(local_128.Data,FVar14.Data,lVar15 << 2);
      }
      local_118 = local_170.isLeader;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnLoginRequestReceived,local_130);
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    local_150.Object = (FJsonObject *)0x0;
    local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = TJsonStringReader<wchar_t>::Create(&local_88,param_1);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    local_110.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Identifier.Data.ArrayNum = 0;
    local_110.Identifier.Data.ArrayMax = 0;
    local_110.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Array.ArrayNum = 0;
    local_110.Array.ArrayMax = 0;
    local_110.Object.Object = (FJsonObject *)0x0;
    local_110.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar7 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar3,&local_110,None);
    if (bVar7) {
      bVar7 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_110,&local_150);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_110.Array.AllocatorInstance.Data,
                 local_110.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_110.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_110.Array.AllocatorInstance.Data);
      }
      if (local_110.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)local_150.Object !=
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)0x0)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_150.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar6 = local_150.Object;
        uStack_d0 = 0xe;
        local_d8 = L"selectedCharId";
        local_78._12_4_ = uStack_cc;
        local_78.Size = 0xe;
        local_78.DataPtr = L"selectedCharId";
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"selectedCharId");
        pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>
                            ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                              *)pFVar6,uVar9,&local_78);
        if ((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0))
        {
          if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)local_150.Object ==
               (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar6 = local_150.Object;
          local_c8 = L"deckCharId";
          uStack_c0 = 10;
          local_68._12_4_ = uStack_bc;
          local_68.Size = 10;
          local_68.DataPtr = L"deckCharId";
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"deckCharId");
          pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>
                              ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                *)pFVar6,uVar9,&local_68);
          if ((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0)
             ) {
            local_170.messageType = LoginRequest;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_150.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            local_b8 = L"selectedCharId";
            uStack_b0 = 0xe;
            local_58._12_4_ = uStack_ac;
            local_58.Size = 0xe;
            local_58.DataPtr = L"selectedCharId";
            dVar5 = FJsonObject::GetNumberField(local_150.Object,&local_58);
            local_170.selectedCharId = (int)dVar5;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_150.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            local_a8 = L"isLeader";
            uStack_a0 = 8;
            local_48._12_4_ = uStack_9c;
            local_48.Size = 8;
            local_48.DataPtr = L"isLeader";
            local_170.isLeader = FJsonObject::GetBoolField(local_150.Object,&local_48);
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_150.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            local_98 = L"deckCharId";
            uStack_90 = 10;
            local_38._12_4_ = uStack_8c;
            local_38.Size = 10;
            local_38.DataPtr = L"deckCharId";
            pTVar13 = FJsonObject::GetArrayField(local_150.Object,&local_38);
            local_140.Data = (FScriptContainerElement *)0x0;
            iVar1 = pTVar13->ArrayNum;
            pTVar12 = (TSharedPtr<FJsonValue,1> *)(pTVar13->AllocatorInstance).Data;
            local_138 = iVar1;
            if (iVar1 == 0) {
              local_134 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,0,&local_140,iVar1,&local_134);
              ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                        (local_140.Data,pTVar12,iVar1);
            }
            iVar1 = local_138;
            pTVar12 = (TSharedPtr<FJsonValue,1> *)(local_140.Data + (longlong)local_138 * 0x10);
            FVar14.Data = local_140.Data;
            while( true ) {
              if (local_138 != iVar1) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res18);
              }
              if ((TSharedPtr<FJsonValue,1> *)FVar14.Data == pTVar12) break;
              if ((((TSharedPtr<FJsonValue,1> *)FVar14.Data)->Object == (FJsonValue *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              dVar5 = FJsonValue::AsNumber(((TSharedPtr<FJsonValue,1> *)FVar14.Data)->Object);
              local_178[0] = (int)dVar5;
              if (((local_170.deckCharId.AllocatorInstance.Data <=
                    (FScriptContainerElement *)local_178) &&
                  ((FScriptContainerElement *)local_178 <
                   local_170.deckCharId.AllocatorInstance.Data +
                   (longlong)local_170.deckCharId.ArrayMax * 4)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              iVar10 = local_170.deckCharId.ArrayNum;
              if (local_170.deckCharId.ArrayNum == local_170.deckCharId.ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_170.deckCharId.AllocatorInstance,
                                    &local_170.deckCharId.ArrayMax);
              }
              FVar14.Data = FVar14.Data + 0x10;
              local_170.deckCharId.ArrayNum = iVar10 + 1;
              *(int *)(local_170.deckCharId.AllocatorInstance.Data + (longlong)iVar10 * 4) =
                   local_178[0];
            }
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_140.Data,local_138);
            if ((TSharedPtr<FJsonValue,1> *)local_140.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_140.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_150.SharedReferenceCount.ReferenceController);
            goto LAB_14ac8823c;
          }
        }
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_110.Array.AllocatorInstance.Data,
                 local_110.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_110.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_110.Array.AllocatorInstance.Data);
      }
      if (local_110.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.SharedReferenceCount.ReferenceController);
    bVar7 = false;
  }
  if (local_170.deckCharId.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.deckCharId.AllocatorInstance.Data);
  }
  return bVar7;
}

// ProcessLogoutRequest @ 14ac88360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ACCSAIService::ProcessLogoutRequest(ACCSAIService *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  bool bVar3;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar4;
  FCCS_LogoutRequest local_res18 [8];
  ECCS_MessageType local_res20 [8];
  TSharedPtr<FJsonObject,1> local_78;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_68;
  StackState local_58;
  
  local_res18[0].messageType = LogoutRequest;
  bVar3 = FJsonObjectConverter::JsonObjectStringToUStruct<FCCS_LogoutRequest>
                    (param_1,local_res18,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
  if (bVar3) {
LAB_14ac884b2:
    if (local_res18[0].messageType == LogoutRequest) {
      if ((this->OpenDebug != false) && (4 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      local_res20[0] = local_res18[0].messageType;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnLogoutRequestReceived,local_res20);
      return true;
    }
  }
  else {
    local_78.Object = (FJsonObject *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = TJsonStringReader<wchar_t>::Create(&local_68,param_1);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar4->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    local_58.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Identifier.Data.ArrayNum = 0;
    local_58.Identifier.Data.ArrayMax = 0;
    local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Array.ArrayNum = 0;
    local_58.Array.ArrayMax = 0;
    local_58.Object.Object = (FJsonObject *)0x0;
    local_58.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_58,None);
    if (bVar3) {
      bVar3 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_58,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_58.Array.AllocatorInstance.Data,
                 local_58.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_58.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_58.Array.AllocatorInstance.Data);
      }
      if (local_58.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar3) && (local_78.Object != (FJsonObject *)0x0)) {
        local_res18[0].messageType = LogoutRequest;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        goto LAB_14ac884b2;
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_58.Array.AllocatorInstance.Data,
                 local_58.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_58.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_58.Array.AllocatorInstance.Data);
      }
      if (local_58.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// ProcessRegistrationResponse @ 14ac88520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ACCSAIService::ProcessRegistrationResponse(ACCSAIService *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  double dVar4;
  FJsonObject *pFVar5;
  ForAnyElementType _Src;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  FString *pFVar11;
  longlong lVar12;
  TSharedPtr<FJsonObject,1> local_1d8;
  FCCS_CharEntityRegistrationResponse local_1c8;
  StackState local_1a0;
  ECCS_MessageType local_168 [8];
  ulong64 local_160;
  undefined1 local_158;
  int local_154;
  ForAnyElementType local_150;
  int local_148;
  int local_144 [3];
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_1c8.messageType = CharEntityRegistrationResponse;
  local_1c8.gameId = 0;
  local_1c8.bSuccess = false;
  local_1c8.errorCode = 0;
  local_1c8.errorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.errorMessage.Data.ArrayNum = 0;
  local_1c8.errorMessage.Data.ArrayMax = 0;
  bVar6 = FJsonObjectConverter::JsonObjectStringToUStruct<FCCS_CharEntityRegistrationResponse>
                    (param_1,&local_1c8,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
  if (bVar6) {
LAB_14ac88ab4:
    if (local_1c8.messageType == CharEntityRegistrationResponse) {
      if ((this->OpenDebug != false) && (4 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      if (local_1c8.errorCode == 0) {
        if (4 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        _Src.Data = local_1c8.errorMessage.Data.AllocatorInstance.Data;
        lVar12 = (longlong)local_1c8.errorMessage.Data.ArrayNum;
        local_168[0] = local_1c8.messageType;
        local_160 = local_1c8.gameId;
        local_158 = local_1c8.bSuccess;
        local_150.Data = (FScriptContainerElement *)0x0;
        local_144[0] = 0;
        local_154 = local_1c8.errorCode;
        local_148 = local_1c8.errorMessage.Data.ArrayNum;
        if (local_1c8.errorMessage.Data.ArrayNum != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1c8.errorMessage.Data.ArrayNum,0,&local_150,
                     local_1c8.errorMessage.Data.ArrayNum,local_144);
          memcpy(local_150.Data,_Src.Data,lVar12 * 2);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnCharEntityRegistrationResponse,local_168);
        if (local_150.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data);
        }
        bVar6 = true;
        goto LAB_14ac88642;
      }
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
  }
  else {
    local_1d8.Object = (FJsonObject *)0x0;
    local_1d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = TJsonStringReader<wchar_t>::Create(&local_b8,param_1);
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar9->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    local_1a0.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Identifier.Data.ArrayNum = 0;
    local_1a0.Identifier.Data.ArrayMax = 0;
    local_1a0.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Array.ArrayNum = 0;
    local_1a0.Array.ArrayMax = 0;
    local_1a0.Object.Object = (FJsonObject *)0x0;
    local_1a0.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_1a0,None);
    if (bVar6) {
      bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_1a0,&local_1d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_1a0.Array.AllocatorInstance.Data,
                 local_1a0.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_1a0.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_1a0.Array.AllocatorInstance.Data);
      }
      if (local_1a0.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)local_1d8.Object !=
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)0x0)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_1d8.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar5 = local_1d8.Object;
        uStack_130 = 6;
        local_138 = L"gameId";
        local_a8._12_4_ = uStack_12c;
        local_a8.Size = 6;
        local_a8.DataPtr = L"gameId";
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"gameId");
        pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>
                            ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                              *)pFVar5,uVar8,&local_a8);
        if ((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0))
        {
          if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)local_1d8.Object ==
               (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pFVar5 = local_1d8.Object;
          local_128 = L"bSuccess";
          uStack_120 = 8;
          local_98._12_4_ = uStack_11c;
          local_98.Size = 8;
          local_98.DataPtr = L"bSuccess";
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"bSuccess");
          pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>
                              ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                *)pFVar5,uVar8,&local_98);
          if ((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)
             ) {
            local_1c8.messageType = CharEntityRegistrationResponse;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_1d8.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            local_118 = L"gameIds";
            uStack_110 = 7;
            local_88._12_4_ = uStack_10c;
            local_88.Size = 7;
            local_88.DataPtr = L"gameIds";
            dVar4 = FJsonObject::GetNumberField(local_1d8.Object,&local_88);
            lVar12 = 0;
            if ((__real_43e0000000000000 <= dVar4) &&
               (dVar4 = dVar4 - __real_43e0000000000000, dVar4 < __real_43e0000000000000)) {
              lVar12 = -0x8000000000000000;
            }
            local_1c8.gameId = (longlong)dVar4 + lVar12;
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_1d8.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            local_108 = L"bSuccess";
            uStack_100 = 8;
            local_78._12_4_ = uStack_fc;
            local_78.Size = 8;
            local_78.DataPtr = L"bSuccess";
            local_1c8.bSuccess = FJsonObject::GetBoolField(local_1d8.Object,&local_78);
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_1d8.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            pFVar5 = local_1d8.Object;
            local_f8 = L"errorCode";
            uStack_f0 = 9;
            local_68._12_4_ = uStack_ec;
            local_68.Size = 9;
            local_68.DataPtr = L"errorCode";
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(9,L"errorCode");
            pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>
                                ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                  *)pFVar5,uVar8,&local_68);
            if ((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar10->Object != (FJsonValue *)0x0)) {
              if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)local_1d8.Object ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              local_e8 = L"errorCode";
              uStack_e0 = 9;
              local_58._12_4_ = uStack_dc;
              local_58.Size = 9;
              local_58.DataPtr = L"errorCode";
              dVar4 = FJsonObject::GetNumberField(local_1d8.Object,&local_58);
              local_1c8.errorCode = (int)dVar4;
            }
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_1d8.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            pFVar5 = local_1d8.Object;
            local_d8 = L"errorMessage";
            uStack_d0 = 0xc;
            local_48._12_4_ = uStack_cc;
            local_48.Size = 0xc;
            local_48.DataPtr = L"errorMessage";
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(0xc,L"errorMessage");
            pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>
                                ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                  *)pFVar5,uVar8,&local_48);
            if ((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar10->Object != (FJsonValue *)0x0)) {
              if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)local_1d8.Object ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              local_c8 = L"errorMessage";
              uStack_c0 = 0xc;
              local_38._12_4_ = uStack_bc;
              local_38.Size = 0xc;
              local_38.DataPtr = L"errorMessage";
              pFVar11 = FJsonObject::GetStringField(local_1d8.Object,&local_28,&local_38);
              if (&local_1c8.errorMessage != pFVar11) {
                if (local_1c8.errorMessage.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c8.errorMessage.Data.AllocatorInstance.Data);
                }
                local_1c8.errorMessage.Data.AllocatorInstance.Data =
                     (pFVar11->Data).AllocatorInstance.Data;
                (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1c8.errorMessage.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                local_1c8.errorMessage.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                (pFVar11->Data).ArrayNum = 0;
                (pFVar11->Data).ArrayMax = 0;
              }
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8.SharedReferenceCount.ReferenceController);
            goto LAB_14ac88ab4;
          }
        }
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_1a0.Array.AllocatorInstance.Data,
                 local_1a0.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_1a0.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_1a0.Array.AllocatorInstance.Data);
      }
      if (local_1a0.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
LAB_14ac88642:
  if (local_1c8.errorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.errorMessage.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// RegisterCharEntityID @ 14ac890e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ACCSAIService::RegisterCharEntityID
          (ACCSAIService *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  UPackage *pUVar3;
  FCCSAITCPClient *pFVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_148 [32];
  FString local_108;
  undefined1 local_f8 [8];
  long64 local_f0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_e8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar4 = (this->TCPClient).Object;
  if ((pFVar4 == (FCCSAITCPClient *)0x0) || (pFVar4->bIsConnected == (FThreadSafeBool)0x0)) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar2 = false;
  }
  else {
    local_f0 = this->GameId;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    local_f8[0] = 2;
    if (&local_e8 != param_1) {
      uVar1 = param_1->ArrayNum;
      _Src = (param_1->AllocatorInstance).Data;
      local_e8.ArrayMax = 0;
      local_e8.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar1,0,&local_e8.AllocatorInstance,uVar1,&local_e8.ArrayMax);
        memcpy(local_e8.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
      }
    }
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    if (Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
      Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationRequest,
                           (UObject *)pUVar3,L"CCS_CharEntityRegistrationRequest");
    }
    bVar2 = FJsonObjectConverter::UStructToJsonObjectString
                      ((UStruct *)
                       Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.
                       OuterSingleton,local_f8,&local_108,0,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,true);
    if (bVar2) {
      if ((this->OpenDebug != false) && (4 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar5.Data = local_108.Data.AllocatorInstance.Data;
      }
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                (&local_d8,(wchar_t *)FVar5.Data);
      pFVar4 = TSharedPtr<FCCSAITCPClient,1>::operator->(&this->TCPClient);
      bVar2 = FCCSAITCPClient::Send(pFVar4,(uchar *)local_d8.Ptr,local_d8.StringLength);
      if ((void *)local_d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._padding_);
      }
    }
    else {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      bVar2 = false;
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return bVar2;
}

// SendJson @ 14ac89840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ACCSAIService::SendJson(ACCSAIService *this,FString *param_1)

{
  FCCSAITCPClient *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_d8 [32];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = (this->TCPClient).Object;
  if ((pFVar1 == (FCCSAITCPClient *)0x0) || (pFVar1->bIsConnected == (FThreadSafeBool)0x0)) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar3 = false;
  }
  else {
    if ((this->OpenDebug != false) && (4 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_b8,pwVar5);
    if (((this->TCPClient).Object == (FCCSAITCPClient *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FCCSAITCPClient::Send
                      ((this->TCPClient).Object,(uchar *)local_b8.Ptr,local_b8.StringLength);
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  return bVar3;
}

// StaticRegisterNativesACCSAIService @ 14ac89b50

void __cdecl ACCSAIService::StaticRegisterNativesACCSAIService(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ACCSAIService_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14ac89ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACCSAIService::Tick(ACCSAIService *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FCCSAITCPClient *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  code *pcVar4;
  double dVar5;
  FJsonObject *this_00;
  bool bVar6;
  uint uVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  FStaticBasicLogRecord *pFVar10;
  FString local_d8;
  TSharedPtr<FJsonObject,1> local_c8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b8;
  StackState local_a8;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  AActor::Tick((AActor *)this,param_1);
  pFVar1 = (this->TCPClient).Object;
  if ((pFVar1 != (FCCSAITCPClient *)0x0) && (pFVar1->bIsConnected != (FThreadSafeBool)0x0)) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    while( true ) {
      if (((this->TCPClient).Object == (FCCSAITCPClient *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->TCPClient).Object;
      lpCriticalSection = &pFVar1->RecvQueueLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (((pFVar1->RecvQueue).Tail)->NextNode == (TNode *)0x0) break;
      TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Dequeue
                (&pFVar1->RecvQueue,&local_b8);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      FFileHelper::BufferToString
                (&local_d8,(uchar *)(local_b8.AllocatorInstance.Data + 4),local_b8.ArrayNum + -4);
      local_c8.Object = (FJsonObject *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar8 = TJsonStringReader<wchar_t>::Create(&local_48,&local_d8);
      pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
      pTVar3 = pTVar8->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      local_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Identifier.Data.ArrayNum = 0;
      local_a8.Identifier.Data.ArrayMax = 0;
      local_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Array.ArrayNum = 0;
      local_a8.Array.ArrayMax = 0;
      local_a8.Object.Object = (FJsonObject *)0x0;
      local_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                        ((TJsonReader<wchar_t> *)pTVar3,&local_a8,None);
      if (bVar6) {
        bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_a8,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.Object.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
                   local_a8.Array.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_a8.Array.AllocatorInstance.Data);
        }
        if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
        }
        if ((!bVar6) ||
           ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)local_c8.Object ==
            (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)0x0)) goto LAB_14ac89d37;
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_c8.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = local_c8.Object;
        local_68 = L"messageType";
        uStack_60 = 0xb;
        local_38._12_4_ = uStack_5c;
        local_38.Size = 0xb;
        local_38.DataPtr = L"messageType";
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"messageType");
        pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 ::FindByHash<TStringView<wchar_t>_>
                           ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                             *)this_00,uVar7,&local_38);
        if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) {
          if ((byte)LogTemp._0_1_ < 2) goto LAB_14ac89d63;
          pFVar10 = &::LOG_Static;
          goto LAB_14ac89d47;
        }
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_c8.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_58 = L"messageType";
        uStack_50 = 0xb;
        local_28._12_4_ = uStack_4c;
        local_28.Size = 0xb;
        local_28.DataPtr = L"messageType";
        dVar5 = FJsonObject::GetNumberField(local_c8.Object,&local_28);
        uVar7 = (int)dVar5 & 0xff;
        if (uVar7 == 1) {
          ProcessLoginRequest(this,&local_d8);
        }
        else if (uVar7 == 3) {
          ProcessRegistrationResponse(this,&local_d8);
        }
        else if (uVar7 == 5) {
          ProcessAICommandRequest(this,&local_d8);
        }
        else if (uVar7 == 6) {
          ProcessLogoutRequest(this,&local_d8);
        }
        else if (2 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.Object.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
                   local_a8.Array.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_a8.Array.AllocatorInstance.Data);
        }
        if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
        }
LAB_14ac89d37:
        if (1 < (byte)LogTemp._0_1_) {
          pFVar10 = &::LOG_Static;
LAB_14ac89d47:
          UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogTemp);
        }
      }
LAB_14ac89d63:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// execConnectToServer @ 14ac8a1d0

void __cdecl ACCSAIService::execConnectToServer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConnectToServer((ACCSAIService *)param_1,&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsConnected @ 14ac8a2d0

void __cdecl ACCSAIService::execIsConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x14].field_0x20 != 0) &&
     (*(int *)(*(longlong *)&param_1[0x14].field_0x20 + 0x100) != 0)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSendJson @ 14ac8a310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ACCSAIService::execSendJson(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_d0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8 = (wchar_t *)0x0;
  local_d0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x14].field_0x20 == 0) ||
     (*(int *)(*(longlong *)&param_1[0x14].field_0x20 + 0x100) == 0)) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar3 = false;
  }
  else {
    if ((param_1[0x11].field_0x20 != '\0') && (4 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    pwVar4 = L"";
    if ((int)local_d0 != 0) {
      pwVar4 = local_d8;
    }
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_c8,pwVar4);
    if ((*(longlong *)&param_1[0x14].field_0x20 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = FCCSAITCPClient::Send
                      (*(FCCSAITCPClient **)&param_1[0x14].field_0x20,(uchar *)local_c8.Ptr,
                       local_c8.StringLength);
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
  }
  *(bool *)param_3 = bVar3;
  if (local_d8 != (wchar_t *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

