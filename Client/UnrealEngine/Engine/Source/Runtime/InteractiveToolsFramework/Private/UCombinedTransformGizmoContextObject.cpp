// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14966d990

UClass * __cdecl UCombinedTransformGizmoContextObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoContextObject",
               &Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton,
               StaticRegisterNativesUCombinedTransformGizmoContextObject,0x60,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmoContextObject>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmoContextObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton;
}

// UCombinedTransformGizmoContextObject @ 149683690

UCombinedTransformGizmoContextObject * __thiscall
UCombinedTransformGizmoContextObject::UCombinedTransformGizmoContextObject
          (UCombinedTransformGizmoContextObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoContextObject__6B_;
  *(undefined8 *)&this->OnGizmoCreated = 0;
  *(undefined8 *)&(this->OnGizmoCreated).field_0x8 = 0;
  *(undefined8 *)&(this->OnGizmoCreated).field_0x10 = 0;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bDefaultGizmosRegistered = false;
  *(undefined8 *)&(this->OnGizmoCreated).field_0x18 = 2;
  return this;
}

// UCombinedTransformGizmoContextObject @ 1496836e0

UCombinedTransformGizmoContextObject * __thiscall
UCombinedTransformGizmoContextObject::UCombinedTransformGizmoContextObject
          (UCombinedTransformGizmoContextObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoContextObject__6B_;
  *(undefined8 *)&this->OnGizmoCreated = 0;
  *(undefined8 *)&(this->OnGizmoCreated).field_0x8 = 0;
  *(undefined8 *)&(this->OnGizmoCreated).field_0x10 = 0;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bDefaultGizmosRegistered = false;
  *(undefined8 *)&(this->OnGizmoCreated).field_0x18 = 2;
  return this;
}

// ~UCombinedTransformGizmoContextObject @ 1496895a0

void __thiscall
UCombinedTransformGizmoContextObject::~UCombinedTransformGizmoContextObject
          (UCombinedTransformGizmoContextObject *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoContextObject__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGizmoCreated).field_0x8,*(int *)&(this->OnGizmoCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnGizmoCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGizmoCreated);
  UObject::~UObject((UObject *)this);
  return;
}

// Create3AxisTransformGizmo @ 14969a840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UCombinedTransformGizmoContextObject::Create3AxisTransformGizmo
          (UCombinedTransformGizmoContextObject *this,UInteractiveGizmoManager *param_1,
          void *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCombinedTransformGizmo *pUVar4;
  UClass *pUVar5;
  
  if (this->bDefaultGizmosRegistered == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843277>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x8d,"bDefaultGizmosRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
    return (UCombinedTransformGizmo *)0x0;
  }
  pUVar4 = (UCombinedTransformGizmo *)
           (**(code **)(param_1->_padding_ + 0x2d0))
                     (param_1,&DefaultThreeAxisTransformBuilderIdentifier,param_3,param_2);
  if (pUVar4 != (UCombinedTransformGizmo *)0x0) {
    pUVar5 = Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      TMulticastDelegate<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>::
      Broadcast(&this->OnGizmoCreated,pUVar4);
      return pUVar4;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5995858810042843281>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                     ,0x91,"CastGizmo");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
    return pUVar4;
  }
  return (UCombinedTransformGizmo *)0x0;
}

