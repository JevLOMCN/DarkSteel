// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 16

// StaticClass @ 14a786620

UClass * __cdecl UCommonGameViewportClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonGameViewportClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonGameViewportClient",
               &Z_Registration_Info_UClass_UCommonGameViewportClient.InnerSingleton,
               StaticRegisterNativesUCommonGameViewportClient,0x4e0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonGameViewportClient>,
               InternalVTableHelperCtorCaller<UCommonGameViewportClient>,local_res8,
               UGameViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonGameViewportClient.InnerSingleton;
}

// UCommonGameViewportClient @ 14a7ad7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonGameViewportClient * __thiscall
UCommonGameViewportClient::UCommonGameViewportClient
          (UCommonGameViewportClient *this,FVTableHelper *param_1)

{
  UGameViewportClient::UGameViewportClient((UGameViewportClient *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FCommonViewportClient__;
  *(undefined ***)&this->field_0x68 = &___7UCommonGameViewportClient__6B_;
  *(undefined8 *)&this->RerouteInput = 0;
  *(undefined8 *)&(this->RerouteInput).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteInput).field_0x10 = 0;
  *(undefined8 *)&this->RerouteAxis = 0;
  *(undefined8 *)&(this->RerouteAxis).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteAxis).field_0x10 = 0;
  *(undefined8 *)&this->RerouteTouch = 0;
  *(undefined8 *)&(this->RerouteTouch).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteTouch).field_0x10 = 0;
  *(undefined8 *)&this->RerouteTouchInput = 0;
  *(undefined8 *)&(this->RerouteTouchInput).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteTouchInput).field_0x10 = 0;
  *(undefined8 *)&this->RerouteBlockedInput = 0;
  *(undefined8 *)&(this->RerouteBlockedInput).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteBlockedInput).field_0x10 = 0;
  return this;
}

// UCommonGameViewportClient @ 14a7ad860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonGameViewportClient * __thiscall
UCommonGameViewportClient::UCommonGameViewportClient
          (UCommonGameViewportClient *this,FObjectInitializer *param_1)

{
  UGameViewportClient::UGameViewportClient((UGameViewportClient *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FCommonViewportClient__;
  *(undefined ***)&this->field_0x68 = &___7UCommonGameViewportClient__6B_;
  *(undefined8 *)&this->RerouteInput = 0;
  *(undefined8 *)&(this->RerouteInput).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteInput).field_0x10 = 0;
  *(undefined8 *)&this->RerouteAxis = 0;
  *(undefined8 *)&(this->RerouteAxis).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteAxis).field_0x10 = 0;
  *(undefined8 *)&this->RerouteTouch = 0;
  *(undefined8 *)&(this->RerouteTouch).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteTouch).field_0x10 = 0;
  *(undefined8 *)&this->RerouteTouchInput = 0;
  *(undefined8 *)&(this->RerouteTouchInput).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteTouchInput).field_0x10 = 0;
  *(undefined8 *)&this->RerouteBlockedInput = 0;
  *(undefined8 *)&(this->RerouteBlockedInput).field_0x8 = 0;
  *(undefined4 *)&(this->RerouteBlockedInput).field_0x10 = 0;
  return this;
}

// ~UCommonGameViewportClient @ 14a7b2bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonGameViewportClient::~UCommonGameViewportClient(UCommonGameViewportClient *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FCommonViewportClient__;
  *(undefined ***)&this->field_0x68 = &___7UCommonGameViewportClient__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RerouteBlockedInput);
  pvVar1 = *(void **)&(this->RerouteBlockedInput).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RerouteBlockedInput);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RerouteTouchInput);
  pvVar1 = *(void **)&(this->RerouteTouchInput).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RerouteTouchInput);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RerouteTouch);
  pvVar1 = *(void **)&(this->RerouteTouch).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RerouteTouch);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RerouteAxis);
  pvVar1 = *(void **)&(this->RerouteAxis).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RerouteAxis);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RerouteInput);
  pvVar1 = *(void **)&(this->RerouteInput).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RerouteInput);
  UGameViewportClient::~UGameViewportClient((UGameViewportClient *)this);
  return;
}

