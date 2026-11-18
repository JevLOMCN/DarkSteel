// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 27

// StaticClass @ 14d998a10

UClass * __cdecl AAudioGameplayVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolume",
               &Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton,
               StaticRegisterNativesAAudioGameplayVolume,0x338,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAudioGameplayVolume>,
               InternalVTableHelperCtorCaller<AAudioGameplayVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton;
}

// AAudioGameplayVolume @ 14d99ec60

AAudioGameplayVolume * __thiscall
AAudioGameplayVolume::AAudioGameplayVolume(AAudioGameplayVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7AAudioGameplayVolume__6B_;
  (this->AGVComponent).field0_0x0.DebugPtr = (UAudioGameplayVolumeComponent *)0x0;
  *(undefined8 *)&this->OnListenerEnterEvent = 0;
  *(undefined8 *)&(this->OnListenerEnterEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListenerEnterEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnListenerExitEvent = 0;
  *(undefined8 *)&(this->OnListenerExitEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListenerExitEvent).field_0x10 = 0;
  return this;
}

// AAudioGameplayVolume @ 14d99ecd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AAudioGameplayVolume * __thiscall
AAudioGameplayVolume::AAudioGameplayVolume(AAudioGameplayVolume *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent *this_00;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UAudioGameplayVolumeComponent *pUVar4;
  FName local_res8;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this_00 = (UPrimitiveComponent *)this->_padding_;
  this->_padding_ = (longlong)&___7AAudioGameplayVolume__6B_;
  (this->AGVComponent).field0_0x0.DebugPtr = (UAudioGameplayVolumeComponent *)0x0;
  this->bEnabled = true;
  *(undefined8 *)&this->OnListenerEnterEvent = 0;
  *(undefined8 *)&(this->OnListenerEnterEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListenerEnterEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnListenerExitEvent = 0;
  *(undefined8 *)&(this->OnListenerExitEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListenerExitEvent).field_0x10 = 0;
  if (this_00 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)this_00 + 0x788))
              (this_00,UCollisionProfile::NoCollision_ProfileName,1);
    UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
    this_00->bAlwaysCreatePhysicsState = '\x01';
  }
  pFVar2 = ::FName::FName(&local_res8,L"AGVComponent");
  FVar1 = *pFVar2;
  pUVar3 = UAudioGameplayVolumeComponent::StaticClass();
  pUVar4 = (UAudioGameplayVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UAudioGameplayVolumeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->AGVComponent).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~AAudioGameplayVolume @ 14d9a0080

void __thiscall AAudioGameplayVolume::~AAudioGameplayVolume(AAudioGameplayVolume *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AAudioGameplayVolume__6B_;
  pvVar1 = *(void **)&(this->OnListenerExitEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListenerExitEvent);
  pvVar1 = *(void **)&(this->OnListenerEnterEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListenerEnterEvent);
  AVolume::~AVolume((AVolume *)this);
  return;
}

// AddProxy @ 14d9a1d80

void __thiscall AAudioGameplayVolume::AddProxy(AAudioGameplayVolume *this)

{
  UAudioGameplayVolumeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  
  pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UAudioGameplayVolumeComponent *)0x0) {
    return;
  }
  pcVar4 = strstr("&AAudioGameplayVolume::OnListenerEnter","::");
  pcVar6 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14d9a1e0a:
    pcVar5 = &DAT_00000002;
LAB_14d9a1e0d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14d9a1e0a;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14d9a1e0d;
  }
  ::FName::FName(&local_res8,pcVar5);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<AAudioGameplayVolume_const_>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar1->OnProxyEnter
             ,this,(pmf_40634ecd)0x14d9a7f30,local_res8);
  pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr;
  pcVar4 = strstr("&AAudioGameplayVolume::OnListenerExit","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_14d9a1ee8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d9a1ee8:
  ::FName::FName(&local_res10,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<AAudioGameplayVolume_const_>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar1->OnProxyExit,
             this,(pmf_40634ecd)0x14d9a7fd0,local_res10);
  UAudioGameplayComponent::Activate
            ((UAudioGameplayComponent *)(this->AGVComponent).field0_0x0.DebugPtr,false);
  return;
}

// CanSupportProxy @ 14d9a34b0

bool __thiscall AAudioGameplayVolume::CanSupportProxy(AAudioGameplayVolume *this)

{
  UAudioGameplayVolumeComponent *pUVar1;
  
  if ((this->bEnabled != false) &&
     (pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr,
     pUVar1 != (UAudioGameplayVolumeComponent *)0x0)) {
    return (pUVar1->Proxy).field0_0x0.DebugPtr != (UAudioGameplayVolumeProxy *)0x0;
  }
  return false;
}

