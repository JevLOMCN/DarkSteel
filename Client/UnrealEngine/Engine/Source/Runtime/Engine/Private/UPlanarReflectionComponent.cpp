// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 147321bb0

UClass * __cdecl UPlanarReflectionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlanarReflectionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = USceneCaptureComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlanarReflectionComponent",
               &Z_Registration_Info_UClass_UPlanarReflectionComponent.InnerSingleton,
               StaticRegisterNativesUPlanarReflectionComponent,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlanarReflectionComponent>,
               InternalVTableHelperCtorCaller<UPlanarReflectionComponent>,local_res8,
               USceneCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlanarReflectionComponent.InnerSingleton;
}

// UPlanarReflectionComponent @ 147324b60

UPlanarReflectionComponent * __thiscall
UPlanarReflectionComponent::UPlanarReflectionComponent
          (UPlanarReflectionComponent *this,FVTableHelper *param_1)

{
  USceneCaptureComponent::USceneCaptureComponent((USceneCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PreviewBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// ~UPlanarReflectionComponent @ 147325290

void __thiscall
UPlanarReflectionComponent::~UPlanarReflectionComponent(UPlanarReflectionComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  USceneCaptureComponent::~USceneCaptureComponent((USceneCaptureComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147327190

UClass * __cdecl UPlanarReflectionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlanarReflectionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = USceneCaptureComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlanarReflectionComponent",
               &Z_Registration_Info_UClass_UPlanarReflectionComponent.InnerSingleton,
               StaticRegisterNativesUPlanarReflectionComponent,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlanarReflectionComponent>,
               InternalVTableHelperCtorCaller<UPlanarReflectionComponent>,local_res8,
               USceneCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlanarReflectionComponent.InnerSingleton;
}

// Serialize @ 147327e80

void __thiscall
UPlanarReflectionComponent::Serialize
          (UPlanarReflectionComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUPlanarReflectionComponent @ 147328250

void __cdecl UPlanarReflectionComponent::StaticRegisterNativesUPlanarReflectionComponent(void)

{
  return;
}

// UPlanarReflectionComponent @ 147929c70

UPlanarReflectionComponent * __thiscall
UPlanarReflectionComponent::UPlanarReflectionComponent
          (UPlanarReflectionComponent *this,FObjectInitializer *param_1)

{
  double dVar1;
  
  USceneCaptureComponent::USceneCaptureComponent((USceneCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PreviewBox).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  this->field_0x252 = this->field_0x252 | 1;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->bShowPreviewPlane = true;
  this->field_0x40 = 2;
  this->field_0x42 = this->field_0x42 & 0xf7 | 2;
  this->RenderTarget = (FPlanarReflectionRenderTarget *)0x0;
  this->PrefilterRoughness = 0.01;
  this->PrefilterRoughnessDistance = 10000.0;
  this->ScreenPercentage = 0x32;
  this->NormalDistortionStrength = 500.0;
  this->DistanceFromPlaneFadeStart_DEPRECATED = 400.0;
  this->DistanceFromPlaneFadeEnd_DEPRECATED = 600.0;
  this->DistanceFromPlaneFadeoutStart = 60.0;
  this->DistanceFromPlaneFadeoutEnd = 100.0;
  this->AngleFromPlaneFadeStart = 20.0;
  this->AngleFromPlaneFadeEnd = 30.0;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  this->ProjectionWithExtraFOV[0].M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  this->ProjectionWithExtraFOV[0].M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  this->ProjectionWithExtraFOV[0].M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  this->ProjectionWithExtraFOV[0].M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  this->ProjectionWithExtraFOV[0].M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  this->ProjectionWithExtraFOV[0].M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  this->ProjectionWithExtraFOV[0].M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  this->ProjectionWithExtraFOV[0].M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  this->ProjectionWithExtraFOV[0].M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  this->ProjectionWithExtraFOV[0].M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  this->ProjectionWithExtraFOV[0].M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  this->ProjectionWithExtraFOV[0].M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  this->ProjectionWithExtraFOV[0].M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  this->ProjectionWithExtraFOV[0].M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  this->ProjectionWithExtraFOV[0].M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  this->ProjectionWithExtraFOV[0].M[3][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  this->ProjectionWithExtraFOV[1].M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  this->ProjectionWithExtraFOV[1].M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  this->ProjectionWithExtraFOV[1].M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  this->ProjectionWithExtraFOV[1].M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  this->ProjectionWithExtraFOV[1].M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  this->ProjectionWithExtraFOV[1].M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  this->ProjectionWithExtraFOV[1].M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  this->ProjectionWithExtraFOV[1].M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  this->ProjectionWithExtraFOV[1].M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  this->ProjectionWithExtraFOV[1].M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  this->ProjectionWithExtraFOV[1].M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  this->ProjectionWithExtraFOV[1].M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  this->ProjectionWithExtraFOV[1].M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  this->ProjectionWithExtraFOV[1].M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  this->ProjectionWithExtraFOV[1].M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  this->ProjectionWithExtraFOV[1].M[3][3] = dVar1;
  *(uint *)&this->field_0x2e8 = *(uint *)&this->field_0x2e8 & 0xffffbfff;
  *(uint *)&this->field_0x2e0 = *(uint *)&this->field_0x2e0 & 0xffffffeb;
  NextPlanarReflectionId = NextPlanarReflectionId + 1;
  this->PlanarReflectionId = NextPlanarReflectionId;
  return this;
}

// BeginDestroy @ 1479348c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPlanarReflectionComponent::BeginDestroy(UPlanarReflectionComponent *this)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_res8 [32];
  
  if (this->RenderTarget != (FPlanarReflectionRenderTarget *)0x0) {
    BeginReleaseResource((FRenderResource *)this->RenderTarget,(FRenderCommandPipe *)0x0);
  }
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  USceneComponent::BeginDestroy((USceneComponent *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      `USceneCaptureComponent::UnregisterDelegates'::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    return;
  }
  return;
}

// CreateRenderState_Concurrent @ 14793d1b0

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
UPlanarReflectionComponent::CreateRenderState_Concurrent
          (UPlanarReflectionComponent *this,FRegisterComponentContext *param_1)

{
  float fVar1;
  byte bVar2;
  UBoxComponent *pUVar3;
  bool bVar4;
  FCachedSystemScalabilityCVars *pFVar5;
  FPlanarReflectionSceneProxy *this_00;
  FPlanarReflectionSceneProxy *pFVar6;
  UWorld *pUVar7;
  
  pUVar3 = (this->PreviewBox).field0_0x0.DebugPtr;
  if (pUVar3 != (UBoxComponent *)0x0) {
    fVar1 = this->DistanceFromPlaneFadeoutEnd;
    (pUVar3->BoxExtent).field0_0x0._s_0.X = 2000.0;
    (pUVar3->BoxExtent).field0_0x0._s_0.Y = 2000.0;
    (pUVar3->BoxExtent).field0_0x0._s_0.Z = (double)fVar1;
  }
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  bVar2 = this->field_0x1ac;
  pFVar5 = GetCachedScalabilityCVars();
  if ((int)(uint)bVar2 <= pFVar5->DetailMode) {
    bVar4 = USceneComponent::ShouldRender((USceneComponent *)this);
    if (bVar4) {
      this_00 = ::operator_new(0x260);
      pFVar6 = (FPlanarReflectionSceneProxy *)0x0;
      if (this_00 != (FPlanarReflectionSceneProxy *)0x0) {
        pFVar6 = FPlanarReflectionSceneProxy::FPlanarReflectionSceneProxy(this_00,this);
      }
      this->SceneProxy = pFVar6;
      pUVar7 = *(UWorld **)&this->field_0xb0;
      if (pUVar7 == (UWorld *)0x0) {
        pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      (**(code **)(pUVar7->Scene->_padding_ + 0x1b8))(pUVar7->Scene,this);
    }
  }
  return;
}

// DestroyRenderState_Concurrent @ 14793f3e0

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
UPlanarReflectionComponent::DestroyRenderState_Concurrent(UPlanarReflectionComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FPlanarReflectionSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPlanarReflectionSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  if (this->SceneProxy != (FPlanarReflectionSceneProxy *)0x0) {
    pUVar3 = *(UWorld **)&this->field_0xb0;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x1c0))(pUVar3->Scene,this);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UPlanarReflectionComponent::DestroyRenderState_Concurrent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->SceneProxy;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPlanarReflectionComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UPlanarReflectionComponent::DestroyRenderState_Concurrent_::__l5::TSTR_FDestroyPlanarReflectionCommand1219>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UPlanarReflectionComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroyPlanarReflectionCommand1219>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    this->SceneProxy = (FPlanarReflectionSceneProxy *)0x0;
  }
  return;
}

// FinishDestroy @ 147943a50

void __thiscall UPlanarReflectionComponent::FinishDestroy(UPlanarReflectionComponent *this)

{
  FPlanarReflectionRenderTarget *pFVar1;
  
  UObject::FinishDestroy((UObject *)this);
  pFVar1 = this->RenderTarget;
  if (pFVar1 != (FPlanarReflectionRenderTarget *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->RenderTarget = (FPlanarReflectionRenderTarget *)0x0;
  return;
}

// IsReadyForFinishDestroy @ 147956620

bool __thiscall
UPlanarReflectionComponent::IsReadyForFinishDestroy(UPlanarReflectionComponent *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// OnRegister @ 147959d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPlanarReflectionComponent::OnRegister(UPlanarReflectionComponent *this)

{
  USceneComponent::OnRegister((USceneComponent *)this);
  USceneCaptureComponent::UpdateShowFlags((USceneCaptureComponent *)this);
  return;
}

// SendRenderTransform_Concurrent @ 147965700

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
UPlanarReflectionComponent::SendRenderTransform_Concurrent(UPlanarReflectionComponent *this)

{
  float fVar1;
  UBoxComponent *pUVar2;
  UWorld *pUVar3;
  
  pUVar2 = (this->PreviewBox).field0_0x0.DebugPtr;
  if (pUVar2 != (UBoxComponent *)0x0) {
    fVar1 = this->DistanceFromPlaneFadeoutEnd;
    (pUVar2->BoxExtent).field0_0x0._s_0.X = 2000.0;
    (pUVar2->BoxExtent).field0_0x0._s_0.Y = 2000.0;
    (pUVar2->BoxExtent).field0_0x0._s_0.Z = (double)fVar1;
  }
  if (this->SceneProxy != (FPlanarReflectionSceneProxy *)0x0) {
    pUVar3 = *(UWorld **)&this->field_0xb0;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x1c8))(pUVar3->Scene,this);
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 1479658e0

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
UPlanarReflectionComponent::Serialize(UPlanarReflectionComponent *this,FArchive *param_1)

{
  int iVar1;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar1 < 0x13) && ((0 < *(int *)&this->field_0x290 || (0 < *(int *)&this->field_0x280)))) {
    this->field_0x250 = 2;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
    if (iVar1 < 6) {
      this->DistanceFromPlaneFadeoutEnd = this->DistanceFromPlaneFadeEnd_DEPRECATED;
      this->DistanceFromPlaneFadeoutStart = this->DistanceFromPlaneFadeStart_DEPRECATED;
    }
  }
  return;
}

// ShouldComponentAddToScene @ 14796eb60

bool __thiscall
UPlanarReflectionComponent::ShouldComponentAddToScene(UPlanarReflectionComponent *this)

{
  byte bVar1;
  FCachedSystemScalabilityCVars *pFVar2;
  
  bVar1 = this->field_0x1ac;
  pFVar2 = GetCachedScalabilityCVars();
  return (int)(uint)bVar1 <= pFVar2->DetailMode;
}

// UpdatePreviewShape @ 14797ad10

void __thiscall UPlanarReflectionComponent::UpdatePreviewShape(UPlanarReflectionComponent *this)

{
  float fVar1;
  UBoxComponent *pUVar2;
  
  pUVar2 = (this->PreviewBox).field0_0x0.DebugPtr;
  if (pUVar2 != (UBoxComponent *)0x0) {
    fVar1 = this->DistanceFromPlaneFadeoutEnd;
    (pUVar2->BoxExtent).field0_0x0._s_0.X = 2000.0;
    (pUVar2->BoxExtent).field0_0x0._s_0.Y = 2000.0;
    (pUVar2->BoxExtent).field0_0x0._s_0.Z = (double)fVar1;
  }
  return;
}

