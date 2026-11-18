// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 15

// StaticClass @ 14d5e0840

UClass * __cdecl UControllerGameplayCameraEvaluationComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ControllerGameplayCameraEvaluationComponent",
               &Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.
                InnerSingleton,StaticRegisterNativesUControllerGameplayCameraEvaluationComponent,
               0xf0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UControllerGameplayCameraEvaluationComponent>,
               InternalVTableHelperCtorCaller<UControllerGameplayCameraEvaluationComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.InnerSingleton;
}

// UControllerGameplayCameraEvaluationComponent @ 14d5fde10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UControllerGameplayCameraEvaluationComponent * __thiscall
UControllerGameplayCameraEvaluationComponent::UControllerGameplayCameraEvaluationComponent
          (UControllerGameplayCameraEvaluationComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CameraRigInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigInfos).ArrayNum = 0;
  (this->CameraRigInfos).ArrayMax = 0;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->CameraSystemHost = 0;
  *(undefined8 *)&(this->CameraSystemHost).field_0x8 = 0;
  return this;
}

// UControllerGameplayCameraEvaluationComponent @ 14d5fde80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UControllerGameplayCameraEvaluationComponent * __thiscall
UControllerGameplayCameraEvaluationComponent::UControllerGameplayCameraEvaluationComponent
          (UControllerGameplayCameraEvaluationComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  (this->CameraRigInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigInfos).ArrayNum = 0;
  (this->CameraRigInfos).ArrayMax = 0;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->CameraSystemHost = 0;
  *(undefined8 *)&(this->CameraSystemHost).field_0x8 = 0;
  return this;
}

// ~UControllerGameplayCameraEvaluationComponent @ 14d600890

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControllerGameplayCameraEvaluationComponent::~UControllerGameplayCameraEvaluationComponent
          (UControllerGameplayCameraEvaluationComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EvaluationContext).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CameraRigInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// ActivateCameraRig @ 14d606910

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UControllerGameplayCameraEvaluationComponent::ActivateCameraRig
          (UControllerGameplayCameraEvaluationComponent *this,UCameraRigAsset *param_1,
          ECameraRigLayer param_2)

{
  int *piVar1;
  TArray<UControllerGameplayCameraEvaluationComponent::FCameraRigInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UCameraRigAsset *local_18;
  FScriptContainerElement local_10;
  FScriptContainerElement local_f;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar2 = &this->CameraRigInfos;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_f = (FScriptContainerElement)0x0;
  local_18 = param_1;
  local_10 = (FScriptContainerElement)param_2;
  if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar6 + (longlong)(this->CameraRigInfos).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->CameraRigInfos).ArrayNum;
  piVar1 = &(this->CameraRigInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CameraRigInfos).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(UCameraRigAsset **)pFVar6 = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  pFVar6[8] = local_10;
  pFVar6[9] = local_f;
  if ((this->_padding_ & 0x100000) != 0) {
    ActivateCameraRigs(this);
  }
  return;
}