// GetLifetimeReplicatedProps @ 14d9a62b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AAudioGameplayVolume::GetLifetimeReplicatedProps
          (AAudioGameplayVolume *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,8,L"bEnabled",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 14d9a6390

UClass * __cdecl AAudioGameplayVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolume",
               &Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton,
               StaticRegisterNativesAAudioGameplayVolume,0x338,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAudioGameplayVolume>,
               InternalVTableHelperCtorCaller<AAudioGameplayVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton;
}

// OnComponentDataChanged @ 14d9a7d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioGameplayVolume::OnComponentDataChanged(AAudioGameplayVolume *this)

{
  uint uVar1;
  UAudioGameplayVolumeComponent *this_00;
  UAudioGameplayVolumeProxy *pUVar2;
  int iVar3;
  UAudioGameplayVolumeSubsystem *this_01;
  UWorld *pUVar4;
  undefined1 *puVar5;
  FName FStackX_8;
  FString FStack_48;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FName FStack_20;
  undefined8 uStack_10;
  
  if (((this->bEnabled != false) &&
      (this_00 = (this->AGVComponent).field0_0x0.DebugPtr,
      this_00 != (UAudioGameplayVolumeComponent *)0x0)) &&
     ((this_00->Proxy).field0_0x0.DebugPtr != (UAudioGameplayVolumeProxy *)0x0)) {
    if (((this_00->_padding_ & 0x100000) != 0) &&
       (this_01 = UAudioGameplayVolumeComponent::GetSubsystem(this_00),
       this_01 != (UAudioGameplayVolumeSubsystem *)0x0)) {
      if ((this_00->_padding_ == 0) &&
         (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
         pUVar4 == (UWorld *)0x0)) {
        if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
          return;
        }
      }
      else {
        pUVar2 = (this_00->Proxy).field0_0x0.DebugPtr;
        uVar1 = *(uint *)((longlong)&this_00->_padding_ + 4);
        if ((pUVar2 != (UAudioGameplayVolumeProxy *)0x0) &&
           (*(int *)&(this_01->AGVComponents).field_0x8 !=
            *(int *)&(this_01->AGVComponents).field_0x34)) {
          puVar5 = *(undefined1 **)&(this_01->AGVComponents).field_0x40;
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &(this_01->AGVComponents).field_0x38;
          }
          iVar3 = *(int *)(puVar5 + (ulonglong)
                                    (*(int *)&(this_01->AGVComponents).field_0x48 - 1U & uVar1) * 4)
          ;
          if (iVar3 != -1) {
            while (*(uint *)(*(longlong *)&this_01->AGVComponents + (longlong)iVar3 * 0x18) != uVar1
                  ) {
              iVar3 = *(int *)(*(longlong *)&this_01->AGVComponents + 0x10 + (longlong)iVar3 * 0x18)
              ;
              if (iVar3 == -1) {
                return;
              }
            }
            (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,this_00);
            if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
              FStackX_8 = (FName)this_00->_padding_;
              ::FName::ToString(&FStackX_8,&FStack_48);
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
              if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
              }
            }
            FStackX_8.ComparisonIndex.Value =
                 UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this_01);
            FStackX_8.Number = uVar1;
            ppuStack_28 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
                           ::_vftable_;
            FStack_20 = FStackX_8;
            apcStack_38[0] =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>
                 ::Call;
            uStack_10 = 0;
            FAudioThread::RunCommandOnAudioThread
                      ((TUniqueFunction<void___cdecl(void)> *)apcStack_38,(TStatId)0x154f11430);
          }
        }
      }
    }
    return;
  }
  return;
}

// OnListenerEnter @ 14d9a7f30

void __thiscall AAudioGameplayVolume::OnListenerEnter(AAudioGameplayVolume *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AAudioGameplayVolume_OnListenerEnter);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a7f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d9a7f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x790))(this);
  return;
}

// OnListenerEnter_Implementation @ 14d9a7fa0

void __thiscall AAudioGameplayVolume::OnListenerEnter_Implementation(AAudioGameplayVolume *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnListenerEnterEvent,
             (void *)0x0);
  return;
}

// OnListenerExit @ 14d9a7fd0

void __thiscall AAudioGameplayVolume::OnListenerExit(AAudioGameplayVolume *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AAudioGameplayVolume_OnListenerExit);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a8013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d9a8024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// OnListenerExit_Implementation @ 14d9a8040

