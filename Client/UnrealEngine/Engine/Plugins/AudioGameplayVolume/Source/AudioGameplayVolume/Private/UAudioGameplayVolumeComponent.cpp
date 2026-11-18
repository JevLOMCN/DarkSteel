// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 18

// StaticClass @ 14d999070

UClass * __cdecl UAudioGameplayVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeComponent",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeComponent,0x100,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeComponent>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponent>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton;
}

// UAudioGameplayVolumeComponent @ 14d99f520

UAudioGameplayVolumeComponent * __thiscall
UAudioGameplayVolumeComponent::UAudioGameplayVolumeComponent
          (UAudioGameplayVolumeComponent *this,FVTableHelper *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnProxyEnter = 0;
  *(undefined8 *)&(this->OnProxyEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnProxyEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnProxyExit = 0;
  *(undefined8 *)&(this->OnProxyExit).field_0x8 = 0;
  *(undefined8 *)&(this->OnProxyExit).field_0x10 = 0;
  (this->Proxy).field0_0x0.DebugPtr = (UAudioGameplayVolumeProxy *)0x0;
  return this;
}

// UAudioGameplayVolumeComponent @ 14d99f590

UAudioGameplayVolumeComponent * __thiscall
UAudioGameplayVolumeComponent::UAudioGameplayVolumeComponent
          (UAudioGameplayVolumeComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  *(undefined8 *)&this->OnProxyEnter = 0;
  *(undefined8 *)&(this->OnProxyEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnProxyEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnProxyExit = 0;
  *(undefined8 *)&(this->OnProxyExit).field_0x8 = 0;
  *(undefined8 *)&(this->OnProxyExit).field_0x10 = 0;
  (this->Proxy).field0_0x0.DebugPtr = (UAudioGameplayVolumeProxy *)0x0;
  return this;
}

// ~UAudioGameplayVolumeComponent @ 14d9a03a0

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
UAudioGameplayVolumeComponent::~UAudioGameplayVolumeComponent(UAudioGameplayVolumeComponent *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->OnProxyExit).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProxyExit);
  pvVar1 = *(void **)&(this->OnProxyEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProxyEnter);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddProxy @ 14d9a1f40

void __thiscall UAudioGameplayVolumeComponent::AddProxy(UAudioGameplayVolumeComponent *this)

{
  UAudioGameplayVolumeSubsystem *this_00;
  
  this_00 = GetSubsystem(this);
  if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
    UAudioGameplayVolumeSubsystem::AddVolumeComponent(this_00,this);
    return;
  }
  return;
}

// Disable @ 14d9a4c30

void __thiscall UAudioGameplayVolumeComponent::Disable(UAudioGameplayVolumeComponent *this)

{
  UAudioGameplayVolumeSubsystem *this_00;
  
  this_00 = GetSubsystem(this);
  if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
    UAudioGameplayVolumeSubsystem::RemoveVolumeComponent(this_00,this);
  }
  UAudioGameplayComponent::Disable((UAudioGameplayComponent *)this);
  return;
}

// Enable @ 14d9a4d60

void __thiscall UAudioGameplayVolumeComponent::Enable(UAudioGameplayVolumeComponent *this)

{
  UAudioGameplayVolumeSubsystem *this_00;
  
  if ((this->Proxy).field0_0x0.DebugPtr != (UAudioGameplayVolumeProxy *)0x0) {
    UAudioGameplayComponent::Enable((UAudioGameplayComponent *)this);
    this_00 = GetSubsystem(this);
    if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
      UAudioGameplayVolumeSubsystem::AddVolumeComponent(this_00,this);
      return;
    }
  }
  return;
}

// EnterProxy @ 14d9a4de0

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

void __thiscall UAudioGameplayVolumeComponent::EnterProxy(UAudioGameplayVolumeComponent *this)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = (AActor *)this->_padding_;
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  local_2c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d9a4ef1;
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14d9a4e57;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14d9a4e57:
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar9 = pUVar7;
      if (pUVar6 != (UClass *)0x0) {
        iVar2 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = pUVar5;
        }
      }
    }
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar5;
  if (pUVar9 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
LAB_14d9a4ef1:
  iVar2 = local_30;
  puVar8 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar8 = local_38;
  }
  puVar1 = puVar8 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (puVar8 == puVar1) break;
    pUVar3 = (UObject *)*puVar8;
    if ((pUVar3 != (UObject *)0x0) &&
       (pUVar9 = *(UClass **)&pUVar3->field_0x10, pUVar9 != (UClass *)0x0)) {
      pUVar7 = Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister();
      bVar4 = UClass::ImplementsInterface(pUVar9,pUVar7);
      if (bVar4) {
        IAudioGameplayVolumeInteraction::Execute_OnListenerEnter(pUVar3);
      }
    }
    puVar8 = puVar8 + 1;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnProxyEnter,(void *)0x0
            );
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// ExitProxy @ 14d9a5120

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

