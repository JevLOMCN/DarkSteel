// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 14

// StaticClass @ 14d998450

UClass * __cdecl UAudioGameplayVolumeMutator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeMutator",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeMutator,0xd0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeMutator>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeMutator>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton;
}

// UAudioGameplayVolumeMutator @ 14d99f6c0

UAudioGameplayVolumeMutator * __thiscall
UAudioGameplayVolumeMutator::UAudioGameplayVolumeMutator
          (UAudioGameplayVolumeMutator *this,FVTableHelper *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  this->Priority = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UAudioGameplayVolumeMutator @ 14d99f710

UAudioGameplayVolumeMutator * __thiscall
UAudioGameplayVolumeMutator::UAudioGameplayVolumeMutator
          (UAudioGameplayVolumeMutator *this,FObjectInitializer *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  this->Priority = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UAudioGameplayVolumeMutator @ 14d9a0420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAudioGameplayVolumeMutator::~UAudioGameplayVolumeMutator(UAudioGameplayVolumeMutator *this)

{
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FTickFunction::~FTickFunction((FTickFunction *)&this->_padding_);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyAudioDataToMutator @ 14d9a3b50

void __thiscall
UAudioGameplayVolumeMutator::CopyAudioDataToMutator
          (UAudioGameplayVolumeMutator *this,TSharedPtr<FProxyVolumeMutator,1> *param_1)

{
  return;
}

// CopyAudioDataToMutatorBase @ 14d9a3dc0

void __thiscall
UAudioGameplayVolumeMutator::CopyAudioDataToMutatorBase
          (UAudioGameplayVolumeMutator *this,TSharedPtr<FProxyVolumeMutator,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1->Object == (FProxyVolumeMutator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutator.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeMutator.cpp"
                       ,0xc6,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar3 = this->_padding_;
  if (param_1->Object == (FProxyVolumeMutator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->Object->PayloadType = (EComponentPayload)lVar3;
  iVar1 = this->Priority;
  if (param_1->Object == (FProxyVolumeMutator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->Object->Priority = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00014d9a3e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x520))(this,param_1);
  return;
}

// CreateMutator @ 14d9a4030

TSharedPtr<FProxyVolumeMutator,1> * __thiscall
UAudioGameplayVolumeMutator::CreateMutator
          (UAudioGameplayVolumeMutator *this,
          TSharedPtr<FProxyVolumeMutator,1> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FProxyVolumeMutator,1> *pTVar4;
  
  (**(code **)(this->_padding_ + 0x518))();
  if (__return_storage_ptr__->Object != (FProxyVolumeMutator *)0x0) {
    __return_storage_ptr__->Object->PayloadType = (EComponentPayload)this->_padding_;
    iVar1 = this->Priority;
    if (__return_storage_ptr__->Object == (FProxyVolumeMutator *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FProxyVolumeMutator,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object->Priority = iVar1;
    (**(code **)(this->_padding_ + 0x520))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// Enable @ 14d9a4db0

void __thiscall UAudioGameplayVolumeMutator::Enable(UAudioGameplayVolumeMutator *this)

{
  UAudioGameplayComponent::Enable((UAudioGameplayComponent *)this);
  NotifyDataChanged(this);
  return;
}

// FactoryMutator @ 14d9a54b0

TSharedPtr<FProxyVolumeMutator,1> * __thiscall
UAudioGameplayVolumeMutator::FactoryMutator
          (UAudioGameplayVolumeMutator *this,
          TSharedPtr<FProxyVolumeMutator,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FProxyVolumeMutator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d9a6810

UClass * __cdecl UAudioGameplayVolumeMutator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeMutator",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeMutator,0xd0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeMutator>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeMutator>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton;
}

// NotifyDataChanged @ 14d9a7b80

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

void __thiscall UAudioGameplayVolumeMutator::NotifyDataChanged(UAudioGameplayVolumeMutator *this)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  UClass *local_f0;
  undefined8 local_e8 [24];
  undefined8 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((this->_padding_ & 0x100000) == 0) {
    return;
  }
  this_00 = (AActor *)this->_padding_;
  pUVar6 = (UClass *)0x0;
  pUVar8 = (UClass *)0x0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  local_1c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d9a7c96;
  pUVar4 = UAudioGameplayVolumeComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14d9a7bfc;
  }
  else {
    pUVar8 = pUVar6;
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14d9a7bfc:
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar8 = pUVar6;
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
          pUVar8 = pUVar4;
        }
      }
    }
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_f0 = pUVar4;
  if (pUVar8 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UAudioGameplayVolumeComponent,1,0,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UAudioGameplayVolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UAudioGameplayVolumeComponent,0,0,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UAudioGameplayVolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
LAB_14d9a7c96:
  iVar2 = local_20;
  puVar7 = local_e8;
  if (local_28 != (undefined8 *)0x0) {
    puVar7 = local_28;
  }
  puVar1 = puVar7 + local_20;
  while( true ) {
    if (local_20 != iVar2) {
      `TCheckedPointerIterator<UAudioGameplayVolumeComponent_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_f8);
    }
    if (puVar7 == puVar1) break;
    if ((UAudioGameplayVolumeComponent *)*puVar7 != (UAudioGameplayVolumeComponent *)0x0) {
      UAudioGameplayVolumeComponent::OnComponentDataChanged
                ((UAudioGameplayVolumeComponent *)*puVar7);
    }
    puVar7 = puVar7 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// SetPriority @ 14d9a9900

void __thiscall
UAudioGameplayVolumeMutator::SetPriority(UAudioGameplayVolumeMutator *this,int param_1)

{
  if (this->Priority != param_1) {
    this->Priority = param_1;
    NotifyDataChanged(this);
    return;
  }
  return;
}

// StaticRegisterNativesUAudioGameplayVolumeMutator @ 14d9a9b00

void __cdecl UAudioGameplayVolumeMutator::StaticRegisterNativesUAudioGameplayVolumeMutator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetPriority @ 14d9ad5d0

void __cdecl
UAudioGameplayVolumeMutator::execSetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(param_1 + 5) != local_res8[0]) {
    *(int *)(param_1 + 5) = local_res8[0];
    NotifyDataChanged((UAudioGameplayVolumeMutator *)param_1);
  }
  return;
}