// ActivateCameraRigs @ 14d606a50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UControllerGameplayCameraEvaluationComponent::ActivateCameraRigs
          (UControllerGameplayCameraEvaluationComponent *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRootCameraNodeEvaluator *this_00;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  FSharedReferencer<1> local_70;
  FCameraEvaluationContext *local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FScriptContainerElement local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  if (((*(longlong *)&this->CameraSystemHost == 0) ||
      (*(longlong *)&(this->CameraSystemHost).field_0x8 == 0)) ||
     ((this->EvaluationContext).Object == (FCameraEvaluationContext *)0x0)) {
    local_res8[0] = 0;
    bVar4 = `UControllerGameplayCameraEvaluationComponent::ActivateCameraRigs'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar4) {
      return;
    }
  }
  lVar5 = 0;
  if (*(longlong *)&this->CameraSystemHost != 0) {
    lVar5 = *(longlong *)&(this->CameraSystemHost).field_0x8;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar5 + 0x10);
  lVar5 = *(longlong *)(lVar5 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->CameraRigInfos).ArrayNum;
  this_00 = *(FRootCameraNodeEvaluator **)(lVar5 + 0x98);
  pFVar6 = (this->CameraRigInfos).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->CameraRigInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UControllerGameplayCameraEvaluationComponent::FCameraRigInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if (pFVar6[9] == (FScriptContainerElement)0x0) {
      local_48 = (FScriptContainerElement)0x2;
      local_68 = (FCameraEvaluationContext *)0x0;
      FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_44 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_40 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)pFVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar6);
      }
      local_58 = *(undefined8 *)pFVar6;
      local_68 = (this->EvaluationContext).Object;
      local_70.ReferenceController =
           (this->EvaluationContext).SharedReferenceCount.ReferenceController;
      if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_60,&local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
      local_48 = pFVar6[8];
      UE::Cameras::FRootCameraNodeEvaluator::ActivateCameraRig
                (this_00,(FActivateCameraRigParams *)(local_res10 + 8));
      pFVar6[9] = (FScriptContainerElement)0x1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// BeginPlay @ 14d60cbe0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControllerGameplayCameraEvaluationComponent::BeginPlay
          (UControllerGameplayCameraEvaluationComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  ActivateCameraRigs(this);
  return;
}

// EndPlay @ 14d615360

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControllerGameplayCameraEvaluationComponent::EndPlay
          (UControllerGameplayCameraEvaluationComponent *this,Type param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->CameraRigInfos).ArrayNum = 0;
  if ((this->CameraRigInfos).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CameraRigInfos).AllocatorInstance,0,&(this->CameraRigInfos).ArrayMax
              );
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->EvaluationContext != (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)&local_18)
  {
    (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// FindComponent @ 14d616340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UControllerGameplayCameraEvaluationComponent * __cdecl
UControllerGameplayCameraEvaluationComponent::FindComponent(AActor *param_1)

{
  code *pcVar1;
  UControllerGameplayCameraEvaluationComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x738);
  local_res8 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UControllerGameplayCameraEvaluationComponent *)(*pcVar1)(param_1,&local_res8);
  return pUVar2;
}

// FindOrAddComponent @ 14d6163a0

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

UControllerGameplayCameraEvaluationComponent * __cdecl
UControllerGameplayCameraEvaluationComponent::FindOrAddComponent(AActor *param_1,bool *param_2)

{
  code *pcVar1;
  FName FVar2;
  UControllerGameplayCameraEvaluationComponent *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pcVar1 = *(code **)(param_1->_padding_ + 0x738);
  local_a8[0] = (FName)StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  pUVar3 = (UControllerGameplayCameraEvaluationComponent *)(*pcVar1)(param_1,local_a8);
  if (pUVar3 == (UControllerGameplayCameraEvaluationComponent *)0x0) {
    pFVar4 = ::FName::FName(local_a8,L"ControllerGameplayCameraEvaluationComponent");
    FVar2 = *pFVar4;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar5 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = param_1;
    local_98._16_8_ = FVar2;
    pUVar3 = (UControllerGameplayCameraEvaluationComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (param_2 != (bool *)0x0) {
      *param_2 = true;
    }
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14d61c120

UClass * __cdecl UControllerGameplayCameraEvaluationComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ControllerGameplayCameraEvaluationComponent",
               &Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.
                InnerSingleton,StaticRegisterNativesUControllerGameplayCameraEvaluationComponent,
               0xf0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UControllerGameplayCameraEvaluationComponent>,
               InternalVTableHelperCtorCaller<UControllerGameplayCameraEvaluationComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControllerGameplayCameraEvaluationComponent.InnerSingleton;
}

// Initialize @ 14d61fb40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UControllerGameplayCameraEvaluationComponent::Initialize
          (UControllerGameplayCameraEvaluationComponent *this,
          TScriptInterface<IGameplayCameraSystemHost> *param_1,APlayerController *param_2)

{
  int *piVar1;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  FCameraEvaluationContext *pFVar9;
  undefined1 local_res8 [8];
  FCameraEvaluationContext *local_48;
  FSharedReferencer<1> local_40;
  TObjectPtr<UObject>_u_0 local_38;
  undefined8 local_30;
  APlayerController *local_28;
  
  if ((*(longlong *)&this->CameraSystemHost != 0) &&
     (*(longlong *)&(this->CameraSystemHost).field_0x8 != 0)) {
    local_res8[0] = 0;
    bVar6 = `UControllerGameplayCameraEvaluationComponent::Initialize'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar6) {
      return;
    }
  }
  if (((*(longlong *)param_1 == 0) || (*(longlong *)&param_1->field_0x8 == 0)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8047492888373755873>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\ControllerGameplayCameraEvaluationComponent.cpp"
                         ,0x1f,"InCameraSystemHost"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1);
  }
  *(undefined8 *)&this->CameraSystemHost = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CameraSystemHost).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  if (param_2 == (APlayerController *)0x0) {
    param_2 = (APlayerController *)this->_padding_;
    if (param_2 != (APlayerController *)0x0) {
      pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar3 = (int)pUVar7->_padding_;
      if ((iVar3 <= *(int *)(param_2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar7->_padding_)) goto LAB_14d61fc29;
    }
    param_2 = (APlayerController *)0x0;
  }
LAB_14d61fc29:
  local_30 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UControllerGameplayCameraEvaluationComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_38 = (TObjectPtr<UObject>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_28 = param_2;
  pTVar8 = ::operator_new(0xb00);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FCameraEvaluationContext *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FCameraEvaluationContext::FCameraEvaluationContext
              ((FCameraEvaluationContext *)(pTVar8 + 1),
               (FCameraEvaluationContextInitializeParams *)&local_38.ObjectPtr);
    pFVar9 = (FCameraEvaluationContext *)(pTVar8 + 1);
    if (pFVar9 == (FCameraEvaluationContext *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d61fd4b;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x10 == 0) || (*(longlong *)&pFVar9->field_0x18 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x18 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FCameraEvaluationContext **)&pFVar9->field_0x10 = pFVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x18) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x18 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d61fd4b:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->EvaluationContext;
  local_48 = pFVar9;
  local_40.ReferenceController = pTVar8;
  if (pTVar2 != (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)&local_48) {
    pTVar2->Object = pFVar9;
    local_48 = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((pTVar2->Object == (FCameraEvaluationContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (pTVar2->Object->InitialResult).bIsValid = true;
  UActorComponent::RegisterComponent((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUControllerGameplayCameraEvaluationComponent @ 14d639180

void __cdecl
UControllerGameplayCameraEvaluationComponent::
StaticRegisterNativesUControllerGameplayCameraEvaluationComponent(void)

{
  return;
}

// operator() @ 150584fd0

bool __thiscall
`UControllerGameplayCameraEvaluationComponent::ActivateCameraRigs'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8047492888373755820>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8047492888373755820>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505851e0

bool __thiscall
`UControllerGameplayCameraEvaluationComponent::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8047492888373755878>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8047492888373755878>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

