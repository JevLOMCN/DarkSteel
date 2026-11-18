// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 9

// StaticClass @ 14ec45de0

UClass * __cdecl UInAppPurchaseFinalizeProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseFinalizeProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseFinalizeProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseFinalizeProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseFinalizeProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton;
}

// UInAppPurchaseFinalizeProxy @ 14ec53cf0

UInAppPurchaseFinalizeProxy * __thiscall
UInAppPurchaseFinalizeProxy::UInAppPurchaseFinalizeProxy
          (UInAppPurchaseFinalizeProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInAppPurchaseFinalizeProxy__6B_;
  return this;
}

// UInAppPurchaseFinalizeProxy @ 14ec53d20

UInAppPurchaseFinalizeProxy * __thiscall
UInAppPurchaseFinalizeProxy::UInAppPurchaseFinalizeProxy
          (UInAppPurchaseFinalizeProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInAppPurchaseFinalizeProxy__6B_;
  return this;
}

// ~UInAppPurchaseFinalizeProxy @ 14ec570e0

void __thiscall
UInAppPurchaseFinalizeProxy::~UInAppPurchaseFinalizeProxy(UInAppPurchaseFinalizeProxy *this)

{
  *(undefined ***)this = &___7UInAppPurchaseFinalizeProxy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateProxyObjectForInAppPurchaseFinalize @ 14ec6a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseFinalizeProxy * __cdecl
UInAppPurchaseFinalizeProxy::CreateProxyObjectForInAppPurchaseFinalize
          (FInAppPurchaseReceiptInfo2 *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObjectBase *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (UObjectBase *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
  ;
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags(this,RF_StrongRefOnFrame);
  Trigger((UInAppPurchaseFinalizeProxy *)this,param_1,param_2);
  return (UInAppPurchaseFinalizeProxy *)this;
}

// GetPrivateStaticClass @ 14ec77f20

UClass * __cdecl UInAppPurchaseFinalizeProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseFinalizeProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton,
               StaticRegisterNativesUInAppPurchaseFinalizeProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseFinalizeProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseFinalizeProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton;
}

// StaticRegisterNativesUInAppPurchaseFinalizeProxy @ 14ec99850

void __cdecl UInAppPurchaseFinalizeProxy::StaticRegisterNativesUInAppPurchaseFinalizeProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Trigger @ 14ec9c5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInAppPurchaseFinalizeProxy::Trigger
          (UInAppPurchaseFinalizeProxy *this,FInAppPurchaseReceiptInfo2 *param_1,
          APlayerController *param_2)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FModuleManager *this_00;
  FName *pFVar5;
  FOnlineSubsystemModule *pFVar6;
  IOnlineSubsystem *pIVar7;
  ULocalPlayer *this_01;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  FName local_78;
  FName local_70;
  TSharedPtr<FUniqueNetId_const_,1> local_68;
  FUniqueNetIdRepl local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_2 == (APlayerController *)0x0) {
    local_c8 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseFinalizeProxy::Trigger - Invalid player controller",Warning,
               (FName)0x0);
  }
  else if (param_2->_padding_ == 0) {
    local_c0 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseFinalizeProxy::Trigger - Invalid player state",Warning,(FName)0x0);
  }
  else {
    local_b8 = 0;
    this_00 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_78,"OnlineSubsystem");
    bVar3 = FModuleManager::IsModuleLoaded(this_00,*pFVar5);
    if (bVar3) {
      pFVar5 = ::FName::FName(&local_70,"OnlineSubsystem");
      pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar5);
      cVar4 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6,0);
      if (cVar4 != '\0') {
        local_b0.ComparisonIndex.Value = 0;
        local_b0.Number = 0;
        pIVar7 = IOnlineSubsystem::Get(&local_b0);
        if (pIVar7 != (IOnlineSubsystem *)0x0) {
          (**(code **)(pIVar7->_padding_ + 0x98))(pIVar7,&local_88);
          if (local_88 == (longlong *)0x0) {
            local_a8 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseFinalizeProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                       ,Warning,(FName)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80);
            return;
          }
          this_01 = APlayerController::GetLocalPlayer(param_2);
          ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_01,&local_58);
          bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_58);
          if (bVar3) {
            plVar9 = local_88;
            if ((local_88 == (longlong *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), plVar9 = local_88, bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = *(code **)(*plVar9 + 0x20);
            pTVar8 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_58,&local_68);
            if ((pTVar8->Object == (FUniqueNetId *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = pTVar8->Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.SharedReferenceCount.ReferenceController);
            (*pcVar2)(plVar9,pFVar1,&param_1->TransactionIdentifier,&param_1->ValidationInfo);
            local_a0 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseFinalizeProxy::Trigger - In-App Purchase finalized",Log,
                       (FName)0x0);
          }
          else {
            local_98 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseFinalizeProxy::Trigger - Innvalid player UniqueNetId",Warning
                       ,(FName)0x0);
          }
          FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80);
          return;
        }
      }
    }
    local_90 = 0;
    FFrame::KismetExecutionMessage
              (L"UInAppPurchaseFinalizeProxy::Trigger - Invalid or uninitialized OnlineSubsystem",
               Warning,(FName)0x0);
  }
  return;
}