void __thiscall AAudioGameplayVolume::OnListenerExit_Implementation(AAudioGameplayVolume *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnListenerExitEvent,
             (void *)0x0);
  return;
}

// OnRep_bEnabled @ 14d9a8100

void __thiscall AAudioGameplayVolume::OnRep_bEnabled(AAudioGameplayVolume *this)

{
  UAudioGameplayVolumeComponent *pUVar1;
  
  if (((this->bEnabled != false) &&
      (pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr,
      pUVar1 != (UAudioGameplayVolumeComponent *)0x0)) &&
     ((pUVar1->Proxy).field0_0x0.DebugPtr != (UAudioGameplayVolumeProxy *)0x0)) {
    AddProxy(this);
    return;
  }
  pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioGameplayVolumeComponent *)0x0) {
    UAudioGameplayComponent::Deactivate((UAudioGameplayComponent *)pUVar1);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyEnter,(UObject *)this);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyExit,(UObject *)this);
    return;
  }
  return;
}

// PostInitializeComponents @ 14d9a81c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioGameplayVolume::PostInitializeComponents(AAudioGameplayVolume *this)

{
  UAudioGameplayVolumeComponent *pUVar1;
  
  AActor::PostInitializeComponents((AActor *)this);
  if (((this->bEnabled != false) &&
      (pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr,
      pUVar1 != (UAudioGameplayVolumeComponent *)0x0)) &&
     ((pUVar1->Proxy).field0_0x0.DebugPtr != (UAudioGameplayVolumeProxy *)0x0)) {
    AddProxy(this);
    return;
  }
  return;
}

// PostRegisterAllComponents @ 14d9a8210

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall AAudioGameplayVolume::PostRegisterAllComponents(AAudioGameplayVolume *this)

{
  byte *pbVar1;
  int iVar2;
  UAudioGameplayVolumeComponent *pUVar3;
  longlong lVar4;
  UClass *pUVar5;
  UAudioGameplayVolumeProxy *pUVar6;
  UAudioGameplayVolumeSubsystem *pUVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  UAudioGameplayVolumeComponent *local_90;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  AActor::PostRegisterAllComponents((AActor *)this);
  if (this->_padding_ != 0) {
    TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
    ::AddUObject<AAudioGameplayVolume>
              ((void *)(this->_padding_ + 0x1b0),(AAudioGameplayVolume *)local_a8,(pmf_1de6a0cc)this
              );
  }
  pUVar3 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (pUVar3 == (UAudioGameplayVolumeComponent *)0x0) {
    return;
  }
  pUVar6 = (pUVar3->Proxy).field0_0x0.DebugPtr;
  if (pUVar6 != (UAudioGameplayVolumeProxy *)0x0) {
    pUVar5 = UAGVPrimitiveComponentProxy::StaticClass();
    lVar4 = pUVar6->_padding_;
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14d9a836a;
  }
  pUVar3 = (this->AGVComponent).field0_0x0.DebugPtr;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UAGVPrimitiveComponentProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_a8 + 0x10),pUVar5);
  local_90 = pUVar3;
  pUVar6 = (UAudioGameplayVolumeProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_a8 + 0x10));
  if (local_58 != 0) {
    plVar8 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar7 = UAudioGameplayVolumeComponent::GetSubsystem(pUVar3);
  if (pUVar7 != (UAudioGameplayVolumeSubsystem *)0x0) {
    UAudioGameplayVolumeSubsystem::RemoveVolumeComponent(pUVar7,pUVar3);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UAudioGameplayVolumeProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar3->Proxy).field0_0x0.DebugPtr = pUVar6;
  if (((pUVar3->_padding_ & 0x100000) != 0) &&
     (pUVar7 = UAudioGameplayVolumeComponent::GetSubsystem(pUVar3),
     pUVar7 != (UAudioGameplayVolumeSubsystem *)0x0)) {
    UAudioGameplayVolumeSubsystem::AddVolumeComponent(pUVar7,pUVar3);
  }
LAB_14d9a836a:
  pbVar1 = (byte *)((longlong)&((this->AGVComponent).field0_0x0.DebugPtr)->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf7;
  return;
}

// PostUnregisterAllComponents @ 14d9a83a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioGameplayVolume::PostUnregisterAllComponents(AAudioGameplayVolume *this)

{
  UAudioGameplayVolumeComponent *this_00;
  
  this_00 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (this_00 != (UAudioGameplayVolumeComponent *)0x0) {
    UAudioGameplayComponent::Deactivate((UAudioGameplayComponent *)this_00);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyEnter,(UObject *)this);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyExit,(UObject *)this);
  }
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1b0),this)
    ;
  }
  AActor::PostUnregisterAllComponents((AActor *)this);
  return;
}