// CreateCustomRepositionableTransformGizmo @ 14969b1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UCombinedTransformGizmoContextObject::CreateCustomRepositionableTransformGizmo
          (UCombinedTransformGizmoContextObject *this,UInteractiveGizmoManager *param_1,
          ETransformGizmoSubElements param_2,void *param_3,FString *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCombinedTransformGizmo *pUVar4;
  UClass *pUVar5;
  
  if (this->bDefaultGizmosRegistered == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843349>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xd5,"bDefaultGizmosRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    if (((this->GizmoActorBuilder).Object == (FCombinedTransformGizmoActorFactory *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
    ((this->GizmoActorBuilder).Object)->EnableElements = param_2;
    pUVar4 = (UCombinedTransformGizmo *)
             (**(code **)(param_1->_padding_ + 0x2d0))
                       (param_1,&CustomRepositionableThreeAxisTransformBuilderIdentifier,param_4,
                        param_3);
    if (pUVar4 == (UCombinedTransformGizmo *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5995858810042843353>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                         ,0xd9,"NewGizmo");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
        return pUVar4;
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        TMulticastDelegate<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>::
        Broadcast(&this->OnGizmoCreated,pUVar4);
        return pUVar4;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843355>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xdb,"CastGizmo");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  return (UCombinedTransformGizmo *)0x0;
}

// CreateCustomTransformGizmo @ 14969b4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UCombinedTransformGizmoContextObject::CreateCustomTransformGizmo
          (UCombinedTransformGizmoContextObject *this,UInteractiveGizmoManager *param_1,
          ETransformGizmoSubElements param_2,void *param_3,FString *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCombinedTransformGizmo *pUVar4;
  UClass *pUVar5;
  
  if (this->bDefaultGizmosRegistered == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843312>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xb0,"bDefaultGizmosRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    if (((this->GizmoActorBuilder).Object == (FCombinedTransformGizmoActorFactory *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
    ((this->GizmoActorBuilder).Object)->EnableElements = param_2;
    pUVar4 = (UCombinedTransformGizmo *)
             (**(code **)(param_1->_padding_ + 0x2d0))
                       (param_1,&CustomThreeAxisTransformBuilderIdentifier,param_4,param_3);
    if (pUVar4 != (UCombinedTransformGizmo *)0x0) {
      pUVar5 = Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        TMulticastDelegate<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>::
        Broadcast(&this->OnGizmoCreated,pUVar4);
        return pUVar4;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843317>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0xb5,"CastGizmo");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  return (UCombinedTransformGizmo *)0x0;
}

// DeregisterGizmosWithManager @ 14969c140

void __thiscall
UCombinedTransformGizmoContextObject::DeregisterGizmosWithManager
          (UCombinedTransformGizmoContextObject *this,UInteractiveToolManager *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UInteractiveGizmoManager *pUVar7;
  UContextObjectStore *pUVar8;
  FScriptContainerElement *pFVar9;
  
  pUVar7 = UInteractiveToolManager::GetPairedGizmoManager(param_1);
  pUVar8 = UInteractiveToolManager::GetContextObjectStore(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UCombinedTransformGizmoContextObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar3 = (pUVar8->ContextObjects).AllocatorInstance.Data;
  iVar2 = (pUVar8->ContextObjects).ArrayNum;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)iVar2 * 8) {
LAB_14969c1d1:
      if ((this->bDefaultGizmosRegistered == false) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5995858810042843221>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                             ,0x55,"bDefaultGizmosRegistered"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,&DefaultAxisPositionBuilderIdentifier);
      (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,&DefaultPlanePositionBuilderIdentifier);
      (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,&DefaultAxisAngleBuilderIdentifier);
      (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,&DefaultThreeAxisTransformBuilderIdentifier);
      (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,&CustomThreeAxisTransformBuilderIdentifier);
      (**(code **)(pUVar7->_padding_ + 0x2c8))
                (pUVar7,&CustomRepositionableThreeAxisTransformBuilderIdentifier);
      this->bDefaultGizmosRegistered = false;
      return;
    }
    if (*(UCombinedTransformGizmoContextObject **)pFVar9 == this) {
      iVar6 = (int)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (iVar6 != -1) {
        memmove(pFVar3 + (longlong)iVar6 * 8,pFVar3 + (longlong)iVar6 * 8 + 8,
                (longlong)((iVar2 - iVar6) + -1) << 3);
        piVar1 = &(pUVar8->ContextObjects).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_14969c1d1;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 1496a4410

UClass * __cdecl UCombinedTransformGizmoContextObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoContextObject",
               &Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton,
               StaticRegisterNativesUCombinedTransformGizmoContextObject,0x60,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmoContextObject>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmoContextObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.InnerSingleton;
}

// RegisterGizmosWithManager @ 1496b7710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmoContextObject::RegisterGizmosWithManager
          (UCombinedTransformGizmoContextObject *this,UInteractiveToolManager *param_1)

{
  TSharedPtr<FCombinedTransformGizmoActorFactory,1> *pTVar1;
  FSharedReferencer<1> *this_00;
  code *pcVar2;
  bool bVar3;
  UInteractiveGizmoManager *pUVar4;
  UContextObjectStore *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UCombinedTransformGizmoBuilder *pUVar8;
  TObjectPtr<UObject>_u_0 TVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *plVar11;
  FCombinedTransformGizmoActorFactory *pFVar12;
  undefined1 auStackY_328 [32];
  FCombinedTransformGizmoActorFactory *local_2f8;
  FSharedReferencer<1> FStack_2f0;
  TObjectPtr<UObject>_u_0 local_2e8;
  TObjectPtr<UObject>_u_0 local_2e0;
  FCombinedTransformGizmoActorFactory *local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  undefined8 local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  undefined1 local_2b8 [128];
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if (this->bDefaultGizmosRegistered == false) {
    pUVar4 = UInteractiveToolManager::GetPairedGizmoManager(param_1);
    pUVar5 = UInteractiveToolManager::GetContextObjectStore(param_1);
    local_2e8 = (TObjectPtr<UObject>_u_0)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
              (&pUVar5->ContextObjects,(TObjectPtr<UObject> *)&local_2e8.ObjectPtr);
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_2b8,pUVar7);
    local_2b8._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2b8);
    if (local_2b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_2b8 + 0x50);
      if ((longlong *)local_2b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_2b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&DefaultAxisPositionBuilderIdentifier,pUVar6);
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = UPlanePositionGizmoBuilder::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_238,pUVar7);
    local_238._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
    if (local_238._64_8_ != 0) {
      plVar11 = (longlong *)(local_238 + 0x50);
      if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_238._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&DefaultPlanePositionBuilderIdentifier,pUVar6);
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar7);
    local_1b8._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&DefaultAxisAngleBuilderIdentifier,pUVar6);
    pUVar6 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UCombinedTransformGizmoBuilder>(pUVar6);
    ::FString::operator=
              (&pUVar8->AxisPositionBuilderIdentifier,&DefaultAxisPositionBuilderIdentifier);
    ::FString::operator=
              (&pUVar8->PlanePositionBuilderIdentifier,&DefaultPlanePositionBuilderIdentifier);
    ::FString::operator=(&pUVar8->AxisAngleBuilderIdentifier,&DefaultAxisAngleBuilderIdentifier);
    (**(code **)(pUVar4->_padding_ + 0x2c0))
              (pUVar4,&DefaultThreeAxisTransformBuilderIdentifier,pUVar8);
    pUVar5 = UInteractiveToolManager::GetContextObjectStore(param_1);
    TVar9.DebugPtr = (UObject *)UContextObjectStore::FindContext<UGizmoViewContext>(pUVar5);
    if ((UGizmoViewContext *)TVar9.DebugPtr == (UGizmoViewContext *)0x0) {
      pUVar6 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UGizmoViewContext::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_138,pUVar7);
      local_138._8_8_ = pUVar6;
      TVar9.DebugPtr = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138)
      ;
      if (local_138._64_8_ != 0) {
        plVar11 = (longlong *)(local_138 + 0x50);
        if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_138._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      pUVar5 = UInteractiveToolManager::GetContextObjectStore(param_1);
      if ((UGizmoViewContext *)TVar9.DebugPtr != (UGizmoViewContext *)0x0) {
        local_2e0.DebugPtr = TVar9.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(TVar9.DebugPtr);
        }
        TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
                  (&pUVar5->ContextObjects,(TObjectPtr<UObject> *)&local_2e0.ObjectPtr);
      }
    }
    pTVar10 = ::operator_new(0x28);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      local_2f8 = ___xmm_00000000000000000000000000000010;
      pFVar12 = (FCombinedTransformGizmoActorFactory *)&DAT_00000010;
      FStack_2f0.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pFVar12 = (FCombinedTransformGizmoActorFactory *)(pTVar10 + 1);
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCombinedTransformGizmoActorFactory___00_SharedPointerInternals__6B_
      ;
      ((TObjectPtr<UObject>_u_0 *)(pTVar10 + 2))->DebugPtr = (UObject *)TVar9;
      pTVar10[1]._padding_ = (longlong)&___7FCombinedTransformGizmoActorFactory__6B_;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x1fffe;
      if (pFVar12 == (FCombinedTransformGizmoActorFactory *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      FStack_2f0.ReferenceController = pTVar10;
      local_2f8 = pFVar12;
    }
    pTVar1 = &this->GizmoActorBuilder;
    this_00 = &(this->GizmoActorBuilder).SharedReferenceCount;
    if (pTVar1 != (TSharedPtr<FCombinedTransformGizmoActorFactory,1> *)&local_2f8) {
      pTVar1->Object = pFVar12;
      local_2f8 = (FCombinedTransformGizmoActorFactory *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_2f0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_2f0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    pUVar6 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UCombinedTransformGizmoBuilder>(pUVar6);
    ::FString::operator=
              (&pUVar8->AxisPositionBuilderIdentifier,&DefaultAxisPositionBuilderIdentifier);
    ::FString::operator=
              (&pUVar8->PlanePositionBuilderIdentifier,&DefaultPlanePositionBuilderIdentifier);
    ::FString::operator=(&pUVar8->AxisAngleBuilderIdentifier,&DefaultAxisAngleBuilderIdentifier);
    pTVar10 = this_00->ReferenceController;
    pFVar12 = pTVar1->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d8 = (pUVar8->GizmoActorBuilder).Object;
    pTStack_2d0 = (pUVar8->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
    (pUVar8->GizmoActorBuilder).Object = pFVar12;
    (pUVar8->GizmoActorBuilder).SharedReferenceCount.ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2d0)
    ;
    (**(code **)(pUVar4->_padding_ + 0x2c0))
              (pUVar4,&CustomThreeAxisTransformBuilderIdentifier,pUVar8);
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = URepositionableTransformGizmoBuilder::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    ::FString::operator=((FString *)(pUVar6 + 1),&DefaultAxisPositionBuilderIdentifier);
    ::FString::operator=((FString *)&pUVar6[1].field_0x10,&DefaultPlanePositionBuilderIdentifier);
    ::FString::operator=((FString *)&pUVar6[1].field_0x20,&DefaultAxisAngleBuilderIdentifier);
    pTVar10 = this_00->ReferenceController;
    pFVar12 = (this->GizmoActorBuilder).Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2c8 = *(undefined8 *)&pUVar6[2].field_0x8;
    pTStack_2c0 = *(TReferenceControllerBase<1> **)&pUVar6[2].field_0x10;
    *(FCombinedTransformGizmoActorFactory **)&pUVar6[2].field_0x8 = pFVar12;
    *(TReferenceControllerBase<1> **)&pUVar6[2].field_0x10 = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c0)
    ;
    (**(code **)(pUVar4->_padding_ + 0x2c0))
              (pUVar4,&CustomRepositionableThreeAxisTransformBuilderIdentifier,pUVar6);
    this->bDefaultGizmosRegistered = true;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5995858810042843165>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformGizmoUtil.cpp"
                       ,0x1d,"!bDefaultGizmosRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUCombinedTransformGizmoContextObject @ 1496c27a0

void __cdecl
UCombinedTransformGizmoContextObject::StaticRegisterNativesUCombinedTransformGizmoContextObject
          (void)

{
  return;
}

