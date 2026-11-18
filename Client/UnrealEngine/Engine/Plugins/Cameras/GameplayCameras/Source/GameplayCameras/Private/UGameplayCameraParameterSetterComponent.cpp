// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 18

// StaticClass @ 14d5e3740

UClass * __cdecl UGameplayCameraParameterSetterComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraParameterSetterComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraParameterSetterComponent",
               &Z_Registration_Info_UClass_UGameplayCameraParameterSetterComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraParameterSetterComponent,0x210,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraParameterSetterComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraParameterSetterComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraParameterSetterComponent.InnerSingleton;
}

// UGameplayCameraParameterSetterComponent @ 14d5fe4f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayCameraParameterSetterComponent * __thiscall
UGameplayCameraParameterSetterComponent::UGameplayCameraParameterSetterComponent
          (UGameplayCameraParameterSetterComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FCameraRigAssetReference::FCameraRigAssetReference(&this->CameraRigReference);
  this->BlendInTime = 1.0;
  (this->SetterHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetterHandles).ArrayNum = 0;
  (this->SetterHandles).ArrayMax = 0;
  this->BlendOutTime = 1.0;
  this->BlendType = Linear;
  return this;
}

// UGameplayCameraParameterSetterComponent @ 14d5fe570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayCameraParameterSetterComponent * __thiscall
UGameplayCameraParameterSetterComponent::UGameplayCameraParameterSetterComponent
          (UGameplayCameraParameterSetterComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FCameraRigAssetReference::FCameraRigAssetReference(&this->CameraRigReference);
  this->BlendInTime = 1.0;
  (this->SetterHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetterHandles).ArrayNum = 0;
  (this->SetterHandles).ArrayMax = 0;
  this->BlendOutTime = 1.0;
  this->BlendType = Linear;
  return this;
}

// ~UGameplayCameraParameterSetterComponent @ 14d600aa0

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
UGameplayCameraParameterSetterComponent::~UGameplayCameraParameterSetterComponent
          (UGameplayCameraParameterSetterComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->SetterHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCameraRigParameterOverrides::~FCameraRigParameterOverrides
            (&(this->CameraRigReference).ParameterOverrides_DEPRECATED);
  pFVar1 = (this->CameraRigReference).ParameterOverrideGuids_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CameraRigReference)._padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pvVar2 = (void *)(this->CameraRigReference)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->CameraRigReference)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraRigReference)._padding_);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginPlay @ 14d60cc90

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
UGameplayCameraParameterSetterComponent::BeginPlay(UGameplayCameraParameterSetterComponent *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    return;
  }
  pcVar4 = strstr("&UGameplayCameraParameterSetterComponent::OnActorBeginOverlap","::");
  pcVar6 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14d60cd1a:
    pcVar5 = &DAT_00000002;
LAB_14d60cd1d:
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
    if (pcVar5 == (char *)0x0) goto LAB_14d60cd1a;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14d60cd1d;
  }
  ::FName::FName(&local_res8,pcVar5);
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = OnActorBeginOverlap;
  TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<UGameplayCameraParameterSetterComponent>
            ((TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
              *)(lVar1 + 0x20b),this,(pmf_1d02012f *)&local_48,local_res8);
  pcVar4 = strstr("&UGameplayCameraParameterSetterComponent::OnActorEndOverlap","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_14d60ce18;
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
LAB_14d60ce18:
  ::FName::FName(&local_res10,pcVar6);
  local_48 = OnActorEndOverlap;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = OnActorEndOverlap;
  uStack_30 = uStack_40;
  TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<UGameplayCameraParameterSetterComponent>
            ((TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
              *)(lVar1 + 0x20c),this,(pmf_1d02012f *)&local_38,local_res10);
  return;
}

// EndPlay @ 14d615430

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
UGameplayCameraParameterSetterComponent::EndPlay
          (UGameplayCameraParameterSetterComponent *this,Type param_1)

{
  UObjectBase *this_00;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  
  this_00 = (UObjectBase *)this->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    if (*(char *)((longlong)&this_00[0xd]._padding_ + 3) != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnActorBeginOverlap");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar3 = UObjectBase::IsValidLowLevelFast(this_00,false);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = FSparseDelegateStorage::RemoveAll((UObject *)this_00,FVar2,(UObject *)this);
      *(bool *)((longlong)&this_00[0xd]._padding_ + 3) = bVar3;
    }
    if (*(char *)((longlong)&this_00[0xd]._padding_ + 4) != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnActorEndOverlap");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar3 = UObjectBase::IsValidLowLevelFast(this_00,false);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = FSparseDelegateStorage::RemoveAll((UObject *)this_00,FVar2,(UObject *)this);
      *(bool *)((longlong)&this_00[0xd]._padding_ + 4) = bVar3;
    }
  }
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetParameterSetterService @ 14d61af60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> * __thiscall
UGameplayCameraParameterSetterComponent::GetParameterSetterService
          (UGameplayCameraParameterSetterComponent *this,
          TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> *__return_storage_ptr__)