// RemoveProxy @ 14d9a8d10

void __thiscall AAudioGameplayVolume::RemoveProxy(AAudioGameplayVolume *this)

{
  UAudioGameplayVolumeComponent *this_00;
  
  this_00 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (this_00 != (UAudioGameplayVolumeComponent *)0x0) {
    UAudioGameplayComponent::Deactivate((UAudioGameplayComponent *)this_00);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyEnter,(UObject *)this);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyExit,(UObject *)this);
    return;
  }
  return;
}

// SetEnabled @ 14d9a97f0

void __thiscall AAudioGameplayVolume::SetEnabled(AAudioGameplayVolume *this,bool param_1)

{
  UAudioGameplayVolumeComponent *pUVar1;
  
  if (param_1 != this->bEnabled) {
    this->bEnabled = param_1;
    if (((param_1) &&
        (pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr,
        pUVar1 != (UAudioGameplayVolumeComponent *)0x0)) &&
       ((pUVar1->Proxy).field0_0x0.DebugPtr != (UAudioGameplayVolumeProxy *)0x0)) {
      AddProxy(this);
      return;
    }
    pUVar1 = (this->AGVComponent).field0_0x0.DebugPtr;
    if (pUVar1 != (UAudioGameplayVolumeComponent *)0x0) {
      UAudioGameplayComponent::Deactivate((UAudioGameplayComponent *)pUVar1);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyEnter,(UObject *)this);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &((this->AGVComponent).field0_0x0.DebugPtr)->OnProxyExit,(UObject *)this);
      return;
    }
  }
  return;
}

// StaticRegisterNativesAAudioGameplayVolume @ 14d9a9a40

void __cdecl AAudioGameplayVolume::StaticRegisterNativesAAudioGameplayVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AAudioGameplayVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformUpdated @ 14d9a9c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AAudioGameplayVolume::TransformUpdated
          (AAudioGameplayVolume *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  uint uVar1;
  UAudioGameplayVolumeProxy *pUVar2;
  UAudioGameplayVolumeComponent *this_00;
  int iVar3;
  UAudioGameplayVolumeSubsystem *this_01;
  UWorld *pUVar4;
  undefined1 *puVar5;
  FName FStackX_8;
  FString FStack_48;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FName FStack_20;
  undefined8 uStack_10;
  
  this_00 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioGameplayVolumeComponent *)0x0) {
    return;
  }
  if (((this_00->_padding_ & 0x100000) != 0) &&
     (this_01 = UAudioGameplayVolumeComponent::GetSubsystem(this_00),
     this_01 != (UAudioGameplayVolumeSubsystem *)0x0)) {
    if ((this_00->_padding_ == 0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
       pUVar4 == (UWorld *)0x0)) {
      if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog)
        ;
        return;
      }
    }
    else {
      pUVar2 = (this_00->Proxy).field0_0x0.DebugPtr;
      uVar1 = *(uint *)((longlong)&this_00->_padding_ + 4);
      if ((pUVar2 != (UAudioGameplayVolumeProxy *)0x0) &&
         (*(int *)&(this_01->AGVComponents).field_0x8 !=
          *(int *)&(this_01->AGVComponents).field_0x34)) {
        puVar5 = *(undefined1 **)&(this_01->AGVComponents).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this_01->AGVComponents).field_0x38;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this_01->AGVComponents).field_0x48 - 1U & uVar1) * 4);
        if (iVar3 != -1) {
          while (*(uint *)(*(longlong *)&this_01->AGVComponents + (longlong)iVar3 * 0x18) != uVar1)
          {
            iVar3 = *(int *)(*(longlong *)&this_01->AGVComponents + 0x10 + (longlong)iVar3 * 0x18);
            if (iVar3 == -1) {
              return;
            }
          }
          (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,this_00);
          if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
            FStackX_8 = (FName)this_00->_padding_;
            ::FName::ToString(&FStackX_8,&FStack_48);
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
            if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
            }
          }
          FStackX_8.ComparisonIndex.Value =
               UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this_01);
          FStackX_8.Number = uVar1;
          ppuStack_28 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
                         ::_vftable_;
          FStack_20 = FStackX_8;
          apcStack_38[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>
               ::Call;
          uStack_10 = 0;
          FAudioThread::RunCommandOnAudioThread
                    ((TUniqueFunction<void___cdecl(void)> *)apcStack_38,(TStatId)0x154f11430);
        }
      }
    }
  }
  return;
}