void __thiscall UAudioGameplayVolumeComponent::ExitProxy(UAudioGameplayVolumeComponent *this)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = (AActor *)this->_padding_;
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  local_2c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d9a5231;
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14d9a5197;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14d9a5197:
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar9 = pUVar7;
      if (pUVar6 != (UClass *)0x0) {
        iVar2 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = pUVar5;
        }
      }
    }
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar5;
  if (pUVar9 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
LAB_14d9a5231:
  iVar2 = local_30;
  puVar8 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar8 = local_38;
  }
  puVar1 = puVar8 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (puVar8 == puVar1) break;
    pUVar3 = (UObject *)*puVar8;
    if ((pUVar3 != (UObject *)0x0) &&
       (pUVar9 = *(UClass **)&pUVar3->field_0x10, pUVar9 != (UClass *)0x0)) {
      pUVar7 = Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister();
      bVar4 = UClass::ImplementsInterface(pUVar9,pUVar7);
      if (bVar4) {
        IAudioGameplayVolumeInteraction::Execute_OnListenerExit(pUVar3);
      }
    }
    puVar8 = puVar8 + 1;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnProxyExit,(void *)0x0)
  ;
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// GetPrivateStaticClass @ 14d9a6690

UClass * __cdecl UAudioGameplayVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeComponent",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeComponent,0x100,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeComponent>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponent>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton;
}

// GetSubsystem @ 14d9a6d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioGameplayVolumeSubsystem * __thiscall
UAudioGameplayVolumeComponent::GetSubsystem(UAudioGameplayVolumeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FAudioDeviceHandle *this_01;
  UAudioGameplayVolumeSubsystem *pUVar3;
  FAudioDeviceHandle local_28;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 == (UWorld *)0x0) {
      return (UAudioGameplayVolumeSubsystem *)0x0;
    }
  }
  this_01 = UWorld::GetAudioDevice(this_00,&local_28);
  bVar2 = FAudioDeviceHandle::IsValid(this_01);
  if (bVar2) {
    bVar2 = FAudioDeviceHandle::IsValid(this_01);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x5a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UAudioGameplayVolumeSubsystem *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(this_01->Device);
  }
  else {
    pUVar3 = (UAudioGameplayVolumeSubsystem *)0x0;
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return pUVar3;
}

// OnComponentDataChanged @ 14d9a7d60

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
UAudioGameplayVolumeComponent::OnComponentDataChanged(UAudioGameplayVolumeComponent *this)

{
  uint uVar1;
  UAudioGameplayVolumeProxy *pUVar2;
  int iVar3;
  UAudioGameplayVolumeSubsystem *this_00;
  UWorld *pUVar4;
  undefined1 *puVar5;
  FName local_res8;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  if (((this->_padding_ & 0x100000) != 0) &&
     (this_00 = GetSubsystem(this), this_00 != (UAudioGameplayVolumeSubsystem *)0x0)) {
    if ((this->_padding_ == 0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar4 == (UWorld *)0x0)) {
      if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog)
        ;
        return;
      }
    }
    else {
      pUVar2 = (this->Proxy).field0_0x0.DebugPtr;
      uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
      if ((pUVar2 != (UAudioGameplayVolumeProxy *)0x0) &&
         (*(int *)&(this_00->AGVComponents).field_0x8 !=
          *(int *)&(this_00->AGVComponents).field_0x34)) {
        puVar5 = *(undefined1 **)&(this_00->AGVComponents).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this_00->AGVComponents).field_0x38;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this_00->AGVComponents).field_0x48 - 1U & uVar1) * 4);
        if (iVar3 != -1) {
          while (*(uint *)(*(longlong *)&this_00->AGVComponents + (longlong)iVar3 * 0x18) != uVar1)
          {
            iVar3 = *(int *)(*(longlong *)&this_00->AGVComponents + 0x10 + (longlong)iVar3 * 0x18);
            if (iVar3 == -1) {
              return;
            }
          }
          (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,this);
          if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
            local_res8 = (FName)this->_padding_;
            ::FName::ToString(&local_res8,&local_48);
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          local_res8.ComparisonIndex.Value =
               UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this_00);
          local_res8.Number = uVar1;
          local_28 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
                      ::_vftable_;
          local_20 = local_res8;
          local_38[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>
                        ::Call;
          local_10 = 0;
          FAudioThread::RunCommandOnAudioThread
                    ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
        }
      }
    }
  }
  return;
}

// OnRegister @ 14d9a8070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioGameplayVolumeComponent::OnRegister(UAudioGameplayVolumeComponent *this)