{
  FCameraSystemEvaluator *this_00;
  TReferenceControllerBase<1> *pTVar1;
  APlayerController *pAVar2;
  IGameplayCameraSystemHost *pIVar3;
  FStaticBasicLogRecord *pFVar4;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  pAVar2 = UGameplayStatics::GetPlayerController((UObject *)this,0);
  if (pAVar2 == (APlayerController *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) goto LAB_14d61af91;
    pFVar4 = &::LOG_Static;
  }
  else {
    pIVar3 = IGameplayCameraSystemHost::FindActiveHost(pAVar2);
    if (pIVar3 != (IGameplayCameraSystemHost *)0x0) {
      this_00 = (pIVar3->CameraSystemEvaluator).Object;
      pTVar1 = (pIVar3->CameraSystemEvaluator).SharedReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 == (FCameraSystemEvaluator *)0x0) {
        if (1 < (byte)LogCameraSystem._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        }
        __return_storage_ptr__->Object = (FCameraParameterSetterService *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
                  (this_00,&local_18,
                   (FCameraObjectTypeID *)&UE::Cameras::FCameraParameterSetterService::PrivateTypeID
                  );
        if ((FCameraParameterSetterService *)local_18.Object == (FCameraParameterSetterService *)0x0
           ) {
          __return_storage_ptr__->Object = (FCameraParameterSetterService *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        else {
          __return_storage_ptr__->Object = (FCameraParameterSetterService *)local_18.Object;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_18.SharedReferenceCount.ReferenceController;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
    if ((byte)LogCameraSystem._0_1_ < 2) goto LAB_14d61af91;
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogCameraSystem);
LAB_14d61af91:
  __return_storage_ptr__->Object = (FCameraParameterSetterService *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d61c660

UClass * __cdecl UGameplayCameraParameterSetterComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraParameterSetterComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraParameterSetterComponent",
               &Z_Registration_Info_UClass_UGameplayCameraParameterSetterComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraParameterSetterComponent,0x210,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraParameterSetterComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraParameterSetterComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraParameterSetterComponent.InnerSingleton;
}

// InitializeParameterSetter @ 14d6208b0

void __thiscall
UGameplayCameraParameterSetterComponent::InitializeParameterSetter
          (UGameplayCameraParameterSetterComponent *this,FCameraVariableSetter *param_1)

{
  param_1->BlendInTime = this->BlendInTime;
  param_1->BlendOutTime = this->BlendOutTime;
  param_1->BlendType = this->BlendType;
  return;
}

// OnActorBeginOverlap @ 14d622bd0

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

void __thiscall
UGameplayCameraParameterSetterComponent::OnActorBeginOverlap
          (UGameplayCameraParameterSetterComponent *this,AActor *param_1,AActor *param_2)

{
  int *piVar1;
  TArray<FCameraVariableSetterHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  UCameraRigAsset *pUVar4;
  longlong lVar5;
  FProperty *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FPropertyBagPropertyDesc *pFVar11;
  FCameraVariableSetterHandle FVar12;
  ulong64 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_428 [32];
  undefined8 *puStack_408;
  FScriptContainerElement *pFStack_400;
  longlong lStack_3f8;
  longlong lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3d8;
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> TStack_3d0;
  undefined **ppuStack_3c0;
  ECameraVariableSetterBlendType EStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 uStack_3a0;
  undefined **ppuStack_398;
  ECameraVariableSetterBlendType EStack_390;
  float fStack_38c;
  float fStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined **ppuStack_370;
  ECameraVariableSetterBlendType EStack_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined **ppuStack_348;
  ECameraVariableSetterBlendType EStack_340;
  float fStack_33c;
  float fStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  ulong64 uStack_328;
  undefined **ppuStack_320;
  ECameraVariableSetterBlendType EStack_318;
  float fStack_314;
  float fStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  ulong64 uStack_300;
  undefined **ppuStack_2f8;
  ECameraVariableSetterBlendType EStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  ulong64 uStack_2d8;
  undefined4 uStack_2d0;
  undefined **ppuStack_2c8;
  ECameraVariableSetterBlendType EStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulong64 uStack_2a8;
  undefined4 uStack_2a0;
  undefined **ppuStack_298;
  ECameraVariableSetterBlendType EStack_290;
  float fStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  ulong64 uStack_278;
  ulong64 uStack_270;
  undefined **ppuStack_268;
  ECameraVariableSetterBlendType EStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  ulong64 uStack_248;
  ulong64 uStack_240;
  undefined **ppuStack_238;
  ECameraVariableSetterBlendType EStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong64 uStack_218;
  ulong64 uStack_210;
  ulong64 uStack_208;
  undefined **ppuStack_200;
  ECameraVariableSetterBlendType EStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  ulong64 uStack_1e0;
  ulong64 uStack_1d8;
  ulong64 uStack_1d0;
  undefined **ppuStack_1c8;
  ECameraVariableSetterBlendType EStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  ulong64 uStack_1a8;
  ulong64 uStack_1a0;
  ulong64 uStack_198;
  ulong64 uStack_190;
  undefined **ppuStack_188;
  ECameraVariableSetterBlendType EStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong64 uStack_168;
  ulong64 uStack_160;
  ulong64 uStack_158;
  ulong64 uStack_150;
  ulong64 uStack_148;
  ulong64 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  FGuid FStack_c8;
  undefined **appuStack_b8 [2];
  __m128 _Stack_a8;
  __m128 _Stack_98;
  ulong64 uStack_88;
  ulong64 uStack_80;
  ulong64 uStack_78;
  ulong64 uStack_70;
  ulong64 uStack_68;
  ulong64 uStack_60;
  ulong64 uStack_58;
  ulong64 uStack_50;
  ulong64 uStack_48;
  ulong64 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_428;
  if ((this->CameraRigReference).CameraRig.field0_0x0.DebugPtr != (UCameraRigAsset *)0x0) {
    GetParameterSetterService(this,&TStack_3d0);
    if (TStack_3d0.Object != (FCameraParameterSetterService *)0x0) {
      pUVar4 = (this->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
      iVar10 = (int)pUVar4->_padding_;
      lVar5 = (this->CameraRigReference)._padding_;
      lVar15 = pUVar4->_padding_;
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = lVar15 + (longlong)iVar10 * 0x48;
      for (; lVar15 != lVar3; lVar15 = lVar15 + 0x48) {
        if ((*(char *)(lVar15 + 0x18) == '\0') &&
           (bVar9 = FInstancedOverridablePropertyBag::IsPropertyOverriden
                              ((FInstancedOverridablePropertyBag *)
                               &(this->CameraRigReference)._padding_,(FGuid *)(lVar15 + 8)), bVar9))
        {
          FStack_c8._0_8_ = *(longlong *)(lVar15 + 8);
          FStack_c8._8_8_ = *(longlong *)(lVar15 + 0x10);
          pFVar11 = FInstancedPropertyBag::FindPropertyDescByID
                              ((FInstancedPropertyBag *)&(this->CameraRigReference)._padding_,
                               &FStack_c8);
          if ((pFVar11 != (FPropertyBagPropertyDesc *)0x0) &&
             (pFVar11->CachedProperty != (FProperty *)0x0)) {
            uStack_3d8 = 0xffffffff;
            pFVar6 = pFVar11->CachedProperty;
            iVar10 = pFVar6->ArrayDim;
            if (iVar10 < 1) {
              pFStack_400 = (FScriptContainerElement *)CONCAT44(pFStack_400._4_4_,iVar10);
              puStack_408 = (undefined8 *)((ulonglong)puStack_408 & 0xffffffff00000000);
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if ((lVar5 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar13 = (ulong64 *)(pFVar6->Offset_Internal + lVar5);
            switch(*(undefined4 *)(lVar15 + 0x20)) {
            case 0:
              uStack_3a4 = *(undefined4 *)(lVar15 + 0x1c);
              fStack_3b4 = this->BlendInTime;
              fStack_3b0 = this->BlendOutTime;
              ppuStack_3c0 = &___7__TCameraVariableSetter__N_Cameras_UE__6B_;
              uStack_3a0 = (undefined1)*puVar13;
              EStack_3b8 = this->BlendType;
              uStack_3ac = 0;
              uStack_3a8 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<bool>
                                 (TStack_3d0.Object,(TCameraVariableSetter<bool> *)auStack_138);
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_3c0 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 1:
              uStack_37c = *(undefined4 *)(lVar15 + 0x1c);
              fStack_38c = this->BlendInTime;
              fStack_388 = this->BlendOutTime;
              ppuStack_398 = &___7__TCameraVariableSetter_H_Cameras_UE__6B_;
              uStack_378 = (undefined4)*puVar13;
              EStack_390 = this->BlendType;
              uStack_384 = 0;
              uStack_380 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<int>
                                 (TStack_3d0.Object,(TCameraVariableSetter<int> *)(auStack_138 + 8))
              ;
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_398 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 2:
              uStack_354 = *(undefined4 *)(lVar15 + 0x1c);
              uStack_350 = (undefined4)*puVar13;
              fStack_364 = this->BlendInTime;
              ppuStack_370 = &___7__TCameraVariableSetter_M_Cameras_UE__6B_;
              EStack_368 = this->BlendType;
              fStack_360 = this->BlendOutTime;
              uStack_35c = 0;
              uStack_358 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<float>
                                 (TStack_3d0.Object,(TCameraVariableSetter<float> *)auStack_128);
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_370 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 3:
              uStack_32c = *(undefined4 *)(lVar15 + 0x1c);
              uStack_328 = *puVar13;
              fStack_33c = this->BlendInTime;
              ppuStack_348 = &___7__TCameraVariableSetter_N_Cameras_UE__6B_;
              EStack_340 = this->BlendType;
              fStack_338 = this->BlendOutTime;
              uStack_334 = 0;
              uStack_330 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<double>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<double> *)(auStack_128 + 8));
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_348 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 4:
              uStack_304 = *(undefined4 *)(lVar15 + 0x1c);
              fStack_314 = this->BlendInTime;
              fStack_310 = this->BlendOutTime;
              ppuStack_320 = &___7__TCameraVariableSetter_U__TVector2_M_Math_UE___Cameras_UE__6B_;
              uStack_300 = *puVar13;
              EStack_318 = this->BlendType;
              uStack_30c = 0;
              uStack_308 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector2<float>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector2<float>_> *)auStack_118);
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_320 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 5:
              uStack_27c = *(undefined4 *)(lVar15 + 0x1c);
              fStack_28c = this->BlendInTime;
              ppuStack_298 = &___7__TCameraVariableSetter_U__TVector2_N_Math_UE___Cameras_UE__6B_;
              EStack_290 = this->BlendType;
              uStack_284 = 0;
              uStack_280 = 1;
              uStack_278 = *puVar13;
              uStack_270 = puVar13[1];
              fStack_288 = this->BlendOutTime;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector2<double>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector2<double>_> *)
                                  (auStack_118 + 8));
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_298 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 6:
              uStack_2dc = *(undefined4 *)(lVar15 + 0x1c);
              uStack_2d8 = *puVar13;
              fStack_2e8 = this->BlendOutTime;
              ppuStack_2f8 = &___7__TCameraVariableSetter_U__TVector_M_Math_UE___Cameras_UE__6B_;
              uStack_2d0 = (undefined4)puVar13[1];
              EStack_2f0 = this->BlendType;
              fStack_2ec = this->BlendInTime;
              uStack_2e4 = 0;
              uStack_2e0 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector<float>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector<float>_> *)auStack_108);
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_2f8 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 7:
              uStack_21c = *(undefined4 *)(lVar15 + 0x1c);
              uStack_208 = puVar13[2];
              ppuStack_238 = &___7__TCameraVariableSetter_U__TVector_N_Math_UE___Cameras_UE__6B_;
              EStack_230 = this->BlendType;
              fStack_228 = this->BlendOutTime;
              uStack_224 = 0;
              uStack_220 = 1;
              uStack_218 = *puVar13;
              uStack_210 = puVar13[1];
              fStack_22c = this->BlendInTime;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector<double>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector<double>_> *)
                                  (auStack_108 + 8));
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_238 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 8:
              uStack_24c = *(undefined4 *)(lVar15 + 0x1c);
              uStack_248 = *puVar13;
              uStack_240 = puVar13[1];
              fStack_25c = this->BlendInTime;
              ppuStack_268 = &___7__TCameraVariableSetter_U__TVector4_M_Math_UE___Cameras_UE__6B_;
              EStack_260 = this->BlendType;
              fStack_258 = this->BlendOutTime;
              uStack_254 = 0;
              uStack_250 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector4<float>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector4<float>_> *)auStack_f8);
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_268 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 9:
              uStack_1ac = *(undefined4 *)(lVar15 + 0x1c);
              uStack_1a8 = *puVar13;
              uStack_1a0 = puVar13[1];
              uStack_198 = puVar13[2];
              uStack_190 = puVar13[3];
              ppuStack_1c8 = &___7__TCameraVariableSetter_U__TVector4_N_Math_UE___Cameras_UE__6B_;
              EStack_1c0 = this->BlendType;
              fStack_1bc = this->BlendInTime;
              fStack_1b8 = this->BlendOutTime;
              uStack_1b4 = 0;
              uStack_1b0 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector4<double>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector4<double>_> *)
                                  (auStack_f8 + 8));
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_1c8 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 10:
              uStack_2ac = *(undefined4 *)(lVar15 + 0x1c);
              uStack_2a8 = *puVar13;
              fStack_2b8 = this->BlendOutTime;
              ppuStack_2c8 = &___7__TCameraVariableSetter_U__TRotator_M_Math_UE___Cameras_UE__6B_;
              uStack_2a0 = (undefined4)puVar13[1];
              EStack_2c0 = this->BlendType;
              fStack_2bc = this->BlendInTime;
              uStack_2b4 = 0;
              uStack_2b0 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TRotator<float>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TRotator<float>_> *)auStack_e8);
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_2c8 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 0xb:
              uStack_1e4 = *(undefined4 *)(lVar15 + 0x1c);
              uStack_1d0 = puVar13[2];
              ppuStack_200 = &___7__TCameraVariableSetter_U__TRotator_N_Math_UE___Cameras_UE__6B_;
              EStack_1f8 = this->BlendType;
              fStack_1f0 = this->BlendOutTime;
              uStack_1ec = 0;
              uStack_1e8 = 1;
              uStack_1e0 = *puVar13;
              uStack_1d8 = puVar13[1];
              fStack_1f4 = this->BlendInTime;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TRotator<double>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TRotator<double>_> *)
                                  (auStack_e8 + 8));
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_200 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 0xc:
              uStack_168 = *puVar13;
              uStack_160 = puVar13[1];
              uStack_16c = *(undefined4 *)(lVar15 + 0x1c);
              uStack_158 = puVar13[2];
              uStack_150 = puVar13[3];
              uStack_148 = puVar13[4];
              uStack_140 = puVar13[5];
              fStack_178 = this->BlendOutTime;
              ppuStack_188 = &___7__TCameraVariableSetter_U__TTransform_M_Math_UE___Cameras_UE__6B_;
              EStack_180 = this->BlendType;
              fStack_17c = this->BlendInTime;
              uStack_174 = 0;
              uStack_170 = 1;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TTransform<float>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TTransform<float>_> *)auStack_d8)
              ;
              uStack_3d8 = *(undefined8 *)FVar12;
              ppuStack_188 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 0xd:
              _Stack_98.m128_u64[0] = *puVar13;
              _Stack_98.m128_u64[1] = puVar13[1];
              uStack_88 = puVar13[2];
              uStack_80 = puVar13[3];
              _Stack_a8.m128_f32[3] = *(float *)(lVar15 + 0x1c);
              uStack_78 = puVar13[4];
              uStack_70 = puVar13[5];
              uStack_68 = puVar13[6];
              uStack_60 = puVar13[7];
              uStack_58 = puVar13[8];
              uStack_50 = puVar13[9];
              uStack_48 = puVar13[10];
              uStack_40 = puVar13[0xb];
              appuStack_b8[1]._4_4_ = this->BlendInTime;
              _Stack_a8.m128_f32[0] = this->BlendOutTime;
              appuStack_b8[0] =
                   &___7__TCameraVariableSetter_U__TTransform_N_Math_UE___Cameras_UE__6B_;
              appuStack_b8[1]._0_1_ = this->BlendType;
              _Stack_a8.m128_f32[1] = 0.0;
              _Stack_a8.m128_f32[2] = 1.4013e-45;
              if ((TStack_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TTransform<double>_>
                                 (TStack_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TTransform<double>_> *)
                                  (auStack_d8 + 8));
              uStack_3d8 = *(undefined8 *)FVar12;
              appuStack_b8[0] = &___7FCameraVariableSetter_Cameras_UE__6B_;
            }
            if ((int)uStack_3d8 != -1) {
              pTVar2 = &this->SetterHandles;
              pFVar7 = (pTVar2->AllocatorInstance).Data;
              if ((pFVar7 <= (FScriptContainerElement *)&uStack_3d8) &&
                 (lVar14 = (longlong)(this->SetterHandles).ArrayMax,
                 (FScriptContainerElement *)&uStack_3d8 < pFVar7 + lVar14 * 8)) {
                lStack_3f0 = (longlong)(this->SetterHandles).ArrayNum;
                uStack_3e8 = 8;
                puStack_408 = &uStack_3d8;
                pFStack_400 = pFVar7;
                lStack_3f8 = lVar14;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              iVar10 = (this->SetterHandles).ArrayNum;
              piVar1 = &(this->SetterHandles).ArrayMax;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->SetterHandles).ArrayNum = iVar10 + 1;
              *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = uStack_3d8;
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_3d0.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnActorEndOverlap @ 14d622be0

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
UGameplayCameraParameterSetterComponent::OnActorEndOverlap
          (UGameplayCameraParameterSetterComponent *this,AActor *param_1,AActor *param_2)

{
  StopParameterSetters(this,false);
  return;
}

// StartParameterSetters @ 14d636c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraParameterSetterComponent::StartParameterSetters
          (UGameplayCameraParameterSetterComponent *this)

{
  int *piVar1;
  TArray<FCameraVariableSetterHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  UCameraRigAsset *pUVar4;
  longlong lVar5;
  FProperty *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FPropertyBagPropertyDesc *pFVar11;
  FCameraVariableSetterHandle FVar12;
  ulong64 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  FScriptContainerElement *local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> local_3d0;
  undefined **local_3c0;
  ECameraVariableSetterBlendType local_3b8;
  float local_3b4;
  float local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined1 local_3a0;
  undefined **local_398;
  ECameraVariableSetterBlendType local_390;
  float local_38c;
  float local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined **local_370;
  ECameraVariableSetterBlendType local_368;
  float local_364;
  float local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined **local_348;
  ECameraVariableSetterBlendType local_340;
  float local_33c;
  float local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  ulong64 local_328;
  undefined **local_320;
  ECameraVariableSetterBlendType local_318;
  float local_314;
  float local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  ulong64 local_300;
  undefined **local_2f8;
  ECameraVariableSetterBlendType local_2f0;
  float local_2ec;
  float local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  ulong64 local_2d8;
  undefined4 local_2d0;
  undefined **local_2c8;
  ECameraVariableSetterBlendType local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  ulong64 local_2a8;
  undefined4 local_2a0;
  undefined **local_298;
  ECameraVariableSetterBlendType local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  ulong64 local_278;
  ulong64 uStack_270;
  undefined **local_268;
  ECameraVariableSetterBlendType local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  ulong64 local_248;
  ulong64 uStack_240;
  undefined **local_238;
  ECameraVariableSetterBlendType local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  ulong64 local_218;
  ulong64 uStack_210;
  ulong64 local_208;
  undefined **local_200;
  ECameraVariableSetterBlendType local_1f8;
  float local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  ulong64 local_1e0;
  ulong64 uStack_1d8;
  ulong64 local_1d0;
  undefined **local_1c8;
  ECameraVariableSetterBlendType local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulong64 local_1a8;
  ulong64 uStack_1a0;
  ulong64 local_198;
  ulong64 uStack_190;
  undefined **local_188;
  ECameraVariableSetterBlendType local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  ulong64 local_168;
  ulong64 uStack_160;
  ulong64 local_158;
  ulong64 uStack_150;
  ulong64 local_148;
  ulong64 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  FGuid local_c8;
  undefined **local_b8 [2];
  __m128 local_a8;
  __m128 local_98;
  ulong64 local_88;
  ulong64 uStack_80;
  ulong64 local_78;
  ulong64 uStack_70;
  ulong64 local_68;
  ulong64 uStack_60;
  ulong64 local_58;
  ulong64 uStack_50;
  ulong64 local_48;
  ulong64 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_428;
  if ((this->CameraRigReference).CameraRig.field0_0x0.DebugPtr != (UCameraRigAsset *)0x0) {
    GetParameterSetterService(this,&local_3d0);
    if (local_3d0.Object != (FCameraParameterSetterService *)0x0) {
      pUVar4 = (this->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
      iVar10 = (int)pUVar4->_padding_;
      lVar5 = (this->CameraRigReference)._padding_;
      lVar15 = pUVar4->_padding_;
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = lVar15 + (longlong)iVar10 * 0x48;
      for (; lVar15 != lVar3; lVar15 = lVar15 + 0x48) {
        if ((*(char *)(lVar15 + 0x18) == '\0') &&
           (bVar9 = FInstancedOverridablePropertyBag::IsPropertyOverriden
                              ((FInstancedOverridablePropertyBag *)
                               &(this->CameraRigReference)._padding_,(FGuid *)(lVar15 + 8)), bVar9))
        {
          local_c8._0_8_ = *(longlong *)(lVar15 + 8);
          local_c8._8_8_ = *(longlong *)(lVar15 + 0x10);
          pFVar11 = FInstancedPropertyBag::FindPropertyDescByID
                              ((FInstancedPropertyBag *)&(this->CameraRigReference)._padding_,
                               &local_c8);
          if ((pFVar11 != (FPropertyBagPropertyDesc *)0x0) &&
             (pFVar11->CachedProperty != (FProperty *)0x0)) {
            local_3d8 = 0xffffffff;
            pFVar6 = pFVar11->CachedProperty;
            iVar10 = pFVar6->ArrayDim;
            if (iVar10 < 1) {
              local_400 = (FScriptContainerElement *)CONCAT44(local_400._4_4_,iVar10);
              local_408 = (undefined8 *)((ulonglong)local_408 & 0xffffffff00000000);
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if ((lVar5 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar13 = (ulong64 *)(pFVar6->Offset_Internal + lVar5);
            switch(*(undefined4 *)(lVar15 + 0x20)) {
            case 0:
              local_3a4 = *(undefined4 *)(lVar15 + 0x1c);
              local_3b4 = this->BlendInTime;
              local_3b0 = this->BlendOutTime;
              local_3c0 = &___7__TCameraVariableSetter__N_Cameras_UE__6B_;
              local_3a0 = (undefined1)*puVar13;
              local_3b8 = this->BlendType;
              local_3ac = 0;
              local_3a8 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<bool>
                                 (local_3d0.Object,(TCameraVariableSetter<bool> *)local_138);
              local_3d8 = *(undefined8 *)FVar12;
              local_3c0 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 1:
              local_37c = *(undefined4 *)(lVar15 + 0x1c);
              local_38c = this->BlendInTime;
              local_388 = this->BlendOutTime;
              local_398 = &___7__TCameraVariableSetter_H_Cameras_UE__6B_;
              local_378 = (undefined4)*puVar13;
              local_390 = this->BlendType;
              local_384 = 0;
              local_380 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<int>
                                 (local_3d0.Object,(TCameraVariableSetter<int> *)(local_138 + 8));
              local_3d8 = *(undefined8 *)FVar12;
              local_398 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 2:
              local_354 = *(undefined4 *)(lVar15 + 0x1c);
              local_350 = (undefined4)*puVar13;
              local_364 = this->BlendInTime;
              local_370 = &___7__TCameraVariableSetter_M_Cameras_UE__6B_;
              local_368 = this->BlendType;
              local_360 = this->BlendOutTime;
              local_35c = 0;
              local_358 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<float>
                                 (local_3d0.Object,(TCameraVariableSetter<float> *)local_128);
              local_3d8 = *(undefined8 *)FVar12;
              local_370 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 3:
              local_32c = *(undefined4 *)(lVar15 + 0x1c);
              local_328 = *puVar13;
              local_33c = this->BlendInTime;
              local_348 = &___7__TCameraVariableSetter_N_Cameras_UE__6B_;
              local_340 = this->BlendType;
              local_338 = this->BlendOutTime;
              local_334 = 0;
              local_330 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<double>
                                 (local_3d0.Object,(TCameraVariableSetter<double> *)(local_128 + 8))
              ;
              local_3d8 = *(undefined8 *)FVar12;
              local_348 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 4:
              local_304 = *(undefined4 *)(lVar15 + 0x1c);
              local_314 = this->BlendInTime;
              local_310 = this->BlendOutTime;
              local_320 = &___7__TCameraVariableSetter_U__TVector2_M_Math_UE___Cameras_UE__6B_;
              local_300 = *puVar13;
              local_318 = this->BlendType;
              local_30c = 0;
              local_308 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector2<float>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector2<float>_> *)local_118);
              local_3d8 = *(undefined8 *)FVar12;
              local_320 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 5:
              local_27c = *(undefined4 *)(lVar15 + 0x1c);
              local_28c = this->BlendInTime;
              local_298 = &___7__TCameraVariableSetter_U__TVector2_N_Math_UE___Cameras_UE__6B_;
              local_290 = this->BlendType;
              local_284 = 0;
              local_280 = 1;
              local_278 = *puVar13;
              uStack_270 = puVar13[1];
              local_288 = this->BlendOutTime;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector2<double>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector2<double>_> *)
                                  (local_118 + 8));
              local_3d8 = *(undefined8 *)FVar12;
              local_298 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 6:
              local_2dc = *(undefined4 *)(lVar15 + 0x1c);
              local_2d8 = *puVar13;
              local_2e8 = this->BlendOutTime;
              local_2f8 = &___7__TCameraVariableSetter_U__TVector_M_Math_UE___Cameras_UE__6B_;
              local_2d0 = (undefined4)puVar13[1];
              local_2f0 = this->BlendType;
              local_2ec = this->BlendInTime;
              local_2e4 = 0;
              local_2e0 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector<float>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector<float>_> *)local_108);
              local_3d8 = *(undefined8 *)FVar12;
              local_2f8 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 7:
              local_21c = *(undefined4 *)(lVar15 + 0x1c);
              local_208 = puVar13[2];
              local_238 = &___7__TCameraVariableSetter_U__TVector_N_Math_UE___Cameras_UE__6B_;
              local_230 = this->BlendType;
              local_228 = this->BlendOutTime;
              local_224 = 0;
              local_220 = 1;
              local_218 = *puVar13;
              uStack_210 = puVar13[1];
              local_22c = this->BlendInTime;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector<double>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector<double>_> *)
                                  (local_108 + 8));
              local_3d8 = *(undefined8 *)FVar12;
              local_238 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 8:
              local_24c = *(undefined4 *)(lVar15 + 0x1c);
              local_248 = *puVar13;
              uStack_240 = puVar13[1];
              local_25c = this->BlendInTime;
              local_268 = &___7__TCameraVariableSetter_U__TVector4_M_Math_UE___Cameras_UE__6B_;
              local_260 = this->BlendType;
              local_258 = this->BlendOutTime;
              local_254 = 0;
              local_250 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector4<float>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector4<float>_> *)local_f8);
              local_3d8 = *(undefined8 *)FVar12;
              local_268 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 9:
              local_1ac = *(undefined4 *)(lVar15 + 0x1c);
              local_1a8 = *puVar13;
              uStack_1a0 = puVar13[1];
              local_198 = puVar13[2];
              uStack_190 = puVar13[3];
              local_1c8 = &___7__TCameraVariableSetter_U__TVector4_N_Math_UE___Cameras_UE__6B_;
              local_1c0 = this->BlendType;
              local_1bc = this->BlendInTime;
              local_1b8 = this->BlendOutTime;
              local_1b4 = 0;
              local_1b0 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TVector4<double>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TVector4<double>_> *)
                                  (local_f8 + 8));
              local_3d8 = *(undefined8 *)FVar12;
              local_1c8 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 10:
              local_2ac = *(undefined4 *)(lVar15 + 0x1c);
              local_2a8 = *puVar13;
              local_2b8 = this->BlendOutTime;
              local_2c8 = &___7__TCameraVariableSetter_U__TRotator_M_Math_UE___Cameras_UE__6B_;
              local_2a0 = (undefined4)puVar13[1];
              local_2c0 = this->BlendType;
              local_2bc = this->BlendInTime;
              local_2b4 = 0;
              local_2b0 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TRotator<float>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TRotator<float>_> *)local_e8);
              local_3d8 = *(undefined8 *)FVar12;
              local_2c8 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 0xb:
              local_1e4 = *(undefined4 *)(lVar15 + 0x1c);
              local_1d0 = puVar13[2];
              local_200 = &___7__TCameraVariableSetter_U__TRotator_N_Math_UE___Cameras_UE__6B_;
              local_1f8 = this->BlendType;
              local_1f0 = this->BlendOutTime;
              local_1ec = 0;
              local_1e8 = 1;
              local_1e0 = *puVar13;
              uStack_1d8 = puVar13[1];
              local_1f4 = this->BlendInTime;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TRotator<double>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TRotator<double>_> *)
                                  (local_e8 + 8));
              local_3d8 = *(undefined8 *)FVar12;
              local_200 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 0xc:
              local_168 = *puVar13;
              uStack_160 = puVar13[1];
              local_16c = *(undefined4 *)(lVar15 + 0x1c);
              local_158 = puVar13[2];
              uStack_150 = puVar13[3];
              local_148 = puVar13[4];
              uStack_140 = puVar13[5];
              local_178 = this->BlendOutTime;
              local_188 = &___7__TCameraVariableSetter_U__TTransform_M_Math_UE___Cameras_UE__6B_;
              local_180 = this->BlendType;
              local_17c = this->BlendInTime;
              local_174 = 0;
              local_170 = 1;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TTransform<float>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TTransform<float>_> *)local_d8);
              local_3d8 = *(undefined8 *)FVar12;
              local_188 = &___7FCameraVariableSetter_Cameras_UE__6B_;
              break;
            case 0xd:
              local_98.m128_u64[0] = *puVar13;
              local_98.m128_u64[1] = puVar13[1];
              local_88 = puVar13[2];
              uStack_80 = puVar13[3];
              local_a8.m128_f32[3] = *(float *)(lVar15 + 0x1c);
              local_78 = puVar13[4];
              uStack_70 = puVar13[5];
              local_68 = puVar13[6];
              uStack_60 = puVar13[7];
              local_58 = puVar13[8];
              uStack_50 = puVar13[9];
              local_48 = puVar13[10];
              uStack_40 = puVar13[0xb];
              local_b8[1]._4_4_ = this->BlendInTime;
              local_a8.m128_f32[0] = this->BlendOutTime;
              local_b8[0] = &___7__TCameraVariableSetter_U__TTransform_N_Math_UE___Cameras_UE__6B_;
              local_b8[1]._0_1_ = this->BlendType;
              local_a8.m128_f32[1] = 0.0;
              local_a8.m128_f32[2] = 1.4013e-45;
              if ((local_3d0.Object == (FCameraParameterSetterService *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar12 = UE::Cameras::FCameraParameterSetterService::
                       AddCameraVariableSetter<UE::Math::TTransform<double>_>
                                 (local_3d0.Object,
                                  (TCameraVariableSetter<UE::Math::TTransform<double>_> *)
                                  (local_d8 + 8));
              local_3d8 = *(undefined8 *)FVar12;
              local_b8[0] = &___7FCameraVariableSetter_Cameras_UE__6B_;
            }
            if ((int)local_3d8 != -1) {
              pTVar2 = &this->SetterHandles;
              pFVar7 = (pTVar2->AllocatorInstance).Data;
              if ((pFVar7 <= (FScriptContainerElement *)&local_3d8) &&
                 (lVar14 = (longlong)(this->SetterHandles).ArrayMax,
                 (FScriptContainerElement *)&local_3d8 < pFVar7 + lVar14 * 8)) {
                local_3f0 = (longlong)(this->SetterHandles).ArrayNum;
                local_3e8 = 8;
                local_408 = &local_3d8;
                local_400 = pFVar7;
                local_3f8 = lVar14;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              iVar10 = (this->SetterHandles).ArrayNum;
              piVar1 = &(this->SetterHandles).ArrayMax;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->SetterHandles).ArrayNum = iVar10 + 1;
              *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_3d8;
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d0.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StaticRegisterNativesUGameplayCameraParameterSetterComponent @ 14d639250

void __cdecl
UGameplayCameraParameterSetterComponent::
StaticRegisterNativesUGameplayCameraParameterSetterComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGameplayCameraParameterSetterComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopParameterSetters @ 14d639870

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraParameterSetterComponent::StopParameterSetters
          (UGameplayCameraParameterSetterComponent *this,bool param_1)

{
  FCameraVariableSetterHandle *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FCameraVariableSetterHandle *pFVar5;
  undefined1 local_res18 [8];
  FCameraVariableSetterHandle local_res20;
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> local_38;
  
  GetParameterSetterService(this,&local_38);
  if (local_38.Object != (FCameraParameterSetterService *)0x0) {
    pFVar5 = (FCameraVariableSetterHandle *)(this->SetterHandles).AllocatorInstance.Data;
    iVar2 = (this->SetterHandles).ArrayNum;
    pFVar1 = pFVar5 + iVar2;
    while( true ) {
      if ((this->SetterHandles).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FCameraVariableSetterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar1) break;
      local_res20 = *pFVar5;
      if ((local_38.Object == (FCameraParameterSetterService *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Cameras::FCameraParameterSetterService::StopCameraVariableSetter
                (local_38.Object,&local_res20,param_1);
      pFVar5 = pFVar5 + 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// execOnActorBeginOverlap @ 14d640b60

void __cdecl
UGameplayCameraParameterSetterComponent::execOnActorBeginOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StartParameterSetters((UGameplayCameraParameterSetterComponent *)param_1);
  return;
}

// execOnActorEndOverlap @ 14d640c30

void __cdecl
UGameplayCameraParameterSetterComponent::execOnActorEndOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopParameterSetters((UGameplayCameraParameterSetterComponent *)param_1,false);
  return;
}

// execStartParameterSetters @ 14d641380

void __cdecl
UGameplayCameraParameterSetterComponent::execStartParameterSetters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StartParameterSetters((UGameplayCameraParameterSetterComponent *)param_1);
  return;
}

// execStopParameterSetters @ 14d641ce0

void __cdecl
UGameplayCameraParameterSetterComponent::execStopParameterSetters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  StopParameterSetters((UGameplayCameraParameterSetterComponent *)param_1,local_res10[0] != 0);
  return;
}