// execCreateProxyObjectForInAppPurchaseFinalize @ 14eca2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UInAppPurchaseFinalizeProxy::execCreateProxyObjectForInAppPurchaseFinalize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  APlayerController *this;
  bool bVar4;
  char cVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UObjectBase *this_00;
  FModuleManager *this_01;
  FName *pFVar8;
  FOnlineSubsystemModule *pFVar9;
  IOnlineSubsystem *pIVar10;
  ULocalPlayer *this_02;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  void **ppvVar14;
  undefined1 auStack_1d8 [32];
  APlayerController *local_1b8;
  longlong *local_1b0;
  TReferenceControllerBase<1> *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  FName local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  FName local_118;
  FName local_110;
  TSharedPtr<FUniqueNetId_const_,1> local_108;
  undefined1 local_f8 [128];
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_1b8 = (APlayerController *)0x0;
  ppvVar14 = &local_158;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar14 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  this = local_1b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar7);
  local_f8._8_8_ = pUVar6;
  this_00 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    plVar13 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  UObjectBase::AtomicallySetFlags(this_00,RF_StrongRefOnFrame);
  if (this == (APlayerController *)0x0) {
    local_1a0 = 0;
    pwVar12 = L"UInAppPurchaseFinalizeProxy::Trigger - Invalid player controller";
  }
  else if (this->_padding_ == 0) {
    local_198 = 0;
    pwVar12 = L"UInAppPurchaseFinalizeProxy::Trigger - Invalid player state";
  }
  else {
    local_190 = 0;
    this_01 = FModuleManager::Get();
    pFVar8 = ::FName::FName(&local_118,"OnlineSubsystem");
    bVar4 = FModuleManager::IsModuleLoaded(this_01,*pFVar8);
    if (bVar4) {
      pFVar8 = ::FName::FName(&local_110,"OnlineSubsystem");
      pFVar9 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar8);
      cVar5 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9,0);
      if (cVar5 != '\0') {
        local_188.ComparisonIndex.Value = 0;
        local_188.Number = 0;
        pIVar10 = IOnlineSubsystem::Get(&local_188);
        if (pIVar10 != (IOnlineSubsystem *)0x0) {
          (**(code **)(pIVar10->_padding_ + 0x98))(pIVar10,&local_1b0);
          if (local_1b0 == (longlong *)0x0) {
            local_180 = 0;
            FFrame::KismetExecutionMessage
                      (L"UInAppPurchaseFinalizeProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                       ,Warning,(FName)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a8);
          }
          else {
            this_02 = APlayerController::GetLocalPlayer(this);
            ULocalPlayer::GetUniqueNetIdFromCachedControllerId(this_02,&local_78);
            bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_78);
            if (bVar4) {
              plVar13 = local_1b0;
              if ((local_1b0 == (longlong *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), plVar13 = local_1b0, bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = *(code **)(*plVar13 + 0x20);
              pTVar11 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)&local_78,&local_108);
              if ((pTVar11->Object == (FUniqueNetId *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = pTVar11->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_108.SharedReferenceCount.ReferenceController);
              (*pcVar3)(plVar13,pFVar2,ppvVar14 + 6,ppvVar14 + 4);
              local_178 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseFinalizeProxy::Trigger - In-App Purchase finalized",Log,
                         (FName)0x0);
            }
            else {
              local_170 = 0;
              FFrame::KismetExecutionMessage
                        (L"UInAppPurchaseFinalizeProxy::Trigger - Innvalid player UniqueNetId",
                         Warning,(FName)0x0);
            }
            FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a8);
          }
          goto LAB_14eca28ed;
        }
      }
    }
    local_168 = 0;
    pwVar12 = L"UInAppPurchaseFinalizeProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
  FFrame::KismetExecutionMessage(pwVar12,Warning,(FName)0x0);
LAB_14eca28ed:
  *(UObjectBase **)param_3 = this_00;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  return;
}