// CapturedMouseMove @ 14a7c3f20

void __thiscall
UCommonGameViewportClient::CapturedMouseMove
          (UCommonGameViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  if (*(longlong **)&this->field_0x40 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7c3f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x40 + 0x388))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14a7e5520

UClass * __cdecl UCommonGameViewportClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonGameViewportClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonGameViewportClient",
               &Z_Registration_Info_UClass_UCommonGameViewportClient.InnerSingleton,
               StaticRegisterNativesUCommonGameViewportClient,0x4e0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonGameViewportClient>,
               InternalVTableHelperCtorCaller<UCommonGameViewportClient>,local_res8,
               UGameViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonGameViewportClient.InnerSingleton;
}

// HandleRerouteAxis @ 14a7eea50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonGameViewportClient::HandleRerouteAxis
          (UCommonGameViewportClient *this,FInputDeviceId param_1,FKey *param_2,float param_3,
          FReply *param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IPlatformInputDeviceMapper *pIVar4;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar5;
  FPlatformUserId local_res8 [2];
  FReply local_178;
  FReply local_c0;
  
  pIVar4 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,local_res8,param_1.InternalId);
  this_00 = UGameInstance::FindLocalPlayerFromPlatformUserId
                      (*(UGameInstance **)&this->field_0xb0,local_res8[0]);
  FReply::FReply(&local_178,false);
  FReply::operator=(param_4,&local_178);
  FReply::~FReply(&local_178);
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar5 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
    if (pUVar5 == (UCommonUIActionRouterBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3221195299854745763>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonGameViewportClient.cpp"
                         ,0xa3,"ActionRouter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      cVar3 = (**(code **)(pUVar5->_padding_ + 0x2e8))(pUVar5);
      if (cVar3 == '\0') {
        FReply::FReply(&local_c0,true);
        FReply::operator=(param_4,&local_c0);
        FReply::~FReply(&local_c0);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// HandleRerouteInput @ 14a7eeb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonGameViewportClient::HandleRerouteInput
          (UCommonGameViewportClient *this,FInputDeviceId param_1,FKey *param_2,EInputEvent param_3,
          FReply *param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IPlatformInputDeviceMapper *pIVar4;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar5;
  FPlatformUserId local_res8 [2];
  FName local_278;
  FKeyDetails *local_270;
  TReferenceControllerBase<1> *local_268;
  FKey local_260;
  FReply local_248;
  FReply local_190;
  FReply local_d8;
  
  pIVar4 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,local_res8,param_1.InternalId);
  this_00 = UGameInstance::FindLocalPlayerFromPlatformUserId
                      (*(UGameInstance **)&this->field_0xb0,local_res8[0]);
  FReply::FReply(&local_248,false);
  FReply::operator=(param_4,&local_248);
  FReply::~FReply(&local_248);
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar5 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
    if (pUVar5 == (UCommonUIActionRouterBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3221195299854745734>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonGameViewportClient.cpp"
                         ,0x86,"ActionRouter");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      pcVar1 = *(code **)(pUVar5->_padding_ + 0x2e0);
      local_278 = param_2->KeyName;
      local_270 = (param_2->KeyDetails).Object;
      local_268 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_268 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_268->SharedReferenceCount = (atomic<int>)((int)local_268->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar3 = (*pcVar1)(pUVar5,&local_278,param_3);
      if (cVar3 == '\x01') {
        FReply::FReply(&local_190,true);
        FReply::operator=(param_4,&local_190);
        FReply::~FReply(&local_190);
        local_260.KeyName = param_2->KeyName;
        local_260.KeyDetails.Object = (param_2->KeyDetails).Object;
        local_260.KeyDetails.SharedReferenceCount.ReferenceController =
             (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
        if (local_260.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_260.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_260.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegate<void___cdecl(FInputDeviceId,FKey,enum_EInputEvent,FReply_&),FDefaultDelegateUserPolicy>
        ::ExecuteIfBound(&this->RerouteBlockedInput,param_1,&local_260,param_3,param_4);
      }
      else if (cVar3 == '\0') {
        FReply::FReply(&local_d8,true);
        FReply::operator=(param_4,&local_d8);
        FReply::~FReply(&local_d8);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// HandleRerouteTouch @ 14a7eed50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonGameViewportClient::HandleRerouteTouch
          (UCommonGameViewportClient *this,int param_1,uint param_2,Type param_3,
          TVector2<double> *param_4,FReply *param_5)

{
  IPlatformInputDeviceMapper *pIVar1;
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_18);
  local_res8[0] = 0xffffffff;
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,param_1,local_18,local_res8);
  (**(code **)(*(longlong *)this + 0x3c8))(this,local_res8[0],param_2,param_3,param_4,param_5);
  return;
}

// HandleRerouteTouch @ 14a7eedf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonGameViewportClient::HandleRerouteTouch
          (UCommonGameViewportClient *this,FInputDeviceId param_1,uint param_2,Type param_3,
          TVector2<double> *param_4,FReply *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar4;
  FKey local_1a8;
  FName local_190;
  FKeyDetails *local_188;
  TReferenceControllerBase<1> *local_180;
  FReply local_178;
  FReply local_c0;
  
  this_00 = UGameInstance::FindLocalPlayerFromDeviceId(*(UGameInstance **)&this->field_0xb0,param_1)
  ;
  FReply::FReply(&local_178,false);
  FReply::operator=(param_5,&local_178);
  FReply::~FReply(&local_178);
  if ((this_00 != (ULocalPlayer *)0x0) && (param_2 < 0xb)) {
    local_1a8.KeyName = EKeys::TouchKeys[param_2].KeyName;
    local_1a8.KeyDetails.Object = EKeys::TouchKeys[param_2].KeyDetails.Object;
    local_1a8.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::TouchKeys[param_2].KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = FKey::IsValid(&local_1a8);
    if (bVar2) {
      pUVar4 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
      if (pUVar4 == (UCommonUIActionRouterBase *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3221195299854745785>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonGameViewportClient.cpp"
                           ,0xb9,"ActionRouter");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        cVar3 = '\0';
        if (param_3 != Began) {
          cVar3 = (param_3 != Ended) + '\x01';
        }
        pcVar1 = *(code **)(pUVar4->_padding_ + 0x2e0);
        local_190 = local_1a8.KeyName;
        local_188 = local_1a8.KeyDetails.Object;
        local_180 = local_1a8.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar3 = (*pcVar1)(pUVar4,&local_190,cVar3);
        if (cVar3 != '\x02') {
          FReply::FReply(&local_c0,true);
          FReply::operator=(param_5,&local_c0);
          FReply::~FReply(&local_c0);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  return;
}

// InputAxis @ 14a7f3d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonGameViewportClient::InputAxis(UCommonGameViewportClient *this,FInputKeyEventArgs *param_1)

{
  float fVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FName local_118;
  FKeyDetails *local_110;
  TReferenceControllerBase<1> *local_108;
  FReadAccessScope local_100;
  FReply local_e8;
  
  FReply::FReply(&local_e8,false);
  pTVar3 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  fVar1 = param_1->AmountDepressed;
  local_118 = (param_1->Key).KeyName;
  local_110 = (param_1->Key).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar2 = (param_1->InputDevice).InternalId;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x448,&local_100
            );
  if ((*(int *)&this->field_0x458 == 0) ||
     (plVar4 = *(longlong **)&this->field_0x450, plVar4 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    local_108 = pTVar3;
    cVar6 = (**(code **)(*plVar4 + 0x68))(plVar4,iVar2,&local_118,fVar1,&local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (cVar6 != '\0') goto LAB_14a7f3eac;
  }
  fVar1 = param_1->AmountDepressed;
  pcVar5 = *(code **)(*(longlong *)&this[-1].RerouteTouchInput.field_0x8 + 0x3c0);
  local_118 = (param_1->Key).KeyName;
  local_110 = (param_1->Key).KeyDetails.Object;
  local_108 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_108 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_108->SharedReferenceCount = (atomic<int>)((int)local_108->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar5)(&this[-1].RerouteTouchInput.field_0x8,(param_1->InputDevice).InternalId,&local_118,fVar1
            ,&local_e8);
LAB_14a7f3eac:
  if ((char)local_e8._padding_ == '\0') {
    bVar7 = UGameViewportClient::InputAxis((UGameViewportClient *)this,param_1);
  }
  else {
    bVar7 = true;
  }
  FReply::~FReply(&local_e8);
  return bVar7;
}

// InputKey @ 14a7f3f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonGameViewportClient::InputKey(UCommonGameViewportClient *this,FInputKeyEventArgs *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  FKey local_138;
  FInputKeyEventArgs local_118;
  FReply local_c8;
  
  local_118.Viewport = param_1->Viewport;
  local_118.ControllerId = param_1->ControllerId;
  local_118.InputDevice.InternalId = (param_1->InputDevice).InternalId;
  local_118.Key.KeyName = (param_1->Key).KeyName;
  local_118.Key.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118.Event = param_1->Event;
  local_118.AmountDepressed = param_1->AmountDepressed;
  local_118.DeltaTime = param_1->DeltaTime;
  local_118.NumSamples = param_1->NumSamples;
  local_118.bIsTouchEvent = param_1->bIsTouchEvent;
  local_118.bIsSimulatedInput = param_1->bIsSimulatedInput;
  local_118.EventTimestamp = param_1->EventTimestamp;
  cVar3 = (**(code **)(*(longlong *)&this[-1].RerouteTouchInput.field_0x8 + 0x3d8))
                    (&this[-1].RerouteTouchInput.field_0x8,&local_118);
  if (cVar3 == '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x3a8,
               (FReadAccessScope *)&local_138);
    if ((*(int *)&this->field_0x3b8 == 0) || (*(longlong **)&this->field_0x3b0 == (longlong *)0x0))
    {
LAB_14a7f408e:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_138);
    }
    else {
      cVar3 = (**(code **)(**(longlong **)&this->field_0x3b0 + 0x38))();
      if (cVar3 == '\0') goto LAB_14a7f408e;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_138);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x3a8,
                 (FReadAccessScope *)&local_138);
      if (*(int *)&this->field_0x3b8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&this->field_0x3b0;
      }
      cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,&local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_138);
      if (cVar3 != '\0') goto LAB_14a7f4066;
    }
    lVar1 = *(longlong *)&this->field_0x40;
    if (((lVar1 != 0) &&
        ((*(uint *)(lVar1 + 0xd8) != NAME_Typing.ComparisonIndex.Value ||
         (*(uint *)(lVar1 + 0xdc) != NAME_Typing.Number)))) &&
       ((*(uint *)(lVar1 + 0xd8) != NAME_Open.ComparisonIndex.Value ||
        (*(uint *)(lVar1 + 0xdc) != NAME_Open.Number)))) {
      FReply::FReply(&local_c8,false);
      local_138.KeyName = local_118.Key.KeyName;
      local_138.KeyDetails.Object = local_118.Key.KeyDetails.Object;
      local_138.KeyDetails.SharedReferenceCount.ReferenceController =
           local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = TDelegate<void___cdecl(FInputDeviceId,FKey,enum_EInputEvent,FReply_&),FDefaultDelegateUserPolicy>
              ::ExecuteIfBound(&this->field_0x430,local_118.InputDevice,&local_138,local_118.Event,
                               &local_c8);
      if (!bVar4) {
        pcVar2 = *(code **)(*(longlong *)&this[-1].RerouteTouchInput.field_0x8 + 0x3b8);
        local_138.KeyName = local_118.Key.KeyName;
        local_138.KeyDetails.Object = local_118.Key.KeyDetails.Object;
        local_138.KeyDetails.SharedReferenceCount.ReferenceController =
             local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(&this[-1].RerouteTouchInput.field_0x8,local_118.InputDevice.InternalId,&local_138,
                  local_118.Event,&local_c8);
      }
      if ((char)local_c8._padding_ != '\0') {
        FReply::~FReply(&local_c8);
        goto LAB_14a7f4066;
      }
      FReply::~FReply(&local_c8);
    }
    bVar4 = UGameViewportClient::InputKey((UGameViewportClient *)this,&local_118);
  }
  else {
LAB_14a7f4066:
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// InputTouch @ 14a7f41c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonGameViewportClient::InputTouch
          (UCommonGameViewportClient *this,FViewport *param_1,FInputDeviceId param_2,uint param_3,
          Type param_4,TVector2<double> *param_5,float param_6,uint param_7,ulong64 param_8)

{
  FName FVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  IPlatformInputDeviceMapper *pIVar6;
  undefined4 local_res8 [2];
  FReadAccessScope local_100;
  FReply local_e8;
  
  if (((*(longlong *)&this->field_0x40 == 0) ||
      (FVar1 = *(FName *)(*(longlong *)&this->field_0x40 + 0xd8), FVar1 == NAME_Typing)) ||
     (FVar1 == NAME_Open)) goto LAB_14a7f438a;
  FReply::FReply(&local_e8,false);
  pIVar6 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar6->_padding_ + 0x68))(pIVar6,local_res8,param_2.InternalId);
  pIVar6 = IPlatformInputDeviceMapper::Get();
  uVar5 = (**(code **)(pIVar6->_padding_ + 0xa8))(pIVar6,local_res8[0]);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RerouteAxis,&local_100
            );
  if ((*(int *)&(this->RerouteAxis).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->RerouteAxis).field_0x8, plVar2 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
LAB_14a7f42df:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RerouteInput,
               &local_100);
    if ((*(int *)&(this->RerouteInput).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(this->RerouteInput).field_0x8, plVar2 == (longlong *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_100);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar5,param_3,param_4,param_5,&local_e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_100);
      if (cVar3 != '\0') goto LAB_14a7f4368;
    }
    (**(code **)(*(longlong *)&this[-1].RerouteTouchInput.field_0x8 + 0x3c8))
              (&this[-1].RerouteTouchInput.field_0x8,param_2.InternalId,param_3,param_4,param_5,
               &local_e8);
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x68))
                      (plVar2,param_2.InternalId,param_3,param_4,param_5,&local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    if (cVar3 == '\0') goto LAB_14a7f42df;
  }
LAB_14a7f4368:
  if ((char)local_e8._padding_ != '\0') {
    FReply::~FReply(&local_e8);
    return true;
  }
  FReply::~FReply(&local_e8);
LAB_14a7f438a:
  bVar4 = UGameViewportClient::InputTouch
                    ((UGameViewportClient *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return bVar4;
}

// IsKeyPriorityAboveUI @ 14a7f60c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonGameViewportClient::IsKeyPriorityAboveUI
          (UCommonGameViewportClient *this,FInputKeyEventArgs *param_1)

{
  float fVar1;
  EInputEvent EVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FKey local_38;
  
  plVar3 = *(longlong **)&this->field_0x70;
  if (plVar3 != (longlong *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x368);
    bVar5 = FKey::IsGamepadKey(&param_1->Key);
    local_38.KeyName = (param_1->Key).KeyName;
    fVar1 = param_1->AmountDepressed;
    EVar2 = param_1->Event;
    local_38.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
    local_38.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar6 = (*pcVar4)(plVar3,(param_1->InputDevice).InternalId,&local_38,EVar2,fVar1,bVar5);
    if (cVar6 != '\0') {
      return true;
    }
  }
  local_38.KeyName = (param_1->Key).KeyName;
  EVar2 = param_1->Event;
  local_38.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  local_38.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar5 = UGameViewportClient::TryToggleFullscreenOnInputKey
                    ((UGameViewportClient *)this,&local_38,EVar2);
  return bVar5;
}

// MouseMove @ 14a7f8910

void __thiscall
UCommonGameViewportClient::MouseMove
          (UCommonGameViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  if (*(longlong **)&this->field_0x40 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7f891c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x40 + 0x380))();
    return;
  }
  return;
}

// StaticRegisterNativesUCommonGameViewportClient @ 14a81e580

void __cdecl UCommonGameViewportClient::StaticRegisterNativesUCommonGameViewportClient(void)

{
  return;
}