// UpdateProxy @ 14d9ac320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioGameplayVolume::UpdateProxy(AAudioGameplayVolume *this)

{
  uint uVar1;
  UAudioGameplayVolumeProxy *pUVar2;
  UAudioGameplayVolumeComponent *this_00;
  int iVar3;
  UAudioGameplayVolumeSubsystem *this_01;
  UWorld *pUVar4;
  undefined1 *puVar5;
  FName FStackX_8;
  FString FStack_48;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FName FStack_20;
  undefined8 uStack_10;
  
  this_00 = (this->AGVComponent).field0_0x0.DebugPtr;
  if (this_00 == (UAudioGameplayVolumeComponent *)0x0) {
    return;
  }
  if (((this_00->_padding_ & 0x100000) != 0) &&
     (this_01 = UAudioGameplayVolumeComponent::GetSubsystem(this_00),
     this_01 != (UAudioGameplayVolumeSubsystem *)0x0)) {
    if ((this_00->_padding_ == 0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
       pUVar4 == (UWorld *)0x0)) {
      if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog)
        ;
        return;
      }
    }
    else {
      pUVar2 = (this_00->Proxy).field0_0x0.DebugPtr;
      uVar1 = *(uint *)((longlong)&this_00->_padding_ + 4);
      if ((pUVar2 != (UAudioGameplayVolumeProxy *)0x0) &&
         (*(int *)&(this_01->AGVComponents).field_0x8 !=
          *(int *)&(this_01->AGVComponents).field_0x34)) {
        puVar5 = *(undefined1 **)&(this_01->AGVComponents).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this_01->AGVComponents).field_0x38;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this_01->AGVComponents).field_0x48 - 1U & uVar1) * 4);
        if (iVar3 != -1) {
          while (*(uint *)(*(longlong *)&this_01->AGVComponents + (longlong)iVar3 * 0x18) != uVar1)
          {
            iVar3 = *(int *)(*(longlong *)&this_01->AGVComponents + 0x10 + (longlong)iVar3 * 0x18);
            if (iVar3 == -1) {
              return;
            }
          }
          (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,this_00);
          if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
            FStackX_8 = (FName)this_00->_padding_;
            ::FName::ToString(&FStackX_8,&FStack_48);
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
            if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
            }
          }
          FStackX_8.ComparisonIndex.Value =
               UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this_01);
          FStackX_8.Number = uVar1;
          ppuStack_28 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
                         ::_vftable_;
          FStack_20 = FStackX_8;
          apcStack_38[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>
               ::Call;
          uStack_10 = 0;
          FAudioThread::RunCommandOnAudioThread
                    ((TUniqueFunction<void___cdecl(void)> *)apcStack_38,(TStatId)0x154f11430);
        }
      }
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 14d9ac720

void __thiscall
AAudioGameplayVolume::ValidateGeneratedRepEnums
          (AAudioGameplayVolume *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_bEnabled,L"bEnabled");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0xb) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_bEnabled != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AudioGameplayVolume\\UHT\\AudioGameplayVolume.gen.cpp"
                       ,399,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAudioGameplayVolume"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execOnListenerEnter @ 14d9ad0b0

void __cdecl
AAudioGameplayVolume::execOnListenerEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014d9ad0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x790))();
  return;
}

// execOnListenerExit @ 14d9ad0e0

void __cdecl
AAudioGameplayVolume::execOnListenerExit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014d9ad0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))();
  return;
}

// execOnRep_bEnabled @ 14d9ad110

void __cdecl
AAudioGameplayVolume::execOnRep_bEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014d9ad128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x798))();
  return;
}

// execSetEnabled @ 14d9ad140

void __cdecl AAudioGameplayVolume::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bVar2 != (bool)param_1[0x13].field_0x8) {
    param_1[0x13].field_0x8 = bVar2;
    if (((bVar2) && (*(longlong *)(param_1 + 0x13) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x13) + 0xf8) != 0)) {
      AddProxy((AAudioGameplayVolume *)param_1);
      return;
    }
    if (*(UAudioGameplayComponent **)(param_1 + 0x13) != (UAudioGameplayComponent *)0x0) {
      UAudioGameplayComponent::Deactivate(*(UAudioGameplayComponent **)(param_1 + 0x13));
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)(param_1 + 0x13) + 200),param_1);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)(param_1 + 0x13) + 0xe0),param_1);
    }
  }
  return;
}