{
  bool bVar1;
  UClass *pUVar2;
  UAudioGameplayVolumeProxy *pUVar3;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  if ((AudioGameplayVolumeComponentVariables::bDuplicateProxy != 0) &&
     (pUVar3 = (this->Proxy).field0_0x0.DebugPtr, pUVar3 != (UAudioGameplayVolumeProxy *)0x0)) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)pUVar3,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      pUVar3 = (this->Proxy).field0_0x0.DebugPtr;
      pUVar2 = UAudioGameplayVolumeProxy::StaticClass();
      pUVar3 = (UAudioGameplayVolumeProxy *)
               DuplicateObject_Internal(pUVar2,(UObject *)pUVar3,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UAudioGameplayVolumeProxy *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Proxy).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return;
}

// OnUnregister @ 14d9a8180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioGameplayVolumeComponent::OnUnregister(UAudioGameplayVolumeComponent *this)

{
  UAudioGameplayVolumeSubsystem *this_00;
  
  UActorComponent::OnUnregister((UActorComponent *)this);
  this_00 = GetSubsystem(this);
  if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
    UAudioGameplayVolumeSubsystem::RemoveVolumeComponent(this_00,this);
    return;
  }
  return;
}

// RemoveProxy @ 14d9a8d70

void __thiscall UAudioGameplayVolumeComponent::RemoveProxy(UAudioGameplayVolumeComponent *this)

{
  UAudioGameplayVolumeSubsystem *this_00;
  
  this_00 = GetSubsystem(this);
  if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
    UAudioGameplayVolumeSubsystem::RemoveVolumeComponent(this_00,this);
    return;
  }
  return;
}

// SetProxy @ 14d9a9920

void __thiscall
UAudioGameplayVolumeComponent::SetProxy
          (UAudioGameplayVolumeComponent *this,UAudioGameplayVolumeProxy *param_1)

{
  UAudioGameplayVolumeSubsystem *pUVar1;
  
  pUVar1 = GetSubsystem(this);
  if (pUVar1 != (UAudioGameplayVolumeSubsystem *)0x0) {
    UAudioGameplayVolumeSubsystem::RemoveVolumeComponent(pUVar1,this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UAudioGameplayVolumeProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Proxy).field0_0x0.DebugPtr = param_1;
  if ((this->_padding_ & 0x100000) != 0) {
    pUVar1 = GetSubsystem(this);
    if (pUVar1 != (UAudioGameplayVolumeSubsystem *)0x0) {
      UAudioGameplayVolumeSubsystem::AddVolumeComponent(pUVar1,this);
    }
  }
  return;
}

// StaticRegisterNativesUAudioGameplayVolumeComponent @ 14d9a9ae0

void __cdecl UAudioGameplayVolumeComponent::StaticRegisterNativesUAudioGameplayVolumeComponent(void)

{
  return;
}

// UpdateProxy @ 14d9ac340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioGameplayVolumeComponent::UpdateProxy(UAudioGameplayVolumeComponent *this)

{
  uint uVar1;
  UAudioGameplayVolumeProxy *pUVar2;
  int iVar3;
  UAudioGameplayVolumeSubsystem *this_00;
  UWorld *pUVar4;
  undefined1 *puVar5;
  FName local_res10;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  this_00 = GetSubsystem(this);
  if (this_00 != (UAudioGameplayVolumeSubsystem *)0x0) {
    if ((this == (UAudioGameplayVolumeComponent *)0x0) ||
       ((this->_padding_ == 0 &&
        (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar4 == (UWorld *)0x0)))) {
      if (5 < (byte)AudioGameplayVolumeLog._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog)
        ;
        return;
      }
    }
    else {
      pUVar2 = (this->Proxy).field0_0x0.DebugPtr;
      uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
      if ((pUVar2 != (UAudioGameplayVolumeProxy *)0x0) &&
         (*(int *)&(this_00->AGVComponents).field_0x8 !=
          *(int *)&(this_00->AGVComponents).field_0x34)) {
        puVar5 = *(undefined1 **)&(this_00->AGVComponents).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this_00->AGVComponents).field_0x38;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this_00->AGVComponents).field_0x48 - 1U & uVar1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->AGVComponents + (longlong)iVar3 * 0x18) == uVar1) {
              (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,this);
              if (6 < (byte)AudioGameplayVolumeLog._0_1_) {
                local_res10 = (FName)this->_padding_;
                ::FName::ToString(&local_res10,&local_48);
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
              }
              local_res10.ComparisonIndex.Value =
                   UAudioEngineSubsystem::GetAudioDeviceId((UAudioEngineSubsystem *)this_00);
              local_res10.Number = uVar1;
              local_28 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
                          ::_vftable_;
              local_20 = local_res10;
              local_38[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,void>
                            ::Call;
              local_10 = 0;
              FAudioThread::RunCommandOnAudioThread
                        ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
              return;
            }
            iVar3 = *(int *)(*(longlong *)&this_00->AGVComponents + 0x10 + (longlong)iVar3 * 0x18);
          } while (iVar3 != -1);
        }
      }
    }
  }
  return;
}

