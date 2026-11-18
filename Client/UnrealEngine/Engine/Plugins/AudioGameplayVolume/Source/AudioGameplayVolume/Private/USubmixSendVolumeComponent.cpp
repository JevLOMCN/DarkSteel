// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 10

// StaticClass @ 14d998cf0

UClass * __cdecl USubmixSendVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"SubmixSendVolumeComponent",
               &Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton,
               StaticRegisterNativesUSubmixSendVolumeComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<USubmixSendVolumeComponent>,
               InternalVTableHelperCtorCaller<USubmixSendVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton;
}

// USubmixSendVolumeComponent @ 14d99fcd0

USubmixSendVolumeComponent * __thiscall
USubmixSendVolumeComponent::USubmixSendVolumeComponent
          (USubmixSendVolumeComponent *this,FVTableHelper *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->_padding_ = 0;
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = 0;
  (this->SubmixSendSettings).ArrayMax = 0;
  return this;
}

// USubmixSendVolumeComponent @ 14d99fd30

USubmixSendVolumeComponent * __thiscall
USubmixSendVolumeComponent::USubmixSendVolumeComponent
          (USubmixSendVolumeComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  *(undefined1 *)&this->_padding_ = 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&this->_padding_ = 0;
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = 0;
  (this->SubmixSendSettings).ArrayMax = 0;
  return this;
}

// ~USubmixSendVolumeComponent @ 14d9a05c0

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
USubmixSendVolumeComponent::~USubmixSendVolumeComponent(USubmixSendVolumeComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar1 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CopyAudioDataToMutator @ 14d9a3d40

void __thiscall
USubmixSendVolumeComponent::CopyAudioDataToMutator
          (USubmixSendVolumeComponent *this,TSharedPtr<FProxyVolumeMutator,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FProxyVolumeMutator *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FProxyVolumeMutator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1),
             &this->SubmixSendSettings);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// FactoryMutator @ 14d9a59a0

TSharedPtr<FProxyVolumeMutator,1> * __thiscall
USubmixSendVolumeComponent::FactoryMutator
          (USubmixSendVolumeComponent *this,
          TSharedPtr<FProxyVolumeMutator,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FProxyVolumeMutator,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FProxyVolumeMutator *pFVar9;
  FName local_res10;
  FName local_res18;
  
  pTVar6 = ::operator_new(0x50);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FProxyVolumeMutator *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFProxyMutator_SubmixSend___00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
    *(undefined8 *)((longlong)&pTVar6[3]._padding_ + 4) = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0xffffffff;
    *(undefined4 *)&pTVar6[3]._padding_ = 0xffffffff;
    ::FName::FName(&local_res10,L"MutatorBase");
    *(FName *)((longlong)&pTVar6[3]._padding_ + 4) = local_res10;
    pTVar6[1]._padding_ = (longlong)&___7FProxyMutator_SubmixSend__6B_;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    ::FName::FName(&local_res18,L"SubmixSend");
    pFVar9 = (FProxyVolumeMutator *)(pTVar6 + 1);
    *(FName *)((longlong)&pTVar6[3]._padding_ + 4) = local_res18;
    pTVar8 = pTVar6;
    if (pFVar9 == (FProxyVolumeMutator *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FProxyVolumeMutator,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d9a5af1;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d9a5af1:
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d9a6c80

UClass * __cdecl USubmixSendVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"SubmixSendVolumeComponent",
               &Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton,
               StaticRegisterNativesUSubmixSendVolumeComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<USubmixSendVolumeComponent>,
               InternalVTableHelperCtorCaller<USubmixSendVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton;
}

// SetSubmixSendSettings @ 14d9a9a00

void __thiscall
USubmixSendVolumeComponent::SetSubmixSendSettings
          (USubmixSendVolumeComponent *this,
          TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
            (&this->SubmixSendSettings,param_1);
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)this);
  return;
}

// StaticRegisterNativesUSubmixSendVolumeComponent @ 14d9a9c20

void __cdecl USubmixSendVolumeComponent::StaticRegisterNativesUSubmixSendVolumeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USubmixSendVolumeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSubmixSendSettings @ 14d9ad800

void __cdecl
USubmixSendVolumeComponent::execSetSubmixSendSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
             &param_1[5].field_0x8,pTVar2);
  UAudioGameplayVolumeMutator::NotifyDataChanged((UAudioGameplayVolumeMutator *)param_1);
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAudioVolumeSubmixSendSettings *)local_18.AllocatorInstance.Data !=
      (FAudioVolumeSubmixSendSettings *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

