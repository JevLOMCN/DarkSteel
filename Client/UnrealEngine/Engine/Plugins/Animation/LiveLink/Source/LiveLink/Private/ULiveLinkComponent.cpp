// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 9

// StaticClass @ 14cff6df0

UClass * __cdecl ULiveLinkComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkComponent",
               &Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton,
               StaticRegisterNativesULiveLinkComponent,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton;
}

// ULiveLinkComponent @ 14d013710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULiveLinkComponent * __thiscall
ULiveLinkComponent::ULiveLinkComponent(ULiveLinkComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnLiveLinkUpdated = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x10 = 0;
  return this;
}

// ULiveLinkComponent @ 14d013770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULiveLinkComponent * __thiscall ULiveLinkComponent::ULiveLinkComponent(ULiveLinkComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnLiveLinkUpdated = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x10 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)&this->_padding_ = 0;
  this->bIsDirty = false;
  return this;
}

// ~ULiveLinkComponent @ 14d016fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkComponent::~ULiveLinkComponent(ULiveLinkComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnLiveLinkUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkUpdated);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14d0522b0

UClass * __cdecl ULiveLinkComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkComponent",
               &Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton,
               StaticRegisterNativesULiveLinkComponent,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton;
}

// HasLiveLinkClient @ 14d059f10

bool __thiscall ULiveLinkComponent::HasLiveLinkClient(ULiveLinkComponent *this)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  ILiveLinkClient *pIVar4;
  
  if (this->LiveLinkClient == (ILiveLinkClient *)0x0) {
    pIVar2 = IModularFeatures::Get();
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
    if (0 < iVar1) {
      lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
      pIVar4 = (ILiveLinkClient *)(lVar3 + -8);
      if (lVar3 == 0) {
        pIVar4 = (ILiveLinkClient *)0x0;
      }
      this->LiveLinkClient = pIVar4;
    }
  }
  return this->LiveLinkClient != (ILiveLinkClient *)0x0;
}

// OnRegister @ 14d06acc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkComponent::OnRegister(ULiveLinkComponent *this)

{
  this->bIsDirty = true;
  UActorComponent::OnRegister((UActorComponent *)this);
  return;
}

// StaticRegisterNativesULiveLinkComponent @ 14d080720

void __cdecl ULiveLinkComponent::StaticRegisterNativesULiveLinkComponent(void)

{
  return;
}

// TickComponent @ 14d0825b0

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
ULiveLinkComponent::TickComponent
          (ULiveLinkComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  UClass *local_res8;
  float local_48 [2];
  FReadAccessScope local_40;
  
  if (this->bIsDirty == false) goto LAB_14d082705;
  pUVar6 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  this_00 = (AActor *)this->_padding_;
  local_40.DestructionSentinel._0_8_ = (undefined8 *)0x0;
  local_40.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14d08261b;
  }
  else {
    pUVar9 = pUVar6;
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14d08261b:
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar9 = pUVar6;
      if (pUVar5 != (UClass *)0x0) {
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar9 = pUVar4;
        }
      }
    }
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar4;
  if (pUVar9 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)&local_40);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)&local_40);
  }
  iVar2 = (int)local_40.DestructionSentinel.Accessor;
  uVar7 = (ulonglong)(int)local_40.DestructionSentinel.Accessor;
  puVar1 = (undefined8 *)(local_40.DestructionSentinel._0_8_ + uVar7 * 8);
  puVar8 = (undefined8 *)local_40.DestructionSentinel._0_8_;
  while( true ) {
    if ((int)uVar7 != iVar2) {
      `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (puVar8 == puVar1) break;
    USkeletalMeshComponent::SetUpdateAnimationInEditor((USkeletalMeshComponent *)*puVar8,true);
    uVar7 = (ulonglong)local_40.DestructionSentinel.Accessor & 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  this->bIsDirty = false;
  if ((undefined8 *)local_40.DestructionSentinel._0_8_ != (undefined8 *)0x0) {
    FMemory::Free((void *)local_40.DestructionSentinel._0_8_);
  }
LAB_14d082705:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnLiveLinkUpdated,
             &local_40);
  iVar2 = *(int *)&(this->OnLiveLinkUpdated).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (0 < iVar2) {
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard
              ((FEditorScriptExecutionGuard *)&local_res8);
    local_48[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLiveLinkUpdated,
               local_48);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard
              ((FEditorScriptExecutionGuard *)&local_res8);
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  return;
}

